Route203_MapScripts::
	.byte 0


Route203_RouteSignSoftwindCity::
	msgbox Route203_RouteSignSoftwindCity_Text_0, MSGBOX_SIGN
	end


Route203_RouteSignChartreeForest::
	msgbox Route203_RouteSignChartreeForest_Text_0, MSGBOX_SIGN
	end


Route203_LittleBoy::
	msgbox Route203_Text_LittleBoy, MSGBOX_NPC
	end


Route203_Bard::
	msgbox Route203_Text_Bard, MSGBOX_NPC
	end


Route203_Althlete::
	trainerbattle_single TRAINER_REED, Route203_Text_ReedIntro, Route203_Text_ReedDefeated
	msgbox Route203_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Youngster::
	trainerbattle_single TRAINER_RYAN, Route203_Text_RyanIntro, Route203_Text_RyanDefeated
	msgbox Route203_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Fisherman::
	trainerbattle_single TRAINER_ALBERTO, Route203_Text_AlbertoIntro, Route203_Text_AlbertoDefeated
	msgbox Route203_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Camper::
	trainerbattle_single TRAINER_CHARLIE, Route203_Text_CharlieIntro, Route203_Text_CharlieDefeated
	msgbox Route203_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Hiker::
	trainerbattle_single TRAINER_CLIFTON, Route203_Text_CliftonIntro, Route203_Text_CliftonDefeated
	msgbox Route203_Text_CliftonPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_RouteSignSoftwindCity_Text_0:
	.string "Route 203\n{LEFT_ARROW} Softwind City$"

Route203_RouteSignChartreeForest_Text_0:
	.string "Chartree Forest\n“Tred carefully, preserve the balance”$"

Route203_Text_LittleBoy::
	.string "After Pinedale Forest got burned up,\n"
	.string "lots of new Pokémon came!\p"
	.string "My sister says some of them aren't\n"
	.string "anywhere else in the world!\p"
	.string "It's called bio… bio…\n"
	.string "biomalerfacy? No…\p"
	.string "Oh!\p"
	.string "I remember!\p"
	.string "It's called biodiversity!$"

Route203_Text_Bard::
	.string "I'm a storyteller from far away.\p"
	.string "I travelled here to see this forest's\n"
	.string "transformation.\p"
	.string "It must have been an incredible\n"
	.string "community effort to contain the\l"
	.string "flames to just this forest.\p"
	.string "I can see it now…\p"
	.string "“And the Pokémon and Trainers did join\n"
	.string "as one force, unto the flames…$"

Route203_Text_ReedIntro::
	.string "Puff… puff…\p"
	.string "I'm training for the… puff… Kalypso\n"
	.string "City… marathon!\p"
	.string "This is going to be the… puff… year!$"

Route203_Text_ReedDefeated::
	.string "Just let me… puff… catch my breath!$"

Route203_Text_ReedPostBattle::
	.string "Clearly I need more training.\p"
	.string "If I'm winded after a Pokémon battle,\n"
	.string "what chance do I have in Kalypso City?$"

Route203_Text_RyanIntro::
	.string "Bird Pokémon are the best!\n"
	.string "Don't you agree?\p"
	.string "Everyone in my family has raised bird\n"
	.string "Pokémon. I'll show you why!$"

Route203_Text_RyanDefeated::
	.string "Maybe I should branch out after all.$"

Route203_Text_RyanPostBattle::
	.string "I've decided, I'm going to try new\n"
	.string "Pokémon!\p"
	.string "I'll travel across the sea to Johto and\n"
	.string "catch a Pidgey!$"

Route203_Text_AlbertoIntro::
	.string "I saw a fellow fisherman down here, and\n"
	.string "thought there might be good catchin'!\p"
	.string "But it was just a puddle…\p"
	.string "I know all the best fishing spots, check\n"
	.string "it out!$"

Route203_Text_AlbertoDefeated::
	.string "The search continues!\p"
	.string "I'll find even rarer Water Pokémon!$"

Route203_Text_AlbertoPostBattle::
	.string "I hope that man is okay.\p"
	.string "I think he might have had too much to\n"
	.string "drink.\p"
	.string "He dropped his fishing rod as he\n"
	.string "wandered off mumbling about Sunset\l"
	.string "Village.$"

Route203_Text_CharlieIntro::
	.string "I love to go camping in Chartree Forest!\p"
	.string "I never get cold, because all the Fire\n"
	.string "Pokémon keep the forest so warm at\l"
	.string "night!\p"
	.string "Do you like to camp?$"

Route203_Text_CharlieDefeated::
	.string "You'll definitely be safe camping\n"
	.string "wherever you want!$"

Route203_Text_CharliePostBattle::
	.string "I sometimes wonder what Chartree\n"
	.string "Forest was like before.\p"
	.string "I think it's better now, though!\p"
	.string "It's my favorite place.$"

Route203_Text_CliftonIntro::
	.string "Ho ho!\p"
	.string "What's a young one like you doing so far\n"
	.string "from home?\p"
	.string "You're not properly geared for long\n"
	.string "distance travel!$"

Route203_Text_CliftonDefeated::
	.string "Well, maybe you'll be okay after all!$"

Route203_Text_CliftonPostBattle::
	.string "I hiked over from Mistvale City, but I\n"
	.string "got bored in Softwind City.\p"
	.string "Too quaint for my tastes.\p"
	.string "City folk like hiking too, you know!$"
