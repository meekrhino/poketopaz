Route204_MapScripts::
	.byte 0


Route204_RouteSignChartreeForest::
	msgbox Route204_RouteSignChartreeForest_Text_0, MSGBOX_SIGN
	end


Route204_RouteSignCranewingCity::
	msgbox Route204_RouteSignCranewingCity_Text_0, MSGBOX_SIGN
	end


Route204_Boy::
	compare VAR_ROUTE204_STATE, 2
	goto_if_ne Route204_Boy_2
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


Route204_MeetShookAndAllard::
	lock
	addobject 2
	applymovement 2, mShookAndAllardApproach1
	delay 60
	addobject 1
	applymovement 1, mShookAndAllardApproach1
	waitmovement 0
	msgbox Route204_MeetShookAndAllard_Text_0
	closemessage
	applymovement 2, mShookAndAllardApproach2
	applymovement 1, mShookAndAllardApproach2
	waitmovement 0
	applymovement 1, mFaceLeft
	waitmovement 0
	msgbox Route204_MeetShookAndAllard_Text_1
	applymovement 1, mFaceDown
	waitmovement 0
	msgbox Route204_MeetShookAndAllard_Text_2
	msgbox Route204_MeetShookAndAllard_Text_3
	closemessage
	delay 15
	msgbox Route204_MeetShookAndAllard_Text_4
	applymovement 2, mLookUpStartled
	applymovement 1, mLookUpStartled
	waitmovement 0
	closemessage
	addobject 3
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 20
	goto_if_eq Route204_MeetShookAndAllard_2
	applymovement 3, mBradleyApproachesShook
Route204_MeetShookAndAllard_1:
	waitmovement 0
	msgbox Route204_MeetShookAndAllard_Text_5
	msgbox Route204_MeetShookAndAllard_Text_6
	closemessage
	applymovement 3, mBradleyFidgetsDown
	waitmovement 0
	msgbox Route204_MeetShookAndAllard_Text_7
	closemessage
	delay 30
	applymovement 2, mFaceRight
	applymovement 1, mFaceLeft
	waitmovement 0
	msgbox Route204_MeetShookAndAllard_Text_8
	msgbox Route204_MeetShookAndAllard_Text_9
	compare VAR_TEMP_0, 20
	goto_if_eq Route204_MeetShookAndAllard_6
	applymovement 2, mFaceUp
	applymovement 1, mFaceDown
Route204_MeetShookAndAllard_5:
	closemessage
	copyobjectxytoperm 3
	copyobjectxytoperm 2
	copyobjectxytoperm 1
	setrespawn HEAL_LOCATION_CRANEWING_CITY
	trainerbattle_double TRAINER_SHOOK_AND_ALLARD_1, Route204_Text_ShookAndAllardIntro, Route204_Text_ShookAndAllardDefeated, Route204_Text_ShookAndAllardNoMons, Route204_ShookAndAllardDefeated, NO_MUSIC
	return

Route204_MeetShookAndAllard_2:
	applymovement 3, mBradleyApproachesAllard
	goto Route204_MeetShookAndAllard_1

Route204_MeetShookAndAllard_6:
	applymovement 2, mFaceDown
	applymovement 1, mFaceUp
	goto Route204_MeetShookAndAllard_5


Route204_ShookAndAllardDefeated::
	msgbox Route204_ShookAndAllardDefeated_Text_0
	msgbox Route204_ShookAndAllardDefeated_Text_1
	closemessage
	compare VAR_TEMP_0, 20
	goto_if_eq Route204_ShookAndAllardDefeated_2
	applymovement 2, mShookRunAway
	applymovement 1, mShookOrAllardRunAway
Route204_ShookAndAllardDefeated_1:
	waitmovement 0
	removeobject 2
	removeobject 1
	msgbox Route204_Text_BradleyIsHurt
	closemessage
	applymovement 3, mFaceUp
	delay 60
	msgbox Route204_Text_RocketsRipUpPlants
	closemessage
	applymovement 3, mBradleyFidgetsDown
	waitmovement 0
	msgbox Route204_Text_BradleyDontWorryAboutMe
	setflag FLAG_ROCKETS_IN_CHARTREE
	clearflag FLAG_HIDE_ROCKETS_IN_CHARTREE
	setvar VAR_ROUTE204_STATE, 2
	setvar VAR_CHARTREE_FOREST_STATE, 2
	setflag FLAG_HIDE_SHOOK_ALLARD_ROUTE_204
	closemessage
	release
	end

