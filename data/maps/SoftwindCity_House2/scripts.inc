SoftwindCity_House2_MapScripts::
	.byte 0


SoftwindCity_House2_Gentleman::
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_House2_Gentleman_2
SoftwindCity_House2_Gentleman_1:
	msgbox SoftwindCity_House2_Gentleman_Text_4, MSGBOX_NPC
	end

SoftwindCity_House2_Gentleman_2:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_House2_Gentleman_5
	checkitem ITEM_GLASS_BOTTLE, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_House2_Gentleman_8
SoftwindCity_House2_Gentleman_7:
	checkitem ITEM_MEDICINE_MILK, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_House2_Gentleman_10
	goto SoftwindCity_House2_Gentleman_1

SoftwindCity_House2_Gentleman_5:
	lock
	faceplayer
	msgbox SoftwindCity_House2_Gentleman_Text_0
	waitmessage
	msgbox SoftwindCity_House2_Gentleman_Text_1
	waitmessage
	subquest_finish SUB_QUEST_FIND_MILK
	release
	end

SoftwindCity_House2_Gentleman_8:
	subquest_check_finished SUB_QUEST_GET_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_House2_Gentleman_12
	goto SoftwindCity_House2_Gentleman_7

SoftwindCity_House2_Gentleman_10:
	msgbox SoftwindCity_House2_Gentleman_Text_3, MSGBOX_NPC
	goto SoftwindCity_House2_Gentleman_1

SoftwindCity_House2_Gentleman_12:
	lock
	faceplayer
	msgbox SoftwindCity_House2_Gentleman_Text_0
	waitmessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 3
	goto_if_eq SoftwindCity_House2_Gentleman_15
	applymovement 1, mManLeavesForMilk
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
	waitmovement 1
	delay 60
	applymovement 1, mManReturnsWithMilkPlayerBelow
	waitmovement 1
SoftwindCity_House2_Gentleman_14:
	faceplayer
	msgbox SoftwindCity_House2_Gentleman_Text_2
	subquest_finish SUB_QUEST_GET_MILK
	removeitem ITEM_GLASS_BOTTLE, 1
	giveitem ITEM_MEDICINE_MILK, 1
	release
	end

SoftwindCity_House2_Gentleman_15:
	applymovement 1, mManLeavesForMilkPlayerBelow
	waitmovement 1
	delay 60
	applymovement 1, mManReturnsWithMilkPlayerBelow
	waitmovement 1
	goto SoftwindCity_House2_Gentleman_14


SoftwindCity_House2_Woman::
	lockall
	faceplayer
	goto_if_set FLAG_RECEIVED_SOFTWIND_GREAT_BALL, SoftwindCity_House2_Woman_2
	msgbox SoftwindCity_House2_Woman_Text_1
	waitmessage
	giveitem ITEM_GREAT_BALL
	setflag FLAG_RECEIVED_SOFTWIND_GREAT_BALL
SoftwindCity_House2_Woman_1:
	releaseall
	end

SoftwindCity_House2_Woman_2:
	msgbox SoftwindCity_House2_Woman_Text_0
	goto SoftwindCity_House2_Woman_1


mManLeavesForMilk:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_in_place_down
	walk_in_place_down
	delay_16
	delay_16
	walk_left
	walk_down
	delay_16
	set_invisible
	step_end

mManLeavesForMilkPlayerBelow:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	delay_16
	delay_16
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_left
	walk_down
	delay_16
	set_invisible
	step_end

mManReturnsWithMilk:
	face_up
	set_visible
	delay_16
	walk_up
	walk_right
	face_up
	delay_16
	delay_16
	walk_in_place_up
	walk_in_place_up
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

mManReturnsWithMilkPlayerBelow:
	face_up
	set_visible
	delay_16
	walk_up
	walk_right
	face_up
	delay_16
	delay_16
	walk_in_place_up
	walk_in_place_up
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	face_down
	step_end

SoftwindCity_House2_Gentleman_Text_0:
	.string "Well now, milk for a sick Moocalf?\p"
	.string "We don't have any, but…\p"
	.string "I'll run straight out and pick some up.\p"
	.string "Just pass me the bottle!$"

SoftwindCity_House2_Gentleman_Text_1:
	.string "You don't have a bottle?\p"
	.string "Come back with a bottle and I will gladly\n"
	.string "help you.$"

SoftwindCity_House2_Gentleman_Text_2:
	.string "Here you are!\p"
	.string "Now go help that Moocalf!$"

SoftwindCity_House2_Gentleman_Text_3:
	.string "Please deliver that milk to the Moocalf!$"

SoftwindCity_House2_Gentleman_Text_4:
	.string "Thanks to the low cost of living here,\n"
	.string "my wife and I were able to retire young!\p"
	.string "We worked our years in Colossus City,\n"
	.string "and now we get to relax in this lovely\l"
	.string "town.$"

SoftwindCity_House2_Woman_Text_0:
	.string "I hope your adventure is everything\n"
	.string "you dream of, and that you end up\l"
	.string "somewhere wonderful at the end of it.\p"
	.string "That's what happened to me.$"

SoftwindCity_House2_Woman_Text_1:
	.string "Now that I'm retired, I don't need this\n"
	.string "anymore.\p"
	.string "Why don't you take it?$"
