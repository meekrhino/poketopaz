#include "global.h"
#include "strings.h"
#include "bg.h"
#include "data.h"
#include "decompress.h"
#include "gpu_regs.h"
#include "graphics.h"
#include "item.h"
#include "item_icon.h"
#include "item_menu.h"
#include "item_menu_icons.h"
#include "list_menu.h"
#include "item_use.h"
#include "main.h"
#include "malloc.h"
#include "menu.h"
#include "menu_helpers.h"
#include "palette.h"
#include "party_menu.h"
#include "scanline_effect.h"
#include "sound.h"
#include "string_util.h"
#include "strings.h"
#include "task.h"
#include "text_window.h"
#include "quests.h"
#include "overworld.h"
#include "event_data.h"
#include "constants/items.h"
#include "constants/field_weather.h"
#include "constants/songs.h"
#include "constants/rgb.h"
#include "constants/event_objects.h"
#include "event_object_movement.h"
#include "pokemon_icon.h"
#include "printf.h"
#include "mgba.h"

#include "random.h"

#define tPageItems      data[4]
#define tItemPcParam    data[6]

struct QuestMenuResources
{
	MainCallback savedCallback;
	u8 moveModeOrigPos;
	u8 spriteIconSlot;
	u8 maxShowed;
	u8 nItems;
	u8 scrollIndicatorArrowPairId;
	s16 data[3];
	u8 filterMode;
	u8 parentQuest;
	bool8 restoreCursor;
};

struct QuestMenuStaticResources
{
	MainCallback savedCallback;
	u16 scroll;
	u16 row;
	u8 initialized;
	u16 storedScrollOffset;
	u16 storedRowPosition;
};

// RAM
EWRAM_DATA static struct QuestMenuResources *sStateDataPtr = NULL;
EWRAM_DATA static u8 *sBg1TilemapBuffer = NULL;
EWRAM_DATA static struct ListMenuItem *sListMenuItems = NULL;
EWRAM_DATA static struct QuestMenuStaticResources sListMenuState = {0};
EWRAM_DATA static u8 sItemMenuIconSpriteIds[12] = {0};        // from pokefirered src/item_menu_icons.c
EWRAM_DATA static void *sQuestNamePointer = NULL;
EWRAM_DATA static u8 **sQuestNameArray = NULL;

// This File's Functions
void QuestMenu_Init(u8 a0, MainCallback callback);
static void MainCB(void);
static void VBlankCB(void);
static void RunSetup(void);

static bool8 SetupGraphics(void);
static bool8 LoadGraphics(void);
static void QuestMenu_InitWindows(void);
static bool8 InitBackgrounds(void);
static void InitItems(void);
static bool8 AllocateResourcesForListMenu(void);
static void AllocateMemoryForArray();
static void PlaceTopMenuScrollIndicatorArrows(void);
static void SetInitializedFlag(u8 a0);

static u8 GetCursorPosition(void);
static void SetCursorPosition(void);
static void SetScrollPosition(void);
static bool8 IfScrollIsOutOfBounds(void);
static bool8 IfRowIsOutOfBounds(void);
static void SaveScrollAndRow(s16 *data);

static void ClearModeOnStartup(void);
static u8 ManageMode(u8 action);
static u8 ToggleAlphaMode(u8 mode);
static u8 ToggleSubquestMode(u8 mode);
static u8 IncrementMode(u8 mode);
static bool8 IsSubquestMode(void);
static bool8 IsNotFilteredMode(void);
static bool8 IsAlphaMode(void);

static u16 BuildMenuTemplate(void);
static u8 GetModeAndGenerateList();
static u8 CountNumberListRows();
static u8 *DefineQuestOrder();
static u8 GenerateSubquestList();
static u8 GenerateList(bool8 isFiltered);
static void AssignCancelNameAndId(u8 numRow);

static u8 CountUnlockedQuests(void);
static u8 CountInactiveQuests(void);
static u8 CountActiveQuests(void);
static u8 CountRewardQuests(void);
static u8 CountCompletedQuests(void);
static u8 CountFavoriteQuests(void);

static void PopulateEmptyRow(u8 questIndex);
static void PrependQuestNumber(u8 questIndex);
static void SetFavoriteQuest(u8 questIndex);
static void PopulateQuestName(u8 questId);
static void PopulateSubquestName(u8 subquestId);
static u8 PopulateListRowNameAndId(u8 row, u8 questId);
static bool8 DoesQuestHaveChildrenAndNotInactive(u16 itemId);
static void AddSubQuestButton(u8 questId);

static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId,
            const u8 *str, u8 x, u8 y, u8 letterSpacing, u8 lineSpacing, u8 speed,
            u8 colorIdx);

static void MoveCursorFunc(s32 itemIndex, bool8 onInit,
                           struct ListMenu *list);
static void PlayCursorSound(bool8 firstRun);
static void PrintDetailsForCancel();
static void GenerateAndPrintQuestDetails(s32 questId);
static void GenerateQuestLocation(s32 questId);
static void PrintQuestLocation(s32 questId);
static void GenerateQuestFlavorText(s32 questId);
static void UpdateQuestFlavorText(s32 questId);
static void PrintQuestFlavorText(s32 questId);

static bool8 IsQuestUnlocked(s32 questId);
static bool8 IsQuestActiveState(s32 questId);
static bool8 IsQuestInactiveState(s32 questId);
static bool8 IsQuestRewardState(s32 questId);
static bool8 IsQuestCompletedState(s32 questId);
static bool8 IsSubquestCompletedState(s32 subquestId);

static bool8 ShouldShowSubquestData(s32 questId);
static u8 GetActiveSubquestIndex(u32 questId);
static s32 GetSubquestParent(u8 subquestId);
static u8 GetSubquestIndex(u8 subquestId);

static void DetermineSpriteType(s32 questId);
static void QuestMenu_CreateSprite(u16 itemId, u8 idx, u8 spriteType);
static void ResetSpriteState(void);
static void QuestMenu_DestroySprite(u8 idx);

static void GenerateStateAndPrint(u8 windowId, u32 itemId, u8 y);
static u8 GenerateSubquestState(u8 questId);
static u8 GenerateQuestState(u8 questId);
static void PrintQuestState(u8 windowId, u8 y, u8 colorIndex);

static void GenerateAndPrintHeader(void);
static void GenerateDenominatorNumQuests(void);
static void GenerateNumeratorNumQuests(void);
static void GenerateMenuContext(void);
static void PrintNumQuests(void);
static void PrintMenuContext(void);
static void PrintTypeFilterButton(void);

static void Task_Main(u8 taskId);
static u8 ManageFavorites(u8 index);
static void Task_QuestMenuCleanUp(u8 taskId);
static void RestoreSavedScrollAndRow(s16 *data);
static void ResetCursorToTop(s16 *data);
static void QuestMenu_RemoveScrollIndicatorArrowPair(void);
static void EnterSubquestModeAndCleanUp(u8 taskId, s16 *data, s32 input);
static void ChangeModeAndCleanUp(u8 taskId);
static void ToggleAlphaModeAndCleanUp(u8 taskId);
static void ToggleFavoriteAndCleanUp(u8 taskId, u8 selectedQuestId);
static bool8 CheckSelectedIsCancel(u8 selectedQuestId);
static void ReturnFromSubquestAndCleanUp(u8 taskId);

static void SetGpuRegBaseForFade(void);
static void InitFadeVariables(u8 taskId, u8 blendWeight, u8 frameDelay,
                              u8 frameTimerBase, u8 delta);
static void PrepareFadeOut(u8 taskId);
static bool8 HandleFadeOut(u8 taskId);
static void PrepareFadeIn(u8 taskId);
static bool8 HandleFadeIn(u8 taskId);
static void Task_FadeOut(u8 taskId);
static void Task_FadeIn(u8 taskId);

static void Task_QuestMenuWaitFadeAndBail(u8 taskId);
static void FadeAndBail(void);
static void FreeResources(void);
static void TurnOffQuestMenu(u8 taskId);
static void Task_QuestMenuTurnOff1(u8 taskId);
static void Task_QuestMenuTurnOff2(u8 taskId);

// Tiles, palettes and tilemaps for the Quest Menu
static const u32 sQuestMenuTiles[] =
      INCBIN_U32("graphics/quest_menu/menu.4bpp.lz");
static const u32 sQuestMenuBgPals[] =
      INCBIN_U32("graphics/quest_menu/menu_pal.gbapal.lz");
static const u32 sQuestMenuTilemap[] =
      INCBIN_U32("graphics/quest_menu/tilemap.bin.lz");

//Strings used for the Quest Menu
static const u8 sText_Empty[] = _("");
static const u8 sText_AllHeader[] = _("All Quests");
static const u8 sText_InactiveHeader[] = _("Hidden Quests");
static const u8 sText_ActiveHeader[] = _("Active Quests");
static const u8 sText_RewardHeader[] = _("Reward Available");
static const u8 sText_CompletedHeader[] = _("Completed Quests");
static const u8 sText_QuestNumberDisplay[] =
      _("{STR_VAR_1}/{STR_VAR_2}");
static const u8 sText_Unk[] = _("??????");
static const u8 sText_Active[] = _("Active");
static const u8 sText_Reward[] = _("Reward");
static const u8 sText_ShowLocation[] =
      _("Location: {STR_VAR_2}");
static const u8 sText_QuestLocked[] =
      _("This quest is still locked!");
static const u8 sText_ReturnRecieveReward[] =
      _("Return to {STR_VAR_2}\nto recieve your reward!");