Route204_ShookAndAllardDefeated_2:
	applymovement 2, mShookOrAllardRunAway
	applymovement 1, mAllardRunAway
	goto Route204_ShookAndAllardDefeated_1


Route204_BradleyHurt::
	msgbox Route204_BradleyHurt_Text_0, MSGBOX_NPC
	end


mShookAndAllardApproach1:
	walk_down
	walk_down
	walk_down
	walk_down
	emote_exclamation_mark
	step_end

mShookAndAllardApproach2:
	walk_down
	walk_down
	walk_down
	step_end

mBradleyApproachesShook:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

mBradleyApproachesAllard:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

mShookOrAllardRunAway:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

mShookRunAway:
	walk_right
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	set_invisible
	step_end

mAllardRunAway:
	walk_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	set_invisible
	step_end

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

Route204_MeetShookAndAllard_Text_0:
	.string "Grunt 1: Hey, you!$"

Route204_MeetShookAndAllard_Text_1:
	.string "Grunt 2: Uh… Shook?\nWhat should we do with them?$"

Route204_MeetShookAndAllard_Text_2:
	.string "Shook: Balfour will be angry if we let\n"
	.string "them through…\p"
	.string "I guess we have to take them out,\n"
	.string "ALLARD.$"

Route204_MeetShookAndAllard_Text_3:
	.string "Allard: Get ready, kid!\nWe're both coming at you at once!$"

Route204_MeetShookAndAllard_Text_4:
	.string "???: I don't think so!$"

Route204_MeetShookAndAllard_Text_5:
	.string "Allard: How did you get through the\n"
	.string "forest!?$"

Route204_MeetShookAndAllard_Text_6:
	.string "Bradley: I broke through everything in\n"
	.string "my way!\p"
	.string "You Rockets are no match for me!$"

Route204_MeetShookAndAllard_Text_7:
	.string "Bradley: Nice to see you, {PLAYER}!\n"
	.string "Are you ready?\p"
	.string "These guys are no match for us\n"
	.string "together!$"

Route204_MeetShookAndAllard_Text_8:
	.string "Allard: This is bad, Shook!\p"
	.string "I don't think we can beat both of them…$"

Route204_MeetShookAndAllard_Text_9:
	.string "Shook: We have to try…\p"
	.string "We can't get an executive angry, not on\n"
	.string "our first mission.$"

Route204_ShookAndAllardDefeated_Text_0:
	.string "Allard: What do we do now?$"

Route204_ShookAndAllardDefeated_Text_1:
	.string "Shook: … … …\nWe have to run this time.\pBut we'll see you again, {PLAYER}.$"

Route204_BradleyHurt_Text_0:
	.string "Bradley: I'll get someone to help me to\n"
	.string "the Pokémon Center.\p"
	.string "You need to hurry!$"

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

Route204_Text_BradleyIsHurt::
	.string "Bradley: I put on a show for them, but I\n"
	.string "hurt myself, {PLAYER}.\p"
	.string "I've done something to my ankle, and I\n"
	.string "don't think I can battle anymore.\p"
	.string "I beat a couple of the guys in there,\n"
	.string "but there are still a few left.$"

Route204_Text_RocketsRipUpPlants::
	.string "Bradley: They're collecting the ash by\n"
	.string "ripping all the plants with ash on them\l"
	.string "out of the ground…\p"
	.string "If they do that…\n"
	.string "where will all the Pokémon live?$"

Route204_Text_BradleyDontWorryAboutMe::
	.string "Bradley: {PLAYER}, you have to go in\n"
	.string "there and stop them!\p"
	.string "Don't worry about me, I'll get someone\n"
	.string "to help me to the Pokémon Center.\p"
	.string "You need to hurry!$"

Route204_Text_ShookAndAllardIntro::
	.string "Shook: Here we come!$"

Route204_Text_ShookAndAllardDefeated::
	.string "Allard: Not good, not good!$"

Route204_Text_ShookAndAllardNoMons::
	.string "placeholder no mons$"
