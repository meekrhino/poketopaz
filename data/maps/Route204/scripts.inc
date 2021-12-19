Route204_MapScripts::
	.byte 0


Route204_RouteSignChartreeForest::
	msgbox Route204_RouteSignChartreeForest_Text_0, MSGBOX_SIGN
	end


Route204_RouteSignCranewingCity::
	msgbox Route204_RouteSignCranewingCity_Text_0, MSGBOX_SIGN
	end


Route204_Boy::
	compare VAR_ROUTE204_STATE, 0
	goto_if_eq Route204_Boy_2
	msgbox Route204_Boy_Text_1, MSGBOX_NPC
Route204_Boy_1:
	end

Route204_Boy_2:
	msgbox Route204_Boy_Text_0, MSGBOX_NPC
	goto Route204_Boy_1


Route204_Beauty::
	trainerbattle_single TRAINER_AINA, Route204_Text_AinaIntro, Route204_Text_AinaDefeated
	msgbox Route204_Text_AinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_RichBoy::
	trainerbattle_single TRAINER_DERRICK, Route204_Text_DerrickIntro, Route204_Text_DerrickDefeated
	msgbox Route204_Text_DerrickPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_Athlete::
	trainerbattle_single TRAINER_LEXI, Route204_Text_LexiIntro, Route204_Text_LexiDefeated
	msgbox Route204_Text_LexiPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_ExpertWoman::
	trainerbattle_single TRAINER_BEATRICE, Route204_Text_BeatriceIntro, Route204_Text_BeatriceDefeated
	msgbox Route204_Text_BeatricePostBattle, MSGBOX_AUTOCLOSE
	end


Route204_RouteSignChartreeForest_Text_0:
	.string "Chartree Forest\nPlease watch your step.$"

Route204_RouteSignCranewingCity_Text_0:
	.string "Route 204\n{DOWN_ARROW} Cranewing City$"

Route204_Boy_Text_0:
	.string "I saw some shady looking people in\n"
	.string "black lurking around the forest.\p"
	.string "I think Froy chased them away for now.$"

Route204_Boy_Text_1:
	.string "Phew, I think those goons are gone for\n"
	.string "good this time.\p"
	.string "Well done!\n"
	.string "You must be some trainer!$"

Route204_Text_AinaIntro::
	.string "Did you know the ash in the forest can\n"
	.string "be used in makeup, as well as glass?$"

Route204_Text_AinaDefeated::
	.string "That's okay.\n"
	.string "Pokémon battles are only a hobby.$"

Route204_Text_AinaPostBattle::
	.string "I'm thinking about starting a new line\n"
	.string "of beauty products made from ash!\p"
	.string "I'm trying to come up with a name…$"

Route204_Text_DerrickIntro::
	.string "I'm not hiding from all of the terrifying\n"
	.string "bugs in the forest.\p"
	.string "Nope!\n"
	.string "Not me!\p"
	.string "Just watch this!$"

Route204_Text_DerrickDefeated::
	.string "Okay, okay. M-maybe I'm a little scared.$"

Route204_Text_DerrickPostBattle::
	.string "Don't tell anyone you saw me back here,\n"
	.string "okay?\p"
	.string "My dad would be furious.$"

Route204_Text_LexiIntro::
	.string "The air out here is so refreshing!\p"
	.string "It's perfect for a morning run to get\n"
	.string "the blood flowing.\p"
	.string "You know what else gets the blood\n"
	.string "flowing?\p"
	.string "That's right, a Pokémon battle!$"

Route204_Text_LexiDefeated::
	.string "Now that was exhilerating!$"

Route204_Text_LexiPostBattle::
	.string "I like to take my Pokémon running with\n"
	.string "me.\p"
	.string "I wonder if the exercise helps them get\n"
	.string "stronger, too?$"

Route204_Text_BeatriceIntro::
	.string "I've been training Pokémon since before\n"
	.string "you were born!\p"
	.string "If you get past me, you'll be in\n"
	.string "Cranewing.\p"
	.string "Think you can handle me?$"

Route204_Text_BeatriceDefeated::
	.string "Ohoho!\n"
	.string "You certainly are capable!$"

Route204_Text_BeatricePostBattle::
	.string "My hobby is training Pokémon.\p"
	.string "Whenever one of mine gets strong, I\n"
	.string "trade for a weaker, more rare Pokémon.\p"
	.string "That way I can do the whole thing again!$"
