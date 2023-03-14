NeoBay_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NeoBay_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, NeoBay_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, NeoBay_OnResume
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NeoBay_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_AMPURE_RESCUE_STATE, 1, NeoBay_EventScript_SetupBradleyAtBoat
	map_script_2 VAR_AMPURE_RESCUE_STATE, 6, NeoBay_EventScript_SetupBradleyForFight
	map_script_2 VAR_AMPURE_RESCUE_STATE, 5, NeoBay_EventScript_SetupBradleyForAmpure
	.2byte 0

NeoBay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_AMPURE_RESCUE_STATE, 1, NeoBay_EventScript_BradleyLeadsToGrass
	map_script_2 FLAG_WILD_ENCOUNTER, 1, NeoBay_OnCompletedWildEncounter
	map_script_2 VAR_AMPURE_RESCUE_STATE, 4, NeoBay_EventScript_BradleyBattle
	.2byte 0


NeoBay_EventScript_GoToWillowBradleyTriggerTop::
	lockall
	addobject 2
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	setobjectxy 2, 12, 18
	applymovement 2, mBradleyApproachPlayerTop
	waitmovement 0
	call NeoBay_EventScript_BradleyIntroText
	applymovement 2, mBradleyEscortsPlayerTop
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEscortedByBradleyTop
	waitmovement 0
	turnobject 2, DIR_WEST
	call NeoBay_EventScript_BradleyShowBoatText
	releaseall
	end


NeoBay_EventScript_GoToWillowBradleyTriggerBottom::
	lockall
	addobject 2
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	setobjectxy 2, 12, 18
	applymovement 2, mBradleyApproachPlayerBottom
	waitmovement 0
	call NeoBay_EventScript_BradleyIntroText
	applymovement 2, mBradleyEscortsPlayerBottom
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEscortedByBradleyBottom
	waitmovement 0
	turnobject 2, DIR_WEST
	call NeoBay_EventScript_BradleyShowBoatText
	releaseall
	end


NeoBay_EventScript_TownSign::
	msgbox NeoBay_Text_TownSign, MSGBOX_SIGN
	end


NeoBay_EventScript_DockSign::
	msgbox NeoBay_Text_DockSign, MSGBOX_SIGN
	end


NeoBay_EventScript_PlayerMailbox::
	msgbox NeoBay_Text_PlayerMailbox, MSGBOX_SIGN
	end


NeoBay_EventScript_OtherMailbox::
	msgbox Text_OtherMailbox, MSGBOX_SIGN
	end


NeoBay_EventScript_BradleyStopsPlayer::
	lockall
	applymovement 2, mFaceRight
	waitmovement 0
	compare VAR_AMPURE_RESCUE_STATE, 6
	goto_if_eq NeoBay_EventScript_BradleyStopsPlayer_1
	msgbox NeoBay_EventScript_BradleyStopsPlayer_Text_1
	waitmessage
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 9, NeoBay_EventScript_BradleyStopsPlayer_10
	case 10, NeoBay_EventScript_BradleyStopsPlayer_11
	case 16, NeoBay_EventScript_BradleyStopsPlayer_12
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
NeoBay_EventScript_BradleyStopsPlayer_8:
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	end

NeoBay_EventScript_BradleyStopsPlayer_1:
	msgbox NeoBay_EventScript_BradleyStopsPlayer_Text_0
	waitmessage
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 24, NeoBay_EventScript_BradleyStopsPlayer_6
	case 25, NeoBay_EventScript_BradleyStopsPlayer_7
NeoBay_EventScript_BradleyStopsPlayer_4:
	waitmovement 0
	goto NeoBay_EventScript_DoBradleyBattle
	return

NeoBay_EventScript_BradleyStopsPlayer_6:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRematchesBradleyAfterLoss1
	goto NeoBay_EventScript_BradleyStopsPlayer_4

NeoBay_EventScript_BradleyStopsPlayer_7:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRematchesBradleyAfterLoss2
	goto NeoBay_EventScript_BradleyStopsPlayer_4

NeoBay_EventScript_BradleyStopsPlayer_10:
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	goto NeoBay_EventScript_BradleyStopsPlayer_8

