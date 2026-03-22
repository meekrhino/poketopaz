Route203_House_MapScripts::
	.byte 0


Route203_House_Woman1::
# 11 "data/maps/Route203_House/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 12 "data/maps/Route203_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_House_Woman1_2
Route203_House_Woman1_1:
# 24 "data/maps/Route203_House/scripts.pory"
	msgbox Route203_House_Woman1_Text_2, MSGBOX_NPC
	end

Route203_House_Woman1_2:
# 13 "data/maps/Route203_House/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 14 "data/maps/Route203_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman1_5
# 18 "data/maps/Route203_House/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_BOTTLE
# 19 "data/maps/Route203_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman1_7
	goto Route203_House_Woman1_1

Route203_House_Woman1_5:
# 15 "data/maps/Route203_House/scripts.pory"
	msgbox Route203_House_Woman1_Text_0, MSGBOX_NPC
	end

Route203_House_Woman1_7:
# 20 "data/maps/Route203_House/scripts.pory"
	msgbox Route203_House_Woman1_Text_1, MSGBOX_NPC
	end


Route203_House_Woman2::
# 29 "data/maps/Route203_House/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, Route203_House_Woman2_2
# 46 "data/maps/Route203_House/scripts.pory"
	lock
# 47 "data/maps/Route203_House/scripts.pory"
	faceplayer
# 48 "data/maps/Route203_House/scripts.pory"
	msgbox Route203_House_Woman2_Text_3
# 49 "data/maps/Route203_House/scripts.pory"
	giveitem ITEM_SOOTHE_BELL
# 50 "data/maps/Route203_House/scripts.pory"
	setflag FLAG_RECEIVED_SOOTHE_BELL
# 51 "data/maps/Route203_House/scripts.pory"
	release
Route203_House_Woman2_1:
	end

Route203_House_Woman2_2:
# 30 "data/maps/Route203_House/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 31 "data/maps/Route203_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_House_Woman2_6
Route203_House_Woman2_5:
# 43 "data/maps/Route203_House/scripts.pory"
	msgbox Route203_House_Woman2_Text_2, MSGBOX_NPC
	goto Route203_House_Woman2_1

Route203_House_Woman2_6:
# 32 "data/maps/Route203_House/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 33 "data/maps/Route203_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman2_9
# 37 "data/maps/Route203_House/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_BOTTLE
# 38 "data/maps/Route203_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route203_House_Woman2_11
	goto Route203_House_Woman2_5

Route203_House_Woman2_9:
# 34 "data/maps/Route203_House/scripts.pory"
	msgbox Route203_House_Woman2_Text_0, MSGBOX_NPC
	end

Route203_House_Woman2_11:
# 39 "data/maps/Route203_House/scripts.pory"
	msgbox Route203_House_Woman2_Text_1, MSGBOX_NPC
	end


Route203_House_Woman1_Text_0:
# 15 "data/maps/Route203_House/scripts.pory"
	.string "There is something so fulfilling about\n"
	.string "surrounding yourself with growing\l"
	.string "things.\p"
	.string "Milk?\n"
	.string "No, why do you ask?\p"
	.string "This is a garden, not a farm!$"

Route203_House_Woman1_Text_1:
# 20 "data/maps/Route203_House/scripts.pory"
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
# 24 "data/maps/Route203_House/scripts.pory"
	.string "There is something so fulfilling about\n"
	.string "surrounding yourself with growing\l"
	.string "things.\p"
	.string "It's my second greatest joy in life.$"

Route203_House_Woman2_Text_0:
# 34 "data/maps/Route203_House/scripts.pory"
	.string "Oh, that poor thing!\n"
	.string "I would love to help.\p"
	.string "I'm so sorry, we don't have any milk…$"

Route203_House_Woman2_Text_1:
# 39 "data/maps/Route203_House/scripts.pory"
	.string "If I had a bottle I would give it to you\n"
	.string "without a second thought.\p"
	.string "I wish you luck, for that poor Pokémon's\n"
	.string "sake.$"

Route203_House_Woman2_Text_2:
# 43 "data/maps/Route203_House/scripts.pory"
	.string "Please remember to treat your Pokémon\n"
	.string "with love and respect.\p"
	.string "They will return the favor.$"

Route203_House_Woman2_Text_3:
# 48 "data/maps/Route203_House/scripts.pory"
	.string "My wife is incredible with plants.\n"
	.string "There is nothing more wonderful than\l"
	.string "watching someone you love succeed!\p"
	.string "Here, why don't you take this?\p"
	.string "It'll help your Pokémon grow closer to\n"
	.string "you.$"
