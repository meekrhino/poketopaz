Route201_House_MapScripts::
	.byte 0


Route201_House_Gentleman::
# 11 "data/maps/Route201_House/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 12 "data/maps/Route201_House/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route201_House_Gentleman_2
Route201_House_Gentleman_1:
# 24 "data/maps/Route201_House/scripts.pory"
	msgbox Route201_House_Gentleman_Text_2, MSGBOX_NPC
	end

Route201_House_Gentleman_2:
# 13 "data/maps/Route201_House/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 14 "data/maps/Route201_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_House_Gentleman_5
# 18 "data/maps/Route201_House/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_BOTTLE
# 19 "data/maps/Route201_House/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_House_Gentleman_7
	goto Route201_House_Gentleman_1

Route201_House_Gentleman_5:
# 15 "data/maps/Route201_House/scripts.pory"
	msgbox Route201_House_Gentleman_Text_0, MSGBOX_NPC
	end

Route201_House_Gentleman_7:
# 20 "data/maps/Route201_House/scripts.pory"
	msgbox Route201_House_Gentleman_Text_1, MSGBOX_NPC
	end


Route201_House_Gentleman_Text_0:
# 15 "data/maps/Route201_House/scripts.pory"
	.string "No, I'm sorry.\p"
	.string "I don't have any milk that I care to\n"
	.string "share.$"

Route201_House_Gentleman_Text_1:
# 20 "data/maps/Route201_House/scripts.pory"
	.string "A bottle to hold milk?\p"
	.string "Just go to Cranewing like everyone\n"
	.string "else.$"

Route201_House_Gentleman_Text_2:
# 24 "data/maps/Route201_House/scripts.pory"
	.string "I had this cottage built as a vacation\n"
	.string "home where I can get away from city\l"
	.string "life.\p"
	.string "I also had the bridge repaired so I\n"
	.string "could get out for walks.\p"
	.string "I wonder if anyone else will use it?$"
