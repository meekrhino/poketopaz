NeoBay_PlayersHouse_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PlayersHouse_1F_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_NEOBAY_STATE, 0, BradleyWasLookingForYou
	.2byte 0


PlayersHouse_1F_BradleyReminder::
	switch VAR_NEOBAY_STATE
	case 1, PlayersHouse_1F_BradleyReminder_3
	case 6, PlayersHouse_1F_BradleyReminder_4
	case 7, PlayersHouse_1F_BradleyReminder_5
	case 8, PlayersHouse_1F_BradleyReminder_6
	case 9, PlayersHouse_1F_BradleyReminder_7
PlayersHouse_1F_BradleyReminder_1:
	end

PlayersHouse_1F_BradleyReminder_3:
	msgbox PlayersHouse_1F_BradleyReminder_Text_0, MSGBOX_NPC
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_4:
	call MomGivesRunningShoes
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_5:
	msgbox PlayersHouse_1F_BradleyReminder_Text_1, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_6:
	msgbox PlayersHouse_1F_BradleyReminder_Text_2, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_7:
	msgbox PlayersHouse_1F_BradleyReminder_Text_3, MSGBOX_NPC
	call Common_EventScript_OutOfCenterPartyHeal
	goto PlayersHouse_1F_BradleyReminder_1


PlayersHouse_1F_OnTransition:
	setrespawn HEAL_LOCATION_NEO_BAY
	switch VAR_NEOBAY_STATE
	case 6, PlayersHouse_1F_OnTransition_3
	case 7, PlayersHouse_1F_OnTransition_4
PlayersHouse_1F_OnTransition_1:
	end

PlayersHouse_1F_OnTransition_3:
	setobjectxyperm 1, 2, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	goto PlayersHouse_1F_OnTransition_1

PlayersHouse_1F_OnTransition_4:
	setobjectxyperm 1, 3, 4
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	goto PlayersHouse_1F_OnTransition_1


BradleyWasLookingForYou:
	lockall
	setvar VAR_NEOBAY_STATE, 1
	playse SE_PIN
	applymovement 1, mLookUpStartled
	waitmovement 0
	delay 48
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksOverToMom
	waitmovement 0
	msgbox PlayersHouse_1F_BradleyWasLookingForYou, MSGBOX_AUTOCLOSE
	setflag FLAG_SYS_QUEST_MENU_GET
	quest_start QUEST_GETTING_STARTED
	openquestmenu
	releaseall
	end


MomGivesRunningShoes:
	lockall
	faceplayer
	setvar VAR_NEOBAY_STATE, 7
	msgbox MomGivesRunningShoes_Text_0
	waitmessage
	closemessage
	applymovement 1, mMomDeliberates1
	waitmovement 1
	msgbox MomGivesRunningShoes_Text_1
	waitmessage
	closemessage
	applymovement 1, mMomDeliberates2
	waitmovement 1
	msgbox PlayersHouse_1F_GivesRunningShoes
	waitmessage
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	message MomGivesRunningShoes_Text_2
	waitfanfare
	setflag FLAG_SYS_B_DASH
	msgbox PlayersHouse_1F_SayGoodbye
	waitmessage
	closemessage
	releaseall
	return


mMomDeliberates1:
	walk_slow_left
	walk_slow_left
	face_up
	delay_16
	walk_in_place_slow_up
	walk_in_place_slow_up
	delay_16
	walk_slow_right
	face_up
	walk_in_place_slow_up
	walk_in_place_slow_up
	delay_16
	delay_16
	face_left
	step_end

mMomDeliberates2:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	face_down
	step_end

mPlayerWalksOverToMom:
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

PlayersHouse_1F_BradleyReminder_Text_0:
	.string "Mom: Bradley was looking for you, dear.\n"
	.string "He said you'd know where to find him.$"

PlayersHouse_1F_BradleyReminder_Text_1:
	.string "Mom: I'll be fine. Here, why not have a\n"
	.string "quick rest?$"

PlayersHouse_1F_BradleyReminder_Text_2:
	.string "Mom: Welcome home, dear!\n"
	.string "I think I saw Bradley come back, did you\l"
	.string "see him?\p"
	.string "Before you go, why not have a quick\n"
	.string "rest?$"

PlayersHouse_1F_BradleyReminder_Text_3:
	.string "Mom: How nice to see you!\n"
	.string "I hope your adventure is going well.\p"
	.string "Why not have a quick rest?$"

MomGivesRunningShoes_Text_0:
	.string "Mom: Hi {PLAYER}. Where have you been\n"
	.string "all day?\p"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\p"
	.string "Wow, that sounds like an adventure.\n"
	.string "But I'm not sure I like the idea of you\l"
	.string "leaving…$"

MomGivesRunningShoes_Text_1:
	.string "Mom: It's dangerous out there,\n"
	.string "{PLAYER}.\p"
	.string "I don't think you have any idea…$"

MomGivesRunningShoes_Text_2:
	.string "{PLAYER} put on the\nRunning Shoes.$"

PlayersHouse_1F_BradleyWasLookingForYou::
	.string "Mom: Oh {PLAYER}!\n"
	.string "Bradley just came by looking for you.\p"
	.string "He said it was urgent, but I sent him\n"
	.string "away because you were still asleep.\p"
	.string "You should go find him, he was very\n"
	.string "excited.\p"
	.string "Well, even more excited than he usually\n"
	.string "is.$"

PlayersHouse_1F_GivesRunningShoes::
	.string "Mom: I understand that you want to\n"
	.string "find Simon, but there's no telling where\l"
	.string "he could be now.\p"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\l"
	.string "… … …\p"
	.string "I guess I've held you back for long\n"
	.string "enough.\p"
	.string "You'll be with your Pokémon.\n"
	.string "That should be enough.\p"
	.string "But take these with you, {PLAYER},\n"
	.string "and make sure you use them.$"

PlayersHouse_1F_SayGoodbye::
	.string "Mom: If you're ever in danger, or you\n"
	.string "need to come home, these running shoes\l"
	.string "will help you move much faster.\p"
	.string "I'll miss you, {PLAYER}.\p"
	.string "Make sure you come home once in a while.$"
