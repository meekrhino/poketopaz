Route204_MapScripts::
	.byte 0


Route204_RouteSignChartreeForest::
# 42 "data/maps/Route204/scripts.pory"
	msgbox Route204_RouteSignChartreeForest_Text_0, MSGBOX_SIGN
	end


Route204_RouteSignCranewingCity::
# 47 "data/maps/Route204/scripts.pory"
	msgbox Route204_RouteSignCranewingCity_Text_0, MSGBOX_SIGN
	end


Route204_Boy::
# 52 "data/maps/Route204/scripts.pory"
	compare VAR_ROUTE204_STATE, 2
	goto_if_ne Route204_Boy_2
# 56 "data/maps/Route204/scripts.pory"
	msgbox Route204_Boy_Text_1, MSGBOX_NPC
Route204_Boy_1:
	end

Route204_Boy_2:
# 53 "data/maps/Route204/scripts.pory"
	msgbox Route204_Boy_Text_0, MSGBOX_NPC
	goto Route204_Boy_1


Route204_Beauty::
# 62 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_AINA, Route204_Text_AinaIntro, Route204_Text_AinaDefeated
# 63 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_AinaPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_RichBoy::
# 68 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_DERRICK, Route204_Text_DerrickIntro, Route204_Text_DerrickDefeated
# 69 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_DerrickPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_Athlete::
# 74 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_LEXI, Route204_Text_LexiIntro, Route204_Text_LexiDefeated
# 75 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_LexiPostBattle, MSGBOX_AUTOCLOSE
	end


Route204_ExpertWoman::
# 80 "data/maps/Route204/scripts.pory"
	trainerbattle_single TRAINER_BEATRICE, Route204_Text_BeatriceIntro, Route204_Text_BeatriceDefeated
# 81 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_BeatricePostBattle, MSGBOX_AUTOCLOSE
	end


Route204_MeetShookAndAllard::
# 86 "data/maps/Route204/scripts.pory"
	lock
# 87 "data/maps/Route204/scripts.pory"
	addobject 2
# 88 "data/maps/Route204/scripts.pory"
	applymovement 2, mShookAndAllardApproach1
# 89 "data/maps/Route204/scripts.pory"
	delay 60
# 90 "data/maps/Route204/scripts.pory"
	addobject 1
# 91 "data/maps/Route204/scripts.pory"
	applymovement 1, mShookAndAllardApproach1
# 92 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 93 "data/maps/Route204/scripts.pory"
	playse SE_PIN
# 94 "data/maps/Route204/scripts.pory"
	applymovement 2, mExclamationPoint
# 95 "data/maps/Route204/scripts.pory"
	applymovement 1, mExclamationPoint
# 96 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 97 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_0
# 98 "data/maps/Route204/scripts.pory"
	closemessage
# 99 "data/maps/Route204/scripts.pory"
	applymovement 2, mShookAndAllardApproach2
# 100 "data/maps/Route204/scripts.pory"
	applymovement 1, mShookAndAllardApproach2
# 101 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 102 "data/maps/Route204/scripts.pory"
	applymovement 1, mFaceLeft
# 103 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 104 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_1
# 105 "data/maps/Route204/scripts.pory"
	applymovement 1, mFaceDown
# 106 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 107 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_2
# 108 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_3
# 109 "data/maps/Route204/scripts.pory"
	closemessage
# 110 "data/maps/Route204/scripts.pory"
	delay 15
# 111 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_4
# 112 "data/maps/Route204/scripts.pory"
	playse SE_PIN
# 113 "data/maps/Route204/scripts.pory"
	applymovement 2, mLookUpStartled
# 114 "data/maps/Route204/scripts.pory"
	applymovement 1, mLookUpStartled
# 115 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 116 "data/maps/Route204/scripts.pory"
	closemessage
# 117 "data/maps/Route204/scripts.pory"
	setvar VAR_NEOBAY_STATE, 9
# 118 "data/maps/Route204/scripts.pory"
	addobject 3
# 119 "data/maps/Route204/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 120 "data/maps/Route204/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Route204_MeetShookAndAllard_2
# 126 "data/maps/Route204/scripts.pory"
	applymovement 3, mBradleyApproachesShook
Route204_MeetShookAndAllard_1:
# 128 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 129 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_5
# 130 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_6
# 131 "data/maps/Route204/scripts.pory"
	closemessage
