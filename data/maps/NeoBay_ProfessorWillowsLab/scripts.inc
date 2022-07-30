NeoBay_ProfessorWillowsLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WillowsLab_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, WillowsLab_OnLoad
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_NEOBAY_STATE, 1, WillowIntroduction
	map_script_2 VAR_AMPURE_RESCUE_STATE, 7, WillowsLab_AmpureRescued
	map_script_2 VAR_NEOBAY_STATE, 7, WillowsLab_Departure
	map_script_2 VAR_NEOBAY_STATE, 5, WillowsLab_AfterFlashback
	.2byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_NEOBAY_STATE, 0, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	map_script_2 VAR_NEOBAY_STATE, 4, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
	map_script_2 VAR_AMPURE_RESCUE_STATE, 7, WillowsLab_OnWarp
	map_script_2 VAR_NEOBAY_STATE, 7, WillowsLab_OnWarp
	.2byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	removeobject 5
	end

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
	removeobject 5
	end


WillowsLab_YouGoFirst::
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_YouGoFirst_2
	msgbox WillowsLab_YouGoFirst_Text_1, MSGBOX_NPC
	end

WillowsLab_YouGoFirst_2:
	msgbox WillowsLab_YouGoFirst_Text_0, MSGBOX_NPC
	end


WillowsLab_TakeYourTime::
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_TakeYourTime_2
	msgbox WillowsLab_TakeYourTime_Text_3, MSGBOX_NPC
WillowsLab_TakeYourTime_1:
	end

WillowsLab_TakeYourTime_2:
	lockall
	faceplayer
	msgbox WillowsLab_TakeYourTime_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WillowsLab_TakeYourTime_6
	msgbox WillowsLab_TakeYourTime_Text_2
WillowsLab_TakeYourTime_5:
	releaseall
	goto WillowsLab_TakeYourTime_1

WillowsLab_TakeYourTime_6:
	msgbox WillowsLab_TakeYourTime_Text_1, MSGBOX_NPC
	goto WillowsLab_TakeYourTime_5


WillowsLab_Books1::
	msgbox WillowsLab_Books1_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books2::
	msgbox WillowsLab_Books2_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books3::
	msgbox WillowsLab_Books3_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books4::
	msgbox WillowsLab_Books4_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books5::
	msgbox WillowsLab_Books5_Text_0, MSGBOX_SIGN
	end


WillowsLab_WillowsComputer::
	msgbox WillowsLab_WillowsComputer_Text_0, MSGBOX_SIGN
	return


WillowsLab_WillowsNotes::
	msgbox WillowsLab_WillowsNotes_Text_0, MSGBOX_SIGN
	return


WillowsLab_ExpensiveMachine::
	msgbox WillowsLab_ExpensiveMachine_Text_0, MSGBOX_SIGN
	return


WillowsLab_TrashCan::
	msgbox WillowsLab_TrashCan_Text_0, MSGBOX_SIGN
	return


WillowsLab_EventScript_SelectVenap::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 10
	goto_if_ne WillowsLab_EventScript_SelectVenap_2
	release
	compare VAR_NEOBAY_STATE, 2
	goto_if_ne WillowsLab_EventScript_SelectVenap_5
WillowsLab_EventScript_SelectVenap_4:
	showmonpic SPECIES_VENAP, 10, 3
	msgbox WillowsLab_DoYouWantVenap, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectVenap_8
WillowsLab_EventScript_SelectVenap_7:
	goto WillowsLab_GiveVenap
	return

WillowsLab_EventScript_SelectVenap_2:
	return

WillowsLab_EventScript_SelectVenap_5:
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectVenap_4

WillowsLab_EventScript_SelectVenap_8:
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectVenap_7


WillowsLab_EventScript_SelectCelsinge::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 10
	goto_if_ne WillowsLab_EventScript_SelectCelsinge_2
	release
	compare VAR_NEOBAY_STATE, 2
	goto_if_ne WillowsLab_EventScript_SelectCelsinge_5
WillowsLab_EventScript_SelectCelsinge_4:
	showmonpic SPECIES_CELSINGE, 10, 3
	msgbox WillowsLab_DoYouWantCelsinge, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectCelsinge_8
WillowsLab_EventScript_SelectCelsinge_7:
	goto WillowsLab_GiveCelsinge
	return

WillowsLab_EventScript_SelectCelsinge_2:
	return

WillowsLab_EventScript_SelectCelsinge_5:
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectCelsinge_4

WillowsLab_EventScript_SelectCelsinge_8:
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectCelsinge_7


WillowsLab_EventScript_SelectEchoise::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 10
	goto_if_ne WillowsLab_EventScript_SelectEchoise_2
	release
	compare VAR_NEOBAY_STATE, 2
	goto_if_ne WillowsLab_EventScript_SelectEchoise_5
WillowsLab_EventScript_SelectEchoise_4:
	showmonpic SPECIES_ECHOISE, 10, 3
	msgbox WillowsLab_DoYouWantEchoise, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectEchoise_8
WillowsLab_EventScript_SelectEchoise_7:
	goto WillowsLab_GiveEchoise
	return

