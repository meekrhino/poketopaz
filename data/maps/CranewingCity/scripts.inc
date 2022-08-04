CranewingCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CranewingCity_OnTransition
	.byte 0


CranewingCity_Sign::
	setflag FLAG_SYS_QUEST_MENU_GET
	msgbox CranewingCity_Text_TownSign, MSGBOX_SIGN
	end


CranewingCity_GlassworksSign::
	msgbox CranewingCity_Text_GlassworksSign, MSGBOX_SIGN
	end


CranewingCity_Man::
	msgbox CranewingCity_Man_Text_0, MSGBOX_NPC
	end


CranewingCity_Scientist::
	msgbox CranewingCity_Scientist_Text_0, MSGBOX_NPC
	end


CranewingCity_Gentleman::
	msgbox CranewingCity_Gentleman_Text_0, MSGBOX_NPC
	end


CranewingCity_Escort::
	lockall
	applymovement 4, mExclamationPoint
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 18, CranewingCity_Escort_3
	case 19, CranewingCity_Escort_4
	case 20, CranewingCity_Escort_5
	case 21, CranewingCity_Escort_6
	case 22, CranewingCity_Escort_7
	case 23, CranewingCity_Escort_8
CranewingCity_Escort_1:
	waitmovement 0
	msgbox CranewingCity_Escort_Text_0
	waitmessage
	closemessage
	switch VAR_TEMP_0
	case 18, CranewingCity_Escort_11
	case 19, CranewingCity_Escort_12
	case 20, CranewingCity_Escort_13
	case 21, CranewingCity_Escort_14
	case 22, CranewingCity_Escort_15
	case 23, CranewingCity_Escort_16
CranewingCity_Escort_9:
	applymovement 4, mEscortFullMovement
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscortFull
	waitmovement 0
	msgbox CranewingCity_Escort_Text_1
	waitmessage
	closemessage
	applymovement 4, mEscortLeavesTheArea
	waitmovement 0
	removeobject 4
	setvar VAR_CRANEWING_CITY_STATE, 1
	releaseall
	end

CranewingCity_Escort_3:
	applymovement 4, mEscortApproaches_1
	goto CranewingCity_Escort_1

CranewingCity_Escort_4:
	applymovement 4, mEscortApproaches_2
	goto CranewingCity_Escort_1

CranewingCity_Escort_5:
	applymovement 4, mEscortApproaches_3
	goto CranewingCity_Escort_1

CranewingCity_Escort_6:
	applymovement 4, mEscortApproaches_4
	goto CranewingCity_Escort_1

CranewingCity_Escort_7:
	applymovement 4, mEscortApproaches_5
	goto CranewingCity_Escort_1

CranewingCity_Escort_8:
	applymovement 4, mEscortApproaches_6
	goto CranewingCity_Escort_1

CranewingCity_Escort_11:
	applymovement 4, mEscortMovement_1
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort1
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_12:
	applymovement 4, mEscortMovement_2
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort2
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_13:
	applymovement 4, mEscortMovement_3
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort3
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_14:
	applymovement 4, mEscortMovement_4
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort4
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_15:
	applymovement 4, mEscortMovement_5
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort5
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_16:
	applymovement 4, mEscortMovement_6
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort6
	waitmovement 0
	goto CranewingCity_Escort_9


CranewingCity_OnTransition:
	setflag FLAG_VISITED_CRANEWING_CITY
	call Common_EventScript_SetupRivalGfxId
	return


mEscortApproaches_1:
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

mEscortApproaches_2:
	walk_left
	walk_left
	walk_up
	step_end

mEscortApproaches_3:
	walk_left
	walk_up
	step_end

mEscortApproaches_4:
	walk_up
	step_end

mEscortApproaches_5:
	walk_right
	walk_up
	step_end

mEscortApproaches_6:
	walk_right
	walk_right
	walk_up
	step_end

mEscortMovement_1:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mEscortMovement_2:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mEscortMovement_3:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mEscortMovement_4:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mEscortMovement_5:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

mEscortMovement_6:
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

mPlayerFollowsEscort1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mPlayerFollowsEscort2:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mPlayerFollowsEscort3:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mPlayerFollowsEscort4:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

mPlayerFollowsEscort5:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

mPlayerFollowsEscort6:
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

mEscortFullMovement:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

mPlayerFollowsEscortFull:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

mEscortLeavesTheArea:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	set_invisible
	step_end

CranewingCity_Man_Text_0:
	.string "I ran into a scary spider Pokémon in the\n"
	.string "forest the other day.\p"
	.string "I'm not too prideful to admit it.\p"
	.string "Pokémon can be terrifying when you\n"
	.string "don't have your own.$"

CranewingCity_Scientist_Text_0:
	.string "I work at the Glassworks in town\n"
	.string "developing new products.\p"
	.string "I already have two patents in my five\n"
	.string "years at the company!\p"
	.string "I developed a new luxury glass for\n"
	.string "storing Potions in.$"

CranewingCity_Gentleman_Text_0:
	.string "A savvy trainer stores their money at\n"
	.string "the Cranewing City Bank!\p"
	.string "Keep your money safe and make a little\n"
	.string "bit besides!$"

CranewingCity_Escort_Text_0:
	.string "Hello there!\n"
	.string "You must be new in town!\p"
	.string "Have you visited the Glassworks yet?\p"
	.string "You just have to see it.\n"
	.string "Come with me!$"

CranewingCity_Escort_Text_1:
	.string "Here we are!\n"
	.string "This is the Glassworks!\p"
	.string "They make some incredible stuff, and\n"
	.string "there are always opportunities to get\l"
	.string "involved!\p"
	.string "Anyway, I hope you enjoy your stay.$"

CranewingCity_Text_TownSign::
	.string "Cranewing City\n"
	.string "“Home of the world-famous Glassworks!”$"

CranewingCity_Text_GlassworksSign::
	.string "Glassworks\n"
	.string "Makers of the finest glassware in two\l"
	.string "regions.$"