# 132 "data/maps/Route204/scripts.pory"
	applymovement 3, mBradleyFidgetsDown
# 133 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 134 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_7
# 135 "data/maps/Route204/scripts.pory"
	closemessage
# 136 "data/maps/Route204/scripts.pory"
	delay 30
# 137 "data/maps/Route204/scripts.pory"
	applymovement 2, mFaceRight
# 138 "data/maps/Route204/scripts.pory"
	applymovement 1, mFaceLeft
# 139 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 140 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_8
# 141 "data/maps/Route204/scripts.pory"
	msgbox Route204_MeetShookAndAllard_Text_9
# 142 "data/maps/Route204/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Route204_MeetShookAndAllard_6
# 149 "data/maps/Route204/scripts.pory"
	applymovement 2, mFaceUp
# 150 "data/maps/Route204/scripts.pory"
	applymovement 1, mFaceDown
Route204_MeetShookAndAllard_5:
# 152 "data/maps/Route204/scripts.pory"
	closemessage
# 154 "data/maps/Route204/scripts.pory"
	copyobjectxytoperm 3
# 155 "data/maps/Route204/scripts.pory"
	copyobjectxytoperm 2
# 156 "data/maps/Route204/scripts.pory"
	copyobjectxytoperm 1
# 157 "data/maps/Route204/scripts.pory"
	setrespawn HEAL_LOCATION_CRANEWING_CITY
# 158 "data/maps/Route204/scripts.pory"
	switch VAR_STARTER_MON
# 159 "data/maps/Route204/scripts.pory"
	case 0, Route204_MeetShookAndAllard_11
# 161 "data/maps/Route204/scripts.pory"
	case 1, Route204_MeetShookAndAllard_12
# 163 "data/maps/Route204/scripts.pory"
	case 2, Route204_MeetShookAndAllard_13
Route204_MeetShookAndAllard_9:
# 166 "data/maps/Route204/scripts.pory"
	goto Route204_ShookAndAllardDefeated
	return

Route204_MeetShookAndAllard_2:
# 122 "data/maps/Route204/scripts.pory"
	applymovement 3, mBradleyApproachesAllard
	goto Route204_MeetShookAndAllard_1

Route204_MeetShookAndAllard_6:
# 144 "data/maps/Route204/scripts.pory"
	applymovement 2, mFaceDown
# 145 "data/maps/Route204/scripts.pory"
	applymovement 1, mFaceUp
	goto Route204_MeetShookAndAllard_5

Route204_MeetShookAndAllard_11:
# 160 "data/maps/Route204/scripts.pory"
	trainerbattle_multi TRAINER_SHOOK_1, Route204_Text_ShookDefeated, TRAINER_ALLARD_1, Route204_Text_AllardDefeated, PARTNER_BRADLEY_ROUTE_204_VENAP
	goto Route204_MeetShookAndAllard_9

Route204_MeetShookAndAllard_12:
# 162 "data/maps/Route204/scripts.pory"
	trainerbattle_multi TRAINER_SHOOK_1, Route204_Text_ShookDefeated, TRAINER_ALLARD_1, Route204_Text_AllardDefeated, PARTNER_BRADLEY_ROUTE_204_CELSINGE
	goto Route204_MeetShookAndAllard_9

Route204_MeetShookAndAllard_13:
# 164 "data/maps/Route204/scripts.pory"
	trainerbattle_multi TRAINER_SHOOK_1, Route204_Text_ShookDefeated, TRAINER_ALLARD_1, Route204_Text_AllardDefeated, PARTNER_BRADLEY_ROUTE_204_ECHOISE
	goto Route204_MeetShookAndAllard_9


Route204_ShookAndAllardDefeated::
# 171 "data/maps/Route204/scripts.pory"
	msgbox Route204_ShookAndAllardDefeated_Text_0
# 172 "data/maps/Route204/scripts.pory"
	msgbox Route204_ShookAndAllardDefeated_Text_1
# 173 "data/maps/Route204/scripts.pory"
	closemessage
# 174 "data/maps/Route204/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Route204_ShookAndAllardDefeated_2
# 181 "data/maps/Route204/scripts.pory"
	applymovement 2, mShookRunAway
# 182 "data/maps/Route204/scripts.pory"
	applymovement 1, mShookOrAllardRunAway
Route204_ShookAndAllardDefeated_1:
# 184 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 185 "data/maps/Route204/scripts.pory"
	removeobject 2