WillowsLab_EventScript_SelectEchoise_2:
	return

WillowsLab_EventScript_SelectEchoise_5:
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectEchoise_4

WillowsLab_EventScript_SelectEchoise_8:
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectEchoise_7


WillowsLab_EventScript_WhereAreYouGoing::
	lock
	msgbox WillowsLab_EventScript_WhereAreYouGoing_Text_0, MSGBOX_SIGN
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


WillowsLab_OnTransition:
	compare VAR_NEOBAY_STATE, 1
	goto_if_eq WillowsLab_OnTransition_1
	compare VAR_AMPURE_RESCUE_STATE, 7
	goto_if_eq WillowsLab_OnTransition_2
	compare VAR_NEOBAY_STATE, 5
	goto_if_eq WillowsLab_OnTransition_2
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_OnTransition_2
	compare VAR_NEOBAY_STATE, 7
	goto_if_eq WillowsLab_OnTransition_3
	return

WillowsLab_OnTransition_1:
	setobjectxyperm 4, 2, 8
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	clearflag FLAG_WILLOW_BALL_TAKEN_0
	clearflag FLAG_WILLOW_BALL_TAKEN_1
	clearflag FLAG_WILLOW_BALL_TAKEN_2
	removeobject 5
	return

WillowsLab_OnTransition_2:
	addobject 5
	setobjectxyperm 5, 8, 7
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
	setobjectxyperm 4, 11, 6
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	return

WillowsLab_OnTransition_3:
	setobjectxyperm 4, 2, 8
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
	removeobject 5
	return


WillowsLab_OnLoad:
	compare VAR_NEOBAY_STATE, 1
	goto_if_eq WillowsLab_OnLoad_1
	setmetatile 8, 2, METATILE_Lab_Door_WillowsLabExit, 0
	return

WillowsLab_OnLoad_1:
	setmetatile 8, 2, METATILE_Lab_Door_WillowsLabNoWarp, 0
	return


WillowsLab_OnWarp:
	compare VAR_AMPURE_RESCUE_STATE, 7
	goto_if_eq WillowsLab_OnWarp_1
	compare VAR_NEOBAY_STATE, 5
	goto_if_eq WillowsLab_OnWarp_1
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_OnWarp_1
	return

WillowsLab_OnWarp_1:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 5, DIR_EAST
	turnobject 4, DIR_WEST
	return


WillowIntroduction:
	lockall
	setvar VAR_NEOBAY_STATE, 2
	setvar VAR_AMPURE_RESCUE_STATE, 1
	setmetatile 8, 2, METATILE_Lab_Door_WillowsLabExit, 0
	special DrawWholeMapView
	opendoor 8, 2
	waitdooranim
	addobject 5
	setobjectxy 5, 8, 2
	applymovement 5, mBradleyEntersFirstTime
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, mEntersDoorFromTop
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFirstTime
	waitmovement 0
	msgbox WillowIntroduction_Text_0, MSGBOX_AUTOCLOSE
	applymovement 4, mFaceUp
	waitmovement 4
	applymovement 6, mAmpureMakesCrash
	waitmovement 6
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 4
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 10
	special ShakeCamera
	waitstate
	applymovement 5, mExclamationPoint
	applymovement OBJ_EVENT_ID_PLAYER, mExclamationPoint
	msgbox WillowIntroduction_Text_1, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 4, mFaceDown
	waitmovement 4
	msgbox WillowIntroduction_Text_2, MSGBOX_AUTOCLOSE
	applymovement 6, mAmpureRunsAround
	applymovement 5, mBradleyRushesUp
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksDown
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 20
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	waitmovement 6
	msgbox WillowIntroduction_Text_3, MSGBOX_AUTOCLOSE
	applymovement 6, mAmpureRushesOut
	applymovement 4, mFaceRight
	waitmovement 6
	msgbox WillowIntroduction_Text_4, MSGBOX_AUTOCLOSE
	applymovement 6, mAmpureRushesOut2
	delay 60
	applymovement 5, mFaceRight
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	delay 15
	applymovement 5, mFaceUp
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
	waitmovement 6
	msgbox WillowIntroduction_Text_5
	applymovement 5, mFaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement 5
	msgbox WillowIntroduction_Text_6
	msgbox WillowIntroduction_Text_7, MSGBOX_AUTOCLOSE
	applymovement 4, mWillowComesUpToFriends
	delay 10
	applymovement 5, mFaceDown
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	waitmovement 4
	msgbox WillowIntroduction_Text_8
	msgbox WillowIntroduction_Text_9
	msgbox WillowsLab_WillowIntroduction, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, mFaceRight
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox WillowsLab_BradleyIsAnAssistant
	applymovement 5, mFaceDown
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox WillowIntroduction_Text_10, MSGBOX_AUTOCLOSE
	applymovement 4, mWillowGoesToTable
	waitmovement 4
	msgbox WillowIntroduction_Text_11
	msgbox WillowIntroduction_Text_12, MSGBOX_AUTOCLOSE
	applymovement 5, mBradleyDeliberates
	waitmovement 5
	msgbox WillowIntroduction_Text_13, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, mExclamationPoint
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	applymovement 4, mExclamationPoint
	waitmovement 4
	msgbox WillowIntroduction_Text_14
	msgbox WillowIntroduction_Text_15, MSGBOX_AUTOCLOSE
	applymovement 4, mFaceRight
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	waitmovement 4
	msgbox WillowsLab_WillowCantJustGivePokemon
	msgbox WillowsLab_BradleyIsReallySure, MSGBOX_AUTOCLOSE
	waitmessage
	delay 60
	applymovement 4, mFaceUp
	waitmovement 4
	msgbox WillowsLab_WillowConcedes
	msgbox WillowIntroduction_Text_16
	applymovement 5, mBradleyFidgetsDown
	msgbox WillowIntroduction_Text_17
	msgbox WillowIntroduction_Text_18
	msgbox WillowIntroduction_Text_19, MSGBOX_AUTOCLOSE
	applymovement 5, mFaceRight
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement 5
	msgbox WillowIntroduction_Text_20
	waitmessage
	closemessage
	copyobjectxytoperm 5
	releaseall
	end


