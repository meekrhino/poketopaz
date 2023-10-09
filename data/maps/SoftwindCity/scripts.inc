SoftwindCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SoftwindCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SoftwindCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SoftwindCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SOFTWIND_CITY_STATE, 5, SoftwindCity_AfterTherma
	.2byte 0


SoftwindCity_TownSign::
	msgbox SoftwindCity_Text_TownSign, MSGBOX_SIGN
	end


SoftwindCity_GymSign::
	msgbox SoftwindCity_Text_GymSign, MSGBOX_SIGN
	end


SoftwindCity_MoltresSign::
	msgbox SoftwindCity_Text_TributeMoltres, MSGBOX_SIGN
	end


SoftwindCity_ArticunoSign::
	msgbox SoftwindCity_Text_TributeArticuno, MSGBOX_SIGN
	end


SoftwindCity_ZapdosSign::
	msgbox SoftwindCity_Text_TributeZapdos, MSGBOX_SIGN
	end


SoftwindCity_ElderGuard::
	msgbox SoftwindCity_ElderGuard_Text_0, MSGBOX_NPC
	end


SoftwindCity_WomanInFlowers::
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_WomanInFlowers_2
SoftwindCity_WomanInFlowers_1:
	msgbox SoftwindCity_WomanInFlowers_Text_1, MSGBOX_NPC
	end

SoftwindCity_WomanInFlowers_2:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_WomanInFlowers_4
	goto SoftwindCity_WomanInFlowers_1

SoftwindCity_WomanInFlowers_4:
	msgbox SoftwindCity_WomanInFlowers_Text_0, MSGBOX_NPC
	end


SoftwindCity_GirlHiding::
	msgbox SoftwindCity_GirlHiding_Text_0, MSGBOX_NPC
	end


SoftwindCity_GuyInFrontOfGym::
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_GuyInFrontOfGym_2
SoftwindCity_GuyInFrontOfGym_1:
	msgbox SoftwindCity_GuyInFrontOfGym_Text_1, MSGBOX_NPC
	end

SoftwindCity_GuyInFrontOfGym_2:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_GuyInFrontOfGym_4
	goto SoftwindCity_GuyInFrontOfGym_1

SoftwindCity_GuyInFrontOfGym_4:
	msgbox SoftwindCity_GuyInFrontOfGym_Text_0, MSGBOX_NPC
	end


SoftwindCity_BaldingMan::
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_BaldingMan_2
SoftwindCity_BaldingMan_1:
	msgbox SoftwindCity_BaldingMan_Text_1, MSGBOX_NPC
	end

SoftwindCity_BaldingMan_2:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_BaldingMan_4
	goto SoftwindCity_BaldingMan_1

SoftwindCity_BaldingMan_4:
	msgbox SoftwindCity_BaldingMan_Text_0, MSGBOX_NPC
	end


SoftwindCity_TriggerAlisaIntro::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 18, SoftwindCity_TriggerAlisaIntro_3
	case 16, SoftwindCity_TriggerAlisaIntro_4
	case 15, SoftwindCity_TriggerAlisaIntro_5
	case 14, SoftwindCity_TriggerAlisaIntro_6
	case 13, SoftwindCity_TriggerAlisaIntro_7
	case 12, SoftwindCity_TriggerAlisaIntro_8
SoftwindCity_TriggerAlisaIntro_1:
	waitmovement 0
	msgbox SoftwindCity_TriggerAlisaIntro_Text_0
	waitmessage
	closemessage
	applymovement 9, Common_Movement_FaceUp
	waitmovement 0
	delay 60
	msgbox SoftwindCity_TriggerAlisaIntro_Text_1
	waitmessage
	closemessage
	delay 30
	applymovement 9, Common_Movement_FaceDown
	waitmovement 0
	delay 30
	msgbox SoftwindCity_Text_AlisaAboutTherma_1
	waitmessage
	closemessage
	playfanfare MUS_OBTAIN_ITEM
	message SoftwindCity_Text_ReceivedPokenav
	waitfanfare
	setflag FLAG_SYS_POKENAV_GET
	setflag FLAG_RECEIVED_POKENAV
	msgbox SoftwindCity_Text_AlisaAboutTherma_2
	waitmessage
	closemessage
	applymovement 9, mAlisaStartsToLeave
	waitmovement 0
	delay 60
	turnobject 9, DIR_SOUTH
	delay 30
	msgbox SoftwindCity_TriggerAlisaIntro_Text_2
	waitmessage
	closemessage
	applymovement 9, mAlisaFinishesLeaving
	waitmovement 0
	setflag FLAG_HIDE_SOFTWIND_CITY_ALISA
	setvar VAR_SOFTWIND_CITY_STATE, 1
	removeobject 9
	releaseall
	end