# 186 "data/maps/Route204/scripts.pory"
	removeobject 1
# 187 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_BradleyIsHurt
# 188 "data/maps/Route204/scripts.pory"
	closemessage
# 189 "data/maps/Route204/scripts.pory"
	applymovement 3, mFaceUp
# 190 "data/maps/Route204/scripts.pory"
	delay 60
# 191 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_RocketsRipUpPlants
# 192 "data/maps/Route204/scripts.pory"
	closemessage
# 193 "data/maps/Route204/scripts.pory"
	applymovement 3, mBradleyFidgetsDown
# 194 "data/maps/Route204/scripts.pory"
	waitmovement 0
# 195 "data/maps/Route204/scripts.pory"
	msgbox Route204_Text_BradleyDontWorryAboutMe
# 196 "data/maps/Route204/scripts.pory"
	setflag FLAG_ROCKETS_IN_CHARTREE
# 197 "data/maps/Route204/scripts.pory"
	clearflag FLAG_HIDE_ROCKETS_IN_CHARTREE
# 198 "data/maps/Route204/scripts.pory"
	setvar VAR_ROUTE204_STATE, 2
# 199 "data/maps/Route204/scripts.pory"
	setvar VAR_CHARTREE_FOREST_STATE, 2
# 200 "data/maps/Route204/scripts.pory"
	setflag FLAG_HIDE_SHOOK_ALLARD_ROUTE_204
# 201 "data/maps/Route204/scripts.pory"
	closemessage
# 202 "data/maps/Route204/scripts.pory"
	subquest_finish SUB_QUEST_INVESTIGATE_FOREST
# 203 "data/maps/Route204/scripts.pory"
	release
	end

Route204_ShookAndAllardDefeated_2:
# 176 "data/maps/Route204/scripts.pory"
	applymovement 2, mShookOrAllardRunAway
# 177 "data/maps/Route204/scripts.pory"
	applymovement 1, mAllardRunAway
	goto Route204_ShookAndAllardDefeated_1


Route204_BradleyHurt::
# 208 "data/maps/Route204/scripts.pory"
	msgbox Route204_BradleyHurt_Text_0, MSGBOX_NPC
	end


# 338 "data/maps/Route204/scripts.pory"
mShookAndAllardApproach1:
# 339 "data/maps/Route204/scripts.pory"
	walk_down
# 339 "data/maps/Route204/scripts.pory"
	walk_down
# 339 "data/maps/Route204/scripts.pory"
	walk_down
# 339 "data/maps/Route204/scripts.pory"
	walk_down
	step_end

# 342 "data/maps/Route204/scripts.pory"
mShookAndAllardApproach2:
# 343 "data/maps/Route204/scripts.pory"
	walk_down
# 343 "data/maps/Route204/scripts.pory"
	walk_down
# 343 "data/maps/Route204/scripts.pory"
	walk_down
	step_end

# 346 "data/maps/Route204/scripts.pory"
mBradleyApproachesShook:
# 347 "data/maps/Route204/scripts.pory"
	walk_down
# 347 "data/maps/Route204/scripts.pory"
	walk_down
# 347 "data/maps/Route204/scripts.pory"
	walk_down
# 347 "data/maps/Route204/scripts.pory"
	walk_down
# 347 "data/maps/Route204/scripts.pory"
	walk_down
# 347 "data/maps/Route204/scripts.pory"
	walk_down
	step_end

# 350 "data/maps/Route204/scripts.pory"
mBradleyApproachesAllard:
# 351 "data/maps/Route204/scripts.pory"
	walk_right
# 352 "data/maps/Route204/scripts.pory"
	walk_down
# 352 "data/maps/Route204/scripts.pory"
	walk_down
# 352 "data/maps/Route204/scripts.pory"
	walk_down
# 352 "data/maps/Route204/scripts.pory"
	walk_down
# 352 "data/maps/Route204/scripts.pory"
	walk_down
# 352 "data/maps/Route204/scripts.pory"
	walk_down
	step_end

# 355 "data/maps/Route204/scripts.pory"
mShookOrAllardRunAway:
# 356 "data/maps/Route204/scripts.pory"
	walk_up
# 356 "data/maps/Route204/scripts.pory"
	walk_up
# 356 "data/maps/Route204/scripts.pory"
	walk_up
# 356 "data/maps/Route204/scripts.pory"
	walk_up
