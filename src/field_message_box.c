#include "global.h"
#include "menu.h"
#include "main.h"
#include "string_util.h"
#include "task.h"
#include "text.h"
#include "match_call.h"
#include "field_message_box.h"
#include "printf.h"
#include "mgba.h"

static EWRAM_DATA u8 sFieldMessageBoxMode = 0;
static EWRAM_DATA bool8 sAllowMsgBoxMove = FALSE;

u8 gMessageBoxPosition;

static void ExpandStringAndStartDrawFieldMessage(const u8*, bool32);
static void StartDrawFieldMessage(void);

void InitFieldMessageBox(void)
{
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
    sAllowMsgBoxMove = TRUE;
    gTextFlags.canABSpeedUpPrint = FALSE;
    gTextFlags.useAlternateDownArrow = FALSE;
    gTextFlags.autoScroll = FALSE;
    gTextFlags.forceMidTextSpeed = FALSE;
    mgba_printf(MGBA_LOG_DEBUG, "InitFieldMessageBox");
    gMessageBoxPosition = FIELD_MSG_BOX_POSITION_BOTTOM;
}

#define tState data[0]

static void Task_DrawFieldMessage(u8 taskId)
{
    struct Task *task = &gTasks[taskId];

    switch (task->tState)
    {
        case 0:
            LoadMessageBoxAndBorderGfx();
            task->tState++;
            break;
        case 1:
            DrawDialogueFrame(0, TRUE);
            task->tState++;
            break;
        case 2:
            if (RunTextPrintersAndIsPrinter0Active() != TRUE)
            {
                mgba_printf(MGBA_LOG_DEBUG, "End Task");
                sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
                DestroyTask(taskId);
            }
    }
}

#undef tState

static void CreateTask_DrawFieldMessage(void)
{
    CreateTask(Task_DrawFieldMessage, 0x50);
}

static void DestroyTask_DrawFieldMessage(void)
{
    u8 taskId = FindTaskIdByFunc(Task_DrawFieldMessage);
    if (taskId != TASK_NONE)
        DestroyTask(taskId);
}

bool8 ShowFieldMessage(const u8 *str)
{
    UpdateMsgBoxPosition();
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    ExpandStringAndStartDrawFieldMessage(str, TRUE);
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_NORMAL;
    return TRUE;
}

static void Task_HidePokenavMessageWhenDone(u8 taskId)
{
    if (!IsMatchCallTaskActive())
    {
        sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
        DestroyTask(taskId);
    }
}

bool8 ShowPokenavFieldMessage(const u8 *str)
{
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    StringExpandPlaceholders(gStringVar4, str);
    CreateTask(Task_HidePokenavMessageWhenDone, 0);
    StartMatchCallFromScript(str);
    sFieldMessageBoxMode = 2;
    return TRUE;
}

bool8 ShowFieldAutoScrollMessage(const u8 *str)
{
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_AUTO_SCROLL;
    ExpandStringAndStartDrawFieldMessage(str, FALSE);
    return TRUE;
}

// Unused
static bool8 ForceShowFieldAutoScrollMessage(const u8 *str)
{
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_AUTO_SCROLL;
    ExpandStringAndStartDrawFieldMessage(str, TRUE);
    return TRUE;
}

// Same as ShowFieldMessage, but instead of accepting a
// string arg it just prints whats already in gStringVar4
bool8 ShowFieldMessageFromBuffer(void)
{
    if (sFieldMessageBoxMode != FIELD_MESSAGE_BOX_HIDDEN)
        return FALSE;
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_NORMAL;
    StartDrawFieldMessage();
    return TRUE;
}

static void ExpandStringAndStartDrawFieldMessage(const u8* str, bool32 allowSkippingDelayWithButtonPress)
{
    StringExpandPlaceholders(gStringVar4, str);
    AddTextPrinterForMessage(allowSkippingDelayWithButtonPress);
    CreateTask_DrawFieldMessage();
}

static void StartDrawFieldMessage(void)
{
    AddTextPrinterForMessage(TRUE);
    CreateTask_DrawFieldMessage();
}

void HideFieldMessageBox(void)
{
    DestroyTask_DrawFieldMessage();
    ClearDialogWindowAndFrame(0, TRUE);
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
}

u8 GetFieldMessageBoxMode(void)
{
    return sFieldMessageBoxMode;
}

bool8 IsFieldMessageBoxHidden(void)
{
    if (sFieldMessageBoxMode == FIELD_MESSAGE_BOX_HIDDEN)
        return TRUE;
    return FALSE;
}

// Unused
static void ReplaceFieldMessageWithFrame(void)
{
    DestroyTask_DrawFieldMessage();
    DrawStdWindowFrame(0, TRUE);
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
}

void StopFieldMessage(void)
{
    DestroyTask_DrawFieldMessage();
    sFieldMessageBoxMode = FIELD_MESSAGE_BOX_HIDDEN;
}

void UpdateMsgBoxPosition(void)
{
    mgba_printf(MGBA_LOG_DEBUG, "UpdateMsgBoxPosition");
    if (!sAllowMsgBoxMove || gMessageBoxPosition == FIELD_MSG_BOX_POSITION_BOTTOM)
        SetWindowAttribute(0, WINDOW_TILEMAP_TOP, TEXT_BOX_POSITION_BOTTOM);
    else if (gMessageBoxPosition == FIELD_MSG_BOX_POSITION_TOP)
        SetWindowAttribute(0, WINDOW_TILEMAP_TOP, TEXT_BOX_POSITION_TOP);
}

void ToggleMsgBoxPosition(void)
{
    mgba_printf(MGBA_LOG_DEBUG, "ToggleMsgBoxPosition");
    CallWindowFunction(0, WindowFunc_ClearDialogWindowAndFrame);
    ClearWindowTilemap(0);
    if (gMessageBoxPosition == FIELD_MSG_BOX_POSITION_BOTTOM)
        gMessageBoxPosition = FIELD_MSG_BOX_POSITION_TOP;
    else if (gMessageBoxPosition == FIELD_MSG_BOX_POSITION_TOP)
        gMessageBoxPosition = FIELD_MSG_BOX_POSITION_BOTTOM;
    UpdateMsgBoxPosition();
    CallWindowFunction(0, WindowFunc_DrawDialogueFrame);
    PutWindowTilemap(0);
    ScheduleBgCopyTilemapToVram(0);
}

void AllowMsgBoxMove(void)
{
    sAllowMsgBoxMove = TRUE;
}

void LockMsgBoxPosition(void)
{
    sAllowMsgBoxMove = FALSE;
}
