NeoBay_PlayersHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 FLAG_SAW_JIRACHI_PROGRAM, 0, PlayersHouse_WatchJirachiProgram
	.2byte 0


NeoBay_PlayersHouse_2F_PC::
	lockall
	setvar VAR_0x8004, PC_LOCATION_PLAYERS_HOUSE
	special DoPCTurnOnEffect
	playse SE_PC_ON
	msgbox gText_PlayerHouseBootPC, MSGBOX_DEFAULT
	special BedroomPC
	waitstate
	releaseall
	end


NeoBay_PlayersHouse_2F_TurnOffPlayerPC::
	setvar VAR_0x8004, PC_LOCATION_PLAYERS_HOUSE
	playse SE_PC_OFF
	special DoPCTurnOffEffect
	releaseall
	end


NeoBay_PlayersHouse_2F_Notebook::
	msgbox NeoBay_PlayersHouse_2F_Text_Notebook, MSGBOX_SIGN
	end


NeoBay_PlayersHouse_2F_GameCube::
	msgbox NeoBay_PlayersHouse_2F_Text_GameCube, MSGBOX_SIGN
	end


NeoBay_PlayersHouse_2F_Drawer::
	msgbox NeoBay_PlayersHouse_2F_Text_Drawer, MSGBOX_SIGN
	end


NeoBay_PlayersHouse_2F_WallClock::
	goto_if_set FLAG_SET_WALL_CLOCK, NeoBay_PlayersHouse_2F_WallClock_2
NeoBay_PlayersHouse_2F_WallClock_1:
	msgbox NeoBay_PlayersHouse_2F_ClockStopped, MSGBOX_DEFAULT
	call NeoBay_PlayersHouse_2F_SetWallClock
	delay 30
	setflag FLAG_SET_WALL_CLOCK
	releaseall
	end

NeoBay_PlayersHouse_2F_WallClock_2:
	goto NeoBay_PlayersHouse_2F_CheckWallClock
	goto NeoBay_PlayersHouse_2F_WallClock_1


NeoBay_PlayersHouse_2F_CheckWallClock::
	incrementgamestat GAME_STAT_CHECKED_CLOCK
	fadescreen FADE_TO_BLACK
	special Special_ViewWallClock
	waitstate
	releaseall
	end


NeoBay_PlayersHouse_2F_SetWallClock::
	fadescreen FADE_TO_BLACK
	special StartWallClock
	waitstate
	return


PlayersHouse_WatchJirachiProgram:
	lockall
	setflag FLAG_SAW_JIRACHI_PROGRAM
	special TurnOnTVScreen
	delay 64
	playse SE_PIN
	applymovement OBJ_EVENT_ID_PLAYER, mLookUpStartled
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, mGoWatchJirachiProgram
	waitmovement 0
	msgbox PlayersHouse_2F_JirachiProgram
	waitmessage
	closemessage
	releaseall
	return


mGoWatchJirachiProgram:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	step_end

PlayersHouse_2F_JirachiProgram::
	.string "The day foretold in the ancient legend\n"
	.string "is almost here!\p"
	.string "The 1000-year celebration marking the\n"
	.string "awakening of Jirachi!\p"
	.string "Music, food, and entertainment galore,\n"
	.string "featuring a live performance by\l"
	.string "DJ Dane!\p"
	.string "Don't miss out on the festivities!…$"

NeoBay_PlayersHouse_2F_Text_Notebook::
	.string "{PLAYER} flipped open the notebook.\p"
	.string "ADVENTURE RULE NO. 1\n"
	.string "Open the MENU with START.\p"
	.string "ADVENTURE RULE NO. 2\n"
	.string "Record your progress with SAVE.\p"
	.string "The remaining pages are blank…$"

NeoBay_PlayersHouse_2F_Text_GameCube::
	.string "It's a Nintendo GameCube.\p"
	.string "A Game Boy Advance is connected to\n"
	.string "serve as the Controller.$"

NeoBay_PlayersHouse_2F_Text_Drawer::
	.string "{PLAYER} pulled open the drawer.\p"
	.string "The clothes inside are in complete\n"
	.string "disarray.$"

NeoBay_PlayersHouse_2F_ClockStopped::
	.string "The clock is stopped…\p"
	.string "Better set it and start it!$"