# 356 "data/maps/Route204/scripts.pory"
	walk_up
# 356 "data/maps/Route204/scripts.pory"
	walk_up
# 356 "data/maps/Route204/scripts.pory"
	walk_up
# 357 "data/maps/Route204/scripts.pory"
	set_invisible
	step_end

# 360 "data/maps/Route204/scripts.pory"
mShookRunAway:
# 361 "data/maps/Route204/scripts.pory"
	walk_right
# 362 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 362 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 363 "data/maps/Route204/scripts.pory"
	set_invisible
	step_end

# 366 "data/maps/Route204/scripts.pory"
mAllardRunAway:
# 367 "data/maps/Route204/scripts.pory"
	walk_left
# 368 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 368 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 368 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 368 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 368 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 368 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 368 "data/maps/Route204/scripts.pory"
	walk_fast_up
# 369 "data/maps/Route204/scripts.pory"
	set_invisible
	step_end

Route204_RouteSignChartreeForest_Text_0:
# 42 "data/maps/Route204/scripts.pory"
	.string "Chartree Forest\nPlease watch your step.$"

Route204_RouteSignCranewingCity_Text_0:
# 47 "data/maps/Route204/scripts.pory"
	.string "Route 204\n{DOWN_ARROW} Cranewing City$"

Route204_Boy_Text_0:
# 53 "data/maps/Route204/scripts.pory"
	.string "I saw some shady looking people in\n"
	.string "black lurking around the forest.\p"
	.string "I think Froy chased them away for now.$"

Route204_Boy_Text_1:
# 56 "data/maps/Route204/scripts.pory"
	.string "Phew, I think those goons are gone for\n"
	.string "good this time.\p"
	.string "Well done!\n"
	.string "You must be some trainer!$"

Route204_MeetShookAndAllard_Text_0:
# 97 "data/maps/Route204/scripts.pory"
	.string "Grunt 1: Hey, you!$"

Route204_MeetShookAndAllard_Text_1:
# 104 "data/maps/Route204/scripts.pory"
	.string "Grunt 2: Uh… Shook?\nWhat should we do with them?$"

Route204_MeetShookAndAllard_Text_2:
# 107 "data/maps/Route204/scripts.pory"
	.string "Shook: Balfour will be angry if we let\n"
	.string "them through…\p"
	.string "I guess we have to take them out,\n"
	.string "ALLARD.$"

Route204_MeetShookAndAllard_Text_3:
# 108 "data/maps/Route204/scripts.pory"
	.string "Allard: Get ready, kid!\nWe're both coming at you at once!$"

Route204_MeetShookAndAllard_Text_4:
# 111 "data/maps/Route204/scripts.pory"
	.string "???: I don't think so!$"

Route204_MeetShookAndAllard_Text_5:
# 129 "data/maps/Route204/scripts.pory"
	.string "Allard: How did you get through the\n"
	.string "forest!?$"

Route204_MeetShookAndAllard_Text_6:
# 130 "data/maps/Route204/scripts.pory"
	.string "Bradley: I broke through everything in\n"
	.string "my way!\p"
	.string "You Rockets are no match for me!$"

Route204_MeetShookAndAllard_Text_7:
# 134 "data/maps/Route204/scripts.pory"
	.string "Bradley: Nice to see you, {PLAYER}!\n"
	.string "Are you ready?\p"
	.string "These guys are no match for us\n"
	.string "together!$"

Route204_MeetShookAndAllard_Text_8:
# 140 "data/maps/Route204/scripts.pory"
	.string "Allard: This is bad, Shook!\p"
	.string "I don't think we can beat both of them…$"

Route204_MeetShookAndAllard_Text_9:
# 141 "data/maps/Route204/scripts.pory"
	.string "Shook: We have to try…\p"
	.string "We can't get an executive angry, not on\n"
	.string "our first mission.$"

Route204_ShookAndAllardDefeated_Text_0:
# 171 "data/maps/Route204/scripts.pory"
	.string "Allard: What do we do now?$"

Route204_ShookAndAllardDefeated_Text_1:
# 172 "data/maps/Route204/scripts.pory"
	.string "Shook: … … …\nWe have to run this time.\pBut we'll see you again, {PLAYER}.$"

Route204_BradleyHurt_Text_0:
# 208 "data/maps/Route204/scripts.pory"
	.string "Bradley: I'll get someone to help me to\n"
	.string "the Pokémon Center.\p"
	.string "You need to hurry!$"

