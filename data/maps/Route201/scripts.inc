Route201_MapScripts::
	.byte 0


Route201_RouteSignNeoBay::
# 11 "data/maps/Route201/scripts.pory"
	msgbox Route201_RouteSignNeoBay_Text_0, MSGBOX_SIGN
	end


Route201_RouteSignSunsetVilalge::
# 15 "data/maps/Route201/scripts.pory"
	msgbox Route201_RouteSignSunsetVilalge_Text_0, MSGBOX_SIGN
	end


Route201_OldMan::
# 20 "data/maps/Route201/scripts.pory"
	msgbox Route201_OldMan_Text_0, MSGBOX_NPC
	end


Route201_LittleGirl::
# 25 "data/maps/Route201/scripts.pory"
	msgbox Route201_LittleGirl_Text_0, MSGBOX_NPC
	end


Route201_Youngster::
# 30 "data/maps/Route201/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route201_Text_AllenIntro, Route201_Text_AllenDefeated
# 31 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Route201_BugCatcher::
# 36 "data/maps/Route201/scripts.pory"
	trainerbattle_single TRAINER_GUS, Route201_Text_GusIntro, Route201_Text_GusDefeated
# 37 "data/maps/Route201/scripts.pory"
	msgbox Route201_Text_GusPostBattle, MSGBOX_AUTOCLOSE
	end


Route201_RouteSignNeoBay_Text_0:
# 11 "data/maps/Route201/scripts.pory"
	.string "Route 201\n{RIGHT_ARROW} Neo Bay$"

Route201_RouteSignSunsetVilalge_Text_0:
# 15 "data/maps/Route201/scripts.pory"
	.string "Route 201\n{LEFT_ARROW} Sunset Village$"

Route201_OldMan_Text_0:
# 20 "data/maps/Route201/scripts.pory"
	.string "After all this time…\n"
	.string "I can hardly believe my eyes!\p"
	.string "They actually put in a bridge! Now we\n"
	.string "can visit Sunset Village!$"

Route201_LittleGirl_Text_0:
# 25 "data/maps/Route201/scripts.pory"
	.string "I never saw you before!\n"
	.string "Did you come from Softwind City?\p"
	.string "…Neo Bay?\n"
	.string "Never heard of it!$"

Route201_Text_AllenIntro::
# 48 "data/maps/Route201/scripts.pory"
	.string "Aha, I hope you're ready to battle!\n"
	.string "No Pokémon Trainer can refuse a\l"
	.string "challenge!\p"
	.string "Time for my first opponent and my first\n"
	.string "victory!$"

Route201_Text_AllenDefeated::
# 54 "data/maps/Route201/scripts.pory"
	.string "I started my career off with a loss?$"

Route201_Text_AllenPostBattle::
# 60 "data/maps/Route201/scripts.pory"
	.string "You were the first and only person to\n"
	.string "beat me. I'm training so I'll never lose\l"
	.string "again!$"

Route201_Text_GusIntro::
# 66 "data/maps/Route201/scripts.pory"
	.string "Ha! You call yourself a Pokémon Trainer\n"
	.string "and you don't even have a bug net?\p"
	.string "I'll squash you like a\n"
	.string "… …\p"
	.string "Nevermind!\n"
	.string "Let's battle!$"

Route201_Text_GusDefeated::
# 72 "data/maps/Route201/scripts.pory"
	.string "I'm the one who got squashed…$"

Route201_Text_GusPostBattle::
# 78 "data/maps/Route201/scripts.pory"
	.string "You should seriously try to catch some\n"
	.string "Bug Pokémon!\p"
	.string "They grow fast, and they're stronger\n"
	.string "than they look!$"