SoftwindCity_TriggerAlisaIntro_3:
	applymovement 9, mAlisaApproaches_1
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_4:
	applymovement 9, mAlisaApproaches_2
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_5:
	applymovement 9, mAlisaApproaches_3
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_6:
	applymovement 9, mAlisaApproaches_4
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_7:
	applymovement 9, mAlisaApproaches_5
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_8:
	applymovement 9, mAlisaApproaches_6
	goto SoftwindCity_TriggerAlisaIntro_1


SoftwindCity_TriggerOrion_1::
	lockall
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, mShiftCameraToRight
	waitmovement 0
	addobject 10
	hideobjectat 10, MAP_SOFTWIND_CITY
	addobject 11
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 36
	goto_if_eq SoftwindCity_TriggerOrion_1_2
	setobjectxy 10, 45, 36
	setobjectxy 11, 45, 36
SoftwindCity_TriggerOrion_1_1:
	applymovement 11, mDefenderRunsIntoTown
	delay 32
	applymovement 10, mRocketFollows
	waitmovement 0
	msgbox SoftwindCity_TriggerOrion_1_Text_0
	waitmessage
	closemessage
	applymovement 10, mRocketReturnsToForest
	waitmovement 0
	removeobject 10
	applymovement OBJ_EVENT_ID_CAMERA, mShiftCameraToLeft
	waitmovement 0
	msgbox SoftwindCity_Text_DefenderHopesNotSeen
	waitmessage
	closemessage
	turnobject 11, DIR_WEST
	playse SE_PIN
	applymovement 11, mExclamationPoint
	waitmovement 0
	delay 48
	switch VAR_TEMP_1
	case 34, SoftwindCity_TriggerOrion_1_7
	case 35, SoftwindCity_TriggerOrion_1_8
	case 36, SoftwindCity_TriggerOrion_1_9
	case 37, SoftwindCity_TriggerOrion_1_10
SoftwindCity_TriggerOrion_1_5:
	waitmovement 0
	msgbox SoftwindCity_TriggerOrion_1_Text_1
	waitmessage
	closemessage
	compare VAR_TEMP_1, 37
	goto_if_eq SoftwindCity_TriggerOrion_1_12
	applymovement 11, mDefenderWalksPastPlayer_1
SoftwindCity_TriggerOrion_1_11:
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	delay 48
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement 0
	removeobject 11
	setflag FLAG_HIDE_SOFTWIND_CITY_ROCKET
	setflag FLAG_HIDE_SOFTWIND_CITY_ORION
	special RemoveCameraObject
	setvar VAR_SOFTWIND_CITY_STATE, 2
	releaseall
	end

SoftwindCity_TriggerOrion_1_2:
	setobjectxy 10, 45, 35
	setobjectxy 11, 45, 35
	goto SoftwindCity_TriggerOrion_1_1

SoftwindCity_TriggerOrion_1_7:
	applymovement 11, mDefenderAprroachesPlayer_1
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_8:
	applymovement 11, mDefenderAprroachesPlayer_2
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_9:
	applymovement 11, mDefenderAprroachesPlayer_3
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_10:
	applymovement 11, mDefenderAprroachesPlayer_3
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_12:
	applymovement 11, mDefenderWalksPastPlayer_2
	goto SoftwindCity_TriggerOrion_1_11


SoftwindCity_TriggerOrion_2::
	lockall
	playse SE_PIN
	applymovement 11, mStartledWalkRight
	waitmovement 0
	msgbox SoftwindCity_Text_DefenderScolds
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 34, SoftwindCity_TriggerOrion_2_3
	case 35, SoftwindCity_TriggerOrion_2_4
	case 36, SoftwindCity_TriggerOrion_2_5
	case 37, SoftwindCity_TriggerOrion_2_6
