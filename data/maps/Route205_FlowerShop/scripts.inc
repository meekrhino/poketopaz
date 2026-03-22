Route205_FlowerShop_MapScripts::
# 41 "data/maps/Route205_FlowerShop/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route205_FlowerShop_OnTransition
	.byte 0


Route205_FlowerShop_Urn::
# 49 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Urn_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Cabinet::
# 54 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Cabinet_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Bookshelf::
# 59 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Bookshelf_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Tree::
# 64 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Tree_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Guard::
# 69 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Guard_Text_0, MSGBOX_NPC
	end


Route205_FlowerShop_Maniac::
# 74 "data/maps/Route205_FlowerShop/scripts.pory"
	lock
# 75 "data/maps/Route205_FlowerShop/scripts.pory"
	faceplayer
# 76 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Maniac_Text_0
# 77 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 78 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 79 "data/maps/Route205_FlowerShop/scripts.pory"
	applymovement 5, mTalkLeft
# 80 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmovement 5
# 81 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Maniac_Text_1
# 82 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 83 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 84 "data/maps/Route205_FlowerShop/scripts.pory"
	applymovement 3, mTalkRight
# 85 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmovement 3
# 86 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Maniac_Text_2
# 87 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 88 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 89 "data/maps/Route205_FlowerShop/scripts.pory"
	applymovement 5, mTalkLeft
# 90 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmovement 5
# 91 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Maniac_Text_3
# 92 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 93 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 94 "data/maps/Route205_FlowerShop/scripts.pory"
	release
	end


Route205_FlowerShop_LoudMan::
# 99 "data/maps/Route205_FlowerShop/scripts.pory"
	lock
# 100 "data/maps/Route205_FlowerShop/scripts.pory"
	faceplayer
# 101 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_LoudMan_Text_0
# 102 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 103 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 104 "data/maps/Route205_FlowerShop/scripts.pory"
	applymovement 3, mTalkRight
# 105 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmovement 3
# 106 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_LoudMan_Text_1
# 107 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 108 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 109 "data/maps/Route205_FlowerShop/scripts.pory"
	applymovement 5, mTalkLeft
# 110 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmovement 5
# 111 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_LoudMan_Text_2
# 112 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 113 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 114 "data/maps/Route205_FlowerShop/scripts.pory"
	applymovement 3, mTalkRight
# 115 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmovement 3
# 116 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_LoudMan_Text_3
# 117 "data/maps/Route205_FlowerShop/scripts.pory"
	waitmessage
# 118 "data/maps/Route205_FlowerShop/scripts.pory"
	closemessage
# 119 "data/maps/Route205_FlowerShop/scripts.pory"
	release
	end


Route205_FlowerShop_LurkingMan::
# 124 "data/maps/Route205_FlowerShop/scripts.pory"
	goto_if_set FLAG_RECEIVED_PAIL, Route205_FlowerShop_LurkingMan_2
# 128 "data/maps/Route205_FlowerShop/scripts.pory"
	lock
# 129 "data/maps/Route205_FlowerShop/scripts.pory"
	faceplayer
# 130 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_LurkingMan_Text_1, MSGBOX_DEFAULT
# 131 "data/maps/Route205_FlowerShop/scripts.pory"
	giveitem ITEM_WAILMER_PAIL
# 132 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_LurkingMan_Text_2, MSGBOX_DEFAULT
# 133 "data/maps/Route205_FlowerShop/scripts.pory"
	setflag FLAG_RECEIVED_PAIL
# 134 "data/maps/Route205_FlowerShop/scripts.pory"
	release
Route205_FlowerShop_LurkingMan_1:
	end

Route205_FlowerShop_LurkingMan_2:
# 125 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_LurkingMan_Text_0, MSGBOX_NPC
	goto Route205_FlowerShop_LurkingMan_1


Route205_FlowerShop_Ninja::
# 140 "data/maps/Route205_FlowerShop/scripts.pory"
	msgbox Route205_FlowerShop_Ninja_Text_0, MSGBOX_NPC
	end


Route205_FlowerShop_OnTransition:
# 149 "data/maps/Route205_FlowerShop/scripts.pory"
	setvar VAR_ROUTE_205_STATE, 2
# 150 "data/maps/Route205_FlowerShop/scripts.pory"
	setflag FLAG_HIDE_ROUTE_205_FLOWER_GUY
	return