NeoBay_EventScript_BradleyStopsPlayer_11:
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	goto NeoBay_EventScript_BradleyStopsPlayer_8

NeoBay_EventScript_BradleyStopsPlayer_12:
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
	goto NeoBay_EventScript_BradleyStopsPlayer_8


NeoBay_EventScript_BradleyConversation::
	lock
	faceplayer
	switch VAR_AMPURE_RESCUE_STATE
	case 6, NeoBay_EventScript_BradleyConversation_3
	msgbox NeoBay_EventScript_BradleyConversation_Text_0
NeoBay_EventScript_BradleyConversation_1:
	waitmessage
	closemessage
	release
	return

NeoBay_EventScript_BradleyConversation_3:
	goto NeoBay_EventScript_BradleyBattle
	goto NeoBay_EventScript_BradleyConversation_1


NeoBay_EventScript_BradleyOptional::
	goto_if_unset FLAG_DEFEATED_RIVAL_NEOBAY_2, NeoBay_EventScript_BradleyOptional_1
	return

NeoBay_EventScript_BradleyOptional_1:
	lock
	addobject 2
	setobjectxy 2, 26, 23
	applymovement 2, mBradleyApproachesForOptionalFight
	delay 32
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	waitmovement 0
	msgbox NeoBay_EventScript_BradleyOptional_Text_0
	switch VAR_STARTER_MON
	case 0, NeoBay_EventScript_BradleyOptional_5
	case 1, NeoBay_EventScript_BradleyOptional_6
	case 2, NeoBay_EventScript_BradleyOptional_7
NeoBay_EventScript_BradleyOptional_3:
	setflag FLAG_DEFEATED_RIVAL_NEOBAY_2
	setvar VAR_NEOBAY_STATE, 9
	msgbox NeoBay_EventScript_BradleyOptional_Text_1
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
	waitmovement 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	applymovement 2, Common_Movement_WalkUp
	waitmovement 0
	opendoor 26, 16
	waitdooranim
	applymovement 2, mBradleyLeavesAfterOptionalFight
	waitmovement 0
	closedoor 26, 16
	waitdooranim
	removeobject 2
	release
	return

NeoBay_EventScript_BradleyOptional_5:
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_2_VENAP, Neobay_Text_BradleyDefeated
	goto NeoBay_EventScript_BradleyOptional_3

NeoBay_EventScript_BradleyOptional_6:
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_2_CELSINGE, Neobay_Text_BradleyDefeated
	goto NeoBay_EventScript_BradleyOptional_3

NeoBay_EventScript_BradleyOptional_7:
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_2_ECHOISE, Neobay_Text_BradleyDefeated
	goto NeoBay_EventScript_BradleyOptional_3


NeoBay_EventScript_BradleyBattle::
	lockall
	setvar VAR_AMPURE_RESCUE_STATE, 6
	msgbox NeoBay_EventScript_BradleyBattle_Text_0
	playfanfare MUS_HEAL
	waitfanfare
	special HealPlayerParty
	goto NeoBay_EventScript_DoBradleyBattle
	end


NeoBay_EventScript_MomRunningShoes::
	lockall
	setvar VAR_NEOBAY_STATE, 7
	msgbox NeoBay_EventScript_MomRunningShoes_Text_0
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
	waitmovement 0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addobject 4
	setobjectxy 4, 25, VAR_TEMP_1
	applymovement 4, mNeoBayMomWalksUpToPlayer
	waitmovement 0
	delay 30
	msgbox NeoBay_Text_MomAngry
	waitmessage
	playfanfare MUS_OBTAIN_ITEM
	message NeoBay_EventScript_MomRunningShoes_Text_1
	waitfanfare
	setflag FLAG_SYS_B_DASH
	msgbox Neobay_Text_SayGoodbye
	waitmessage
	closemessage
	applymovement 4, mNeoBayMomStartsToLeave
	waitmovement 0
	setflag FLAG_HIDE_NEO_BAY_MOM
	removeobject 4
	releaseall
	return


NeoBay_OnTransition:
	setflag FLAG_VISITED_NEOBAY_TOWN
	call Common_EventScript_SetupRivalGfxId
	switch VAR_NEOBAY_STATE
	case 1, NeoBay_OnTransition_2
	case 3, NeoBay_OnTransition_3
	setflag FLAG_HIDE_NEO_BAY_BRADLEY
	return

