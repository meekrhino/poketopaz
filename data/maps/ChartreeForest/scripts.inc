ChartreeForest_MapScripts::
# 32 "data/maps/ChartreeForest/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, ChartreeForest_OnResume
	.byte 0


ChartreeForest_TriggerFroy::
# 39 "data/maps/ChartreeForest/scripts.pory"
	lockall
# 40 "data/maps/ChartreeForest/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 41 "data/maps/ChartreeForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 42 "data/maps/ChartreeForest/scripts.pory"
	switch VAR_TEMP_1
# 43 "data/maps/ChartreeForest/scripts.pory"
	case 20, ChartreeForest_TriggerFroy_3
# 45 "data/maps/ChartreeForest/scripts.pory"
	case 21, ChartreeForest_TriggerFroy_4
# 47 "data/maps/ChartreeForest/scripts.pory"
	case 22, ChartreeForest_TriggerFroy_5
# 49 "data/maps/ChartreeForest/scripts.pory"
	case 23, ChartreeForest_TriggerFroy_6
# 51 "data/maps/ChartreeForest/scripts.pory"
	case 24, ChartreeForest_TriggerFroy_7
ChartreeForest_TriggerFroy_1:
# 54 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 55 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_FroyIntroduction
# 56 "data/maps/ChartreeForest/scripts.pory"
	waitmessage
# 57 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 58 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyLooksAround
# 59 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 60 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_FroyAboutGym
# 61 "data/maps/ChartreeForest/scripts.pory"
	waitmessage
# 62 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 63 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyStartsToLeave
# 64 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 65 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_FroyAboutAsh
# 66 "data/maps/ChartreeForest/scripts.pory"
	waitmessage
# 67 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 68 "data/maps/ChartreeForest/scripts.pory"
	quest_start QUEST_CHARTREE_ROCKETS
# 69 "data/maps/ChartreeForest/scripts.pory"
	switch VAR_TEMP_1
# 70 "data/maps/ChartreeForest/scripts.pory"
	case 20, ChartreeForest_TriggerFroy_10
# 72 "data/maps/ChartreeForest/scripts.pory"
	case 21, ChartreeForest_TriggerFroy_11
# 74 "data/maps/ChartreeForest/scripts.pory"
	case 22, ChartreeForest_TriggerFroy_12
# 76 "data/maps/ChartreeForest/scripts.pory"
	case 23, ChartreeForest_TriggerFroy_13
# 78 "data/maps/ChartreeForest/scripts.pory"
	case 24, ChartreeForest_TriggerFroy_14
ChartreeForest_TriggerFroy_8:
# 81 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 82 "data/maps/ChartreeForest/scripts.pory"
	removeobject 1
# 83 "data/maps/ChartreeForest/scripts.pory"
	setvar VAR_CHARTREE_FOREST_STATE, 1
# 84 "data/maps/ChartreeForest/scripts.pory"
	releaseall
	end

ChartreeForest_TriggerFroy_3:
# 44 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyApproaches_1
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_4:
# 46 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyApproaches_2
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_5:
# 48 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyApproaches_3
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_6:
# 50 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyApproaches_4
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_7:
# 52 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyApproaches_5
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_10:
# 71 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyLeaves_1
	goto ChartreeForest_TriggerFroy_8

ChartreeForest_TriggerFroy_11:
# 73 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyLeaves_2
	goto ChartreeForest_TriggerFroy_8

ChartreeForest_TriggerFroy_12:
# 75 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyLeaves_3
	goto ChartreeForest_TriggerFroy_8

ChartreeForest_TriggerFroy_13:
# 77 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyLeaves_4
	goto ChartreeForest_TriggerFroy_8

ChartreeForest_TriggerFroy_14:
# 79 "data/maps/ChartreeForest/scripts.pory"
	applymovement 1, mFroyLeaves_5
	goto ChartreeForest_TriggerFroy_8


ChartreeForest_SignRoute203::
# 89 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_SignRoute203_Text_0, MSGBOX_SIGN
	end


ChartreeForest_SignRoute204::
# 94 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_SignRoute204_Text_0, MSGBOX_SIGN
	end


ChartreeForest_Sign::
# 99 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Sign_Text_0, MSGBOX_SIGN
	end


ChartreeForest_DeadendMan::
# 104 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_DeadendMan_Text_0, MSGBOX_NPC
	end


ChartreeForest_LostWoman::
# 109 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_LostWoman_Text_0, MSGBOX_NPC
	end


