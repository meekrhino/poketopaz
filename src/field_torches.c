#include "global.h"
#include "sprite.h"
#include "decompress.h"
#include "util.h"
#include "gpu_regs.h"
#include "field_torches.h"
#include "event_object_movement.h"
#include "fieldmap.h"
#include "battle_pyramid.h"
#include "trainer_hill.h"
#include "constants/event_bg.h"

// static function forward declarations

static void ResetTorchEvents(void);
static void TrySpawnTorchEvent(const struct BgEvent *event, s32 cameraX, s32 cameraY, s32 id);
static void RemoveTorchIfOutsideView(struct TorchEvent *torchEvent);

// static .rodata

static EWRAM_DATA struct TorchEvent sTorchEvents[MAX_TORCH_EVENTS] = {0};

static const u32 sTorchlightMask[] = INCBIN_U32("graphics/torchlights/mask.4bpp.lz");

static const struct OamData sTorchMaskOam =
{
    .objMode = ST_OAM_OBJ_WINDOW,
    .affineMode = ST_OAM_AFFINE_NORMAL,
    .size = SPRITE_SIZE(64x64),
    .shape = SPRITE_SHAPE(64x64),
};

static const union AffineAnimCmd sTorchPulsingAffineAnimCmds[] =
{
    AFFINEANIMCMD_FRAME(-TORCH_PULSE_SPEED, -TORCH_PULSE_SPEED, 0, 20),
    AFFINEANIMCMD_FRAME( TORCH_PULSE_SPEED,  TORCH_PULSE_SPEED, 0, 20),
    AFFINEANIMCMD_JUMP(0)
};

static const union AffineAnimCmd *const sTorchPulsingAffineAnimTable[] =
{
    sTorchPulsingAffineAnimCmds,
};

static const struct SpriteTemplate sTorchMaskSpriteTemplateNormal =
{
    .tileTag = TORCH_MASK_SPRITE_TAG,
    .paletteTag = 0,
    .affineAnims = gDummySpriteAffineAnimTable,
    .anims = gDummySpriteAnimTable,
    .callback = SpriteCallbackDummy,
    .images = NULL,
    .oam = &sTorchMaskOam,
};

static const struct SpriteTemplate sTorchMaskSpriteTemplatePulsing =
{
    .tileTag = TORCH_MASK_SPRITE_TAG,
    .paletteTag = 0,
    .affineAnims = sTorchPulsingAffineAnimTable,
    .anims = gDummySpriteAnimTable,
    .callback = SpriteCallbackDummy,
    .images = NULL,
    .oam = &sTorchMaskOam,
};

const struct CompressedSpriteSheet sTorchlightSheet =
{
    .data = sTorchlightMask,
    .tag = TORCH_MASK_SPRITE_TAG,
    .size = TILE_SIZE_4BPP * 8* 8,
};

static void ResetTorchEvents(void)
{
    u32 i;
    for (i = 0; i < ARRAY_COUNT(sTorchEvents); ++i)
    {
        if (sTorchEvents[i].spriteId != MAX_SPRITES)
        {
            DestroySprite(&gSprites[sTorchEvents[i].spriteId]);
            sTorchEvents[i].spriteId = MAX_SPRITES;
        }
    }
    FreeSpriteTilesByTag(TORCH_MASK_SPRITE_TAG);
}

void InitTorchEvents(void)
{
    u32 i, numberOfTorches;
    for (i = 0; i < ARRAY_COUNT(sTorchEvents); ++i)
    {
        sTorchEvents[i].spriteId = MAX_SPRITES;
    }
    numberOfTorches = 0;
    if (!gMapHeader.events) return;
    for (i = 0; i < gMapHeader.events->bgEventCount && numberOfTorches < MAX_TORCH_EVENTS; ++i)
    {
        if (gMapHeader.events->bgEvents[i].kind == BG_EVENT_TORCH)
        {
            sTorchEvents[numberOfTorches++].bgEvent = &gMapHeader.events->bgEvents[i];
        }
    }
    if (numberOfTorches > 0)
        LoadCompressedSpriteSheet(&sTorchlightSheet);
}

static void TrySpawnTorchEvent(const struct BgEvent *event, s32 cameraX, s32 cameraY, s32 id)
{
    u32 spriteId, tileId;
    struct Sprite *sprite;
    const struct SpriteTemplate *spriteTemplate;
    if (sTorchEvents[id].spriteId != MAX_SPRITES) return;
    if (sTorchEvents[id].bgEvent->bgUnion.torchType == TORCH_PULSE)
        spriteTemplate = &sTorchMaskSpriteTemplatePulsing;
    else
        spriteTemplate = &sTorchMaskSpriteTemplateNormal;

    spriteId = CreateSprite(spriteTemplate, 50, 50, 0);
    sprite = &gSprites[spriteId];
    GetMapCoordsFromSpritePos(event->x + cameraX + MAP_OFFSET, event->y + cameraY + MAP_OFFSET, &sprite->x, &sprite->y);
    sprite->centerToCornerVecX = -32;
    sprite->centerToCornerVecY = -32;
    sprite->x += 8;
    sprite->y += 8;
    sprite->coordOffsetEnabled = TRUE;
    sprite->oam.paletteNum = 0;
    sTorchEvents[id].spriteId = spriteId;
}

void TrySpawnTorchEvents(s16 cameraX, s16 cameraY)
{
    u32 i;
    s32 left = gSaveBlock1Ptr->pos.x - 2;
    s32 right = gSaveBlock1Ptr->pos.x + MAP_OFFSET_W + 2;
    s32 top = gSaveBlock1Ptr->pos.y;
    s32 bottom = gSaveBlock1Ptr->pos.y + MAP_OFFSET_H + 2;
    if (InBattlePyramid() || InTrainerHill()) return;

    for (i = 0; i < ARRAY_COUNT(sTorchEvents); ++i)
    {
        const struct BgEvent *event = sTorchEvents[i].bgEvent;
        s32 x, y;
        if (event == NULL)
            break;
        x = event->x + MAP_OFFSET;
        y = event->y + MAP_OFFSET;
        if (top <= y && bottom >= y && left <= x && right >= x)
        {
            TrySpawnTorchEvent(event, cameraX, cameraY, i);
        }
    }
}

static void RemoveTorchIfOutsideView(struct TorchEvent *torchEvent)
{
    s32 left =   gSaveBlock1Ptr->pos.x - 2;
    s32 right =  gSaveBlock1Ptr->pos.x + 17;
    s32 top =    gSaveBlock1Ptr->pos.y;
    s32 bottom = gSaveBlock1Ptr->pos.y + 16;
    s32 x = torchEvent->bgEvent->x + MAP_OFFSET;
    s32 y = torchEvent->bgEvent->y + MAP_OFFSET;
    if (x >= left && x <= right && y >= top && y <= bottom) return;
    DestroySprite(&gSprites[torchEvent->spriteId]);
    torchEvent->spriteId = MAX_SPRITES;
}


void RemoveTorchesIfOutsideView(void)
{
    u32 i;

    for (i = 0; i < ARRAY_COUNT(sTorchEvents); i++)
    {
        if (sTorchEvents[i].bgEvent == NULL) break;
        RemoveTorchIfOutsideView(&sTorchEvents[i]);
    }
}
