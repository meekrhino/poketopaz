Route201_House_MapScripts::
	.byte 0


Route201_House_Gentleman::
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq Route201_House_Gentleman_2
Route201_House_Gentleman_1:
	msgbox Route201_House_Gentleman_Text_2, MSGBOX_NPC
	end

Route201_House_Gentleman_2:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_House_Gentleman_5
	subquest_check_finished SUB_QUEST_FIND_BOTTLE
	compare VAR_RESULT, FALSE
	goto_if_eq Route201_House_Gentleman_7
	goto Route201_House_Gentleman_1

Route201_House_Gentleman_5:
	msgbox Route201_House_Gentleman_Text_0, MSGBOX_NPC
	end

Route201_House_Gentleman_7:
	msgbox Route201_House_Gentleman_Text_1, MSGBOX_NPC
	end


Route201_House_Gentleman_Text_0:
	.string "No, I'm sorry.\p"
	.string "I don't have any milk that I care to\n"
	.string "share.$"

Route201_House_Gentleman_Text_1:
	.string "A bottle to hold milk?\p"
	.string "Just go to Cranewing like everyone\n"
	.string "else.$"

Route201_House_Gentleman_Text_2:
	.string "I had this cottage built as a vacation\n"
	.string "home where I can get away from city\l"
	.string "life.\p"
	.string "I also had the bridge repaired so I\n"
	.string "could get out for walks.\p"
	.string "I wonder if anyone else will use it?$"