ChartreeForest_Gentleman::
# 114 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_FRANKLIN, ChartreeForest_Text_FranklinIntro, ChartreeForest_Text_FranklinDefeated
# 115 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_BugCatcher::
# 120 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_MARVIN, ChartreeForest_Text_MarvinIntro, ChartreeForest_Text_MarvinDefeated
# 121 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_MarvinPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_Fisherman::
# 126 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_WALLY, ChartreeForest_Text_WallyIntro, ChartreeForest_Text_WallyDefeated
# 127 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_HexManiac::
# 132 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_ZELDA, ChartreeForest_Text_ZeldaIntro, ChartreeForest_Text_ZeldaDefeated
# 133 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_ZeldaPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_Lass::
# 138 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_SARAH, ChartreeForest_Text_SarahIntro, ChartreeForest_Text_SarahDefeated
# 139 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_RocketGrunt1::
# 144 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_CHARTREE_1, ChartreeForest_Text_RocketGrunt1Intro, ChartreeForest_Text_RocketGrunt1Defeated
# 145 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_RocketGrunt1PostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_RocketGrunt2::
# 150 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_CHARTREE_2, ChartreeForest_Text_RocketGrunt2Intro, ChartreeForest_Text_RocketGrunt2Defeated
# 151 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_RocketGrunt2PostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_RocketGrunt3::
# 156 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_CHARTREE_3, ChartreeForest_Text_RocketGrunt3Intro, ChartreeForest_Text_RocketGrunt3Defeated
# 157 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_RocketGrunt3PostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_RocketGrunt4::
# 162 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_RocketGrunt4_Text_0, MSGBOX_NPC
	end


ChartreeForest_Balfour::
# 167 "data/maps/ChartreeForest/scripts.pory"
	lock
# 168 "data/maps/ChartreeForest/scripts.pory"
	playse SE_PIN
# 169 "data/maps/ChartreeForest/scripts.pory"
	applymovement 14, mLookRightStartled
# 170 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 171 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Balfour_Text_0
# 172 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 173 "data/maps/ChartreeForest/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 174 "data/maps/ChartreeForest/scripts.pory"
	switch VAR_TEMP_1
# 175 "data/maps/ChartreeForest/scripts.pory"
	case 7, ChartreeForest_Balfour_3
# 178 "data/maps/ChartreeForest/scripts.pory"
	case 8, ChartreeForest_Balfour_4
ChartreeForest_Balfour_1:
# 182 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 183 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_BalfourAttacks
# 184 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 185 "data/maps/ChartreeForest/scripts.pory"
	applymovement 15, mWalkRight2
# 186 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 187 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Balfour_Text_1
# 188 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 189 "data/maps/ChartreeForest/scripts.pory"
	trainerbattle_no_intro TRAINER_BALFOUR_1, ChartreeForest_Text_BalfourDefeated
# 190 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Balfour_Text_2
# 191 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Text_BalfourScoffsAtDefeat
# 192 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 193 "data/maps/ChartreeForest/scripts.pory"
	switch VAR_TEMP_1
# 194 "data/maps/ChartreeForest/scripts.pory"
	case 7, ChartreeForest_Balfour_7
# 197 "data/maps/ChartreeForest/scripts.pory"
	case 8, ChartreeForest_Balfour_8
ChartreeForest_Balfour_5:
# 201 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 202 "data/maps/ChartreeForest/scripts.pory"
	msgbox ChartreeForest_Balfour_Text_3
# 203 "data/maps/ChartreeForest/scripts.pory"
	closemessage
# 204 "data/maps/ChartreeForest/scripts.pory"
	applymovement 14, mGruntRunsAwayAfterBalfour
# 205 "data/maps/ChartreeForest/scripts.pory"
	waitmovement 0
# 206 "data/maps/ChartreeForest/scripts.pory"
	removeobject 15
# 207 "data/maps/ChartreeForest/scripts.pory"
	removeobject 14
# 208 "data/maps/ChartreeForest/scripts.pory"
	setvar VAR_CHARTREE_FOREST_STATE, 3
# 209 "data/maps/ChartreeForest/scripts.pory"
	setvar VAR_CRANEWING_CITY_STATE, 2
# 210 "data/maps/ChartreeForest/scripts.pory"
	setvar VAR_SOFTWIND_CITY_STATE, 3
# 211 "data/maps/ChartreeForest/scripts.pory"
	setflag FLAG_HIDE_BRADLEY_ROUTE_204
