Route201_MapScripts::
	.byte 0


Route201_RouteSignNeoBay::
	msgbox Route201_RouteSignNeoBay_Text_0, MSGBOX_SIGN
	end


Route201_RouteSignSunsetVilalge::
	msgbox Route201_RouteSignSunsetVilalge_Text_0, MSGBOX_SIGN
	end


Route201_OldMan::
	msgbox Route201_OldMan_Text_0, MSGBOX_NPC
	end


Route201_LittleGirl::
	msgbox Route201_LittleGirl_Text_0, MSGBOX_NPC
	end


Route201_Youngster::
	trainerbattle_single TRAINER_ALLEN, Route201_Text_AllenIntro, Route201_Text_AllenDefeated
	msgbox Route201_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end


Route201_BugCatcher::
	trainerbattle_single TRAINER_GUS, Route201_Text_GusIntro, Route201_Text_GusDefeated
	msgbox Route201_Text_GusPostBattle, MSGBOX_AUTOCLOSE
	end


Route201_RouteSignNeoBay_Text_0:
	.string "Route 201\n{RIGHT_ARROW} Neo Bay$"

Route201_RouteSignSunsetVilalge_Text_0:
	.string "Route 201\n{LEFT_ARROW} Sunset Village$"

Route201_OldMan_Text_0:
	.string "After all this time…\n"
	.string "I can hardly believe my eyes!\p"
	.string "They actually put in a bridge! Now we\n"
	.string "can visit Sunset Village!$"

Route201_LittleGirl_Text_0:
	.string "I never saw you before!\n"
	.string "Did you come from Softwind City?\p"
	.string "…Neo Bay?\n"
	.string "Never heard of it!$"

Route201_Text_AllenIntro::
	.string "Aha, I hope you're ready to battle!\n"
	.string "No Pokémon Trainer can refuse a\l"
	.string "challenge!\p"
	.string "Time for my first opponent and my first\n"
	.string "victory!$"

Route201_Text_AllenDefeated::
	.string "I started my career off with a loss?$"

Route201_Text_AllenPostBattle::
	.string "You were the first and only person to\n"
	.string "beat me. I'm training so I'll never lose\l"
	.string "again!$"

Route201_Text_GusIntro::
	.string "Ha! You call yourself a Pokémon Trainer\n"
	.string "and you don't even have a bug net?\p"
	.string "I'll squash you like a … … nevermind!\n"
	.string "Let's battle!$"

Route201_Text_GusDefeated::
	.string "I'm the one who got squashed…$"

Route201_Text_GusPostBattle::
	.string "You should seriously try to catch some\n"
	.string "Bug Pokémon!\p"
	.string "They grow fast, and they're stronger\n"
	.string "than they look!$"