NeoBay_OnTransition_2:
	clearflag FLAG_HIDE_NEO_BAY_BRADLEY
	return

NeoBay_OnTransition_3:
	clearflag FLAG_HIDE_NEO_BAY_BRADLEY
	return


NeoBay_OnLoad:
	compare VAR_NEOBAY_STATE, 1
	goto_if_eq NeoBay_OnLoad_1
	setmetatile 28, 33, METATILE_NeoBay_BridgeWarp_Left, 0
	setmetatile 29, 33, METATILE_NeoBay_BridgeWarp_Right, 0
	return

NeoBay_OnLoad_1:
	setmetatile 28, 33, METATILE_NeoBay_BridgeReflection_Left, 0
	setmetatile 29, 33, METATILE_NeoBay_BridgeReflection_Right, 0
	return


NeoBay_OnResume:
	goto_if_set FLAG_WILD_ENCOUNTER, NeoBay_OnResume_1
	return

NeoBay_OnResume_1:
	switch VAR_AMPURE_RESCUE_STATE
	case 2, NeoBay_OnResume_4
	case 3, NeoBay_OnResume_5
	return

NeoBay_OnResume_4:
	call NeoBay_UpdateBradleyPositionAfterEncounter
	return

NeoBay_OnResume_5:
	call NeoBay_UpdateBradleyPositionAfterEncounter
	return


NeoBay_EventScript_BradleyIntroText:
	msgbox NeoBay_Text_BradleyIntroStart, MSGBOX_DEFAULT
	applymovement 2, mBradleyFidgetsRight
	waitmovement 0
	msgbox NeoBay_Text_BradleyIntroStartLetsGo, MSGBOX_DEFAULT
	subquest_finish SUB_QUEST_FIND_BRADLEY
	waitmessage
	closemessage
	return


NeoBay_EventScript_BradleyShowBoatText:
	msgbox NeoBay_Text_BradleyShowBoatStart, MSGBOX_DEFAULT
	waitmessage
	closemessage
	applymovement 2, mEnterShip
	applymovement OBJ_EVENT_ID_PLAYER, mEnterShip
	waitmovement 0
	setflag FLAG_SPAWN_INVISIBLE
	warp MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 0xFF, 8, 2
	return


NeoBay_EventScript_BradleyLeadsToGrass:
	lockall
	applymovement 2, mBradleyWalksUpAndLooksAtPlayer
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksUpAndLooksAtBradley
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox NeoBay_EventScript_BradleyLeadsToGrass_Text_0
	msgbox NeoBay_EventScript_BradleyLeadsToGrass_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 2, mBradleyEscortsPlayerToMeadow
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEscortsBradleyToMeadow
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 2, mBradleyLooksAroundAndFidgets
	waitmovement 2
	msgbox NeoBay_EventScript_BradleyLeadsToGrass_Text_2, MSGBOX_AUTOCLOSE
	waitmessage
	setvar VAR_AMPURE_RESCUE_STATE, 2
	copyobjectxytoperm 2
	releaseall
	end


NeoBay_EventScript_SetupBradleyAtBoat:
	setrespawn HEAL_LOCATION_NEO_BAY
	addobject 2
	setobjectxy 2, 28, 33
	turnobject 2, DIR_NORTH
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


NeoBay_OnCompletedWildEncounter:
	clearflag FLAG_WILD_ENCOUNTER
	switch VAR_AMPURE_RESCUE_STATE
	case 2, NeoBay_OnCompletedWildEncounter_3
	case 3, NeoBay_OnCompletedWildEncounter_4
NeoBay_OnCompletedWildEncounter_1:
	return

NeoBay_OnCompletedWildEncounter_3:
	call NeoBay_EventScript_AmpureRescueAfterFirst
	goto NeoBay_OnCompletedWildEncounter_1

NeoBay_OnCompletedWildEncounter_4:
	call NeoBay_EventScript_AmpureRescueAfterSecond
	goto NeoBay_OnCompletedWildEncounter_1


