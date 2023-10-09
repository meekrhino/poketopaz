Route205_FlowerShop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route205_FlowerShop_OnTransition
	.byte 0


Route205_FlowerShop_Urn::
	msgbox Route205_FlowerShop_Urn_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Cabinet::
	msgbox Route205_FlowerShop_Cabinet_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Bookshelf::
	msgbox Route205_FlowerShop_Bookshelf_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Tree::
	msgbox Route205_FlowerShop_Tree_Text_0, MSGBOX_SIGN
	end


Route205_FlowerShop_Guard::
	msgbox Route205_FlowerShop_Guard_Text_0, MSGBOX_NPC
	end


Route205_FlowerShop_Maniac::
	lock
	faceplayer
	msgbox Route205_FlowerShop_Maniac_Text_0
	waitmessage
	closemessage
	applymovement 5, mTalkLeft
	waitmovement 5
	msgbox Route205_FlowerShop_Maniac_Text_1
	waitmessage
	closemessage
	applymovement 3, mTalkRight
	waitmovement 3
	msgbox Route205_FlowerShop_Maniac_Text_2
	waitmessage
	closemessage
	applymovement 5, mTalkLeft
	waitmovement 5
	msgbox Route205_FlowerShop_Maniac_Text_3
	waitmessage
	closemessage
	release
	end


Route205_FlowerShop_LoudMan::
	lock
	faceplayer
	msgbox Route205_FlowerShop_LoudMan_Text_0
	waitmessage
	closemessage
	applymovement 3, mTalkRight
	waitmovement 3
	msgbox Route205_FlowerShop_LoudMan_Text_1
	waitmessage
	closemessage
	applymovement 5, mTalkLeft
	waitmovement 5
	msgbox Route205_FlowerShop_LoudMan_Text_2
	waitmessage
	closemessage
	applymovement 3, mTalkRight
	waitmovement 3
	msgbox Route205_FlowerShop_LoudMan_Text_3
	waitmessage
	closemessage
	release
	end


Route205_FlowerShop_LurkingMan::
	goto_if_set FLAG_RECEIVED_PAIL, Route205_FlowerShop_LurkingMan_2
	lock
	faceplayer
	msgbox Route205_FlowerShop_LurkingMan_Text_1, MSGBOX_DEFAULT
	giveitem ITEM_WAILMER_PAIL
	msgbox Route205_FlowerShop_LurkingMan_Text_2, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_PAIL
	release
Route205_FlowerShop_LurkingMan_1:
	end

Route205_FlowerShop_LurkingMan_2:
	msgbox Route205_FlowerShop_LurkingMan_Text_0, MSGBOX_NPC
	goto Route205_FlowerShop_LurkingMan_1


Route205_FlowerShop_Ninja::
	msgbox Route205_FlowerShop_Ninja_Text_0, MSGBOX_NPC
	end


Route205_FlowerShop_OnTransition:
	setvar VAR_ROUTE_205_STATE, 2
	setflag FLAG_HIDE_ROUTE_205_FLOWER_GUY
	return


mTalkLeft:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

mTalkRight:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

Route205_FlowerShop_Urn_Text_0:
	.string "It looks a freshly planted flower pot.$"

Route205_FlowerShop_Cabinet_Text_0:
	.string "The cabinet is filled with jars full of\n"
	.string "seeds.$"

Route205_FlowerShop_Bookshelf_Text_0:
	.string "There's a book labeled “So-Called\n"
	.string "Overly Fruitful Flora”.\p"
	.string "What a strange title for a book.$"

Route205_FlowerShop_Tree_Text_0:
	.string "This doesn't seem to be a rare or\n"
	.string "unusual plant.$"

Route205_FlowerShop_Guard_Text_0:
	.string "Welcome to the headquarters of our\n"
	.string "secret underground organization!\p"
	.string "Together we are the Society for the\n"
	.string "Cultivation of Fascinating Flora!\p"
	.string "Or SCOFF for short.\p"
	.string "Why are you laughing?\n"
	.string "This is serious!$"

Route205_FlowerShop_Maniac_Text_0:
	.string "A new member?\p"
	.string "Sorry, we don't just take anyone into\n"
	.string "our organization.$"

Route205_FlowerShop_Maniac_Text_1:
	.string "Yes!\p"
	.string "The Shadowy Cabal of Flower Fanatics is\n"
	.string "a prestigious group!$"

Route205_FlowerShop_Maniac_Text_2:
	.string "Oh come on.\n"
	.string "That's not what SCOFF stands for!\p"
	.string "What a ridiculous idea.$"

Route205_FlowerShop_Maniac_Text_3:
	.string "It so is!\p"
	.string "We lurk in the shadows, planting\n"
	.string "beautiful things from just out of\l"
	.string "sight!\p"
	.string "Could we GET any cooler?$"

Route205_FlowerShop_LoudMan_Text_0:
	.string "Welcome, newcomer!\p"
	.string "Alas, our illustrious crew is not taking\n"
	.string "new members just now!$"

Route205_FlowerShop_LoudMan_Text_1:
	.string "I'm afraid he's right.\p"
	.string "The Science-based Cultivators of Food\n"
	.string "and Forestry have a complete team at\l"
	.string "this time.$"

Route205_FlowerShop_LoudMan_Text_2:
	.string "What!?\n"
	.string "That's not our name!\p"
	.string "Nobody uses that ridiculous title.\p"
	.string "That's not what SCOFF stands for!$"

Route205_FlowerShop_LoudMan_Text_3:
	.string "Of course it is.\p"
	.string "Clearly you have not been paying\n"
	.string "attention.$"

Route205_FlowerShop_LurkingMan_Text_0:
	.string "Think of yourself as a Secret\n"
	.string "Collaborator in Fostering Flora.\p"
	.string "Keep it on the low, though.\p"
	.string "The others wouldn't approve.$"

Route205_FlowerShop_LurkingMan_Text_1:
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
	.string "Use that to water seeds and make them\n"
	.string "grow.\p"
	.string "One seed becomes many, and together we\n"
	.string "fill the world with plants!$"

Route205_FlowerShop_Ninja_Text_0:
	.string "Fu fu fu!\p"
	.string "I have the most importantest job!\p"
	.string "I'm s'posed to keep people out of the\n"
	.string "back room.\p"
	.string "What's back there?\n"
	.string "I wouldn't know.$"