static const u8 sText_SubQuestButton[] = _(" {A_BUTTON}");
static const u8 sText_Type[] = _("{R_BUTTON}Type");
static const u8 sText_Caught[] = _("Caught");
static const u8 sText_Done[] = _("Done");
static const u8 sText_Read[] = _("Read");
static const u8 sText_Back[] = _("Back");
static const u8 sText_DotSpace[] = _(". ");
static const u8 sText_Close[] = _("Close");
static const u8 sText_ColorGreen[] = _("{COLOR}{GREEN}");
static const u8 sText_AZ[] = _(" A-Z");

//Declaration of subquest structures. Edits to subquests are made here.
static const struct SubQuest sSubQuests[SUB_QUEST_COUNT] = {

    [SUB_QUEST_FIND_BRADLEY] = {
	    .id = SUB_QUEST_FIND_BRADLEY,
	    .name = gText_SubQuest_FindBradleyName,
	    .desc = gText_SubQuest_FindBradleyDesc,
	    .map = gText_Quest_GettingStartedMap,
	    .sprite = OBJ_EVENT_GFX_BRADLEY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_CHOOSE_POKEMON] = {
	    .id = SUB_QUEST_CHOOSE_POKEMON,
	    .name = gText_SubQuest_ChoosePokemonName,
	    .desc = gText_SubQuest_ChoosePokemonDesc,
	    .map = gText_Quest_GettingStartedMap,
	    .sprite = OBJ_EVENT_GFX_ITEM_BALL,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
	[SUB_QUEST_RESCUE_AMPURE] = {
	    .id = SUB_QUEST_RESCUE_AMPURE,
	    .name = gText_SubQuest_RescueAmpureName,
	    .desc = gText_SubQuest_RescueAmpureDesc,
	    .map = gText_Quest_GettingStartedMap,
	    .sprite = OBJ_EVENT_GFX_AMPURE,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
	[SUB_QUEST_SAY_GOODBYE] = {
	    .id = SUB_QUEST_SAY_GOODBYE,
	    .name = gText_SubQuest_SayGoodbyeName,
	    .desc = gText_SubQuest_SayGoodbyeDesc,
	    .map = gText_Quest_GettingStartedMap,
	    .sprite = OBJ_EVENT_GFX_MOM,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
	[SUB_QUEST_FIND_SIMON] = {
	    .id = SUB_QUEST_FIND_SIMON,
	    .name = gText_SubQuest_FindSimonName,
	    .desc = gText_SubQuest_FindSimonDesc,
	    .map = gText_Quest_FindingSimonMap,
	    .sprite = OBJ_EVENT_GFX_SIMON,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
	[SUB_QUEST_GYM_1_CRANEWING] = {
	    .id = SUB_QUEST_GYM_1_CRANEWING,
	    .name = gText_SubQuest_GymCranewingName,
	    .desc = gText_SubQuest_GymCranewingDesc,
	    .map = gText_SubQuest_GymCranewingName,
	    .sprite = OBJ_EVENT_GFX_FROY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
	[SUB_QUEST_GYM_2_SOFTWIND] = {
	    .id = SUB_QUEST_GYM_2_SOFTWIND,
	    .name = gText_SubQuest_GymSoftwindName,
	    .desc = gText_SubQuest_GymSoftwindDesc,
	    .map = gText_SubQuest_GymSoftwindName,
	    .sprite = OBJ_EVENT_GFX_THERMA,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
	},
	[SUB_QUEST_GYM_3_ROOTHAVEN] = {
	    .id = SUB_QUEST_GYM_3_ROOTHAVEN,
	    .name = gText_SubQuest_GymRoothavenName,
	    .desc = gText_SubQuest_GymRoothavenDesc,
	    .map = gText_SubQuest_GymRoothavenName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
	},
	[SUB_QUEST_GYM_4_KALYPSO] = {
	    .id = SUB_QUEST_GYM_4_KALYPSO,
	    .name = gText_SubQuest_GymKalypsoName,
	    .desc = gText_SubQuest_GymKalypsoDesc,
	    .map = gText_SubQuest_GymKalypsoName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
	},
    [SUB_QUEST_GYM_5_GALLEA] = {
        .id = SUB_QUEST_GYM_5_GALLEA,
	    .name = gText_SubQuest_GymGalleaName,
	    .desc = gText_SubQuest_GymGalleaDesc,
	    .map = gText_SubQuest_GymGalleaName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GYM_6_PORTWIND] = {
        .id = SUB_QUEST_GYM_6_PORTWIND,
	    .name = gText_SubQuest_GymPortwindName,
	    .desc = gText_SubQuest_GymPortwindDesc,
	    .map = gText_SubQuest_GymPortwindName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GYM_7_SEDCINI] = {
        .id = SUB_QUEST_GYM_7_SEDCINI,
	    .name = gText_SubQuest_GymSedciniName,
	    .desc = gText_SubQuest_GymSedciniDesc,
	    .map = gText_SubQuest_GymSedciniName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GYM_8_ENCHESTRA] = {
        .id = SUB_QUEST_GYM_8_ENCHESTRA,
	    .name = gText_SubQuest_GymEnchestraName,
	    .desc = gText_SubQuest_GymEnchestraDesc,
	    .map = gText_SubQuest_GymEnchestraName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GYM_9_DYNAMO_GARDENS] = {
        .id = SUB_QUEST_GYM_9_DYNAMO_GARDENS,
	    .name = gText_SubQuest_GymDynamoGardensName,
	    .desc = gText_SubQuest_GymDynamoGardensDesc,
	    .map = gText_SubQuest_GymDynamoGardensName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GYM_10_SKOBELOFF] = {
        .id = SUB_QUEST_GYM_10_SKOBELOFF,
	    .name = gText_SubQuest_GymSkobeloffName,
	    .desc = gText_SubQuest_GymSkobeloffDesc,
	    .map = gText_SubQuest_GymSkobeloffName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GYM_11_SAHARAN] = {
        .id = SUB_QUEST_GYM_11_SAHARAN,
	    .name = gText_SubQuest_GymSaharanName,
	    .desc = gText_SubQuest_GymSaharanDesc,
	    .map = gText_SubQuest_GymSaharanName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GYM_12_AQUAPOLIS] = {
        .id = SUB_QUEST_GYM_12_AQUAPOLIS,
	    .name = gText_SubQuest_GymAquapolisName,
	    .desc = gText_SubQuest_GymAquapolisDesc,
	    .map = gText_SubQuest_GymAquapolisName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_TRIUMPH_SPIRE] = {
        .id = SUB_QUEST_TRIUMPH_SPIRE,
	    .name = gText_SubQuest_TriumphSpireName,
	    .desc = gText_SubQuest_TriumphSpireDesc,
	    .map = gText_SubQuest_TriumphSpireName,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_FIND_MILK] = {
        .id = SUB_QUEST_FIND_MILK,
	    .name = gText_SubQuest_FindMilkName,
	    .desc = gText_SubQuest_FindMilkDesc,
	    .map = gText_Quest_MoocalfOrphanMap,
	    .sprite = ITEM_MOOMOO_MILK,
	    .spritetype = ITEM,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_FIND_BOTTLE] = {
        .id = SUB_QUEST_FIND_BOTTLE,
	    .name = gText_SubQuest_FindBottleName,
	    .desc = gText_SubQuest_FindBottleDesc,
	    .map = gText_Quest_MoocalfOrphanMap,
	    .sprite = ITEM_GLASS_BOTTLE,
	    .spritetype = ITEM,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_DELIVER_ASH] = {
        .id = SUB_QUEST_DELIVER_ASH,
	    .name = gText_SubQuest_DeliverAshName,
	    .desc = gText_SubQuest_DeliverAshDesc,
	    .map = gText_Quest_MoocalfOrphanMap,
	    .sprite = ITEM_SOOT_SACK,
	    .spritetype = ITEM,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_GET_MILK] = {
        .id = SUB_QUEST_GET_MILK,
	    .name = gText_SubQuest_GymCranewingName,
	    .desc = gText_SubQuest_GymCranewingDesc,
	    .map = gText_Quest_MoocalfOrphanMap,
	    .sprite = ITEM_MOOMOO_MILK,
	    .spritetype = ITEM,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_DELIVER_MILK] = {
        .id = SUB_QUEST_DELIVER_MILK,
	    .name = gText_SubQuest_GetMilkName,
	    .desc = gText_SubQuest_GetMilkDesc,
	    .map = gText_Quest_MoocalfOrphanMap,
	    .sprite = ITEM_MOOMOO_MILK,
	    .spritetype = ITEM,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_INVESTIGATE_FOREST] = {
        .id = SUB_QUEST_INVESTIGATE_FOREST,
	    .name = gText_SubQuest_InvestigateForestName,
	    .desc = gText_SubQuest_InvestigateForestDesc,
	    .map = gText_Quest_ChartreeRocketsMap,
	    .sprite = OBJ_EVENT_GFX_ROCKET_GRUNT_M,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
    [SUB_QUEST_DEFEAT_ROCKETS] = {
        .id = SUB_QUEST_DEFEAT_ROCKETS,
	    .name = gText_SubQuest_InvestigateForestName,
	    .desc = gText_SubQuest_InvestigateForestDesc,
	    .map = gText_Quest_ChartreeRocketsMap,
	    .sprite = OBJ_EVENT_GFX_ROCKET_GRUNT_M,
	    .spritetype = OBJECT,
	    .doneLabel = sText_Done
    },
};

//Declaration of side quest structures. Edits to quests are made here.
#define subquest_list(l, ...) (const u8 [l]) { __VA_ARGS__ }

static const struct SideQuest sQuests[QUEST_COUNT] =
{
	[QUEST_GETTING_STARTED] = {
        .name = gText_Quest_GettingStartedName,
        .desc = gText_Quest_GettingStartedDesc,
        .donedesc = gText_Quest_GettingStartedDone,
        .map = gText_Quest_GettingStartedMap,
        .sprite = OBJ_EVENT_GFX_BRADLEY,
        .spritetype = OBJECT,
        .isSequential = TRUE,
        .subquests = subquest_list(
            QUEST_GETTING_STARTED_SUB_COUNT,
            SUB_QUEST_FIND_BRADLEY,
            SUB_QUEST_CHOOSE_POKEMON,
            SUB_QUEST_RESCUE_AMPURE,
            SUB_QUEST_SAY_GOODBYE
        ),
        .numSubquests = QUEST_GETTING_STARTED_SUB_COUNT
    },
	[QUEST_FINDING_SIMON] = {
        .name = gText_Quest_FindingSimonName,
        .desc = gText_Quest_FindingSimonDesc,
        .donedesc = gText_Quest_FindingSimonDone,
        .map = gText_Quest_FindingSimonMap,
        .sprite = OBJ_EVENT_GFX_SIMON,
        .spritetype = OBJECT,
        .isSequential = TRUE,
        .subquests = subquest_list(
            QUEST_FINDING_SIMON_SUB_COUNT,
            SUB_QUEST_FIND_SIMON
        ),
        .numSubquests = QUEST_FINDING_SIMON_SUB_COUNT
    },
	[QUEST_TRIUMPH_SPIRE] = {
	    .name = gText_Quest_TriumphSpireName,
	    .desc = gText_Quest_TriumphSpireDesc,
	    .donedesc = gText_Quest_TriumphSpireDone,
	    .map = gText_Quest_TriumphSpireMap,
	    .sprite = OBJ_EVENT_GFX_WALLY,
	    .spritetype = OBJECT,
	    .subquests = subquest_list(
            QUEST_TRIUMPH_SPIRE_SUB_COUNT,
            SUB_QUEST_GYM_1_CRANEWING,
            SUB_QUEST_GYM_2_SOFTWIND,
            SUB_QUEST_GYM_3_ROOTHAVEN,
            SUB_QUEST_GYM_4_KALYPSO,
            SUB_QUEST_GYM_5_GALLEA,
            SUB_QUEST_GYM_6_PORTWIND,
            SUB_QUEST_GYM_7_SEDCINI,
            SUB_QUEST_GYM_8_ENCHESTRA,
            SUB_QUEST_GYM_9_DYNAMO_GARDENS,
            SUB_QUEST_GYM_10_SKOBELOFF,
            SUB_QUEST_GYM_11_SAHARAN,
            SUB_QUEST_GYM_12_AQUAPOLIS,
            SUB_QUEST_TRIUMPH_SPIRE
        ),
        .numSubquests = QUEST_TRIUMPH_SPIRE_SUB_COUNT
    },
	[QUEST_LOST_FISHING_POLE] = {
	    .name = gText_Quest_FishingPoleName,
	    .desc = gText_Quest_FishingPoleDesc,
	    .donedesc = gText_Quest_FishingPoleDone,
	    .map = gText_Quest_FishingPoleMap,
	    .sprite = OBJ_EVENT_GFX_FISHERMAN,
	    .spritetype = OBJECT,
	    .subquests = NULL,
        .numSubquests = 0
    },
	[QUEST_HIDDEN_ITEMS] = {
	    .name = gText_Quest_HiddenItemsName,
	    .desc = gText_Quest_HiddenItemsDesc,
	    .donedesc = gText_Quest_HiddenItemsDone,
	    .map = gText_Quest_HiddenItemsMap,
	    .sprite = OBJ_EVENT_GFX_EXPERT_M,
	    .spritetype = OBJECT,
	    .subquests = NULL,
        .numSubquests = 0
    },
	[QUEST_MOOCALF_ORPHAN] = {
	    .name = gText_Quest_MoocalfOrphanName,
	    .desc = gText_Quest_MoocalfOrphanDesc,
	    .donedesc = gText_Quest_MoocalfOrphanDone,
	    .map = gText_Quest_MoocalfOrphanMap,
	    .sprite = ITEM_MEDICINE_MILK,
	    .spritetype = ITEM,
        .isSequential = TRUE,
	    .subquests = subquest_list(
            QUEST_MOOCALF_ORPHAN_SUB_COUNT,
            SUB_QUEST_FIND_MILK,
            SUB_QUEST_FIND_BOTTLE,
            SUB_QUEST_DELIVER_MILK,
            SUB_QUEST_GET_MILK,
            SUB_QUEST_DELIVER_MILK
        ),
        .numSubquests = QUEST_MOOCALF_ORPHAN_SUB_COUNT
    },
	[QUEST_TRADE_LUPINE] = {
	    .name = gText_Quest_TradeLupineName,
	    .desc = gText_Quest_TradeLupineDesc,
	    .donedesc = gText_Quest_TradeLupineDone,
	    .map = gText_Quest_TradeLupineMap,
	    .sprite = OBJ_EVENT_GFX_MAN_3,
	    .spritetype = OBJECT,
	    .subquests = NULL,
        .numSubquests = 0
    },
	[QUEST_CHARTREE_ROCKETS] = {
	    .name = gText_Quest_ChartreeRocketsName,
	    .desc = gText_Quest_ChartreeRocketsDesc,
	    .donedesc = gText_Quest_ChartreeRocketsDone,
	    .map = gText_Quest_ChartreeRocketsMap,
	    .sprite = OBJ_EVENT_GFX_ROCKET_GRUNT_M,
	    .spritetype = OBJECT,
        .isSequential = TRUE,
	    .subquests = subquest_list(
            QUEST_CHARTREE_ROCKETS_SUB_COUNT,
            SUB_QUEST_INVESTIGATE_FOREST,
            SUB_QUEST_DEFEAT_ROCKETS
        ),
        .numSubquests = QUEST_CHARTREE_ROCKETS_SUB_COUNT
    }
};

//BG layer defintions
static const struct BgTemplate sQuestMenuBgTemplates[2] =
{
	{
		//All text and content is loaded to this window
		.bg = 0,
		.charBaseIndex = 0,
		.mapBaseIndex = 31,
		.priority = 1
	},
	{
		///Backgrounds and UI elements are loaded to this window
		.bg = 1,
		.charBaseIndex = 3,
		.mapBaseIndex = 30,
		.priority = 2
	}
};

//Window definitions
static const struct WindowTemplate sQuestMenuHeaderWindowTemplates[] =
{
	{
		//0: Content window
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 2,
		.width = 30,
		.height = 8,
		.paletteNum = 15,
		.baseBlock = 1
	},
	{
		//1: Footer window
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 12,
		.width = 30,
		.height = 12,
		.paletteNum = 15,
		.baseBlock = 361
	},
	{
		// 2: Header window
		.bg = 0,
		.tilemapLeft = 0,
		.tilemapTop = 0,
		.width = 30,
		.height = 2,
		.paletteNum = 15,
		.baseBlock = 721
	},
	DUMMY_WIN_TEMPLATE
};

//Font color combinations for printed text
static const u8 sQuestMenuWindowFontColors[][4] =
{
	{
		//Header of Quest Menu
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_DARK_GRAY,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Reward state progress indicator
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_RED,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Done state progress indicator
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_GREEN,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Active state progress indicator
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_BLUE,
		TEXT_COLOR_TRANSPARENT
	},
	{
		//Footer flavor text
		TEXT_COLOR_TRANSPARENT,
		TEXT_COLOR_WHITE,
		TEXT_COLOR_TRANSPARENT
	},
};

//Functions begin here

//ported from firered by ghoulslash
void QuestMenu_Init(u8 a0, MainCallback callback)
{
	u8 i;

	if (a0 >= 2)
	{
		SetMainCallback2(callback);
		return;
	}

	if ((sStateDataPtr = Alloc(sizeof(struct QuestMenuResources))) == NULL)
	{
		SetMainCallback2(callback);
		return;
	}

	if (a0 != 1)
	{
		sListMenuState.savedCallback = callback;
		sListMenuState.scroll = sListMenuState.row = 0;
	}

	sStateDataPtr->moveModeOrigPos = 0xFF;
	sStateDataPtr->spriteIconSlot = 0;
	sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
	sStateDataPtr->savedCallback = 0;
	for (i = 0; i < 3; i++)
	{
		sStateDataPtr->data[i] = 0;
	}

	SetMainCallback2(RunSetup);
}

static void MainCB(void)
{
	RunTasks();
	AnimateSprites();
	BuildOamBuffer();
	DoScheduledBgTilemapCopiesToVram();
	UpdatePaletteFade();
}

static void VBlankCB(void)
{
	LoadOam();
	ProcessSpriteCopyRequests();
	TransferPlttBuffer();
}

static void RunSetup(void)
{
	while (1)
	{
		if (SetupGraphics() == TRUE)
		{
			break;
		}
	}
}

static bool8 SetupGraphics(void)
{
	u8 taskId;
	switch (gMain.state)
	{
		case 0:
			SetVBlankHBlankCallbacksToNull();
			ClearScheduledBgCopiesToVram();
			gMain.state++;
			break;
		case 1:
			ScanlineEffect_Stop();
			gMain.state++;
			break;
		case 2:
			FreeAllSpritePalettes();
			gMain.state++;
			break;
		case 3:
			ResetPaletteFade();
			gMain.state++;
			break;
		case 4:
			ResetSpriteData();
			gMain.state++;
			break;
		case 5:
			ResetSpriteState();
			gMain.state++;
			break;
		case 6:
			ResetTasks();
			gMain.state++;
			break;
		case 7:
			if (InitBackgrounds())
			{
				sStateDataPtr->data[0] = 0;
				gMain.state++;
			}
			else
			{
				FadeAndBail();
				return TRUE;
			}
			break;
		case 8:
			if (LoadGraphics() == TRUE)
			{
				gMain.state++;
			}
			break;
		case 9:
			QuestMenu_InitWindows();
			gMain.state++;
			break;
		case 10:
			ClearModeOnStartup();
			InitItems();
			SetCursorPosition();
			SetScrollPosition();
			gMain.state++;
			break;
		case 11:
			if (AllocateResourcesForListMenu())
			{
				gMain.state++;
			}
			else
			{
				FadeAndBail();
				return TRUE;
			}
			break;
		case 12:
			AllocateMemoryForArray();
			BuildMenuTemplate();
			gMain.state++;
			break;
		case 13:
			GenerateAndPrintHeader();
			gMain.state++;
			break;
		case 14:
			gMain.state++;
			break;
		case 15:
			taskId = CreateTask(Task_Main, 0);
			gTasks[taskId].data[0] = ListMenuInit(&gMultiuseListMenuTemplate,
			                                      sListMenuState.scroll,
			                                      sListMenuState.row);
			gMain.state++;
			break;
		case 16:
			PlaceTopMenuScrollIndicatorArrows();
			gMain.state++;
			break;
		case 17:
			gMain.state++;
			break;
		case 18:
			if (sListMenuState.initialized == 1)
			{
				BlendPalettes(0xFFFFFFFF, 16, RGB_BLACK);
			}
			gMain.state++;
			break;
		case 19:
			if (sListMenuState.initialized == 1)
			{
				BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
			}
			else
			{

				BeginNormalPaletteFade(0xFFFFFFFF, 0, 16, 0, RGB_BLACK);
				SetInitializedFlag(1);
			}
			gMain.state++;
			break;
		default:
			SetVBlankCallback(VBlankCB);
			SetMainCallback2(MainCB);
			return TRUE;
	}
	return FALSE;
}

static bool8 LoadGraphics(void)
{
	switch (sStateDataPtr->data[0])
	{
		case 0:
			ResetTempTileDataBuffers();
			DecompressAndCopyTileDataToVram(1, sQuestMenuTiles, 0, 0, 0);
			sStateDataPtr->data[0]++;
			break;
		case 1:
			if (FreeTempTileDataBuffersIfPossible() != TRUE)
			{
				LZDecompressWram(sQuestMenuTilemap, sBg1TilemapBuffer);
				sStateDataPtr->data[0]++;
			}
			break;
		case 2:
			LoadCompressedPalette(sQuestMenuBgPals, 0x00, 0x60);
			sStateDataPtr->data[0]++;
			break;
		case 3:
			sStateDataPtr->data[0]++;
			break;
		default:
			sStateDataPtr->data[0] = 0;
			return TRUE;
	}
	return FALSE;
}

static void QuestMenu_InitWindows(void)
{
	u8 i;

	InitWindows(sQuestMenuHeaderWindowTemplates);
	DeactivateAllTextPrinters();

	for (i = 0; i < 3; i++)
	{
		FillWindowPixelBuffer(i, 0x00);
		PutWindowTilemap(i);
	}

	ScheduleBgCopyTilemapToVram(0);
}

static bool8 InitBackgrounds(void)
{
	ResetAllBgsCoordinatesAndBgCntRegs();
	sBg1TilemapBuffer = Alloc(0x800);
	if (sBg1TilemapBuffer == NULL)
	{
		return FALSE;
	}

	memset(sBg1TilemapBuffer, 0, 0x800);
	ResetBgsAndClearDma3BusyFlags(0);
	InitBgsFromTemplates(0, sQuestMenuBgTemplates,
	                     NELEMS(sQuestMenuBgTemplates));
	SetBgTilemapBuffer(1, sBg1TilemapBuffer);
	ScheduleBgCopyTilemapToVram(1);
	SetGpuReg(REG_OFFSET_DISPCNT, DISPCNT_OBJ_1D_MAP | DISPCNT_OBJ_ON);
	SetGpuReg(REG_OFFSET_BLDCNT, 0);
	ShowBg(0);
	ShowBg(1);
	return TRUE;
}

static void InitItems(void)
{
	sStateDataPtr->nItems = (CountNumberListRows()) - 1;

	sStateDataPtr->maxShowed = sStateDataPtr->nItems + 1 <= 4 ?
	                           sStateDataPtr->nItems + 1 : 4;
}

#define try_alloc(ptr__, size) ({ \
		void ** ptr = (void **)&(ptr__);             \
		*ptr = Alloc(size);                 \
		if (*ptr == NULL)                   \
		{                                   \
			FreeResources();                  \
			FadeAndBail();                  \
			return FALSE;                   \
		}                                   \
	})

static bool8 AllocateResourcesForListMenu(void)
{
	try_alloc(sListMenuItems,
	          sizeof(struct ListMenuItem) * CountNumberListRows() + 1);
	return TRUE;
}

void AllocateMemoryForArray(void)
{
	u8 i;
	u8 allocateRows = QUEST_ARRAY_COUNT + 1;

	sQuestNameArray = Alloc(sizeof(void *) * allocateRows);

	for (i = 0; i < allocateRows; i++)
	{
		sQuestNameArray[i] = Alloc(sizeof(u8) * 32);
	}
}

static void PlaceTopMenuScrollIndicatorArrows(void)
{
	u8 listSize = CountNumberListRows();

	if (listSize < sStateDataPtr->maxShowed)
	{
		listSize = sStateDataPtr->maxShowed;
	}

	sStateDataPtr->scrollIndicatorArrowPairId =
	      AddScrollIndicatorArrowPairParameterized(2, 94, 8, 90,
	                  (listSize - sStateDataPtr->maxShowed), 110, 110, &sListMenuState.scroll);
}

static void SetInitializedFlag(u8 a0)
{
	sListMenuState.initialized = a0;
}

static u8 GetCursorPosition(void)
{
	return sListMenuState.scroll + sListMenuState.row;
}

static void SetCursorPosition(void)
{
	if (IfScrollIsOutOfBounds())
	{
		sListMenuState.scroll = (sStateDataPtr->nItems + 1) -
		                        sStateDataPtr->maxShowed;
	}

	if (IfRowIsOutOfBounds())
	{
		if (sStateDataPtr->nItems + 1 < 2)
		{
			sListMenuState.row = 0;
		}
		else
		{
			sListMenuState.row = sStateDataPtr->nItems;
		}
	}
}


static void SetScrollPosition(void)
{
	u8 i;

	if (sListMenuState.row > 3)
	{
		for (i = 0; i <= sListMenuState.row - 3;
		            sListMenuState.row--, sListMenuState.scroll++, i++)
		{
			if (sListMenuState.scroll + sStateDataPtr->maxShowed ==
			            sStateDataPtr->nItems + 1)
			{
				break;
			}
		}
	}
}

bool8 IfScrollIsOutOfBounds(void)
{
	if (sListMenuState.scroll != 0
	            && sListMenuState.scroll + sStateDataPtr->maxShowed >
	            sStateDataPtr->nItems + 1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IfRowIsOutOfBounds(void)
{
	if (sListMenuState.scroll + sListMenuState.row >= sStateDataPtr->nItems +
	            1)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static void SaveScrollAndRow(s16 *data)
{
	ListMenuGetScrollAndRow(data[0], &sListMenuState.storedScrollOffset,
	                        &sListMenuState.storedRowPosition);
}


void ClearModeOnStartup(void)
{
	sStateDataPtr->filterMode = 0;
}

static u8 ManageMode(u8 action)
{
	u8 mode = sStateDataPtr->filterMode;

	switch (action)
	{
		case SUB:
			mode = ToggleSubquestMode(mode);
			break;

		case ALPHA:
			mode = ToggleAlphaMode(mode);
			sStateDataPtr->restoreCursor = FALSE;
			break;

		default:
			mode = IncrementMode(mode);
			sStateDataPtr->restoreCursor = FALSE;
			break;
	}
	return mode;
}

u8 ToggleSubquestMode(u8 mode)
{
	if (IsSubquestMode())
	{
		mode -= SORT_SUBQUEST;
		sStateDataPtr->restoreCursor = TRUE;
	}
	else
	{
		mode += SORT_SUBQUEST;
		sStateDataPtr->restoreCursor = FALSE;
	}

	return mode;
}

u8 ToggleAlphaMode(u8 mode)
{
	if (IsAlphaMode())
	{
		mode -= SORT_DEFAULT_AZ;
	}
	else
	{
		mode += SORT_DEFAULT_AZ;
	}

	return mode;
}

u8 IncrementMode(u8 mode)
{
	if (mode % 10 == SORT_DONE)
	{
		mode -= SORT_DONE;
	}
	else
	{
		mode++;
	}

	return mode;
}

static bool8 IsSubquestMode(void)
{
	if (sStateDataPtr->filterMode > SORT_DONE_AZ)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static bool8 IsNotFilteredMode(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;

	if (mode == FLAG_GET_UNLOCKED)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static bool8 IsAlphaMode(void)
{
	if (sStateDataPtr->filterMode < SORT_SUBQUEST
	            && sStateDataPtr->filterMode > SORT_DONE)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static u16 BuildMenuTemplate(void)
{
	u8 lastRow = GetModeAndGenerateList();

	AssignCancelNameAndId(lastRow);

	gMultiuseListMenuTemplate.totalItems = CountNumberListRows();
	gMultiuseListMenuTemplate.items = sListMenuItems;
	gMultiuseListMenuTemplate.windowId = 0;
	gMultiuseListMenuTemplate.header_X = 0;
	gMultiuseListMenuTemplate.cursor_X = 15;
	gMultiuseListMenuTemplate.item_X = 23;
	gMultiuseListMenuTemplate.lettersSpacing = 1;
	gMultiuseListMenuTemplate.itemVerticalPadding = 2;
	gMultiuseListMenuTemplate.upText_Y = 2;
	gMultiuseListMenuTemplate.maxShowed = sStateDataPtr->maxShowed;
	gMultiuseListMenuTemplate.fontId = 2;
	gMultiuseListMenuTemplate.cursorPal = 2;
	gMultiuseListMenuTemplate.fillValue = 0;
	gMultiuseListMenuTemplate.cursorShadowPal = 0;
	gMultiuseListMenuTemplate.moveCursorFunc = MoveCursorFunc;
	gMultiuseListMenuTemplate.itemPrintFunc = GenerateStateAndPrint;
	gMultiuseListMenuTemplate.scrollMultiple = LIST_MULTIPLE_SCROLL_DPAD;
	gMultiuseListMenuTemplate.cursorKind = 0;
}

u8 GetModeAndGenerateList()
{
	if (IsSubquestMode())
	{
		return GenerateSubquestList();
	}
	else
	{
		return GenerateList(!IsNotFilteredMode());
	}
}

static u8 CountNumberListRows()
{
	u8 mode = sStateDataPtr->filterMode % 10;

	if (IsSubquestMode())
	{
		return sQuests[sStateDataPtr->parentQuest].numSubquests + 1;
	}

	switch (mode)
	{
		case SORT_DEFAULT:
			return QUEST_COUNT + 1;
		case SORT_INACTIVE:
			return CountInactiveQuests() + 1;
		case SORT_ACTIVE:
			return CountActiveQuests() + 1;
		case SORT_REWARD:
			return CountRewardQuests() + 1;
		case SORT_DONE:
			return CountCompletedQuests() + 1;
	}

}

u8 *DefineQuestOrder()
{
	static u8 sortedList[QUEST_COUNT];
	u8 a, c, d, e;
	u8 placeholderVariable;

	for (a = 0; a < QUEST_COUNT; a++)
	{
		sortedList[a] = a;
	}

	if (IsAlphaMode())
	{
		for (c = 0; c < QUEST_COUNT; c++)
		{
			for (d = c + 1; d < QUEST_COUNT; d++)
			{
				if (StringCompare(sQuests[sortedList[c]].name,
				                  sQuests[sortedList[d]].name) > 0)
				{
					placeholderVariable = sortedList[c];
					sortedList[c] = sortedList[d];
					sortedList[d] = placeholderVariable;
				}
			}
		}
	}

	return sortedList;
}

u8 GenerateSubquestList()
{
	u8 parentQuestId = sStateDataPtr->parentQuest;
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 subquestIndex = 0;

	for (subquestIndex = 0; subquestIndex < sQuests[parentQuestId].numSubquests; subquestIndex++)
	{
        const u8 subquestId = sQuests[parentQuestId].subquests[subquestIndex];
		PrependQuestNumber(subquestIndex);
		PopulateSubquestName(subquestId);
		PopulateListRowNameAndId(subquestIndex, subquestIndex);
	}
	return subquestIndex;
}

u8 GenerateList(bool8 isFiltered)
{
	u8 mode = sStateDataPtr-> filterMode % 10;
	u8 lastRow = 0, numRow = 0, offset = 0, newRow = 0, countQuest = 0,
	   selectedQuestId = 0;
	u8 *sortedQuestList;

	sortedQuestList = DefineQuestOrder();

	for (countQuest = 0; countQuest < QUEST_COUNT; countQuest++)
	{
		selectedQuestId = *(sortedQuestList + countQuest);

		if (isFiltered && !QuestMenu_GetSetQuestState(selectedQuestId, mode))
		{
			continue;
		}

		PopulateEmptyRow(selectedQuestId);

		if (QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_FAVORITE))
		{
			SetFavoriteQuest(selectedQuestId);
			newRow = numRow;
			numRow++;
		}
		else
		{
			newRow = CountFavoriteQuests() + offset;
			offset++;
		}

		PopulateQuestName(selectedQuestId);
		PopulateListRowNameAndId(newRow, selectedQuestId);
	}
	return numRow + offset;
}

static void AssignCancelNameAndId(u8 numRow)
{
	if (IsSubquestMode())
	{
		sListMenuItems[numRow].name = sText_Back;
	}
	else
	{
		sListMenuItems[numRow].name = sText_Close;
	}

	sListMenuItems[numRow].id = LIST_CANCEL;
}

u8 QuestMenu_GetSetSubquestState(u8 caseId, u8 subquestId)
{

	u8  index = subquestId / 8; //8 bits per byte
	u8	bit = subquestId % 8;
	u8	mask = 1 << bit;

	switch (caseId)
	{
		case FLAG_GET_COMPLETED:
			return gSaveBlock2Ptr->subQuests[index] & mask;
		case FLAG_SET_COMPLETED:
			gSaveBlock2Ptr->subQuests[index] |= mask;
			return 1;
	}

	return -1;
}

u8 QuestMenu_GetSetQuestState(u8 quest, u8 caseId)
{
	u8 index = quest * 5 / 8;
	u8 bit = quest * 5 % 8;
	u8 mask = 0, index2 = 0, bit2 = 0, index3 = 0, bit3 = 0, mask2 = 0,
	   mask3 = 0;

	// 0 : locked
	// 1 : actived
	// 2 : rewarded
	// 3 : completed
	// 4 : favorited

	switch (caseId)
	{
		case FLAG_GET_UNLOCKED:
		case FLAG_SET_UNLOCKED:
			break;
		case FLAG_GET_INACTIVE:
		case FLAG_GET_ACTIVE:
		case FLAG_SET_ACTIVE:
		case FLAG_REMOVE_ACTIVE:
			bit += 1;
			break;
		case FLAG_GET_REWARD:
		case FLAG_SET_REWARD:
		case FLAG_REMOVE_REWARD:
			bit += 2;
			break;
		case FLAG_GET_COMPLETED:
		case FLAG_SET_COMPLETED:
			bit += 3;
			break;
		case FLAG_GET_FAVORITE:
		case FLAG_SET_FAVORITE:
		case FLAG_REMOVE_FAVORITE:
			bit += 4;
			break;
	}
	if (bit >= 8)
	{
		index += 1;
		bit %= 8;
	}
	mask = 1 << bit;

	switch (caseId)
	{
		case FLAG_GET_UNLOCKED:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_UNLOCKED:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_GET_INACTIVE:
			bit2 = bit + 1;
			bit3 = bit + 2;
			index2 = index;
			index3 = index;

			if (bit2 >= 8)
			{
				index2 += 1;
				bit2 %= 8;
			}
			if (bit3 >= 8)
			{
				index3 += 1;
				bit3 %= 8;
			}

			mask2 = 1 << bit2;
			mask3 = 1 << bit3;
			return !(gSaveBlock2Ptr->questData[index] & mask) && \
			       !(gSaveBlock2Ptr->questData[index2] & mask2) && \
			       !(gSaveBlock2Ptr->questData[index3] & mask3);
		case FLAG_GET_ACTIVE:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_ACTIVE:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_REMOVE_ACTIVE:
			gSaveBlock2Ptr->questData[index] &= ~mask;
			return 1;
		case FLAG_GET_REWARD:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_REWARD:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_REMOVE_REWARD:
			gSaveBlock2Ptr->questData[index] &= ~mask;
			return 1;
		case FLAG_GET_COMPLETED:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_COMPLETED:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_GET_FAVORITE:
			return gSaveBlock2Ptr->questData[index] & mask;
		case FLAG_SET_FAVORITE:
			gSaveBlock2Ptr->questData[index] |= mask;
			return 1;
		case FLAG_REMOVE_FAVORITE:
			gSaveBlock2Ptr->questData[index] &= ~mask;
			return 1;
	}
	return -1;  //failure
}

u8 CountUnlockedQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_UNLOCKED))
		{
			q++;
		}
	}
	return q;
}

u8 CountInactiveQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_INACTIVE))
		{
			q++;
		}
	}
	return q;
}

u8 CountActiveQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_ACTIVE))
		{
			q++;
		}
	}
	return q;
}