WillowsLab_DontBeGreedy:
	msgbox WillowsLab_DontBeGreedyText, MSGBOX_SIGN
	releaseall
	end


WillowsLab_TakeYourTime2:
	hidemonpic
	msgbox WillowsLab_TakeYourTime2_Text_0, MSGBOX_NPC
	releaseall
	end


WillowsLab_GiveVenap:
	bufferspeciesname 0, SPECIES_VENAP
	setvar VAR_TEMP_1, SPECIES_VENAP
	givemon SPECIES_VENAP, 5, ITEM_NONE
	removeobject 1
	call WillowsLab_ReceivedStarter
	setflag FLAG_WILLOW_BALL_TAKEN_0
	setvar VAR_STARTER_MON, 0
	call WillowsLab_BradleyChoosesEchoise
	call WillowsLab_RegroupAfterPlayerChoosesVenap
	goto WillowsLab_YourePokemonTrainersNow
	return


WillowsLab_GiveCelsinge:
	bufferspeciesname 0, SPECIES_CELSINGE
	setvar VAR_TEMP_1, SPECIES_CELSINGE
	givemon SPECIES_CELSINGE, 5, ITEM_NONE
	removeobject 2
	call WillowsLab_ReceivedStarter
	setflag FLAG_WILLOW_BALL_TAKEN_1
	setvar VAR_STARTER_MON, 1
	call WillowsLab_BradleyChoosesVenap
	call WillowsLab_RegroupAfterPlayerChoosesCelsinge
	goto WillowsLab_YourePokemonTrainersNow
	return


WillowsLab_GiveEchoise:
	bufferspeciesname 0, SPECIES_ECHOISE
	setvar VAR_TEMP_1, SPECIES_ECHOISE
	givemon SPECIES_ECHOISE, 5, ITEM_NONE
	removeobject 3
	call WillowsLab_ReceivedStarter
	setflag FLAG_WILLOW_BALL_TAKEN_2
	setvar VAR_STARTER_MON, 2
	call WillowsLab_BradleyChoosesCelsinge
	call WillowsLab_RegroupAfterPlayerChoosesEchoise
	goto WillowsLab_YourePokemonTrainersNow
	return


WillowsLab_ReceivedStarter:
	playfanfare MUS_OBTAIN_ITEM
	message WillowsLab_ReceivedStarter_Text_0
	waitmessage
	waitfanfare
	closemessage
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WillowsLab_ReceivedStarter_2
WillowsLab_ReceivedStarter_1:
	waitmessage
	closemessage
	setvar VAR_NEOBAY_STATE, 3
	hidemonpic
	return

WillowsLab_ReceivedStarter_2:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto WillowsLab_ReceivedStarter_1


WillowsLab_BradleyChoosesVenap:
	applymovement 5, mBradleyWalksToVenap
	waitmovement 5
	msgbox WillowsLab_BradleyChoosesVenap_Text_0
	bufferspeciesname 0, SPECIES_VENAP
	setvar VAR_TEMP_1, SPECIES_VENAP
	removeobject 1
	call WillowsLab_BradleyMadeChoice
	setflag FLAG_WILLOW_BALL_TAKEN_0
	return


WillowsLab_BradleyChoosesCelsinge:
	applymovement 5, mBradleyWalksToCelsinge
	waitmovement 5
	msgbox WillowsLab_BradleyChoosesVenap_Text_0
	bufferspeciesname 0, SPECIES_CELSINGE
	setvar VAR_TEMP_1, SPECIES_CELSINGE
	removeobject 2
	call WillowsLab_BradleyMadeChoice
	setflag FLAG_WILLOW_BALL_TAKEN_1
	return


WillowsLab_BradleyChoosesEchoise:
	applymovement 5, mBradleyWalksToEchoise
	waitmovement 5
	msgbox WillowsLab_BradleyChoosesVenap_Text_0
	bufferspeciesname 0, SPECIES_ECHOISE
	setvar VAR_TEMP_1, SPECIES_ECHOISE
	removeobject 3
	call WillowsLab_BradleyMadeChoice
	setflag FLAG_WILLOW_BALL_TAKEN_2
	return