SoftwindCity_TriggerOrion_2_1:
	waitmovement 0
	trainerbattle_no_intro TRAINER_WOLSEY_1, SoftwindCity_Text_WolseyDefeated
	msgbox SoftwindCity_TriggerOrion_2_Text_0
	msgbox SoftwindCity_TriggerOrion_2_Text_1
	closemessage
	applymovement 11, mFaceLeft
	applymovement 8, mWillowApproachesDefender
	waitmovement 0
	msgbox SoftwindCity_TriggerOrion_2_Text_2
	closemessage
	delay 15
	applymovement 11, mFaceRight
	delay 15
	msgbox SoftwindCity_Text_WolseyWillPunish
	closemessage
	switch VAR_TEMP_1
	case 34, SoftwindCity_TriggerOrion_2_9
	case 35, SoftwindCity_TriggerOrion_2_10
	case 36, SoftwindCity_TriggerOrion_2_11
	case 37, SoftwindCity_TriggerOrion_2_12
SoftwindCity_TriggerOrion_2_7:
	waitmovement 0
	removeobject 11
	switch VAR_TEMP_1
	case 34, SoftwindCity_TriggerOrion_2_15
	case 35, SoftwindCity_TriggerOrion_2_16
	case 36, SoftwindCity_TriggerOrion_2_17
	case 37, SoftwindCity_TriggerOrion_2_18
SoftwindCity_TriggerOrion_2_13:
	waitmovement 0
	msgbox SoftwindCity_Text_WillowCatchesUp
	opendoor 29, 32
	waitdooranim
	addobject 7
	setobjectxy 7, 29, 32
	applymovement 7, mWalkDown
	closedoor 29, 32
	waitdooranim
	delay 48
	playse SE_PIN
	applymovement 7, mExclamationPoint
	waitmovement 0
	msgbox SoftwindCity_TriggerOrion_2_Text_3
	closemessage
	applymovement 8, mFaceLeft
	switch VAR_TEMP_1
	case 34, SoftwindCity_TriggerOrion_2_21
	case 35, SoftwindCity_TriggerOrion_2_22
	case 36, SoftwindCity_TriggerOrion_2_23
	case 37, SoftwindCity_TriggerOrion_2_24
SoftwindCity_TriggerOrion_2_19:
	waitmovement 0
	msgbox SoftwindCity_Text_GymDude
	msgbox SoftwindCity_TriggerOrion_2_Text_4
	closemessage
	applymovement 7, mGymDudeRushesOff
	waitmovement 0
	removeobject 7
	setflag FLAG_THERMA_RETURNED
	applymovement 8, mFaceRight
	waitmovement 0
	msgbox SoftwindCity_TriggerOrion_2_Text_5
	closemessage
	applymovement 8, mWillowDeparts
	waitmovement 0
	removeobject 8
	setvar VAR_SOFTWIND_CITY_STATE, 4
	releaseall
	end

SoftwindCity_TriggerOrion_2_3:
	applymovement 11, mDefenderAprroachesPlayer_2_1
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_4:
	applymovement 11, mDefenderAprroachesPlayer_2_2
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_5:
	applymovement 11, mDefenderAprroachesPlayer_2_3
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_6:
	applymovement 11, mDefenderAprroachesPlayer_2_4
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_9:
	applymovement 11, mDefenderRunsOff
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_10:
	applymovement 11, mDefenderRunsOff2
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_11:
	applymovement 11, mDefenderRunsOff
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_12:
	applymovement 11, mDefenderRunsOff
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_15:
	applymovement 8, mWillowApproachesPlayer1
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_16:
	applymovement 8, mWillowApproachesPlayer2
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_17:
	applymovement 8, mWillowApproachesPlayer3
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_18:
	applymovement 8, mWillowApproachesPlayer4
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_21:
	applymovement 7, mGymDudesApproaches1
	goto SoftwindCity_TriggerOrion_2_19

SoftwindCity_TriggerOrion_2_22:
	applymovement 7, mGymDudesApproaches2
	goto SoftwindCity_TriggerOrion_2_19

SoftwindCity_TriggerOrion_2_23:
	applymovement 7, mGymDudesApproaches3
	goto SoftwindCity_TriggerOrion_2_19

SoftwindCity_TriggerOrion_2_24:
	applymovement 7, mGymDudesApproaches4
	goto SoftwindCity_TriggerOrion_2_19