u8 CountRewardQuests(void)
{
	u8 q = 0, i = 0;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_REWARD))
		{
			q++;
		}
	}
	return q;
}

u8 CountCompletedQuests(void)
{
	u8 q = 0, i = 0;

	u8 parentQuest = sStateDataPtr->parentQuest;

	if (IsSubquestMode())
	{
		for (i = 0; i < sQuests[parentQuest].numSubquests; i++)
		{
			if (QuestMenu_GetSetSubquestState(
                FLAG_GET_COMPLETED,
                sQuests[parentQuest].subquests[i]
            ))
			{
				q++;
			}
		}
	}
	else
	{
		for (i = 0; i < QUEST_COUNT; i++)
		{
			if (QuestMenu_GetSetQuestState(i, FLAG_GET_COMPLETED))
			{
				q++;
			}
		}
	}

	return q;
}

u8 CountFavoriteQuests(void)
{
	u8 q = 0, i = 0, x = 0;
	u8 mode = sStateDataPtr->filterMode % 10;

	for (i = 0; i < QUEST_COUNT; i++)
	{
		if (QuestMenu_GetSetQuestState(i, FLAG_GET_FAVORITE))
		{
			if (QuestMenu_GetSetQuestState(i, mode))
			{
				x++;
			}
			q++;
		}
	}

	if (IsNotFilteredMode())
	{
		return q;
	}
	else
	{
		return x;
	}

}

