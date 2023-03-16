Route203_House_MapScripts::
	.byte 0


Route203_House_Woman1::
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_House_Woman1_2
Route203_House_Woman1_1:
	msgbox Route203_House_Woman1_Text_2, MSGBOX_NPC
	end

Route203_House_Woman1_2:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman1_5
	subquest_check_finished SUB_QUEST_FIND_BOTTLE
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman1_7
	goto Route203_House_Woman1_1

Route203_House_Woman1_5:
	msgbox Route203_House_Woman1_Text_0, MSGBOX_NPC
	end

Route203_House_Woman1_7:
	msgbox Route203_House_Woman1_Text_1, MSGBOX_NPC
	end


Route203_House_Woman2::
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, Route203_House_Woman2_2
	lock
	faceplayer
	msgbox Route203_House_Woman2_Text_3
	giveitem ITEM_SOOTHE_BELL
	setflag FLAG_RECEIVED_SOOTHE_BELL
	release
Route203_House_Woman2_1:
	end

Route203_House_Woman2_2:
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_House_Woman2_6
Route203_House_Woman2_5:
	msgbox Route203_House_Woman2_Text_2, MSGBOX_NPC
	goto Route203_House_Woman2_1

Route203_House_Woman2_6:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman2_9
	subquest_check_finished SUB_QUEST_FIND_BOTTLE
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman2_11
	goto Route203_House_Woman2_5

Route203_House_Woman2_9:
	msgbox Route203_House_Woman2_Text_0, MSGBOX_NPC
	end

Route203_House_Woman2_11:
	msgbox Route203_House_Woman2_Text_1, MSGBOX_NPC
	end


Route203_House_Woman1_Text_0:
	.string "There is something so fulfilling about\n"
	.string "surrounding yourself with growing\l"
	.string "things.\p"
	.string "Milk?\n"
	.string "No, why do you ask?\p"
	.string "This is a garden, not a farm!$"

Route203_House_Woman1_Text_1:
	.string "There is something so fulfilling about\n"
	.string "surrounding yourself with growing\l"
	.string "things.\p"
	.string "A glass bottle?\p"
	.string "Your best bet would be Cranewing City's\n"
	.string "Glassworks.\p"
	.string "Just head through the forest and past\n"
	.string "Route 204.\p"
	.string "You can't miss it.$"

Route203_House_Woman1_Text_2:
	.string "There is something so fulfilling about\n"
	.string "surrounding yourself with growing\l"
	.string "things.\p"
	.string "It's my second greatest joy in life.$"

Route203_House_Woman2_Text_0:
	.string "Oh, that poor thing!\n"
	.string "I would love to help.\p"
	.string "I'm so sorry, we don't have any milk…$"

Route203_House_Woman2_Text_1:
	.string "If I had a bottle I would give it to you\n"
	.string "without a second thought.\p"
	.string "I wish you luck, for that poor Pokémon's\n"
	.string "sake.$"

Route203_House_Woman2_Text_2:
	.string "Please remember to treat your Pokémon\n"
	.string "with love and respect.\p"
	.string "They will return the favor.$"

Route203_House_Woman2_Text_3:
	.string "My wife is incredible with plants.\n"
	.string "There is nothing more wonderful than\l"
	.string "watching someone you love succeed!\p"
	.string "Here, why don't you take this?\p"
	.string "It'll help your Pokémon grow closer to\n"
	.string "you.$"
