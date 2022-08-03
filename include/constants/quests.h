#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         6   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         7   //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       8   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    9   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_GETTING_STARTED        0
#define QUEST_AMPURE_RESCUE          1
#define QUEST_3                      2
#define QUEST_4                      3
#define QUEST_COUNT                 (QUEST_4 + 1)

#define QUEST_1_SUB_START       0
#define SUB_QUEST_1             QUEST_1_SUB_START + 0
#define SUB_QUEST_2             QUEST_1_SUB_START + 1
#define SUB_QUEST_3             QUEST_1_SUB_START + 2
#define QUEST_1_SUB_END         SUB_QUEST_3
#define QUEST_1_SUB_COUNT       (QUEST_1_SUB_END - QUEST_1_SUB_START + 1)

#define QUEST_2_SUB_START       QUEST_1_SUB_END + 1
#define SUB_QUEST_4             QUEST_2_SUB_START + 0
#define SUB_QUEST_5             QUEST_2_SUB_START + 1
#define SUB_QUEST_6             QUEST_2_SUB_START + 2
#define SUB_QUEST_7             QUEST_2_SUB_START + 3
#define SUB_QUEST_8             QUEST_2_SUB_START + 4
#define QUEST_2_SUB_END         SUB_QUEST_8
#define QUEST_2_SUB_COUNT       (QUEST_2_SUB_END - QUEST_2_SUB_START + 1)

#define SUB_QUEST_COUNT (QUEST_1_SUB_COUNT + QUEST_2_SUB_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H