# 212 "data/maps/ChartreeForest/scripts.pory"
	clearflag FLAG_ROCKETS_IN_CHARTREE
# 213 "data/maps/ChartreeForest/scripts.pory"
	setflag FLAG_HIDE_ROCKETS_IN_CHARTREE
# 214 "data/maps/ChartreeForest/scripts.pory"
	setflag FLAG_THERMA_RETURNED
# 215 "data/maps/ChartreeForest/scripts.pory"
	clearflag FLAG_HIDE_SOFTWIND_CITY_ORION
# 216 "data/maps/ChartreeForest/scripts.pory"
	clearflag FLAG_HIDE_SOFTWIND_CITY_WILLOW
# 217 "data/maps/ChartreeForest/scripts.pory"
	clearflag FLAG_HIDE_BRADLEY_CRANEWING_CENTER
# 218 "data/maps/ChartreeForest/scripts.pory"
	subquest_finish SUB_QUEST_DEFEAT_ROCKETS
# 219 "data/maps/ChartreeForest/scripts.pory"
	quest_set_reward_waiting QUEST_CHARTREE_ROCKETS
# 220 "data/maps/ChartreeForest/scripts.pory"
	warp MAP_CRANEWING_CITY_POKEMON_CENTER, 2, 0, 0
# 221 "data/maps/ChartreeForest/scripts.pory"
	release
	end

ChartreeForest_Balfour_3:
# 177 "data/maps/ChartreeForest/scripts.pory"
	applymovement 15, mBalfourApproachesTop
	goto ChartreeForest_Balfour_1

ChartreeForest_Balfour_4:
# 180 "data/maps/ChartreeForest/scripts.pory"
	applymovement 15, mBalfourApproachesBottom
	goto ChartreeForest_Balfour_1

ChartreeForest_Balfour_7:
# 196 "data/maps/ChartreeForest/scripts.pory"
	applymovement 15, mBalfourDepartsTop
	goto ChartreeForest_Balfour_5

ChartreeForest_Balfour_8:
# 199 "data/maps/ChartreeForest/scripts.pory"
	applymovement 15, mBalfourDepartsBottom
	goto ChartreeForest_Balfour_5


ChartreeForest_OnResume::
# 229 "data/maps/ChartreeForest/scripts.pory"
	setstepcallback STEP_CB_ASH
	return


# 439 "data/maps/ChartreeForest/scripts.pory"
mFroyApproaches_1:
# 440 "data/maps/ChartreeForest/scripts.pory"
	walk_up
# 441 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 441 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 441 "data/maps/ChartreeForest/scripts.pory"
	walk_left
	step_end

# 444 "data/maps/ChartreeForest/scripts.pory"
mFroyApproaches_2:
# 445 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 445 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 445 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 445 "data/maps/ChartreeForest/scripts.pory"
	walk_left
	step_end

# 448 "data/maps/ChartreeForest/scripts.pory"
mFroyApproaches_3:
# 449 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 449 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 450 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 451 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 451 "data/maps/ChartreeForest/scripts.pory"
	walk_left
	step_end

# 454 "data/maps/ChartreeForest/scripts.pory"
mFroyApproaches_4:
# 455 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 455 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 456 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 456 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 457 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 457 "data/maps/ChartreeForest/scripts.pory"
	walk_left
	step_end

# 460 "data/maps/ChartreeForest/scripts.pory"
mFroyApproaches_5:
# 461 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 461 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 462 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 462 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 463 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 463 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 464 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_down
	step_end

# 467 "data/maps/ChartreeForest/scripts.pory"
mFroyLooksAround:
# 468 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_right
# 469 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 469 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 469 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 470 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_up
# 471 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 471 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 471 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 472 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_down
# 473 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 473 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 473 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 474 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_right
# 475 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 475 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 475 "data/maps/ChartreeForest/scripts.pory"
	delay_16
# 476 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_left
	step_end

# 479 "data/maps/ChartreeForest/scripts.pory"
mFroyStartsToLeave:
# 480 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 480 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 481 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_left
	step_end

# 484 "data/maps/ChartreeForest/scripts.pory"
mFroyLeaves_1:
# 485 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 486 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 486 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 486 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 486 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 487 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 487 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 487 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 487 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 488 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 488 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 489 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

# 492 "data/maps/ChartreeForest/scripts.pory"
mFroyLeaves_2:
# 493 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 493 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 493 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 493 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 493 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 494 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 494 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 494 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 494 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 495 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 495 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 496 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

