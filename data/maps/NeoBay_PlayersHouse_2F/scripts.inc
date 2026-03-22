NeoBay_PlayersHouse_2F_MapScripts::
# 7 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 8 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	map_script_2 FLAG_SAW_JIRACHI_PROGRAM, 0, PlayersHouse_WatchJirachiProgram
	.2byte 0


NeoBay_PlayersHouse_2F_PC::
# 18 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	lockall
# 19 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_PLAYERS_HOUSE
# 20 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	special DoPCTurnOnEffect
# 21 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	playse SE_PC_ON
# 22 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
# 23 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	special BedroomPC
# 24 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	waitstate
# 25 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	releaseall
	end


NeoBay_PlayersHouse_2F_TurnOffPlayerPC::
# 30 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	setvar VAR_0x8004, PC_LOCATION_PLAYERS_HOUSE
# 31 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	playse SE_PC_OFF
# 32 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	special DoPCTurnOffEffect
# 33 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	releaseall
	end


NeoBay_PlayersHouse_2F_Notebook::
# 38 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	msgbox NeoBay_PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end


NeoBay_PlayersHouse_2F_GameCube::
# 43 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	msgbox NeoBay_PlayersHouse_2F_Text_GameCube, MSGBOX_SIGN
	end


NeoBay_PlayersHouse_2F_Drawer::
# 48 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	msgbox NeoBay_PlayersHouse_2F_Text_Drawer, MSGBOX_SIGN
	end


NeoBay_PlayersHouse_WallClock::
# 53 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	goto_if_set FLAG_SET_WALL_CLOCK, NeoBay_PlayersHouse_WallClock_2
NeoBay_PlayersHouse_WallClock_1:
# 56 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	msgbox NeoBay_PlayersHouse_2F_ClockStopped, MSGBOX_DEFAULT
# 57 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	special StartWallClock
# 59 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	waitstate
# 60 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	delay 30
# 61 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SET_WALL_CLOCK
# 62 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	releaseall
	end

NeoBay_PlayersHouse_WallClock_2:
# 54 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	goto NeoBay_PlayersHouse_CheckWallClock
	goto NeoBay_PlayersHouse_WallClock_1


NeoBay_PlayersHouse_CheckWallClock::
# 67 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	incrementgamestat GAME_STAT_CHECKED_CLOCK
# 68 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 69 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	special Special_ViewWallClock
# 70 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	waitstate
# 71 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	releaseall
	end


PlayersHouse_WatchJirachiProgram:
# 79 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	lockall
# 80 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	setflag FLAG_SAW_JIRACHI_PROGRAM
# 81 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	special TurnOnTVScreen
# 82 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	delay 64
# 83 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	playse SE_PIN
# 84 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mLookUpStartled
# 85 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 86 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mGoWatchJirachiProgram
# 87 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	waitmovement 0
# 88 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	msgbox PlayersHouse_2F_JirachiProgram
# 89 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	waitmessage
# 90 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	closemessage
# 91 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	releaseall
	return


# 141 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
mGoWatchJirachiProgram:
# 142 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	delay_16
# 142 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	delay_16
# 142 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	delay_16
# 142 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	delay_16
# 143 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	walk_up
# 143 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	walk_up
	step_end

PlayersHouse_2F_JirachiProgram::
# 98 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	.string "The day foretold in the ancient legend\n"
	.string "is almost here!\p"
	.string "The 1000-year celebration marking the\n"
	.string "awakening of Jirachi!\p"
	.string "Music, food, and entertainment galore,\n"
	.string "featuring a live performance by\l"
	.string "DJ Dane!\p"
	.string "Don't miss out on the festivities!…$"

NeoBay_PlayersHouse_2F_Text_Notebook::
# 107 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"

NeoBay_PlayersHouse_2F_Text_GameCube::
# 118 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"

NeoBay_PlayersHouse_2F_Text_Drawer::
# 126 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	.string "{PLAYER} pulled open the drawer.\p"
	.string "The clothes inside are in complete\n"
	.string "disarray.$"

NeoBay_PlayersHouse_2F_ClockStopped::
# 133 "data/maps/NeoBay_PlayersHouse_2F/scripts.pory"
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"