NeoBay_UpdateBradleyPositionAfterEncounter:
	special PrintTest
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	addvar VAR_TEMP_0, 1
	setobjectxy 2, VAR_TEMP_0, VAR_TEMP_1
	copyobjectxytoperm 2
	turnobject 2, DIR_WEST
	return


NeoBay_EventScript_AmpureRescueAfterFirst:
	lockall
	setvar VAR_AMPURE_RESCUE_STATE, 3
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox NeoBay_EventScript_AmpureRescueAfterFirst_Text_0
	waitmessage
	closemessage
	call Common_EventScript_OutOfCenterPartyHeal
	releaseall
	return


NeoBay_EventScript_AmpureRescueAfterSecond:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox NeoBay_EventScript_AmpureRescueAfterSecond_Text_0
	playfanfare MUS_HEAL
	waitfanfare
	closemessage
	special HealPlayerParty
	setvar VAR_AMPURE_RESCUE_STATE, 5
	warp MAP_NEO_BAY, 0xFF, 12, 23
	releaseall
	return


NeoBay_EventScript_SetupBradleyForAmpure:
	addobject 2
	addobject 3
	setobjectxy 2, 11, 23
	turnobject 2, DIR_EAST
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
	setvar VAR_AMPURE_RESCUE_STATE, 4
	return


NeoBay_EventScript_SetupBradleyForFight:
	addobject 2
	setobjectxyperm 2, 11, 23
	return


NeoBay_EventScript_AmpureCapture:
	lockall
	setvar VAR_AMPURE_RESCUE_STATE, 7
	addobject 3
	applymovement 3, mAmpureRunsUpToPlayer
	waitmovement 3
	delay 48
	playse SE_PIN
	applymovement 3, mExclamationPoint
	applymovement 2, mLookUpStartled
	applymovement OBJ_EVENT_ID_PLAYER, mLookUpStartled
	waitmovement OBJ_EVENT_ID_PLAYER
	playmoncry SPECIES_AMPURE, CRY_MODE_NORMAL
	waitmoncry
	msgbox NeoBay_EventScript_AmpureCapture_Text_0
	waitmessage
	applymovement 2, mWalkUpLookRight
	waitmovement 2
	special SavePlayerParty
	special PutRivalMonInPlayerParty
	special StartBradleyAmpureCatch
	waitstate
	delay 60
	fadescreen FADE_TO_WHITE
	removeobject 3
	setobjectxy 2, 12, 22
	turnobject 2, DIR_SOUTH
	special LoadPlayerParty
	fadescreen FADE_FROM_WHITE
	msgbox NeoBay_EventScript_AmpureCapture_Text_1
	waitmessage
	subquest_finish SUB_QUEST_RESCUE_AMPURE
	warp MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 0xFF, 8, 6
	releaseall
	return


NeoBay_EventScript_DoBradleyBattle:
	msgbox NeoBay_EventScript_DoBradleyBattle_Text_0
	closemessage
	switch VAR_STARTER_MON
	case 0, NeoBay_EventScript_DoBradleyBattle_3
	case 1, NeoBay_EventScript_DoBradleyBattle_4
	case 2, NeoBay_EventScript_DoBradleyBattle_5
NeoBay_EventScript_DoBradleyBattle_1:
	goto NeoBay_EventScript_AmpureCapture
	return

NeoBay_EventScript_DoBradleyBattle_3:
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_1_VENAP, Neobay_Text_BradleyDefeated2
	goto NeoBay_EventScript_DoBradleyBattle_1

NeoBay_EventScript_DoBradleyBattle_4:
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_1_CELSINGE, Neobay_Text_BradleyDefeated2
	goto NeoBay_EventScript_DoBradleyBattle_1

NeoBay_EventScript_DoBradleyBattle_5:
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_1_ECHOISE, Neobay_Text_BradleyDefeated2
	goto NeoBay_EventScript_DoBradleyBattle_1


mBradleyApproachPlayerTop:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mBradleyApproachPlayerBottom:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mBradleyFidgetsRight:
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	walk_in_place_fast_right
	step_end

mBradleyFidgetsLeft:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	step_end

mBradleyFidgetsDown:
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	step_end