# 499 "data/maps/ChartreeForest/scripts.pory"
mFroyLeaves_3:
# 500 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 500 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 500 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 500 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 500 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 501 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 501 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 501 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 502 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 502 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 503 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

# 506 "data/maps/ChartreeForest/scripts.pory"
mFroyLeaves_4:
# 507 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 507 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 507 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 507 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 507 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 508 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 508 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 509 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 509 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 509 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 510 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

# 513 "data/maps/ChartreeForest/scripts.pory"
mFroyLeaves_5:
# 514 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 514 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 514 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 514 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 514 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 515 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 515 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 516 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 516 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 516 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 517 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

# 520 "data/maps/ChartreeForest/scripts.pory"
mLookRightStartled:
# 521 "data/maps/ChartreeForest/scripts.pory"
	walk_in_place_slow_right
# 522 "data/maps/ChartreeForest/scripts.pory"
	emote_exclamation_mark
	step_end

# 525 "data/maps/ChartreeForest/scripts.pory"
mBalfourApproachesTop:
# 526 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 526 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 526 "data/maps/ChartreeForest/scripts.pory"
	walk_right
	step_end

# 529 "data/maps/ChartreeForest/scripts.pory"
mBalfourApproachesBottom:
# 530 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 530 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 531 "data/maps/ChartreeForest/scripts.pory"
	walk_down
# 532 "data/maps/ChartreeForest/scripts.pory"
	walk_right
	step_end

# 535 "data/maps/ChartreeForest/scripts.pory"
mWalkRight2:
# 536 "data/maps/ChartreeForest/scripts.pory"
	walk_right
# 536 "data/maps/ChartreeForest/scripts.pory"
	walk_right
	step_end

# 539 "data/maps/ChartreeForest/scripts.pory"
mBalfourDepartsTop:
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 540 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 541 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

# 544 "data/maps/ChartreeForest/scripts.pory"
mBalfourDepartsBottom:
# 545 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 545 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 546 "data/maps/ChartreeForest/scripts.pory"
	walk_up
# 547 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 547 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 547 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 547 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 547 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 547 "data/maps/ChartreeForest/scripts.pory"
	walk_left
# 548 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

# 551 "data/maps/ChartreeForest/scripts.pory"
mGruntRunsAwayAfterBalfour:
# 552 "data/maps/ChartreeForest/scripts.pory"
	walk_fast_left
# 552 "data/maps/ChartreeForest/scripts.pory"
	walk_fast_left
# 552 "data/maps/ChartreeForest/scripts.pory"
	walk_fast_left
# 552 "data/maps/ChartreeForest/scripts.pory"
	walk_fast_left
# 553 "data/maps/ChartreeForest/scripts.pory"
	set_invisible
	step_end

ChartreeForest_SignRoute203_Text_0:
# 89 "data/maps/ChartreeForest/scripts.pory"
	.string "{DOWN_ARROW} Exit to Route 203$"

ChartreeForest_SignRoute204_Text_0:
# 94 "data/maps/ChartreeForest/scripts.pory"
	.string "{DOWN_ARROW} Exit to Route 204$"

ChartreeForest_Sign_Text_0:
# 99 "data/maps/ChartreeForest/scripts.pory"
	.string "Chartree Forest\p"
	.string "“In memory of Pinedale Forest, which\n"
	.string "once stood here”$"

ChartreeForest_DeadendMan_Text_0:
# 104 "data/maps/ChartreeForest/scripts.pory"
	.string "Oh man, I must have taken a wrong turn.\p"
	.string "I really wish I was going the other\n"
	.string "direction!$"

ChartreeForest_LostWoman_Text_0:
# 109 "data/maps/ChartreeForest/scripts.pory"
	.string "I'm so lost…\p"
	.string "I jumped over that ledge and now I\n"
	.string "don't know where to go…$"

ChartreeForest_RocketGrunt4_Text_0:
# 162 "data/maps/ChartreeForest/scripts.pory"
	.string "Sorry, kid.\n"
	.string "I was told not to leave this spot.\p"
	.string "I know better than to get drawn into a\n"
	.string "fight with one of you Trainer kids.\p"
	.string "Get gone!$"

ChartreeForest_Balfour_Text_0:
# 171 "data/maps/ChartreeForest/scripts.pory"
	.string "Grunt: Uh, Balfour sir?\p"
	.string "This kid just beat all the workers that\n"
	.string "were left.$"