SoftwindCity_WillowWaitingByGym::
	msgbox SoftwindCity_WillowWaitingByGym_Text_0, MSGBOX_NPC
	end


SoftwindCity_AlisaWaitingByGym::
	msgbox SoftwindCity_AlisaWaitingByGym_Text_0, MSGBOX_NPC
	switch VAR_STARTER_MON
	case 0, SoftwindCity_AlisaWaitingByGym_3
	case 1, SoftwindCity_AlisaWaitingByGym_4
	case 2, SoftwindCity_AlisaWaitingByGym_5
SoftwindCity_AlisaWaitingByGym_1:
	end

SoftwindCity_AlisaWaitingByGym_3:
	trainerbattle_no_intro TRAINER_ALISA_1_VENAP, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AlisaWaitingByGym_1

SoftwindCity_AlisaWaitingByGym_4:
	trainerbattle_no_intro TRAINER_ALISA_1_CELSINGE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AlisaWaitingByGym_1

SoftwindCity_AlisaWaitingByGym_5:
	trainerbattle_no_intro TRAINER_ALISA_1_ECHOISE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AlisaWaitingByGym_1


SoftwindCity_OnTransition:
	setflag FLAG_VISITED_SOFTWIND_CITY
	call Common_EventScript_SetupRivalGfxId
	return


SoftwindCity_AfterTherma:
	lock
	setvar VAR_SOFTWIND_CITY_STATE, 6
	delay 60
	addobject 8
	applymovement 8, mWillowApproachesAfterTherma
	waitmovement 0
	msgbox SoftwindCity_Text_WillowCongrats
	closemessage
	msgbox SoftwindCity_AfterTherma_Text_0
	closemessage
	applymovement 8, mFaceLeft
	waitmovement 0
	addobject 9
	setobjectxy 9, 21, 32
	applymovement 9, mAlisaApproachesAfterTherma
	waitmovement 0
	msgbox SoftwindCity_AfterTherma_Text_1
	msgbox SoftwindCity_AfterTherma_Text_2
	msgbox SoftwindCity_Text_AlisaCutTheAct
	applymovement 8, mFaceUp
	waitmovement 0
	msgbox SoftwindCity_AfterTherma_Text_3
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	applymovement 8, mWalkRight
	waitmovement 0
	applymovement 8, mFaceLeft
	waitmovement 0
	copyobjectxytoperm 8
	copyobjectxytoperm 9
	msgbox SoftwindCity_AfterTherma_Text_4
	closemessage
	applymovement 9, mWalkRightLookUp
	waitmovement 0
	switch VAR_STARTER_MON
	case 0, SoftwindCity_AfterTherma_3
	case 1, SoftwindCity_AfterTherma_4
	case 2, SoftwindCity_AfterTherma_5
SoftwindCity_AfterTherma_1:
	setvar VAR_SOFTWIND_CITY_STATE, 7
	msgbox SoftwindCity_Text_AlisaRage
	closemessage
	applymovement 9, mAlisaWalksOffAfterBattle
	waitmovement 0
	removeobject 9
	release
	end

SoftwindCity_AfterTherma_3:
	trainerbattle_no_intro TRAINER_ALISA_1_VENAP, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AfterTherma_1

SoftwindCity_AfterTherma_4:
	trainerbattle_no_intro TRAINER_ALISA_1_CELSINGE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AfterTherma_1

SoftwindCity_AfterTherma_5:
	trainerbattle_no_intro TRAINER_ALISA_1_ECHOISE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AfterTherma_1


mAlisaApproaches_1:
	walk_right
	walk_right
	walk_right
	walk_down
	step_end

mAlisaApproaches_2:
	walk_right
	walk_down
	walk_down
	walk_down
	step_end

mAlisaApproaches_3:
	walk_down
	walk_down
	walk_down
	step_end

mAlisaApproaches_4:
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

mAlisaApproaches_5:
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	step_end

mAlisaApproaches_6:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	step_end

mAlisaStartsToLeave:
	walk_up
	walk_up
	walk_up
	walk_right
	step_end

mAlisaFinishesLeaving:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	set_invisible
	step_end

mShiftCameraToRight:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mShiftCameraToLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

mDefenderRunsIntoTown:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_in_place_slow_right
	step_end

mRocketFollows:
	set_visible
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