Route204_Text_AinaIntro::
# 219 "data/maps/Route204/scripts.pory"
	.string "Did you know the ash in the forest can\n"
	.string "be used in makeup, as well as glass?$"

Route204_Text_AinaDefeated::
# 225 "data/maps/Route204/scripts.pory"
	.string "That's okay.\n"
	.string "Pokémon battles are only a hobby.$"

Route204_Text_AinaPostBattle::
# 231 "data/maps/Route204/scripts.pory"
	.string "I'm thinking about starting a new line\n"
	.string "of beauty products made from ash!\p"
	.string "I'm trying to come up with a name…$"

Route204_Text_DerrickIntro::
# 237 "data/maps/Route204/scripts.pory"
	.string "I'm not hiding from all of the terrifying\n"
	.string "bugs in the forest.\p"
	.string "Nope!\n"
	.string "Not me!\p"
	.string "Just watch this!$"

Route204_Text_DerrickDefeated::
# 243 "data/maps/Route204/scripts.pory"
	.string "Okay, okay. M-maybe I'm a little scared.$"

Route204_Text_DerrickPostBattle::
# 249 "data/maps/Route204/scripts.pory"
	.string "Don't tell anyone you saw me back here,\n"
	.string "okay?\p"
	.string "My dad would be furious.$"

Route204_Text_LexiIntro::
# 255 "data/maps/Route204/scripts.pory"
	.string "The air out here is so refreshing!\p"
	.string "It's perfect for a morning run to get\n"
	.string "the blood flowing.\p"
	.string "You know what else gets the blood\n"
	.string "flowing?\p"
	.string "That's right, a Pokémon battle!$"

Route204_Text_LexiDefeated::
# 261 "data/maps/Route204/scripts.pory"
	.string "Now that was exhilerating!$"

Route204_Text_LexiPostBattle::
# 267 "data/maps/Route204/scripts.pory"
	.string "I like to take my Pokémon running with\n"
	.string "me.\p"
	.string "I wonder if the exercise helps them get\n"
	.string "stronger, too?$"

Route204_Text_BeatriceIntro::
# 273 "data/maps/Route204/scripts.pory"
	.string "I've been training Pokémon since before\n"
	.string "you were born!\p"
	.string "If you get past me, you'll be in\n"
	.string "Cranewing.\p"
	.string "Think you can handle me?$"

Route204_Text_BeatriceDefeated::
# 279 "data/maps/Route204/scripts.pory"
	.string "Ohoho!\n"
	.string "You certainly are capable!$"

Route204_Text_BeatricePostBattle::
# 285 "data/maps/Route204/scripts.pory"
	.string "My hobby is training Pokémon.\p"
	.string "Whenever one of mine gets strong, I\n"
	.string "trade for a weaker, more rare Pokémon.\p"
	.string "That way I can do the whole thing again!$"

Route204_Text_BradleyIsHurt::
# 291 "data/maps/Route204/scripts.pory"
	.string "Bradley: I put on a show for them, but I\n"
	.string "hurt myself, {PLAYER}.\p"
	.string "I've done something to my ankle, and I\n"
	.string "don't think I can battle anymore.\p"
	.string "I beat a couple of the guys in there,\n"
	.string "but there are still a few left.$"

Route204_Text_RocketsRipUpPlants::
# 299 "data/maps/Route204/scripts.pory"
	.string "Bradley: They're collecting the ash by\n"
	.string "ripping all the plants with ash on them\l"
	.string "out of the ground…\p"
	.string "If they do that…\n"
	.string "where will all the Pokémon live?$"

Route204_Text_BradleyDontWorryAboutMe::
# 307 "data/maps/Route204/scripts.pory"
	.string "Bradley: {PLAYER}, you have to go in\n"
	.string "there and stop them!\p"
	.string "Don't worry about me, I'll get someone\n"
	.string "to help me to the Pokémon Center.\p"
	.string "You need to hurry!$"

Route204_Text_ShookAndAllardIntro::
# 315 "data/maps/Route204/scripts.pory"
	.string "Shook: Here we come!$"

Route204_Text_ShookDefeated::
# 321 "data/maps/Route204/scripts.pory"
	.string "Shook: You've got to be kidding me!$"

Route204_Text_AllardDefeated::
# 327 "data/maps/Route204/scripts.pory"
	.string "Allard: Not good, not good!$"
