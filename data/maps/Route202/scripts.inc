Route202_MapScripts::
	.byte 0


Route202_RouteSignSunsetVillage::
# 11 "data/maps/Route202/scripts.pory"
	msgbox Route202_RouteSignSunsetVillage_Text_0, MSGBOX_SIGN
	end


Route202_RouteSignSoftwindCity::
# 16 "data/maps/Route202/scripts.pory"
	msgbox Route202_RouteSignSoftwindCity_Text_0, MSGBOX_SIGN
	end


Route202_FatMan::
# 21 "data/maps/Route202/scripts.pory"
	msgbox Route202_FatMan_Text_0, MSGBOX_NPC
	end


Route202_Camper::
# 26 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_TYLER, Route202_Text_TylerIntro, Route202_Text_TylerDefeated
# 27 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_TylerPostBattle, MSGBOX_AUTOCLOSE
	end


Route202_SchoolKid::
# 32 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_NOAH, Route202_Text_NoahIntro, Route202_Text_NoahDefeated
# 33 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_NoahPostBattle, MSGBOX_AUTOCLOSE
	end


Route202_Youngster::
# 38 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_MAT, Route202_Text_MatIntro, Route202_Text_MatDefeated
# 39 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_MatPostBattle, MSGBOX_AUTOCLOSE
	end


Route202_Lass::
# 44 "data/maps/Route202/scripts.pory"
	trainerbattle_single TRAINER_JANICE, Route202_Text_JaniceIntro, Route202_Text_JaniceDefeated
# 45 "data/maps/Route202/scripts.pory"
	msgbox Route202_Text_JanicePostBattle, MSGBOX_AUTOCLOSE
	end


Route202_RouteSignSunsetVillage_Text_0:
# 11 "data/maps/Route202/scripts.pory"
	.string "Route 202\n{DOWN_ARROW} Sunset Village$"

Route202_RouteSignSoftwindCity_Text_0:
# 16 "data/maps/Route202/scripts.pory"
	.string "Route 202\n{UP_ARROW} Softwind City$"

Route202_FatMan_Text_0:
# 21 "data/maps/Route202/scripts.pory"
	.string "It really pays off to look around,\n"
	.string "doesn't it?\p"
	.string "You can find all kinds of things!$"

Route202_Text_TylerIntro::
# 56 "data/maps/Route202/scripts.pory"
	.string "My grandpa caught these Pokémon down\n"
	.string "on Route 201 for me.\p"
	.string "Have you seen a Mogel yet?\n"
	.string "I bet you haven't!\l"
	.string "My grandpa always finds the coolest,\l"
	.string "rarest Pokémon!$"

Route202_Text_TylerDefeated::
# 62 "data/maps/Route202/scripts.pory"
	.string "Huh, I guess rare Pokémon aren't always\n"
	.string "the strongest.$"

Route202_Text_TylerPostBattle::
# 68 "data/maps/Route202/scripts.pory"
	.string "Where did get your Pokémon? I bet it's\n"
	.string "almost as rare as Mogel.$"

Route202_Text_NoahIntro::
# 74 "data/maps/Route202/scripts.pory"
	.string "I like to come here to study when I'm\n"
	.string "not at school.\p"
	.string "Pokémon battles are the most practical\n"
	.string "kind of studying!$"

Route202_Text_NoahDefeated::
# 80 "data/maps/Route202/scripts.pory"
	.string "Wow! I definitely learned a lot!$"

Route202_Text_NoahPostBattle::
# 86 "data/maps/Route202/scripts.pory"
	.string "My teacher always gives me so much\n"
	.string "homework, but Pokémon battles are so\l"
	.string "much more fun…$"

Route202_Text_MatIntro::
# 92 "data/maps/Route202/scripts.pory"
	.string "I love exploring!\n"
	.string "I had to go all the way to Route 205 to\l"
	.string "find this Pokémon!\p"
	.string "I can't wait to show my mom!$"

Route202_Text_MatDefeated::
# 98 "data/maps/Route202/scripts.pory"
	.string "Uh oh, my mom is going to be mad…$"

Route202_Text_MatPostBattle::
# 104 "data/maps/Route202/scripts.pory"
	.string "Mom says I can come to Route 202 to\n"
	.string "play with my Pokémon.\p"
	.string "I hope she doesn't know you can't find\n"
	.string "Lupine here!$"

Route202_Text_JaniceIntro::
# 110 "data/maps/Route202/scripts.pory"
	.string "Did you know there are four different\n"
	.string "Pokémon on Route 202?\p"
	.string "I'm trying to catch them all!\p"
	.string "But I can't find Ampure anywhere so far.\n"
	.string "Have you?$"

Route202_Text_JaniceDefeated::
# 116 "data/maps/Route202/scripts.pory"
	.string "Your Pokémon are really strong!$"

Route202_Text_JanicePostBattle::
# 122 "data/maps/Route202/scripts.pory"
	.string "I already caught a Mogel, but I gave it\n"
	.string "to my little brother.\p"
	.string "They're so common, I can find another\n"
	.string "one later.$"