mRocketReturnsToForest:
	walk_right
	walk_right
	walk_right
	walk_right
	set_invisible
	step_end

mDefenderAprroachesPlayer_1:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

mDefenderAprroachesPlayer_2:
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

mDefenderAprroachesPlayer_3:
	walk_left
	walk_down
	walk_left
	walk_left
	step_end

mDefenderWalksPastPlayer_1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	set_invisible
	step_end

mDefenderWalksPastPlayer_2:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	set_invisible
	step_end

mDefenderAprroachesPlayer_2_1:
	walk_up
	walk_up
	walk_right
	walk_right
	step_end

mDefenderAprroachesPlayer_2_2:
	walk_up
	walk_right
	walk_right
	step_end

mDefenderAprroachesPlayer_2_3:
	walk_right
	walk_right
	step_end

mDefenderAprroachesPlayer_2_4:
	walk_down
	walk_right
	walk_right
	step_end

mWillowApproachesDefender:
	walk_right
	walk_right
	walk_right
	step_end

mDefenderRunsOff:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

mDefenderRunsOff2:
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

mGymDudesApproaches1:
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mGymDudesApproaches2:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mGymDudesApproaches3:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mGymDudesApproaches4:
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

mGymDudeRushesOff:
	walk_left
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

mWalkRight4:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mWillowApproachesPlayer1:
	walk_right
	walk_right
	walk_up
	walk_right
	walk_right
	walk_right
	step_end

mWillowApproachesPlayer2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mWillowApproachesPlayer3:
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mWillowApproachesPlayer4:
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mWillowDeparts:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

mWillowApproachesAfterTherma:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

mAlisaApproachesAfterTherma:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	step_end

mAlisaWalksOffAfterBattle:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	set_invisible
	step_end

mWalkRightLookUp:
	walk_right
	walk_in_place_slow_up
	step_end

SoftwindCity_ElderGuard_Text_0:
	.string "My sisters and I hold the sacred duty\n"
	.string "of guarding the towers.\p"
	.string "Until our protectors return, these\n"
	.string "doors shall remain closed.$"

SoftwindCity_WomanInFlowers_Text_0:
	.string "Hmm…\n"
	.string "Milk…\p"
	.string "No, I don't know anywhere you could find\n"
	.string "that.$"

SoftwindCity_WomanInFlowers_Text_1:
	.string "I love the way the flowers sway in the\n"
	.string "breeze.\p"
	.string "I sit and watch them to help center\n"
	.string "myself.$"

SoftwindCity_GirlHiding_Text_0:
	.string "Wow, you noticed me hiding behind here?\p"
	.string "It's so easy to hide behind buildings.\p"
	.string "I've actually stumbled on some lost and\n"
	.string "forgotten things a few times!$"

SoftwindCity_GuyInFrontOfGym_Text_0:
	.string "I'm working here.\p"
	.string "Go ask someone else about milk.$"

SoftwindCity_GuyInFrontOfGym_Text_1:
	.string "I'm sorry, Gym Leader Therma is\n"
	.string "currently away on research.\p"
	.string "She will take your challenge when she\n"
	.string "returns.$"

SoftwindCity_BaldingMan_Text_0:
	.string "A sick Moocalf out at the old\n"
	.string "Farmhouse?\p"
	.string "I wish I could help you, but I don't have\n"
	.string "any milk.$"

SoftwindCity_BaldingMan_Text_1:
	.string "I'm old enough to remember Pinedale\n"
	.string "Forest before the fire.\p"
	.string "Now…\p"
	.string "Well, let's just say this.\p"
	.string "If you're heading east, I hope you have\n"
	.string "Burn Heals!$"

SoftwindCity_TriggerAlisaIntro_Text_0:
	.string "???: Hi!\n"
	.string "Who are you?\l"
	.string "… …\p"
	.string "Well, {PLAYER}, I guess you aren't so\n"
	.string "unfortunate.\p"
	.string "There are certainly worse names out\n"
	.string "there.$"

SoftwindCity_TriggerAlisaIntro_Text_1:
	.string "???: This is Softwind City, and I've\n"
	.string "been waiting ages for the Gym Leader\l"
	.string "to get back…$"

SoftwindCity_TriggerAlisaIntro_Text_2:
	.string "???: What?\n"
	.string "My name? It's Alisa.\p"
	.string "You'd better remember that, {PLAYER},\n"
	.string "'cause I'm going to beat you to the\l"
	.string "Pokémon League.\p"
	.string "So you'd better watch out, kid!$"