mBradleyFidgetsUp:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	step_end

mBradleyEscortsPlayerTop:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mBradleyEscortsPlayerBottom:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mPlayerEscortedByBradleyTop:
	walk_left
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mPlayerEscortedByBradleyBottom:
	walk_left
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	step_end

mEnterShip:
	walk_down
	walk_down
	set_invisible
	step_end

mBradleyWalksUpAndLooksAtPlayer:
	walk_up
	face_right
	step_end

mPlayerWalksUpAndLooksAtBradley:
	walk_up
	face_left
	step_end

mBradleyEscortsPlayerToMeadow:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
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
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

mPlayerEscortsBradleyToMeadow:
	walk_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
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
	walk_left
	walk_left
	walk_left
	face_up
	step_end

mBradleyLooksAroundAndFidgets:
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	walk_left
	walk_up
	walk_up
	face_left
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_left
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	walk_right
	walk_down
	step_end

mWalkLeft:
	walk_left
	step_end

mAmpureRunsUpToPlayer:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

mLookUpStartled:
	emote_exclamation_mark
	face_up
	step_end

mWalkUpLookRight:
	walk_up
	face_right
	step_end

mBradleyApproachesForOptionalFight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

mBradleyLeavesAfterOptionalFight:
	walk_up
	set_invisible
	step_end

mPlayerRematchesBradleyAfterLoss1:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	step_end

mPlayerRematchesBradleyAfterLoss2:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	step_end

mNeoBayMomWalksUpToPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

mNeoBayMomStartsToLeave:
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	walk_slow_right
	walk_slow_right
	walk_slow_right
	walk_slow_right
	set_invisible
	step_end

NeoBay_EventScript_BradleyStopsPlayer_Text_0:
	.string "Bradley: Come on!\n"
	.string "Let's battle!$"

NeoBay_EventScript_BradleyStopsPlayer_Text_1:
	.string "Bradley: What are you doing?\n"
	.string "We need to find Ampure before it gets\l"
	.string "away!$"

NeoBay_EventScript_BradleyConversation_Text_0:
	.string "Bradley: I haven't seen Ampure\n"
	.string "anywhere.\p"
	.string "You should check that tall grass!$"

NeoBay_EventScript_BradleyOptional_Text_0:
	.string "Bradley: Hey, what are you up to?\p"
	.string "I'm on my way to grab the things I\n"
	.string "forgot.\p"
	.string "Oh!\n"
	.string "I know!\p"
	.string "Let's have a battle since you're here!$"

NeoBay_EventScript_BradleyOptional_Text_1:
	.string "Bradley: If only I didn't have to go\n"
	.string "back for my things, I'd be twice as\l"
	.string "strong!\p"
	.string "I'm gonna pass you up, just you wait!$"

NeoBay_EventScript_BradleyBattle_Text_0:
	.string "Bradley: Still nothing?\n"
	.string "I'm tired of looking…\p"
	.string "Why don't we have a Pokémon battle\n"
	.string "while we wait?\p"
	.string "I'll heal you Pokémon first!$"

NeoBay_EventScript_MomRunningShoes_Text_0:
	.string "Mom: Wait!\p{PLAYER}!$"

NeoBay_EventScript_MomRunningShoes_Text_1:
	.string "{PLAYER} put on the\nRunning Shoes.$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_0:
	.string "Bradley: I think I see some tracks here.\n"
	.string "They're heading towards… the meadow?\p"
	.string "I wonder why he'd go there…$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_1:
	.string "{PLAYER}, I think there may be wild\n"
	.string "Pokémon where we're going, so be ready!$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_2:
	.string "Bradley: Help me look for Ampure,\n"
	.string "{PLAYER}!\p"
	.string "He's probably hiding in this tall grass.\p"
	.string "If you walk around enough, he should\n"
	.string "appear!$"

NeoBay_EventScript_AmpureRescueAfterFirst_Text_0:
	.string "Bradley: Did you find him?\n"
	.string "… … …\p"
	.string "Oh, well keep looking.\p"
	.string "Here, I'll heal your Pokémon for you.$"