void PopulateEmptyRow(u8 questIndex)
{
	sQuestNamePointer = StringCopy(sQuestNameArray[questIndex], sText_Empty);
}

void PrependQuestNumber(u8 questIndex)
{
	sQuestNamePointer = ConvertIntToDecimalStringN(sQuestNameArray[questIndex],
	                   questIndex + 1, STR_CONV_MODE_LEFT_ALIGN, 2);
	sQuestNamePointer = StringAppend(sQuestNamePointer,
	                                sText_DotSpace);
}

void SetFavoriteQuest(u8 questIndex)
{
	sQuestNamePointer = StringAppend(sQuestNameArray[questIndex],
	                                sText_ColorGreen);
}

void PopulateQuestName(u8 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_UNLOCKED))
	{
		sQuestNamePointer = StringAppend(sQuestNameArray[questId],
		                                sQuests[questId].name);
		AddSubQuestButton(questId);
	}
	else
	{
		StringAppend(sQuestNameArray[questId], sText_Unk);
	}
}

void PopulateSubquestName(u8 subquestId)
{
	if (ShouldShowSubquestData(subquestId))
	{
		sQuestNamePointer = StringAppend(
            sQuestNamePointer,
		    sSubQuests[subquestId].name
        );
	}
	else
	{
		sQuestNamePointer = StringAppend(sQuestNamePointer, sText_Unk);
	}
}

