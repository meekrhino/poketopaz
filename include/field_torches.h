#ifndef GUARD_FIELD_TORCHES_H
#define GUARD_FIELD_TORCHES_H

#include "global.h"

#define TORCH_MASK_SPRITE_TAG 0x1337

// the maximum number of torches on a single map
#define MAX_TORCH_EVENTS 16

#define TORCH_PULSE_SPEED 1

// forward declarations

void InitTorchEvents(void);
void TrySpawnTorchEvents(s16 cameraX, s16 cameraY);
void RemoveTorchesIfOutsideView(void);

// structs

struct TorchEvent
{
    const struct BgEvent *bgEvent;
    u8 spriteId;
};

#endif // GUARD_FIELD_TORCHES_H