NeoBay_PlayersHouse_1F_MapScripts::
# 20 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayersHouse_1F_OnTransition
# 21 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 22 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 0, BradleyWasLookingForYou
	.2byte 0


PlayersHouse_1F_BradleyReminder::
# 30 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	switch VAR_NEOBAY_STATE
# 31 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	case 1, PlayersHouse_1F_BradleyReminder_3
# 33 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	case 6, PlayersHouse_1F_BradleyReminder_4
# 35 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	case 7, PlayersHouse_1F_BradleyReminder_5
# 38 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	case 8, PlayersHouse_1F_BradleyReminder_6
# 41 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	case 9, PlayersHouse_1F_BradleyReminder_7
PlayersHouse_1F_BradleyReminder_1:
	end

PlayersHouse_1F_BradleyReminder_3:
# 32 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_BradleyReminder_Text_0, MSGBOX_NPC
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_4:
# 34 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	call MomGivesRunningShoes
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_5:
# 36 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_BradleyReminder_Text_1, MSGBOX_NPC
# 37 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_6:
# 39 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_BradleyReminder_Text_2, MSGBOX_NPC
# 40 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_7:
# 42 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_BradleyReminder_Text_3, MSGBOX_NPC
# 43 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
	goto PlayersHouse_1F_BradleyReminder_1


NeoBay_PlayersHouse_1F_Cabinet::
# 49 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox NeoBay_PlayersHouse_1F_Cabinet_Text_0, MSGBOX_SIGN
	end


PlayersHouse_1F_OnTransition:
# 57 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_NEO_BAY
# 58 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	switch VAR_NEOBAY_STATE
# 59 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	case 6, PlayersHouse_1F_OnTransition_3
# 62 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	case 7, PlayersHouse_1F_OnTransition_4
PlayersHouse_1F_OnTransition_1:
	end

PlayersHouse_1F_OnTransition_3:
# 60 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setobjectxyperm 1, 2, 2
# 61 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	goto PlayersHouse_1F_OnTransition_1

PlayersHouse_1F_OnTransition_4:
# 63 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setobjectxyperm 1, 3, 4
# 64 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	goto PlayersHouse_1F_OnTransition_1


BradleyWasLookingForYou:
# 70 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	lockall
# 71 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setvar VAR_NEOBAY_STATE, 1
# 72 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	playse SE_PIN
# 73 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	applymovement 1, mLookUpStartled
# 74 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 75 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay 48
# 76 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksOverToMom
# 77 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmovement 0
# 78 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_BradleyWasLookingForYou, MSGBOX_AUTOCLOSE
# 79 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_QUEST_MENU_GET
# 80 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	quest_start QUEST_GETTING_STARTED
# 81 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	openquestmenu
# 82 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	releaseall
	end


MomGivesRunningShoes:
# 87 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	lockall
# 88 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	faceplayer
# 89 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setvar VAR_NEOBAY_STATE, 7
# 90 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox MomGivesRunningShoes_Text_0
# 91 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmessage
# 92 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	closemessage
# 93 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	applymovement 1, mMomDeliberates1
# 94 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 95 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox MomGivesRunningShoes_Text_1
# 96 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmessage
# 97 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	closemessage
# 98 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	applymovement 1, mMomDeliberates2
# 99 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 100 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_GivesRunningShoes
# 101 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmessage
# 102 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	closemessage
# 103 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 104 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	message MomGivesRunningShoes_Text_2
# 105 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitfanfare
# 106 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 107 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_SayGoodbye
# 108 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	waitmessage
# 109 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	closemessage
# 110 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 111 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 152 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
mMomDeliberates1:
# 153 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_slow_left
# 153 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_slow_left
# 154 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_up
# 155 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 156 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_up
# 156 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_up
# 157 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 158 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_slow_right
# 159 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_up
# 160 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_up
# 160 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_up
# 161 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 161 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 162 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_left
	step_end

# 165 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
mMomDeliberates2:
# 166 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 166 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 166 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 166 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	delay_16
# 167 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_right
# 168 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_in_place_slow_down
	step_end

# 171 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
mPlayerWalksOverToMom:
# 172 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_left
# 172 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_left
# 173 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_down
# 173 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	walk_down
	step_end

PlayersHouse_1F_BradleyReminder_Text_0:
# 32 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: Bradley was looking for you, dear.\n"
	.string "He said you'd know where to find him.$"

PlayersHouse_1F_BradleyReminder_Text_1:
# 36 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: I'll be fine. Here, why not have a\n"
	.string "quick rest?$"

PlayersHouse_1F_BradleyReminder_Text_2:
# 39 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: Welcome home, dear!\n"
	.string "I think I saw Bradley come back, did you\l"
	.string "see him?\p"
	.string "Before you go, why not have a quick\n"
	.string "rest?$"

PlayersHouse_1F_BradleyReminder_Text_3:
# 42 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: How nice to see you!\n"
	.string "I hope your adventure is going well.\p"
	.string "Why not have a quick rest?$"

NeoBay_PlayersHouse_1F_Cabinet_Text_0:
# 49 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "The cabinet is full of dishware.$"

MomGivesRunningShoes_Text_0:
# 90 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: Hi {PLAYER}. Where have you been\n"
	.string "all day?\p"
	.string "… … …\n"
	.string "… … …\l"
	.string "… … …\p"
	.string "Wow, that sounds like an adventure.\n"
	.string "But I'm not sure I like the idea of you\l"
	.string "leaving…$"

MomGivesRunningShoes_Text_1:
# 95 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: It's dangerous out there,\n"
	.string "{PLAYER}.\p"
	.string "I don't think you have any idea…$"

MomGivesRunningShoes_Text_2:
# 104 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "{PLAYER} put on the\nRunning Shoes.$"

PlayersHouse_1F_BradleyWasLookingForYou::
# 118 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: Oh {PLAYER}!\n"
	.string "Bradley just came by looking for you.\p"
	.string "He said it was urgent, but I sent him\n"
	.string "away because you were still asleep.\p"
	.string "You should go find him, he was very\n"
	.string "excited.\p"
	.string "Well, even more excited than he usually\n"
	.string "is.$"

PlayersHouse_1F_GivesRunningShoes::
# 128 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
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
# 140 "data/maps/NeoBay_PlayersHouse_1F/scripts.pory"
	.string "Mom: If you're ever in danger, or you\n"
	.string "need to come home, these running shoes\l"
	.string "will help you move much faster.\p"
	.string "I'll miss you, {PLAYER}.\p"
	.string "Make sure you come home once in a while.\p"
	.string "And have a quick rest before you leave?$"