WillowsLab_BradleyMadeChoice:
	message WillowsLab_BradleyMadeChoice_Text_0
	waitmessage
	delay 60
	closemessage
	return


WillowsLab_RegroupAfterPlayerChoosesVenap:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRegroupsAfterVenap
	applymovement 5, mBradleyRegroupsAfterEchoise
	delay 30
	applymovement 4, mWillowRegroupsAfterStarter
	waitmovement 4
	return


WillowsLab_RegroupAfterPlayerChoosesCelsinge:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRegroupsAfterCelsinge
	applymovement 5, mBradleyRegroupsAfterVenap
	delay 30
	applymovement 4, mWillowRegroupsAfterStarter
	waitmovement 4
	return


WillowsLab_RegroupAfterPlayerChoosesEchoise:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRegroupsAfterEchoise
	applymovement 5, mBradleyRegroupsAfterCelsinge
	delay 30
	applymovement 4, mWillowRegroupsAfterStarter
	waitmovement 4
	return


WillowsLab_YourePokemonTrainersNow:
	setflag FLAG_SYS_POKEMON_GET
	msgbox WillowsLab_YourePokemonTrainersNow_Text_0
	msgbox WillowsLab_YourePokemonTrainersNow_Text_1
	msgbox WillowsLab_YourePokemonTrainersNow_Text_2
	msgbox WillowsLab_YourePokemonTrainersNow_Text_3
	msgbox WillowsLab_AmpureMissionDescription
	msgbox WillowsLab_YourePokemonTrainersNow_Text_4, MSGBOX_AUTOCLOSE
	waitmessage
	applymovement 5, mFaceRight
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 30
	msgbox WillowsLab_YourePokemonTrainersNow_Text_5
	waitmessage
	closemessage
	applymovement 5, mBradleyExits
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerExits
	waitmovement OBJ_EVENT_ID_PLAYER
	warp MAP_NEO_BAY, 1, 0, 0
	releaseall
	end


WillowsLab_AmpureRescued:
	lockall
	setvar VAR_AMPURE_RESCUE_STATE, 8
	setvar VAR_NEOBAY_STATE, 4
	applymovement 5, mBradleyFidgetsRight
	waitmovement 5
	msgbox WillowsLab_AmpureRescued_Text_0
	msgbox WillowsLab_AmpureRescued_Text_1
	waitmessage
	closemessage
	applymovement 4, mWillowDeliberates
	waitmovement 4
	msgbox WillowsLab_AmpureRescued_Text_2
	waitmessage
	closemessage
	call WillowsLab_ReceivedPokedex
	msgbox WillowsLab_AmpureRescued_Text_3
	msgbox WillowsLab_PokedexDescription
	waitmessage
	closemessage
	applymovement 5, mBradleyFidgetsUp
	waitmovement 5
	msgbox WillowsLab_AmpureRescued_Text_4
	waitmessage
	closemessage
	fadescreen FADE_TO_BLACK
	msgbox WillowsLab_AmpureRescued_Text_5
	msgbox WillowsLab_AmpureRescued_Text_6
	waitmessage
	closemessage
	call Script_SetGrayscaleTint
	clearflag FLAG_HIDE_WILLOWS_LAB_BRADLEY
	warpsilent MAP_NEO_BAY_FLASHBACK_BEACH, 0, 0, 0
	releaseall
	end


WillowsLab_AfterFlashback:
	lockall
	setvar VAR_NEOBAY_STATE, 6
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	msgbox WillowsLab_AfterFlashback_Text_0
	closemessage
	delay 60
	msgbox WillowsLab_AfterFlashback_Text_1
	msgbox WillowsLab_AfterFlashback_Text_2
	msgbox WillowsLab_SayGoodbyeToMom, MSGBOX_AUTOCLOSE
	releaseall
	end


WillowsLab_ReceivedPokedex:
	playfanfare MUS_OBTAIN_ITEM
	message WillowsLab_ReceivedPokedex_Text_0
	waitfanfare
	setflag FLAG_SYS_POKEDEX_GET
	special SetUnlockedPokedexFlags
	setflag FLAG_RECEIVED_POKEDEX_FROM_WILLOW
	return


WillowsLab_Departure:
	lockall
	setvar VAR_NEOBAY_STATE, 8
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersSecondTime
	opendoor 8, 2
	waitdooranim
	addobject 5
	setobjectxy 5, 8, 2
	applymovement 5, mEntersDoorFromTop
	waitmovement 0
	closedoor 8, 2
	waitdooranim
	applymovement 5, mBradleyEntersSecondTime
	waitmovement 0
	delay 30
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	applymovement 5, mFaceRight
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox WillowsLab_HowWasYourMom
	waitmessage
	applymovement 5, mFaceDown
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox WillowsLab_NotABadIdea
	waitmessage
	msgbox WillowsLab_DescribePokemonLeague
	waitmessage
	msgbox WillowsLab_FroyLivesAway
	waitmessage
	applymovement 5, mBradleyFidgetsDown
	msgbox WillowsLab_Departure_Text_0
	waitmessage
	msgbox WillowsLab_Departure_Text_1
	waitmessage
	setvar VAR_0x8004, 0
	setvar VAR_0x8005, 2
	setvar VAR_0x8006, 2
	setvar VAR_0x8007, 5
	special ShakeCamera
	waitstate
	playse SE_DING_DONG
	waitse
	closemessage
	applymovement 4, mWillowExitsInSunset
	applymovement 5, mBradleyExitsInSunset
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerExitsInSunset
	waitmovement OBJ_EVENT_ID_PLAYER
	opendoor 8, 2
	waitdooranim
	applymovement 4, mWillowHoldsDoor
	waitmovement 4
	applymovement 4, mWillowWalkOutDoorInSunset
	applymovement 5, mBradleyWalkOutDoorInSunset
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalkOutDoorInSunset
	waitmovement 4
	closedoor 8, 2
	waitdooranim
	warp MAP_SUNSET_VILLAGE, 0xFF, 11, 34
	releaseall
	end