ChartreeForest_Balfour_Text_1:
# 187 "data/maps/ChartreeForest/scripts.pory"
	.string "Balfour: We're taking this ash, and\n"
	.string "there isn't anything you can do about\l"
	.string "it.$"

ChartreeForest_Balfour_Text_2:
# 190 "data/maps/ChartreeForest/scripts.pory"
	.string "Grunt: …what?\pThis kid beat an Executive!?$"

ChartreeForest_Balfour_Text_3:
# 202 "data/maps/ChartreeForest/scripts.pory"
	.string "Grunt: Where are Allard and Shook?\p"
	.string "If it wasn't for their failure, we could\n"
	.string "have collected so much more ash…$"

ChartreeForest_Text_FroyIntroduction::
# 235 "data/maps/ChartreeForest/scripts.pory"
	.string "Froy: Hey kid, the name's Froy.\p"
	.string "Have you seen any people in black\n"
	.string "around?\p"
	.string "They've stirred up all of the ash, and I\n"
	.string "have to wait for it to fully settle\l"
	.string "again before it can be collected.\p"
	.string "I'm not sure what they're looking for,\n"
	.string "but…$"

ChartreeForest_Text_FroyAboutGym::
# 245 "data/maps/ChartreeForest/scripts.pory"
	.string "Froy: It looks like they've gone, at\n"
	.string "least for now.\p"
	.string "It's supposed to be my job as gym\n"
	.string "leader to protect the forest from harm,\l"
	.string "but if they've already gone, there isn't\l"
	.string "much I can do…\p"
	.string "Froy: Oh!\n"
	.string "You're looking to challenge me?\p"
	.string "Well, we can't do it here.\n"
	.string "Cranewing, my home, is just past here.\p"
	.string "If you can make it through the rest of\n"
	.string "the forest yourself, you might have a\l"
	.string "chance of beating me!$"

ChartreeForest_Text_FroyAboutAsh::
# 258 "data/maps/ChartreeForest/scripts.pory"
	.string "Froy: The ash here is important for\n"
	.string "making glass.\p"
	.string "When you reach Cranewing, you'll\n"
	.string "appreciate why we value this ash so\l"
	.string "highly.\p"
	.string "But to the common person, there is\n"
	.string "nothing in the forest of worth.\p"
	.string "I wonder what those people in black\n"
	.string "were doing here…$"

ChartreeForest_Text_FranklinIntro::
# 268 "data/maps/ChartreeForest/scripts.pory"
	.string "Ahem!\p"
	.string "I walked just a few steps into this\n"
	.string "forest, and got a lung full of air.\p"
	.string "And my clothes are filthy!\n"
	.string "How irritating!$"

ChartreeForest_Text_FranklinDefeated::
# 274 "data/maps/ChartreeForest/scripts.pory"
	.string "You can handle this forest, I'm sure.$"

ChartreeForest_Text_FranklinPostBattle::
# 280 "data/maps/ChartreeForest/scripts.pory"
	.string "I think I'll go home and clean myself up.\p"
	.string "I can't arrive in Cranewing looking like\n"
	.string "this.$"

ChartreeForest_Text_MarvinIntro::
# 286 "data/maps/ChartreeForest/scripts.pory"
	.string "I can't decide if this forest is great\n"
	.string "for bug trainers, or terrifying!$"

ChartreeForest_Text_MarvinDefeated::
# 292 "data/maps/ChartreeForest/scripts.pory"
	.string "I guess I'm leaning toward terrifying if\n"
	.string "you're in here!$"

ChartreeForest_Text_MarvinPostBattle::
# 298 "data/maps/ChartreeForest/scripts.pory"
	.string "There are some awesome bugs in this\n"
	.string "forest, but all these fire types make it\l"
	.string "hard for my other Pokémon.$"

ChartreeForest_Text_WallyIntro::
# 304 "data/maps/ChartreeForest/scripts.pory"
	.string "You must be wondering what a fisherman\n"
	.string "like me is doing in a dark, dusty place\l"
	.string "like this!$"

ChartreeForest_Text_WallyDefeated::
# 310 "data/maps/ChartreeForest/scripts.pory"
	.string "I need more training still…$"

ChartreeForest_Text_WallyPostBattle::
# 316 "data/maps/ChartreeForest/scripts.pory"
	.string "It's simple!\n"
	.string "I come here to train my Pokémon against\l"
	.string "all of these Fire type Pokémon!\p"
	.string "There may not be any Water Pokémon to\n"
	.string "catch, but it's great for training then!$"

