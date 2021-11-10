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
	case 4, PlayersHouse_1F_BradleyReminder_4
PlayersHouse_1F_BradleyReminder_1:
	end

PlayersHouse_1F_BradleyReminder_3:
	msgbox PlayersHouse_1F_BradleyReminder_Text_0, MSGBOX_NPC
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_4:
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, PlayersHouse_1F_BradleyReminder_5
	call MomGivesRunningShoes
	goto PlayersHouse_1F_BradleyReminder_1

PlayersHouse_1F_BradleyReminder_5:
	msgbox PlayersHouse_1F_BradleyReminder_Text_1, MSGBOX_NPC
	goto PlayersHouse_1F_BradleyReminder_1


PlayersHouse_1F_OnTransition:
	compare VAR_NEOBAY_STATE, 4
	goto_if_eq PlayersHouse_1F_OnTransition_1
	return

PlayersHouse_1F_OnTransition_1:
	goto_if_set FLAG_RECEIVED_RUNNING_SHOES, PlayersHouse_1F_OnTransition_3
	setobjectxyperm 1, 3, 4
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

PlayersHouse_1F_OnTransition_3:
	setobjectxyperm 1, 2, 2
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


BradleyWasLookingForYou:
	lockall
	setvar VAR_NEOBAY_STATE, 1
	applymovement 1, mExclamationPoint
	applymovement 1, mFaceUp
	waitmovement 1
	msgbox PlayersHouse_1F_BradleyWasLookingForYou, MSGBOX_AUTOCLOSE
	releaseall
	end


MomGivesRunningShoes:
	lockall
	faceplayer
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
	setflag FLAG_RECEIVED_RUNNING_SHOES
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
	walk_right
	face_down
	step_end

PlayersHouse_1F_BradleyReminder_Text_0:
	.string "Mom: Bradley was looking for you, dear.\l"
	.string "He said you'd know where to find him.$"

PlayersHouse_1F_BradleyReminder_Text_1:
	.string "Mom: I'll be fine. You shouldn't keep the\n"
	.string "professor waiting.$"

MomGivesRunningShoes_Text_0:
	.string "Mom: Hi {PLAYER}. Where have you been\n"
	.string "all day?\p"
	.string "… … …\p"
	.string "Wow, it sounds like an adventure.\l"
	.string "But I'm not sure I like the idea of you\l"
	.string "leaving…$"

MomGivesRunningShoes_Text_1:
	.string "Mom: It's dangerous out there,\n"
	.string "{PLAYER}. I don't think you have any\l"
	.string "idea…$"

MomGivesRunningShoes_Text_2:
	.string "{PLAYER} put on the\nRunning Shoes.$"

PlayersHouse_1F_BradleyWasLookingForYou::
	.string "Mom: Oh {PLAYER}! Your friend Bradley\n"
	.string "just came by looking for you.\p"
	.string "He said it was urgent, but I sent him\n"
	.string "away because you were still napping.\p"
	.string "You should go find him, he was very\n"
	.string "excited.\l"
	.string "Well, more excited than he usually is!$"

PlayersHouse_1F_GivesRunningShoes::
	.string "Mom: I understand that you want to find\n"
	.string "Simon, but there's no telling where he\l"
	.string "could be now.\p"
	.string "… … …\n"
	.string "I guess I've held you back for long\l"
	.string "enough. You'll be with your Pokémon.\l"
	.string "That should be enough.\p"
	.string "But take these with you, {PLAYER},\n"
	.string "and make sure you use them.$"

PlayersHouse_1F_SayGoodbye::
	.string "Mom: If you're ever in danger, or you\n"
	.string "need to come home, these running shoes\l"
	.string "will help you move much faster.\p"
	.string "I'll miss you, {PLAYER}. Make sure you\n"
	.string "come home once in a while.$"
