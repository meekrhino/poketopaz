Route206_MapScripts::
	.byte 0


Route206_Mikael::
# 11 "data/maps/Route206/scripts.pory"
	trainerbattle_single TRAINER_MIKAEL, Route206_Text_MikaelIntro, Route206_Text_MikaelDefeated
# 12 "data/maps/Route206/scripts.pory"
	msgbox Route206_Text_MikaelPostBattle, MSGBOX_AUTOCLOSE
	end


Route206_Jurgen::
# 17 "data/maps/Route206/scripts.pory"
	trainerbattle_single TRAINER_JURGEN, Route206_Text_JurgenIntro, Route206_Text_JurgenDefeated
# 18 "data/maps/Route206/scripts.pory"
	msgbox Route206_Text_JurgenPostBattle, MSGBOX_AUTOCLOSE
	end


Route206_Winston::
# 23 "data/maps/Route206/scripts.pory"
	trainerbattle_single TRAINER_WINSTON, Route206_Text_WinstonIntro, Route206_Text_WinstonDefeated
# 24 "data/maps/Route206/scripts.pory"
	msgbox Route206_Text_WinstonPostBattle, MSGBOX_AUTOCLOSE
	end


Route206_Eli::
# 29 "data/maps/Route206/scripts.pory"
	trainerbattle_single TRAINER_ELI, Route206_Text_EliIntro, Route206_Text_EliDefeated
# 30 "data/maps/Route206/scripts.pory"
	msgbox Route206_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end


Route206_Sierra::
# 35 "data/maps/Route206/scripts.pory"
	trainerbattle_single TRAINER_SIERRA, Route206_Text_SierraIntro, Route206_Text_SierraDefeated
# 36 "data/maps/Route206/scripts.pory"
	msgbox Route206_Text_SierraPostBattle, MSGBOX_AUTOCLOSE
	end


Route206_Wanda::
# 41 "data/maps/Route206/scripts.pory"
	trainerbattle_single TRAINER_WANDA, Route206_Text_WandaIntro, Route206_Text_WandaDefeated
# 42 "data/maps/Route206/scripts.pory"
	msgbox Route206_Text_WandaPostBattle, MSGBOX_AUTOCLOSE
	end


Route206_Man::
# 47 "data/maps/Route206/scripts.pory"
	msgbox Route206_Text_Man, MSGBOX_NPC
	end


Route206_Fisherman::
# 52 "data/maps/Route206/scripts.pory"
	msgbox Route206_Fisherman_Text_0, MSGBOX_NPC
	end


Route206_Fisherman_Text_0:
# 52 "data/maps/Route206/scripts.pory"
	.string "$"

Route206_Text_Man::
# 64 "data/maps/Route206/scripts.pory"
	.string "I heard some kind of shouting\n"
	.string "coming from further down the route\l"
	.string "earlier. I hope everyone is okay.\p"
	.string "Have I investigated?\p"
	.string "No, no, I'm sure somebody closer…$"

Route206_Text_Fisherman::
# 74 "data/maps/Route206/scripts.pory"
	.string "There is nothing more relaxing\n"
	.string "than spending a lazy afternoon by the\l"
	.string "water.\p"
	.string "I actually forgot my fishing pole today,\n"
	.string "but to be honest it was never about the\l"
	.string "fishing.$"

Route206_Text_MikaelIntro::
# 83 "data/maps/Route206/scripts.pory"
	.string "I came here to find inspiration\n"
	.string "for my painting.$"

Route206_Text_MikaelDefeated::
# 89 "data/maps/Route206/scripts.pory"
	.string "I'm overwhelmed with the natural beauty\n"
	.string "of this area.$"

Route206_Text_MikaelPostBattle::
# 95 "data/maps/Route206/scripts.pory"
	.string "I still haven't decided what I want to\n"
	.string "paint…$"

Route206_Text_JurgenIntro::
# 101 "data/maps/Route206/scripts.pory"
	.string "The secret to fishing is finding the\n"
	.string "right spot.\p"
	.string "I picked this place because it's\n"
	.string "perfectly secluded.$"

Route206_Text_JurgenDefeated::
# 108 "data/maps/Route206/scripts.pory"
	.string "How about you go fish over there?\p"
	.string "Or anywhere else but here.$"

Route206_Text_JurgenPostBattle::
# 114 "data/maps/Route206/scripts.pory"
	.string "What, come back to try taking my\n"
	.string "fishing spot again?$"

Route206_Text_WinstonIntro::
# 120 "data/maps/Route206/scripts.pory"
	.string "I sure do love fishing, but I suppose I\n"
	.string "could take a short break.$"

Route206_Text_WinstonDefeated::
# 126 "data/maps/Route206/scripts.pory"
	.string "Yep, a break is just want I needed.$"

Route206_Text_WinstonPostBattle::
# 132 "data/maps/Route206/scripts.pory"
	.string "Nothing like a nice, long break from\n"
	.string "fishing.$"

Route206_Text_EliIntro::
# 138 "data/maps/Route206/scripts.pory"
	.string "zzz… Huh?\p"
	.string "I keep dozing off while fishing.\p"
	.string "Maybe you can help me wake up.$"

Route206_Text_EliDefeated::
# 146 "data/maps/Route206/scripts.pory"
	.string "Now that I'm awake, maybe I will\n"
	.string "actually catch something!$"

Route206_Text_EliPostBattle::
# 152 "data/maps/Route206/scripts.pory"
	.string "zzz… Oh?\p"
	.string "I guess I must have fallen asleep again.$"

Route206_Text_WandaIntro::
# 159 "data/maps/Route206/scripts.pory"
	.string "I came out here to plant berries and\n"
	.string "raise Pokémon…\p"
	.string "And I'm all out of berries.$"

Route206_Text_WandaDefeated::
# 166 "data/maps/Route206/scripts.pory"
	.string "Well, I suppose I can still enjoy the\n"
	.string "scenery.$"

Route206_Text_WandaPostBattle::
# 172 "data/maps/Route206/scripts.pory"
	.string "I'm still out of berries, but always\n"
	.string "ready to train!$"

Route206_Text_SierraIntro::
# 178 "data/maps/Route206/scripts.pory"
	.string "I've been hunting for Bug Pokémon in\n"
	.string "these trees.$"

Route206_Text_SierraDefeated::
# 184 "data/maps/Route206/scripts.pory"
	.string "I'm so clumsy…\p"
	.string "I keep tripping and scaring the bugs\n"
	.string "away with all my noise.$"

Route206_Text_SierraPostBattle::
# 191 "data/maps/Route206/scripts.pory"
	.string "I've heard there are Jalsida\n"
	.string "in the area, but I just can't seem to\l"
	.string "find them.$"