mBradleyEntersFirstTime:
	set_visible
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	face_down
	step_end

mBradleyEntersSecondTime:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

mEntersDoorFromTop:
	set_visible
	walk_down
	step_end

mPlayerEntersFirstTime:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	face_down
	step_end

mPlayerEntersSecondTime:
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	face_down
	step_end

mExclamationPoint:
	emote_exclamation_mark
	step_end

mFaceDown:
	face_down
	step_end

mFaceUp:
	face_up
	step_end

mFaceRight:
	face_right
	step_end

mFaceLeft:
	face_left
	step_end

mAmpureMakesCrash:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	slide_right
	walk_faster_left
	step_end

mAmpureRunsAround:
	walk_fast_right
	walk_fast_down
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_up
	walk_fast_down
	walk_fast_up
	walk_fast_down
	walk_fast_up
	walk_fast_down
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_up
	walk_faster_left
	walk_faster_left
	walk_faster_left
	step_end

mBradleyRushesUp:
	walk_fast_left
	walk_fast_down
	step_end

mPlayerWalksDown:
	walk_fast_down
	step_end

mAmpureRushesOut:
	emote_exclamation_mark
	walk_up
	walk_up
	walk_left
	face_up
	step_end

mAmpureRushesOut2:
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_in_place_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	set_invisible
	step_end

mWillowComesUpToFriends:
	face_left
	emote_exclamation_mark
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

mWillowGoesToTable:
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

mBradleyDeliberates:
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	step_end

mBradleyWalksToVenap:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_right
	face_up
	step_end

mBradleyWalksToCelsinge:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	face_up
	step_end

mBradleyWalksToEchoise:
	walk_down
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

mBradleyRegroupsAfterVenap:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	face_down
	step_end

mBradleyRegroupsAfterCelsinge:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	face_down
	step_end

mBradleyRegroupsAfterEchoise:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	face_down
	step_end

mPlayerRegroupsAfterVenap:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

mPlayerRegroupsAfterCelsinge:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

mPlayerRegroupsAfterEchoise:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_left
	face_down
	step_end

mWillowRegroupsAfterStarter:
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_up
	step_end

mWalkDown:
	walk_down
	step_end

mBradleyExits:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

mPlayerExits:
	walk_left
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

mWillowDeliberates:
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	step_end

mPlayerExitsInSunset:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_right
	walk_right
	walk_up
	step_end

mBradleyExitsInSunset:
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

mWillowExitsInSunset:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

mWillowHoldsDoor:
	walk_right
	face_left
	delay_16
	delay_16
	step_end

mPlayerWalkOutDoorInSunset:
	walk_up
	walk_up
	walk_up
	set_invisible
	step_end

mBradleyWalkOutDoorInSunset:
	walk_up
	walk_up
	set_invisible
	step_end

mWillowWalkOutDoorInSunset:
	delay_16
	delay_16
	delay_16
	walk_left
	walk_up
	set_invisible
	step_end

WillowsLab_YouGoFirst_Text_0:
	.string "Bradley: I guess we'd better go talk to\n"
	.string "our folks like the Prof. said…$"

WillowsLab_YouGoFirst_Text_1:
	.string "Bradley: I just can't decide!\n"
	.string "You go first, {PLAYER}!\p"
	.string "Come on, come on, come on!$"

WillowsLab_TakeYourTime_Text_0:
	.string "Willow: So, you stopped by your family to\n"
	.string "say goodbye, did you?$"

WillowsLab_TakeYourTime_Text_1:
	.string "Willow: … … …\n"
	.string "… … …\p"
	.string "You haven't even left my lab.\p"
	.string "Get going before I regret giving you a\n"
	.string "Pokémon!$"

WillowsLab_TakeYourTime_Text_2:
	.string "Willow: Better get going!\p"
	.string "If you're not back in time, we'll meet\n"
	.string "you at Sunset Village.\p"
	.string "I believe Route 201 is open now, if you'd\n"
	.string "rather take that path.$"

WillowsLab_TakeYourTime_Text_3:
	.string "Willow: Ohoho, can't decide?\p"
	.string "Take your time, this is a big decision!$"

WillowsLab_Books1_Text_0:
	.string "There's a book titled “People and\n"
	.string "Pokémon: Nature's Balance”…\p"
	.string "Sounds a little dense…$"