u8 PopulateListRowNameAndId(u8 row, u8 questId)
{
	sListMenuItems[row].name = sQuestNameArray[questId];
	sListMenuItems[row].id = questId;
}

static bool8 DoesQuestHaveChildrenAndNotInactive(u16 questId)
{
	if (sQuests[questId].numSubquests != 0
     && QuestMenu_GetSetQuestState(questId, FLAG_GET_UNLOCKED)
     && !QuestMenu_GetSetQuestState(questId, FLAG_GET_INACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

void AddSubQuestButton(u8 questId)
{
	if (DoesQuestHaveChildrenAndNotInactive(questId))
	{
		sQuestNamePointer = StringAppend(sQuestNameArray[questId],
		                                sText_SubQuestButton);
	}

}
static void QuestMenu_AddTextPrinterParameterized(u8 windowId, u8 fontId,
            const u8 *str, u8 x, u8 y,
            u8 letterSpacing, u8 lineSpacing, u8 speed, u8 colorIdx)
{
	AddTextPrinterParameterized4(windowId, fontId, x, y, letterSpacing,
	                             lineSpacing,
	                             sQuestMenuWindowFontColors[colorIdx], speed, str);
}

static void MoveCursorFunc(s32 questId, bool8 onInit,
                           struct ListMenu *list)
{
	PlayCursorSound(onInit);

	if (sStateDataPtr->moveModeOrigPos == 0xFF)
	{
		QuestMenu_DestroySprite(sStateDataPtr->spriteIconSlot ^ 1);
		sStateDataPtr->spriteIconSlot ^= 1;

		if (questId == LIST_CANCEL)
		{
			PrintDetailsForCancel();
		}
		else
		{
			GenerateAndPrintQuestDetails(questId);
			DetermineSpriteType(questId);
		}
	}
}

static void PlayCursorSound(bool8 firstRun)
{
	if (firstRun == FALSE)
	{
		PlaySE(SE_RG_BAG_CURSOR);
	}
}

static void PrintDetailsForCancel()
{
	FillWindowPixelBuffer(1, 0);

	QuestMenu_AddTextPrinterParameterized(1, 2, sText_Empty, 2, 3, 2, 0, 0,
	                                      0);
	QuestMenu_AddTextPrinterParameterized(1, 2, sText_Empty, 40, 19, 5, 0, 0,
	                                      0);

	QuestMenu_CreateSprite(-1, sStateDataPtr->spriteIconSlot, ITEM);
}

void GenerateAndPrintQuestDetails(s32 questId)
{
	GenerateQuestLocation(questId);
	PrintQuestLocation(questId);
	GenerateQuestFlavorText(questId);
	PrintQuestFlavorText(questId);
}

void GenerateQuestLocation(s32 questId)
{
	if (IsSubquestMode() == FALSE)
	{
        if (IsQuestInactiveState(questId) == TRUE)
        {
		    StringCopy(gStringVar2, sText_Unk);
        }
        else
        {
		    StringCopy(gStringVar2, sQuests[questId].map);
        }
	}
	else
	{
        const u8 subquestId = sQuests[sStateDataPtr->parentQuest].subquests[questId];
        if (ShouldShowSubquestData(subquestId))
        {
            StringCopy(
                gStringVar2,
                sSubQuests[subquestId].map
            );
        }
        else
        {
		    StringCopy(gStringVar2, sText_Unk);
        }
	}

	StringExpandPlaceholders(gStringVar4, sText_ShowLocation);
}

void PrintQuestLocation(s32 questId)
{
	FillWindowPixelBuffer(1, 0);
	QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar4, 2, 3, 2, 0, 0,
	                                      4);
}
void GenerateQuestFlavorText(s32 questId)
{
	if (IsSubquestMode() == FALSE)
	{
		if (IsQuestInactiveState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sText_QuestLocked);
		}
		if (IsQuestActiveState(questId) == TRUE)
		{
			UpdateQuestFlavorText(questId);
		}
		if (IsQuestRewardState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sText_ReturnRecieveReward);
		}
		if (IsQuestCompletedState(questId) == TRUE)
		{
			StringCopy(gStringVar1, sQuests[questId].donedesc);
		}
	}
	else
	{
        const u8 subquestId = sQuests[sStateDataPtr->parentQuest].subquests[questId];
		if (ShouldShowSubquestData(subquestId))
		{
			StringCopy(gStringVar1, sSubQuests[subquestId].desc);
		}
		else
		{
			StringCopy(gStringVar1, sText_Empty);
		}
	}

	StringExpandPlaceholders(gStringVar3, gStringVar1);
}

