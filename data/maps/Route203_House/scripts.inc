Route203_House_MapScripts::
	.byte 0


Route203_House_Woman1::
	msgbox Route203_House_Woman1_Text_0, MSGBOX_NPC
	end


Route203_House_Woman2::
	goto_if_set FLAG_RECEIVED_SOOTHE_BELL, Route203_House_Woman2_2
	msgbox Route203_House_Woman2_Text_1, MSGBOX_NPC
	giveitem ITEM_SOOTHE_BELL
	setflag FLAG_RECEIVED_SOOTHE_BELL
Route203_House_Woman2_1:
	end

Route203_House_Woman2_2:
	msgbox Route203_House_Woman2_Text_0, MSGBOX_NPC
	goto Route203_House_Woman2_1


Route203_House_Woman1_Text_0:
	.string "There is something so fulfilling about\n"
	.string "surrounding yourself with growing\l"
	.string "things.\p"
	.string "It's my second greatest joy in life.$"

Route203_House_Woman2_Text_0:
	.string "Please remember to treat your Pokémon\n"
	.string "with love and respect.\p"
	.string "They will return the favor.$"

Route203_House_Woman2_Text_1:
	.string "My wife is incredible with plants.\n"
	.string "There is nothing more wonderful than\l"
	.string "watching someone you love succeed!\p"
	.string "Here, why don't you take this?\p"
	.string "It'll help your Pokémon grow closer to\n"
	.string "you.$"