WillowsLab_Books2_Text_0:
	.string "There's a book titled “Ancient Pokémon\n"
	.string "Mythos”…\p"
	.string "Sounds intruguing!$"

WillowsLab_Books3_Text_0:
	.string "There's a book titled “The Lifecycles\n"
	.string "of Bug Pokémon”…\p"
	.string "Sounds gross!$"

WillowsLab_Books4_Text_0:
	.string "There's a book titled “The Varied\n"
	.string "Pokémon of Mt. Frost”…\p"
	.string "Sounds like an interesting place!$"

WillowsLab_Books5_Text_0:
	.string "There are tons of dusty textbooks…\p"
	.string "It looks like Prof. Willow hasn't used\n"
	.string "this shelf in a while.$"

WillowsLab_WillowsComputer_Text_0:
	.string "This is Prof. Willow's personal computer.\p"
	.string "The screen is covered in graphs and\n"
	.string "data!$"

WillowsLab_WillowsNotes_Text_0:
	.string "Looks like a daily log of field notes.\n"
	.string "Prof. Willow sure is thorough!$"

WillowsLab_ExpensiveMachine_Text_0:
	.string "Looks like an expensive machine.\p"
	.string "Hopefully Ampure didn't break anything!$"

WillowsLab_TrashCan_Text_0:
	.string "It's filled to the brim with crumpled\n"
	.string "notes.$"

WillowsLab_EventScript_WhereAreYouGoing_Text_0:
	.string "Bradley: Hey!\n"
	.string "Where are you going?\p"
	.string "Hurry up and choose a Pokémon already!$"

WillowIntroduction_Text_0:
	.string "Bradley: Hey, Prof. Willow!$"

WillowIntroduction_Text_1:
	.string "CRASH!!$"

WillowIntroduction_Text_2:
	.string "Willow: Come on, Ampure!\n"
	.string "That's fragile!\p"
	.string "Get back in your Pokéball!$"

WillowIntroduction_Text_3:
	.string "Bradley: Prof. Willow! What's going on!?$"

WillowIntroduction_Text_4:
	.string "Willow: Watch out!$"

WillowIntroduction_Text_5:
	.string "Willow: Oh, not again…\p"
	.string "That little rascal just will not keep\n"
	.string "still!$"

WillowIntroduction_Text_6:
	.string "Bradley: Are you alright, Prof. Willow?$"

WillowIntroduction_Text_7:
	.string "Willow: Ohohoho!\p"
	.string "Thanks for showing concern, Bradley,\n"
	.string "but I'm fine.\p"
	.string "This happens all the time.$"

WillowIntroduction_Text_8:
	.string "Oh? And who are you?$"

WillowIntroduction_Text_9:
	.string "Bradley: This is {PLAYER}.\p"
	.string "They've been my friend for as long as I\n"
	.string "can remember.$"

WillowIntroduction_Text_10:
	.string "Willow: Did I now?\n"
	.string "… Ah, I remember now!\p"
	.string "Ohoho, you're quite right!$"

WillowIntroduction_Text_11:
	.string "Willow: There are three Pokéballs on\n"
	.string "this table.\p"
	.string "Each one contains an extremely rare\n"
	.string "Pokémon.\p"
	.string "Bradley, go ahead and choose whichever\n"
	.string "you like!$"

WillowIntroduction_Text_12:
	.string "Bradley: Actually…$"

WillowIntroduction_Text_13:
	.string "Bradley: I want {PLAYER} to have the\nPokémon.$"

WillowIntroduction_Text_14:
	.string "Willow: But Bradley!\n"
	.string "You earned this Pokémon yourself!\l"
	.string "You deserve it!$"

WillowIntroduction_Text_15:
	.string "Bradley: No, I made up my mind a long\n"
	.string "time ago.\p"
	.string "I want {PLAYER} to have the Pokémon!$"

WillowIntroduction_Text_16:
	.string "Alright, I've decided.\p"
	.string "Both of you will receive a Pokémon!$"

WillowIntroduction_Text_17:
	.string "Bradley: Wow, Prof. Willow!\n"
	.string "Really!?$"

WillowIntroduction_Text_18:
	.string "Willow: Ohoho, how can I refuse such a\n"
	.string "sincere request?\p"
	.string "Go ahead and choose any Pokéball on\n"
	.string "the table.$"

WillowIntroduction_Text_19:
	.string "Bradley: This is awesome!\n"
	.string "Thank you so much, Prof. Willow!$"

WillowIntroduction_Text_20:
	.string "Bradley: I'm so excited!\n"
	.string "You go first, {PLAYER}.\p"
	.string "Come on come on, choose one!$"

WillowsLab_TakeYourTime2_Text_0:
	.string "Willow: Take your time, this is a big\n"
	.string "decision!$"

WillowsLab_ReceivedStarter_Text_0:
	.string "{PLAYER} received the {STR_VAR_1}\nfrom Prof. Willow!$"

WillowsLab_BradleyChoosesVenap_Text_0:
	.string "Bradley: I've made up my mind.\p"
	.string "I'll take this one!$"