void UpdateQuestFlavorText(s32 questId)
{
    u8 activeSubquestIndex = GetActiveSubquestIndex(questId);
    if (sQuests[questId].isSequential
     && activeSubquestIndex < sQuests[questId].numSubquests)
    {
        StringCopy(gStringVar1, sSubQuests[sQuests[questId].subquests[activeSubquestIndex]].desc);
    }
    else
    {
	    StringCopy(gStringVar1, sQuests[questId].desc);
    }
}

void PrintQuestFlavorText(s32 questId)
{
	QuestMenu_AddTextPrinterParameterized(1, 2, gStringVar3, 40, 19, 5, 0, 0,
	                                      4);
}

bool8 IsSubquestCompletedState(s32 subquestId)
{
	if (QuestMenu_GetSetSubquestState(
        FLAG_GET_COMPLETED,
        subquestId
	))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestRewardState(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_REWARD))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestInactiveState(s32 questId)
{
	if (!QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestActiveState(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestCompletedState(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_COMPLETED))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

bool8 IsQuestUnlocked(s32 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_UNLOCKED))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

static u8 GetActiveSubquestIndex(u32 questId)
{
    const struct SideQuest * quest = &sQuests[questId];
    s32 activeSubquestIndex = 0;

    if (quest->isSequential)
    {
        while( activeSubquestIndex < quest->numSubquests
            && IsSubquestCompletedState((s32) quest->subquests[activeSubquestIndex]) == TRUE)
        {
            activeSubquestIndex++;
        }
    }
    return activeSubquestIndex;
}

static s32 GetSubquestParent(u8 subquestId)
{
    s32 questIndex;
    u8 subquestIndex;
    for(questIndex = 0; questIndex < QUEST_COUNT; questIndex++)
    {
        const struct SideQuest * quest = &sQuests[questIndex];
        for(subquestIndex = 0; subquestIndex < quest->numSubquests; subquestIndex++)
        {
            if(quest->subquests[subquestIndex] == subquestId)
            {
                return questIndex;
            }
        }
    }
    return sStateDataPtr->parentQuest;
}

static u8 GetSubquestIndex(u8 subquestId)
{
    u8 subquestIndex;
    const struct SideQuest * parentQuest = &sQuests[GetSubquestParent(subquestId)];
    for(subquestIndex = 0; subquestIndex < parentQuest->numSubquests; subquestIndex++)
    {
        if(parentQuest->subquests[subquestIndex] == subquestId)
        {
            return subquestIndex;
        }
    }
    return 0;
}

static bool8 ShouldShowSubquestData(s32 subquestId)
{
    const u8 subquestIndex = GetSubquestIndex(subquestId);
    const s32 parentQuestId = GetSubquestParent(subquestId);
    const struct SideQuest * parentQuest = &sQuests[parentQuestId];
    u8 activeSubquestIndex = GetActiveSubquestIndex(parentQuestId);

    if (IsSubquestCompletedState(subquestId)
        || (parentQuest->isSequential
        && subquestIndex <= activeSubquestIndex) )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void DetermineSpriteType(s32 questId)
{
	u16 spriteId;
	u8 spriteType;

	if (IsSubquestMode() == FALSE)
	{
        u8 activeSubquestId = GetActiveSubquestIndex(questId);
        if (QuestMenu_GetSetQuestState(questId, FLAG_GET_UNLOCKED) == TRUE
         && sQuests[questId].isSequential
         && activeSubquestId < sQuests[questId].numSubquests)
        {
            spriteId = sSubQuests[sQuests[questId].subquests[activeSubquestId]].sprite;
            spriteType = sSubQuests[sQuests[questId].subquests[activeSubquestId]].spritetype;
        }
        else if(QuestMenu_GetSetQuestState(questId, FLAG_GET_UNLOCKED) == FALSE)
        {
            spriteId = SPECIES_NONE;
            spriteType = PKMN;
        }
        else
        {
            spriteId = sQuests[questId].sprite;
            spriteType = sQuests[questId].spritetype;
        }

		QuestMenu_CreateSprite(spriteId, sStateDataPtr->spriteIconSlot,
		                       spriteType);
	}
	else
    {
        const u8 subquestId = sQuests[sStateDataPtr->parentQuest].subquests[questId];

        if (ShouldShowSubquestData(subquestId))
        {
            spriteId = sSubQuests[subquestId].sprite;
            spriteType = sSubQuests[subquestId].spritetype;
            QuestMenu_CreateSprite(spriteId, sStateDataPtr->spriteIconSlot,
                                spriteType);
        }
        else
        {
            QuestMenu_CreateSprite(ITEM_NONE, sStateDataPtr->spriteIconSlot, ITEM);
        }
    }
	QuestMenu_DestroySprite(sStateDataPtr->spriteIconSlot ^ 1);
	sStateDataPtr->spriteIconSlot ^= 1;
}

static void QuestMenu_CreateSprite(u16 itemId, u8 idx, u8 spriteType)
{
	u8 *ptr = &sItemMenuIconSpriteIds[10];
	u8 spriteId;
	struct SpriteSheet spriteSheet;
	struct CompressedSpritePalette spritePalette;
	struct SpriteTemplate *spriteTemplate;

	if (ptr[idx] == 0xFF)
	{
		FreeSpriteTilesByTag(102 + idx);
		FreeSpritePaletteByTag(102 + idx);

		switch (spriteType)
		{
			case OBJECT:
				spriteId = CreateObjectGraphicsSprite(itemId, SpriteCallbackDummy, 20,
				                                      132, 0);
				break;
			case ITEM:
				spriteId = AddItemIconSprite(102 + idx, 102 + idx, itemId);
				break;
			case PKMN:
				LoadMonIconPalettes();
				spriteId = CreateMonIcon(itemId, SpriteCallbackDummy, 19, 132, 0, 1, 1);
				break;
			default:
				break;
		}

		gSprites[spriteId].oam.objMode = ST_OAM_OBJ_BLEND;

		if (spriteId != MAX_SPRITES)
		{
			ptr[idx] = spriteId;

			if (spriteType == ITEM)
			{
				gSprites[spriteId].x2 = 24;
				gSprites[spriteId].y2 = 140;
			}
		}
	}
}

void ResetSpriteState(void)
{
	u16 i;

	for (i = 0; i < NELEMS(sItemMenuIconSpriteIds); i++)
	{
		sItemMenuIconSpriteIds[i] = 0xFF;
	}
}

static void QuestMenu_DestroySprite(u8 idx)
{
	u8 *ptr = &sItemMenuIconSpriteIds[10];

	if (ptr[idx] != 0xFF)
	{
		DestroySpriteAndFreeResources(&gSprites[ptr[idx]]);
		ptr[idx] = 0xFF;
	}
}
static void GenerateStateAndPrint(u8 windowId, u32 index,
                                  u8 y)
{
    const struct SideQuest * parentQuest = &sQuests[sStateDataPtr->parentQuest];
	u8 colorIndex;

	if (index != LIST_CANCEL)
	{
		if (IsSubquestMode())
		{
			colorIndex = GenerateSubquestState(parentQuest->subquests[index]);
		}
		else
		{
			colorIndex = GenerateQuestState(index);
		}

		PrintQuestState(windowId, y, colorIndex);
	}
}

u8 GenerateSubquestState(u8 subquestId)
{

    if (IsSubquestCompletedState(subquestId))
	{
		StringCopy(gStringVar4, sSubQuests[subquestId].doneLabel);
	}
	else
	{
		StringCopy(gStringVar4, sText_Empty);
	}

	return 2;
}

u8 GenerateQuestState(u8 questId)
{
	if (QuestMenu_GetSetQuestState(questId, FLAG_GET_COMPLETED))
	{
		StringCopy(gStringVar4, sText_Done);
		return 2;
	}
	else if (QuestMenu_GetSetQuestState(questId, FLAG_GET_REWARD))
	{
		StringCopy(gStringVar4, sText_Reward);
		return 1;
	}
	else if (QuestMenu_GetSetQuestState(questId, FLAG_GET_ACTIVE))
	{
		StringCopy(gStringVar4, sText_Active);
		return 3;
	}
	else
	{
		StringCopy(gStringVar4, sText_Empty);
	}
}

void PrintQuestState(u8 windowId, u8 y, u8 colorIndex)
{
	QuestMenu_AddTextPrinterParameterized(windowId, 0, gStringVar4, 200, y, 0,
	                                      0, 0xFF, colorIndex);
}

static void GenerateAndPrintHeader(void)
{
	GenerateDenominatorNumQuests();
	GenerateNumeratorNumQuests();
	GenerateMenuContext();

	PrintNumQuests();
	PrintMenuContext();

	if (!IsSubquestMode())
	{
		PrintTypeFilterButton();
	}
}
static void GenerateDenominatorNumQuests(void)
{
	ConvertIntToDecimalStringN(gStringVar2, QUEST_COUNT,
	                           STR_CONV_MODE_LEFT_ALIGN, 6);
}

static void GenerateNumeratorNumQuests(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 parentQuest = sStateDataPtr->parentQuest;

	switch (mode)
	{
		case SORT_DEFAULT:
			ConvertIntToDecimalStringN(gStringVar1, CountUnlockedQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
		case SORT_INACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, CountInactiveQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
		case SORT_ACTIVE:
			ConvertIntToDecimalStringN(gStringVar1, CountActiveQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN, 6);
			break;
		case SORT_REWARD:
			ConvertIntToDecimalStringN(gStringVar1, CountRewardQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN, 6);
			break;
		case SORT_DONE:
			ConvertIntToDecimalStringN(gStringVar1, CountCompletedQuests(),
			                           STR_CONV_MODE_LEFT_ALIGN,
			                           6);
			break;
	}

	if (IsSubquestMode())
	{
		ConvertIntToDecimalStringN(gStringVar2,
		                           sQuests[parentQuest].numSubquests,
		                           STR_CONV_MODE_LEFT_ALIGN, 6);
		ConvertIntToDecimalStringN(gStringVar1, CountCompletedQuests(),
		                           STR_CONV_MODE_LEFT_ALIGN,
		                           6);
	}
}

static void GenerateMenuContext(void)
{
	u8 mode = sStateDataPtr->filterMode % 10;
	u8 parentQuest = sStateDataPtr->parentQuest;

	switch (mode)
	{
		case SORT_DEFAULT:
			sQuestNamePointer = StringCopy(sQuestNameArray[QUEST_ARRAY_COUNT],
			                              sText_AllHeader);
			break;
		case SORT_INACTIVE:
			sQuestNamePointer = StringCopy(sQuestNameArray[QUEST_ARRAY_COUNT],
			                              sText_InactiveHeader);
			break;
		case SORT_ACTIVE:
			sQuestNamePointer = StringCopy(sQuestNameArray[QUEST_ARRAY_COUNT],
			                              sText_ActiveHeader);
			break;
		case SORT_REWARD:
			sQuestNamePointer = StringCopy(sQuestNameArray[QUEST_ARRAY_COUNT],
			                              sText_RewardHeader);
			break;
		case SORT_DONE:
			sQuestNamePointer = StringCopy(sQuestNameArray[QUEST_ARRAY_COUNT],
			                              sText_CompletedHeader);
			break;
	}

	if (IsAlphaMode())
	{
		sQuestNamePointer = StringAppend(sQuestNameArray[QUEST_ARRAY_COUNT],
		                                sText_AZ);
	}
	if (IsSubquestMode())
	{
		sQuestNamePointer = StringCopy(sQuestNameArray[QUEST_ARRAY_COUNT],
		                              sQuests[parentQuest].name);

	}
}

static void PrintNumQuests(void)
{
	StringExpandPlaceholders(gStringVar4, sText_QuestNumberDisplay);
	QuestMenu_AddTextPrinterParameterized(2, 0, gStringVar4, 167, 1, 0, 1, 0,
	                                      0);
}
static void PrintMenuContext(void)
{
	QuestMenu_AddTextPrinterParameterized(2, 0,
	                                      sQuestNameArray[QUEST_ARRAY_COUNT], 10, 1, 0, 1, 0, 0);
}
static void PrintTypeFilterButton(void)
{
	QuestMenu_AddTextPrinterParameterized(2, 0, sText_Type, 198, 1,
	                                      0, 1, 0, 0);

}

static void Task_Main(u8 taskId)
{
	s16 *data = gTasks[taskId].data;
	s32 input = ListMenu_ProcessInput(data[0]);

	u8 selectedQuestId = sListMenuItems[GetCursorPosition()].id;

	if (!gPaletteFade.active)
	{
		ListMenuGetScrollAndRow(data[0], &sListMenuState.scroll,
		                        &sListMenuState.row);

		switch (input)
		{
			case LIST_NOTHING_CHOSEN:
				if (JOY_NEW(R_BUTTON))
				{
					ChangeModeAndCleanUp(taskId);
				}
				if (JOY_NEW(START_BUTTON))
				{
					ToggleAlphaModeAndCleanUp(taskId);
				}
				if (JOY_NEW(SELECT_BUTTON))
				{
					ToggleFavoriteAndCleanUp(taskId, selectedQuestId);
				}
				break;

			case LIST_CANCEL:
				if (IsSubquestMode())
				{
					ReturnFromSubquestAndCleanUp(taskId);
				}
				else
				{
					TurnOffQuestMenu(taskId);
				}
				break;

			default:
				if (!IsSubquestMode())
				{
					EnterSubquestModeAndCleanUp(taskId, data, input);
				}
				break;
		}
	}
}

u8 ManageFavorites(u8 selectedQuestId)
{
	if (QuestMenu_GetSetQuestState(selectedQuestId, FLAG_GET_FAVORITE))
	{
		QuestMenu_GetSetQuestState(selectedQuestId, FLAG_REMOVE_FAVORITE);
	}
	else
	{
		QuestMenu_GetSetQuestState(selectedQuestId, FLAG_SET_FAVORITE);
	}
}

static void Task_QuestMenuCleanUp(u8 taskId)
{
	s16 *data = gTasks[taskId].data;

	QuestMenu_RemoveScrollIndicatorArrowPair();
	DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
	ClearStdWindowAndFrameToTransparent(2, FALSE);

	InitItems();
	GenerateAndPrintHeader();
	AllocateResourcesForListMenu();
	BuildMenuTemplate();
	PlaceTopMenuScrollIndicatorArrows();

	if (sStateDataPtr->restoreCursor == TRUE)
	{
		RestoreSavedScrollAndRow(data);
	}
	else
	{
		ResetCursorToTop(data);
	}

}

static void RestoreSavedScrollAndRow(s16 *data)
{
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate,
	                       sListMenuState.storedScrollOffset,
	                       sListMenuState.storedRowPosition);
}
static void ResetCursorToTop(s16 *data)
{
	sListMenuState.row = 0;
	sListMenuState.scroll = 0;
	data[0] = ListMenuInit(&gMultiuseListMenuTemplate, sListMenuState.scroll,
	                       sListMenuState.row);
}

static void QuestMenu_RemoveScrollIndicatorArrowPair(void)
{
	if (sStateDataPtr->scrollIndicatorArrowPairId != 0xFF)
	{
		RemoveScrollIndicatorArrowPair(sStateDataPtr->scrollIndicatorArrowPairId);
		sStateDataPtr->scrollIndicatorArrowPairId = 0xFF;
	}
}


void EnterSubquestModeAndCleanUp(u8 taskId, s16 *data,
                                 s32 input)
{
	if (DoesQuestHaveChildrenAndNotInactive(input))
	{
		PrepareFadeOut(taskId);

		PlaySE(SE_SELECT);
		sStateDataPtr->parentQuest = input;
		sStateDataPtr->filterMode = ManageMode(SUB);
		SaveScrollAndRow(data);
		gTasks[taskId].func = Task_FadeOut;
	}
}
void ChangeModeAndCleanUp(u8 taskId)
{
	if (!IsSubquestMode())
	{
		PlaySE(SE_SELECT);
		sStateDataPtr->filterMode = ManageMode(INCREMENT);
		Task_QuestMenuCleanUp(taskId);
	}
}
void ToggleAlphaModeAndCleanUp(u8 taskId)
{
	if (!IsSubquestMode())
	{
		PlaySE(SE_SELECT);
		sStateDataPtr->filterMode = ManageMode(ALPHA);
		Task_QuestMenuCleanUp(taskId);
	}
}
void ToggleFavoriteAndCleanUp(u8 taskId, u8 selectedQuestId)
{
	if (!IsSubquestMode()
	            && !CheckSelectedIsCancel(selectedQuestId))
	{
		PlaySE(SE_SELECT);
		ManageFavorites(selectedQuestId);
		sStateDataPtr->restoreCursor = FALSE;
		Task_QuestMenuCleanUp(taskId);
	}
}
bool8 CheckSelectedIsCancel(u8 selectedQuestId)
{
	if (selectedQuestId == (0xFF - 1))
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
void ReturnFromSubquestAndCleanUp(u8 taskId)
{
	PrepareFadeOut(taskId);

	PlaySE(SE_SELECT);
	sStateDataPtr->filterMode = ManageMode(SUB);
	gTasks[taskId].func = Task_FadeOut;
}

static void SetGpuRegBaseForFade()
{
	//Sets the GPU registers to prepare for a hardware fade
	SetGpuReg(REG_OFFSET_BLDCNT,
	          BLDCNT_TGT1_OBJ | BLDCNT_TGT1_BG0 | BLDCNT_TGT2_BG1 |
	          BLDCNT_EFFECT_BLEND);      //Blend Sprites and BG0 into BG1
	SetGpuReg(REG_OFFSET_BLDY, 0);
}

#define MAX_FADE_INTENSITY 16
#define MIN_FADE_INTENSITY 0

void InitFadeVariables(u8 taskId, u8 blendWeight, u8 frameDelay,
                       u8 frameTimerBase, u8 delta)
{
	gTasks[taskId].data[1] = blendWeight;
	gTasks[taskId].data[2] = frameDelay;
	gTasks[taskId].data[3] = gTasks[taskId].data[frameTimerBase];
	gTasks[taskId].data[4] = delta;
}


static void PrepareFadeOut(u8 taskId)
{
	SetGpuRegBaseForFade();
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY, 0));
	InitFadeVariables(taskId, MAX_FADE_INTENSITY, 0, 2, 2);
}

static bool8 HandleFadeOut(u8 taskId)
{
	if (gTasks[taskId].data[3]-- != 0)
	{
		return FALSE;
	}

	//Set the timer, decrease the fade weight by the delta, increase the delta by the timer
	gTasks[taskId].data[3] = gTasks[taskId].data[2];
	gTasks[taskId].data[1] -= gTasks[taskId].data[4];
	gTasks[taskId].data[2] += gTasks[taskId].data[3];

	//When blend weight runs out, set final blend and quit
	if (gTasks[taskId].data[1] <= 0)
	{
		SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0, gTasks[taskId].data[1]));
		return TRUE;
	}
	//Set intermediate blend state
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
	            MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
	return FALSE;
}