NeoBay_EventScript_AmpureRescueAfterSecond_Text_0:
	.string "Bradley: Any luck this time?\n"
	.string "… … …\p"
	.string "Oh, well keep looking.\p"
	.string "Here, I'll heal your Pokémon again.$"

NeoBay_EventScript_AmpureCapture_Text_0:
	.string "Bradley: I think he likes you,\n"
	.string "{PLAYER}!\p"
	.string "Just stay still, I'll catch him!$"

NeoBay_EventScript_AmpureCapture_Text_1:
	.string "Bradley: ALRIGHT! And that was my first\n"
	.string "time, too!\p"
	.string "Let's get back to Prof. Willow with the\n"
	.string "good news!$"

NeoBay_EventScript_DoBradleyBattle_Text_0:
	.string "Bradley: Alright!\p"
	.string "I'm shaking with excitement!\n"
	.string "Here goes…\p"
	.string "{PLAYER}, I challenge you to a\n"
	.string "Pokémon battle!\p"
	.string "Wow… that felt so good to finally say!$"

NeoBay_Text_TownSign::
	.string "Neo Bay\n"
	.string "“The most isolated town in Caldera.\l"
	.string "Where new things begin.”$"

NeoBay_Text_DockSign::
	.string "Neo Bay Dock\n"
	.string "“The only access point for regional\l"
	.string "visitors, rare though they are.”$"

NeoBay_Text_PlayerMailbox::
	.string "{PLAYER}'s Mailbox:\n"
	.string "Looks like there's no mail today…$"

Text_OtherMailbox::
	.string "I shouldn't go snooping through other\n"
	.string "people's mail!$"

NeoBay_Text_BradleyIntroStart::
	.string "Bradley: Well, if it isn't {PLAYER}!\p"
	.string "So you've finally woken up, sleepyhead?\p"
	.string "Honestly, you've got a whole lot of\n"
	.string "nerve, making a friend wait like that!\p"
	.string "… … Nah, I'm just kidding!\n"
	.string "I'm not that bad of a guy, y'know?\p"
	.string "Anyway!$"

NeoBay_Text_BradleyIntroStartLetsGo::
	.string "Bradley: I called you here because I've\n"
	.string "got a once-in-a-lifetime opportunity\l"
	.string "for ya!\p"
	.string "There's someone you absolutely,\n"
	.string "definitely, positively HAVE to meet!\p"
	.string "Trust me, it'll be worth your time.\n"
	.string "I promise!\p"
	.string "Come on, come on! This way!$"

NeoBay_Text_BradleyShowBoatStart::
	.string "Bradley: Look!\n"
	.string "You've noticed this sleek-looking boat\l"
	.string "moored here for a while now, right?\p"
	.string "Well, this boat belongs to none other\n"
	.string "than Prof. Willow!\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "What, you haven't heard of her?\n"
	.string "I guess you're not quite as worldly as\l"
	.string "your pal Bradley!\p"
	.string "… Anyway, she's a world-famous Pokémon\n"
	.string "Professor, known for her research on\l"
	.string "ancient Pokémon fossils!\p"
	.string "She's cool, calm, composed…\n"
	.string "and when it comes to Pokémon, she's a\l"
	.string "genius!\p"
	.string "I really admire her!\n"
	.string "Come on, let's go meet her now!$"

Neobay_Text_BradleyDefeated::
	.string "Hah, I knew I was right!$"

Neobay_Text_BradleyDefeated2::
	.string "Wow, that good already?$"

Placeholder_Text::
	.string "Placeholder$"

NeoBay_Text_MomAngry::
	.string "Mom: That professor woman came looking\n"
	.string "for you.\p"
	.string "She said you're leaving to search for\n"
	.string "Simon.\n"
	.string "Is that true?\p"
	.string "… … …\p"
	.string "And you weren't even going to say\n"
	.string "goodbye…\p"
	.string "I…\n"
	.string "I guess I can't stop you.\p"
	.string "Please… please come back to visit…\p"
	.string "At least take these with you.$"

Neobay_Text_SayGoodbye::
	.string "Mom: If you're ever in danger, or you\n"
	.string "want to come home, these running shoes\l"
	.string "will help you move much faster.\p"
	.string "I'll miss you, {PLAYER}.\p"
	.string "$"