WillowsLab_BradleyMadeChoice_Text_0:
	.string "Bradley received the {STR_VAR_1}\nfrom Prof. Willow!$"

WillowsLab_YourePokemonTrainersNow_Text_0:
	.string "Willow: Ohohoho, the looks on your faces\n"
	.string "are priceless!\p"
	.string "From now on, both of you are officially\n"
	.string "Pokémon Trainers!\l"
	.string "Congratulations!$"

WillowsLab_YourePokemonTrainersNow_Text_1:
	.string "Bradley: You hear that, {PLAYER}?\n"
	.string "We're legit Pokémon Trainers now!\p"
	.string "We're going straight to the big leagues!$"

WillowsLab_YourePokemonTrainersNow_Text_2:
	.string "Willow: Ahem!\n"
	.string "Before scampering off with your new\l"
	.string "Pokémon, there's something I'd like you\l"
	.string "to do for me in return.$"

WillowsLab_YourePokemonTrainersNow_Text_3:
	.string "Bradley: Anything, professor!$"

WillowsLab_YourePokemonTrainersNow_Text_4:
	.string "Bradley: Not a problem, Prof. Willow!\p"
	.string "We'll have your Ampure back before you\n"
	.string "know it!$"

WillowsLab_YourePokemonTrainersNow_Text_5:
	.string "Bradley: Let's go, {PLAYER}!\p"
	.string "We owe the professor, so let's go search\n"
	.string "for her Ampure!\p"
	.string "Come on, race ya there!$"

WillowsLab_AmpureRescued_Text_0:
	.string "Bradley: We did it professor!\n"
	.string "{PLAYER} found Ampure and I caught\l"
	.string "it!$"

WillowsLab_AmpureRescued_Text_1:
	.string "Willow: Ohohohoho!\n"
	.string "I'm glad.\p"
	.string "It would have taken me ages to find\n"
	.string "Ampure by myself.\p"
	.string "Thank you very much, you two.$"

WillowsLab_AmpureRescued_Text_2:
	.string "Willow: I think I have the perfect way\n"
	.string "to reward you.\p"
	.string "Each of you can take one of these.$"

WillowsLab_AmpureRescued_Text_3:
	.string "Bradley: This is one of those Pokédex\n"
	.string "things, right?$"

WillowsLab_AmpureRescued_Text_4:
	.string "Bradley: Did you hear that, {PLAYER}!?\pWe're finally going to be able\nto find Simon.$"

WillowsLab_AmpureRescued_Text_5:
	.string "Willow: Who is this Simon?$"

WillowsLab_AmpureRescued_Text_6:
	.string "Bradley: … … …\nHe was our friend…\p…and he was my brother.$"

WillowsLab_AfterFlashback_Text_0:
	.string "Bradley: …We never saw him again.$"

WillowsLab_AfterFlashback_Text_1:
	.string "Willow: …I'm so sorry.$"

WillowsLab_AfterFlashback_Text_2:
	.string "Bradley: That's why we have to get to\n"
	.string "the next town, Professor!\p"
	.string "Simon could be anywhere, and he could\n"
	.string "even be in danger.$"

WillowsLab_ReceivedPokedex_Text_0:
	.string "{PLAYER} received the Pokédex!$"

WillowsLab_Departure_Text_0:
	.string "Bradley: I can't wait until we get to\n"
	.string "land!$"

WillowsLab_Departure_Text_1:
	.string "Willow: Ohohoho!\p"
	.string "That's good, Bradley, because we've\n"
	.string "arrived!$"

WillowsLab_WillowIntroduction::
	.string "Willow: Ohoho, so you're {PLAYER}!\n"
	.string "Bradley talks about you quite a lot.\p"
	.string "You can call me Prof. Willow.\p"
	.string "I'm here studying Pokémon habitats in\n"
	.string "the Neo Bay area.\p"
	.string "Research is what I do best.\p"
	.string "I'm not too good at handling Pokémon\n"
	.string "themselves, unfortunately…$"

WillowsLab_BradleyIsAnAssistant::
	.string "Bradley: I never told you this, but I\n"
	.string "have been helping PROF. WILLOW with\l"
	.string "her research.\p"
	.string "Collecting samples, taking\n"
	.string "measurements, all that science-y\l"
	.string "stuff.\p"
	.string "It's hard work, but in return she\n"
	.string "promised me a rare Pokémon!$"

WillowsLab_WillowCantJustGivePokemon::
	.string "Willow: Even so, I can't just hand a\n"
	.string "Pokémon to anybody!\p"
	.string "Owning a Pokémon comes with many\n"
	.string "responsibilities.\p"
	.string "Bradley, you've already shown me that\n"
	.string "you're capable of becoming a Pokémon\l"
	.string "Trainer.\p"
	.string "I only met {PLAYER} today!$"

WillowsLab_BradleyIsReallySure::
	.string "Bradley: {PLAYER} has wanted to be a\n"
	.string "Pokémon Trainer their entire life!\p"
	.string "Nobody is more passionate and\n"
	.string "responsible than them, and they'd\l"
	.string "definitely make a better Pokémon\l"
	.string "Trainer than I would!\p"
	.string "Please, professor.\n"
	.string "Trust me on this one!$"