static void PrepareFadeIn(u8 taskId)
{
	SetGpuRegBaseForFade();
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(0,
	            MAX_FADE_INTENSITY));
	InitFadeVariables(taskId, MIN_FADE_INTENSITY, 0, 1, 2);
}

static bool8 HandleFadeIn(u8 taskId)
{
	//Set the timer, ncrease the fade weight by the delta,
	gTasks[taskId].data[3] = gTasks[taskId].data[2];
	gTasks[taskId].data[1] += gTasks[taskId].data[4];

	//When blend weight reaches max, set final blend and quit
	if (gTasks[taskId].data[1] >= MAX_FADE_INTENSITY)
	{
		SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(MAX_FADE_INTENSITY,
		            MIN_FADE_INTENSITY));
		return TRUE;
	}
	//Set intermediate blend state
	SetGpuReg(REG_OFFSET_BLDALPHA, BLDALPHA_BLEND(gTasks[taskId].data[1],
	            MAX_FADE_INTENSITY - gTasks[taskId].data[1]));
	return FALSE;
}

static void Task_FadeOut(u8 taskId)
{
	if (HandleFadeOut(taskId))
	{
		PrepareFadeIn(taskId);
		Task_QuestMenuCleanUp(taskId);
		gTasks[taskId].func = Task_FadeIn;
	}
}