ChartreeForest_Text_ZeldaIntro::
# 322 "data/maps/ChartreeForest/scripts.pory"
	.string "… … …\n"
	.string "…I've been waiting for you…$"

ChartreeForest_Text_ZeldaDefeated::
# 328 "data/maps/ChartreeForest/scripts.pory"
	.string "… … …$"

ChartreeForest_Text_ZeldaPostBattle::
# 334 "data/maps/ChartreeForest/scripts.pory"
	.string "…I knew you would defeat me…$"

ChartreeForest_Text_SarahIntro::
# 340 "data/maps/ChartreeForest/scripts.pory"
	.string "You'd better turn back now!\p"
	.string "You'll never get through this forest.\n"
	.string "You're not even close!$"

ChartreeForest_Text_SarahDefeated::
# 346 "data/maps/ChartreeForest/scripts.pory"
	.string "You beat me, but you should still turn\n"
	.string "back!$"

ChartreeForest_Text_SarahPostBattle::
# 352 "data/maps/ChartreeForest/scripts.pory"
	.string "…Okay, I might have exaggerated.\p"
	.string "You're actually very close to the exit.$"

ChartreeForest_Text_RocketGrunt1Intro::
# 358 "data/maps/ChartreeForest/scripts.pory"
	.string "Team Rocket has important work in this\n"
	.string "forest.\p"
	.string "We have no time for you.\n"
	.string "Get out of our way!$"

ChartreeForest_Text_RocketGrunt1Defeated::
# 364 "data/maps/ChartreeForest/scripts.pory"
	.string "Another kid causing trouble…$"

ChartreeForest_Text_RocketGrunt1PostBattle::
# 370 "data/maps/ChartreeForest/scripts.pory"
	.string "Well, you beat me.\p"
	.string "What, you thought I'd just let you\n"
	.string "pass?\p"
	.string "My Pokémon are defeated, but I'm still\n"
	.string "standing.$"

ChartreeForest_Text_RocketGrunt2Intro::
# 376 "data/maps/ChartreeForest/scripts.pory"
	.string "What's a little kid like you doing in a\n"
	.string "dangerous place like this?$"

ChartreeForest_Text_RocketGrunt2Defeated::
# 382 "data/maps/ChartreeForest/scripts.pory"
	.string "This strong at your age?$"

ChartreeForest_Text_RocketGrunt2PostBattle::
# 388 "data/maps/ChartreeForest/scripts.pory"
	.string "You may be strong, but you'd still best\n"
	.string "step lightly.\p"
	.string "Team Rocket has business here.\n"
	.string "That means you don't.$"

ChartreeForest_Text_RocketGrunt3Intro::
# 394 "data/maps/ChartreeForest/scripts.pory"
	.string "You must be the kid that fool lost to.\p"
	.string "That won't happen again!\n"
	.string "I won't disappoint Balfour!$"

ChartreeForest_Text_RocketGrunt3Defeated::
# 400 "data/maps/ChartreeForest/scripts.pory"
	.string "Such shame…$"

ChartreeForest_Text_RocketGrunt3PostBattle::
# 406 "data/maps/ChartreeForest/scripts.pory"
	.string "Look, just don't mention you saw me,\n"
	.string "alright?\p"
	.string "I'd rather Balfour just thinks I missed\n"
	.string "seeing you…$"

ChartreeForest_Text_BalfourAttacks::
# 412 "data/maps/ChartreeForest/scripts.pory"
	.string "Balfour: …This isn't the same one that\n"
	.string "defeated all of your Pokémon, is it?\p"
	.string "This is someone new.\p"
	.string "Why can't any of our missions end\n"
	.string "peacefully?\p"
	.string "Why is it that we always end up\n"
	.string "fighting?\p"
	.string "Well, I guess it's part of the job,\n"
	.string "stopping ignorant children.$"

ChartreeForest_Text_BalfourDefeated::
# 422 "data/maps/ChartreeForest/scripts.pory"
	.string "… … …!\n"
	.string "Just luck, that's all.$"

ChartreeForest_Text_BalfourScoffsAtDefeat::
# 428 "data/maps/ChartreeForest/scripts.pory"
	.string "Balfour: Heh, you're lucky, kid.\p"
	.string "I didn't bring my own Pokémon into this\n"
	.string "sooty forest, but still…\p"
	.string "You are impressive.\n"
	.string "You win this time, but I have no doubt\l"
	.string "we will meet again.$"