SoftwindCity_TriggerOrion_1_Text_0:
	.string "???: You had better run!\p"
	.string "And don't you dare come back around\n"
	.string "here again!$"

SoftwindCity_TriggerOrion_1_Text_1:
	.string "Hey you!\pForget you saw me here, okay?\nOtherwise…$"

SoftwindCity_TriggerOrion_2_Text_0:
	.string "Defender: I don't understand what\n"
	.string "happened…\p"
	.string "How could I lose to someone so\n"
	.string "inexperienced!?$"

SoftwindCity_TriggerOrion_2_Text_1:
	.string "Willow: {PLAYER}?\n"
	.string "Is that you?$"

SoftwindCity_TriggerOrion_2_Text_2:
	.string "Defender: Uh oh.\pI've stayed too long.$"

SoftwindCity_TriggerOrion_2_Text_3:
	.string "Man: Professor Willow!$"

SoftwindCity_TriggerOrion_2_Text_4:
	.string "Willow: Thank you very much.$"

SoftwindCity_TriggerOrion_2_Text_5:
	.string "Willow: Well, {PLAYER}, Therma awaits!\p"
	.string "After beating Team Rocket, I have no\n"
	.string "doubt you'll win! Ohohoho!$"

SoftwindCity_WillowWaitingByGym_Text_0:
	.string "I'm certain you can beat her.\p"
	.string "She's not half the prodigy she sees\n"
	.string "herself as.$"

SoftwindCity_AlisaWaitingByGym_Text_0:
	.string "Well then, {PLAYER}.\p"
	.string "Why not show me how “special” you are?$"

SoftwindCity_AfterTherma_Text_0:
	.string "???: Hello?\pAh, it is you, professor.$"

SoftwindCity_AfterTherma_Text_1:
	.string "Alisa: My dear Prof. Willow!\p"
	.string "It really has been far too long.$"

SoftwindCity_AfterTherma_Text_2:
	.string "Willow: Is that you, Alisa?\p"
	.string "My, you have grown up haven't you.$"

SoftwindCity_AfterTherma_Text_3:
	.string "Willow: … Here, {PLAYER}.\p"
	.string "I'll heal your Pokémon for you.\p"
	.string "I'm certain you can beat her.\p"
	.string "She's not half the prodigy she sees\n"
	.string "herself as.$"

SoftwindCity_AfterTherma_Text_4:
	.string "Alisa: Hah!\n"
	.string "This from you?\p"
	.string "Even with this… person… you'll never\n"
	.string "find it.\p"
	.string "Well then, {PLAYER}.\p"
	.string "Why not show me how “special” you are?$"

SoftwindCity_Text_TownSign::
	.string "Softwind City\n"
	.string "“Where life drifts softly, like a leaf on\l"
	.string "the wind.”$"

SoftwindCity_Text_GymSign::
	.string "Softwind City Pokémon Gym\n"
	.string "Leader: Therma\l"
	.string "“A woman of history and literature!”$"

SoftwindCity_Text_TributeMoltres::
	.string "A reverent message:\p"
	.string "“It burns through the sky\n"
	.string "On wings of dazzling flame\l"
	.string "Herald of the spring”$"

SoftwindCity_Text_TributeArticuno::
	.string "A reverent message:\p"
	.string "“It sings in the wind\n"
	.string "Bringing winter to the land\l"
	.string "That time may march on”$"

SoftwindCity_Text_TributeZapdos::
	.string "A reverent message:\p"
	.string "“It shocks the world\n"
	.string "With a thunderous fury\l"
	.string "Forging a new path”$"

SoftwindCity_Text_AlisaAboutTherma_1::
	.string "???: Therma went to the library in\n"
	.string "Saharan City, which is a few towns over.\p"
	.string "Well, it will be when they finish building\n"
	.string "the route in between.\p"
	.string "But to get there now, Therma had to go a\n"
	.string "really long way around…\p"
	.string "Here, I'll show you.$"

