PlayersHouse_2F_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

PlayersHouse_2F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 FLAG_SAW_JIRACHI_PROGRAM, 0, PlayersHouse_WatchJirachiProgram
	.2byte 0


PlayersHouse_WatchJirachiProgram:
	lockall
	setflag FLAG_SAW_JIRACHI_PROGRAM
	delay 60
	special TurnOnTVScreen
	delay 30
	applymovement 0xFF, mGoWatchJirachiProgram
	msgbox PlayersHouse_2F_JirachiProgram
	waitmessage
	closemessage
	delay 30
	special TurnOffTVScreen
	releaseall
	return


mGoWatchJirachiProgram:
	emote_exclamation_mark
	face_up
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
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
