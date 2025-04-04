#ifndef GUARD_FIELD_MESSAGE_BOX_H
#define GUARD_FIELD_MESSAGE_BOX_H

enum
{
    FIELD_MESSAGE_BOX_HIDDEN,
    FIELD_MESSAGE_BOX_UNUSED,
    FIELD_MESSAGE_BOX_NORMAL,
    FIELD_MESSAGE_BOX_AUTO_SCROLL,
};

enum
{
    FIELD_MSG_BOX_POSITION_BOTTOM,
    FIELD_MSG_BOX_POSITION_TOP,
};

enum
{
    FIELD_MSG_BOX_MOVEMENT_FREE,
    FIELD_MSG_BOX_MOVEMENT_START_TOP,
    FIELD_MSG_BOX_MOVEMENT_LOCK_TOP,
    FIELD_MSG_BOX_MOVEMENT_LOCK_BOTTOM,
};

extern u8 gMessageBoxPosition;

bool8 ShowFieldMessage(const u8 *message);
bool8 ShowPokenavFieldMessage(const u8 *message);
bool8 ShowFieldMessageFromBuffer(void);
bool8 ShowFieldAutoScrollMessage(const u8 *message);
void HideFieldMessageBox(void);
bool8 IsFieldMessageBoxHidden(void);
u8 GetFieldMessageBoxMode(void);
void StopFieldMessage(void);
void InitFieldMessageBox(void);
void StopFieldMessage(void);
void ToggleMsgBoxPosition(void);
void UpdateMsgBoxPosition(void);
void AllowMsgBoxMove(void);
void LockMsgBoxBottom(void);
void LockMsgBoxTop(void);
void StartMsgBoxBottom(void);

#endif // GUARD_FIELD_MESSAGE_BOX_H