SoftwindCity_Text_AlisaAboutTherma_2::
	.string "???: You can see what I mean on that.\p"
	.string "Anyway, why are you here?\n"
	.string "… …\p"
	.string "You want to challenge Therma, too?\n"
	.string "Well I guess you'll have to wait around\l"
	.string "like me.\p"
	.string "Or have you not beaten Froy yet?\p"
	.string "You could always do that instead.\p"
	.string "Froy has his gym in Cranewing, which is\n"
	.string "to the east of here through Chartree\l"
	.string "Forest.\p"
	.string "You can see where that is on the\n"
	.string "PokéNav I gave you.$"

SoftwindCity_Text_ReceivedPokenav::
	.string "{PLAYER} received a PokéNav.$"

SoftwindCity_Text_DefenderHopesNotSeen::
	.string "???: …that isn't good.\p"
	.string "Ophelia said she didn't want any Orion\n"
	.string "Defenders to be seen in Softwind yet.\p"
	.string "I hope that Rocket didn't recognize my\n"
	.string "uniform…$"

SoftwindCity_Text_DefenderScolds::
	.string "???: Hey, were you the one who defeated\n"
	.string "the Rockets?\p"
	.string "… Well, quit sticking your nose in things\n"
	.string "you know nothing about!\p"
	.string "Nobody asked you for help.\p"
	.string "We, the Orion Defenders, were supposed\n"
	.string "to take them down and capture Balfour,\l"
	.string "but you just had to let him escape!\p"
	.string "What am I supposed to tell Ophelia!?\n"
	.string "You'll pay for this intrusion!$"

SoftwindCity_Text_WolseyDefeated::
	.string "W… what!?$"

SoftwindCity_Text_WolseyWillPunish::
	.string "Defender: {PLAYER}, is it?\n"
	.string "I'm Wolsey.\p"
	.string "Remember that name, because I'll be\n"
	.string "back to punish you some other time for\l"
	.string "your audacity.\p"
	.string "You hear me!?\p"
	.string "Until then, stay out of our way!$"

SoftwindCity_Text_WillowCatchesUp::
	.string "Willow: {PLAYER}, who was that?\p"
	.string "… … …\n"
	.string "An Orion Defender?\p"
	.string "That's odd, I thought that organization\n"
	.string "died out ages ago…\p"
	.string "But that doesn't matter.\n"
	.string "What happened in Chartree?\p"
	.string "Bradley rushed in there, but it was over\n"
	.string "before I could get there to help.\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "So Team Rocket has returned…\p"
	.string "I wonder what they were planning to do\n"
	.string "with that ash…$"

SoftwindCity_Text_GymDude::
	.string "Man: Therma has returned!\p"
	.string "She says she will meet with you straight\n"
	.string "away, just as soon as she deals with all\l"
	.string "of the gym challenges that have piled\l"
	.string "up in her absence.$"

SoftwindCity_Text_WillowCongrats::
	.string "Willow: Congratulations, {PLAYER}!\p"
	.string "You still have a long way to go until the\n"
	.string "Pokémon League, but it really is an\l"
	.string "achievement to even get this far.\p"
	.string "Now, I'd like you to meet Therma with me.\p"
	.string "You see, what I want from her is--$"

SoftwindCity_Text_AlisaCutTheAct::
	.string "Alisa: Cut the cute act, Professor.\p"
	.string "I know what you're doing here, and you\n"
	.string "will not succeed.\p"
	.string "You've lost your touch.\n"
	.string "You can't even choose your aids well\l"
	.string "anymore.\p"
	.string "I mean look at this child.\p"
	.string "They will never amount to anything.\p"
	.string "They're nothing like me!\p"
	.string "I could beat him any day of the week.$"

SoftwindCity_Text_AlisaDefeated2::
	.string "I can't believe this!$"

SoftwindCity_Text_AlisaRage::
	.string "Alisa: You must have gotten lucky.\p"
	.string "There's no wa you could have beaten me\n"
	.string "if I was at my best…\p"
	.string "Well, {PLAYER}, I hope you've enjoyed\n"
	.string "your little journey, because those\l"
	.string "Rockets in the forest?\p"
	.string "That was only the beginning.\p"
	.string "Team Rocket and the Orion Defenders\n"
	.string "have come back.\p"
	.string "There's a war on the horizon, and you\n"
	.string "had better hope your little job doesn't\l"
	.string "put you in the middle of it.\p"
	.string "You're getting in over your head,\n"
	.string "{PLAYER}. You had better watch\l"
	.string "yourself.$"