static void Task_FadeIn(u8 taskId)
{
	if (HandleFadeIn(taskId))
	{
		gTasks[taskId].func = Task_Main;
	}
}

static void Task_QuestMenuWaitFadeAndBail(u8 taskId)
{
	if (!gPaletteFade.active)
	{
		SetMainCallback2(sListMenuState.savedCallback);
		FreeResources();
		DestroyTask(taskId);
	}
}

static void FadeAndBail(void)
{
	BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
	CreateTask(Task_QuestMenuWaitFadeAndBail, 0);
	SetVBlankCallback(VBlankCB);
	SetMainCallback2(MainCB);
}


#define try_free(ptr) ({        \
		void ** ptr__ = (void **)&(ptr);   \
		if (*ptr__ != NULL)                \
			Free(*ptr__);                  \
	})

static void FreeResources(void)
{
	int i;

	try_free(sStateDataPtr);
	try_free(sBg1TilemapBuffer);
	try_free(sListMenuItems);

	for (i = QUEST_ARRAY_COUNT; i > -1; i--)
	{
		try_free(sQuestNameArray[i]);
	}

	try_free(sQuestNameArray);
	FreeAllWindowBuffers();
}

void TurnOffQuestMenu(u8 taskId)
{
	SetInitializedFlag(0);
	gTasks[taskId].func = Task_QuestMenuTurnOff1;
}
static void Task_QuestMenuTurnOff1(u8 taskId)
{
	BeginNormalPaletteFade(0xFFFFFFFF, 0, 0, 16, RGB_BLACK);
	gTasks[taskId].func = Task_QuestMenuTurnOff2;
}

static void Task_QuestMenuTurnOff2(u8 taskId)
{
	s16 *data = gTasks[taskId].data;

	if (!gPaletteFade.active)
	{
		DestroyListMenuTask(data[0], &sListMenuState.scroll, &sListMenuState.row);
		if (sStateDataPtr->savedCallback != NULL)
		{
			SetMainCallback2(sStateDataPtr->savedCallback);
		}
		else
		{
			SetMainCallback2(sListMenuState.savedCallback);
		}

		QuestMenu_RemoveScrollIndicatorArrowPair();
		FreeResources();
		DestroyTask(taskId);
	}
}

void Task_QuestMenu_OpenFromStartMenu(u8 taskId)
{
	s16 *data = gTasks[taskId].data;
	if (!gPaletteFade.active)
	{
		CleanupOverworldWindowsAndTilemaps();
		QuestMenu_Init(tItemPcParam, CB2_ReturnToFieldWithOpenMenu);
		DestroyTask(taskId);
	}
}

void QuestMenu_CopyQuestName(u8 *dst, u8 questId)
{
	StringCopy(dst, sQuests[questId].name);
}

void QuestMenu_CopySubquestName(u8 *dst, u8 subquestId)
{
	StringCopy(dst, sSubQuests[subquestId].name);
}

void QuestMenu_ResetMenuSaveData(void)
{
	memset(&gSaveBlock2Ptr->questData, 0,
	       sizeof(gSaveBlock2Ptr->questData));
	memset(&gSaveBlock2Ptr->subQuests, 0,
	       sizeof(gSaveBlock2Ptr->subQuests));
}