# 161 "data/maps/Route205_FlowerShop/scripts.pory"
mTalkLeft:
# 162 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_left
# 162 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_left
# 162 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_left
# 162 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_left
	step_end

# 165 "data/maps/Route205_FlowerShop/scripts.pory"
mTalkRight:
# 166 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_right
# 166 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_right
# 166 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_right
# 166 "data/maps/Route205_FlowerShop/scripts.pory"
	walk_in_place_fast_right
	step_end

Route205_FlowerShop_Urn_Text_0:
# 49 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "It looks a freshly planted flower pot.$"

Route205_FlowerShop_Cabinet_Text_0:
# 54 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "The cabinet is filled with jars full of\n"
	.string "seeds.$"

Route205_FlowerShop_Bookshelf_Text_0:
# 59 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "There's a book labeled “So-Called\n"
	.string "Overly Fruitful Flora”.\p"
	.string "What a strange title for a book.$"

Route205_FlowerShop_Tree_Text_0:
# 64 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "This doesn't seem to be a rare or\n"
	.string "unusual plant.$"

Route205_FlowerShop_Guard_Text_0:
# 69 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Welcome to the headquarters of our\n"
	.string "secret underground organization!\p"
	.string "Together we are the Society for the\n"
	.string "Cultivation of Fascinating Flora!\p"
	.string "Or SCOFF for short.\p"
	.string "Why are you laughing?\n"
	.string "This is serious!$"

Route205_FlowerShop_Maniac_Text_0:
# 76 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "A new member?\p"
	.string "Sorry, we don't just take anyone into\n"
	.string "our organization.$"

Route205_FlowerShop_Maniac_Text_1:
# 81 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Yes!\p"
	.string "The Shadowy Cabal of Flower Fanatics is\n"
	.string "a prestigious group!$"

Route205_FlowerShop_Maniac_Text_2:
# 86 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Oh come on.\n"
	.string "That's not what SCOFF stands for!\p"
	.string "What a ridiculous idea.$"

Route205_FlowerShop_Maniac_Text_3:
# 91 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "It so is!\p"
	.string "We lurk in the shadows, planting\n"
	.string "beautiful things from just out of\l"
	.string "sight!\p"
	.string "Could we GET any cooler?$"

Route205_FlowerShop_LoudMan_Text_0:
# 101 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Welcome, newcomer!\p"
	.string "Alas, our illustrious crew is not taking\n"
	.string "new members just now!$"

Route205_FlowerShop_LoudMan_Text_1:
# 106 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "I'm afraid he's right.\p"
	.string "The Science-based Cultivators of Food\n"
	.string "and Forestry have a complete team at\l"
	.string "this time.$"

Route205_FlowerShop_LoudMan_Text_2:
# 111 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "What!?\n"
	.string "That's not our name!\p"
	.string "Nobody uses that ridiculous title.\p"
	.string "That's not what SCOFF stands for!$"

Route205_FlowerShop_LoudMan_Text_3:
# 116 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Of course it is.\p"
	.string "Clearly you have not been paying\n"
	.string "attention.$"

Route205_FlowerShop_LurkingMan_Text_0:
# 125 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Think of yourself as a Secret\n"
	.string "Collaborator in Fostering Flora.\p"
	.string "Keep it on the low, though.\p"
	.string "The others wouldn't approve.$"

Route205_FlowerShop_LurkingMan_Text_1:
# 130 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Psst!\n"
	.string "Hey, you!\p"
	.string "Yes, you!\p"
	.string "Listen, kid.\p"
	.string "Nobody here will give you the time of\n"
	.string "day.\p"
	.string "But between you and me, I figure you\n"
	.string "don't need to be a member to do some\l"
	.string "good out there.$"

Route205_FlowerShop_LurkingMan_Text_2:
# 132 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Use that to water seeds and make them\n"
	.string "grow.\p"
	.string "One seed becomes many, and together we\n"
	.string "fill the world with plants!$"

Route205_FlowerShop_Ninja_Text_0:
# 140 "data/maps/Route205_FlowerShop/scripts.pory"
	.string "Fu fu fu!\p"
	.string "I have the most importantest job!\p"
	.string "I'm s'posed to keep people out of the\n"
	.string "back room.\p"
	.string "What's back there?\n"
	.string "I wouldn't know.$"