WillowsLab_WillowConcedes::
	.string "… … … …\n"
	.string "… … … …\l"
	.string "… … … …\l"
	.string "… … … …\p"
	.string "… Ohohohohoho! I see, I see. So that's\n"
	.string "how it is!\p"
	.string "You're a subborn one, Bradley, but I like\n"
	.string "that.\p"
	.string "{PLAYER}, you're lucky to have such a\n"
	.string "good friend.\p"
	.string "I must say, I'm a bit envious myself!$"

WillowsLab_DontBeGreedyText::
	.string "You already chose a Pokémon!\n"
	.string "Better not be greedy.$"

WillowsLab_DoYouWantVenap::
	.string "Prof. Willow: The Grass Pokémon Venap\n"
	.string "caught your eye?\p"
	.string "It might be difficult to raise…\n"
	.string "but you won't regret it!\p"
	.string "Is Venap your final decision?$"

WillowsLab_DoYouWantCelsinge::
	.string "Prof. Willow: The Fire Pokémon Celsinge\n"
	.string "is your pick?\p"
	.string "You can't go wrong there!\n"
	.string "You'll be set up for success!\p"
	.string "Do you want to choose Celsinge?$"

WillowsLab_DoYouWantEchoise::
	.string "Prof. Willow: The Water Pokémon Echoise\n"
	.string "is your favorite?\p"
	.string "Excellent choice!\n"
	.string "Isn't it just the cutest?\p"
	.string "Are you certain you want Echoise?$"

WillowsLab_AmpureMissionDescription::
	.string "Willow: Very well.\p"
	.string "As you saw earlier, my Ampure has\n"
	.string "escaped…\n"
	.string "…again. I'd go find him myself, but with\l"
	.string "my luck, it would take a whole day for\l"
	.string "me to catch him.\p"
	.string "That's where you two come in!\n"
	.string "Please find my Ampure and bring him\l"
	.string "back to me.\p"
	.string "He couldn't have wandered off too far,\n"
	.string "so try searching between here and\l"
	.string "Sunset Village.\p"
	.string "As long as you have your Pokémon, you'll\n"
	.string "be safe in the tall grass.\p"
	.string "I entrust you two with bringing Ampure\n"
	.string "back safely!$"

WillowsLab_PokedexDescription::
	.string "Willow: Yes, Bradley.\p"
	.string "In fact, I'm pretty sure that they're\n"
	.string "the only ones to ever come to Caldera\l"
	.string "or Kirant.\p"
	.string "Prof. Oak of the Kanto region gave\n"
	.string "these to me when he heard I was coming\l"
	.string "here.\p"
	.string "But my research has prevented me from\n"
	.string "filling them properly.\p"
	.string "I think that you two will be perfect for\n"
	.string "the job.\p"
	.string "Your Pokémon are already quite fond of\n"
	.string "you.\p"
	.string "You should have no problem catching\n"
	.string "and trading Pokémon beyond this town!$"

WillowsLab_SayGoodbyeToMom::
	.string "Willow: I've never seen such\n"
	.string "determination as I see right now in\l"
	.string "both of you.\p"
	.string "I'd be more than happy to take you\n"
	.string "across the water to Sunset Village.\p"
	.string "But before we leave you much promise me\n"
	.string "you will say goodbye to your families.$"

WillowsLab_HowWasYourMom::
	.string "Bradley: How was your mom?\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "Yeah…\n"
	.string "Mine was pretty sad too, but she's sure\l"
	.string "we'll be fine.\p"
	.string "Who knows?\n"
	.string "Maybe we'll return as Pokémon Champions\l"
	.string "and our parents will never have to\l"
	.string "worry about us again!$"

WillowsLab_NotABadIdea::
	.string "Willow: That isn't a bad idea, Bradley.\p"
	.string "{PLAYER}, have you ever thought of\n"
	.string "taking the Pokémon League challenge?\p"
	.string "Not only will your Pokémon grow along\n"
	.string "the way, it will help you complete your\l"
	.string "Pokédex and take you all around the\l"
	.string "regions in search of your friend.\p"
	.string "You could achive all of your goals at\n"
	.string "the same time.$"

WillowsLab_DescribePokemonLeague::
	.string "Bradley: Yeah, {PLAYER}!\n"
	.string "That will be perfect!\p"
	.string "Here, I'll explain how the League works\n"
	.string "in our region.\p"
	.string "Unlike other places, our League has 12\n"
	.string "gyms!\p"
	.string "Six gyms here in Caldera, and six in\n"
	.string "Kirant.\p"
	.string "If you defeat all 12 and collect the\n"
	.string "badges they give you, you'll be allowed\l"
	.string "into Triumph Spire, where the Elite Four\l"
	.string "await…\p"
	.string "But we have a LONG way to go before\n"
	.string "that happens!$"

WillowsLab_FroyLivesAway::
	.string "Willow: I'm only taking you as far as\n"
	.string "Sunset Village.\p"
	.string "The first gym leader, Froy, lives in\n"
	.string "Cranewing City.\p"
	.string "That's another two towns over.$"
