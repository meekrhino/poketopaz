NeoBay_ProfessorWillowsLab_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, WillowsLab_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_NEOBAY_STATE, 0, WillowIntroduction
	.2byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_NEOBAY_STATE, 0, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
	.2byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
	hideobjectat 5, MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB
	end


WillowsLab_YouGoFirst::
	msgbox WillowsLab_YouGoFirst_Text_0, MSGBOX_NPC
	end


WillowsLab_TakeYourTime::
	msgbox WillowsLab_TakeYourTime_Text_0, MSGBOX_NPC
	end


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
	release
	compare VAR_NEOBAY_STATE, 1
	goto_if_ne WillowsLab_EventScript_SelectVenap_2
WillowsLab_EventScript_SelectVenap_1:
	showmonpic SPECIES_VENAP, 10, 3
	msgbox WillowsLab_DoYouWantVenap, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectVenap_5
WillowsLab_EventScript_SelectVenap_4:
	goto WillowsLab_GiveVenap
	return

WillowsLab_EventScript_SelectVenap_2:
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectVenap_1

WillowsLab_EventScript_SelectVenap_5:
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectVenap_4


WillowsLab_EventScript_SelectCelsinge::
	release
	compare VAR_NEOBAY_STATE, 1
	goto_if_ne WillowsLab_EventScript_SelectCelsinge_2
WillowsLab_EventScript_SelectCelsinge_1:
	showmonpic SPECIES_CELSINGE, 10, 3
	msgbox WillowsLab_DoYouWantCelsinge, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectCelsinge_5
WillowsLab_EventScript_SelectCelsinge_4:
	goto WillowsLab_GiveCelsinge
	return

WillowsLab_EventScript_SelectCelsinge_2:
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectCelsinge_1

WillowsLab_EventScript_SelectCelsinge_5:
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectCelsinge_4


WillowsLab_EventScript_SelectEchoise::
	release
	compare VAR_NEOBAY_STATE, 1
	goto_if_ne WillowsLab_EventScript_SelectEchoise_2
WillowsLab_EventScript_SelectEchoise_1:
	showmonpic SPECIES_ECHOISE, 10, 3
	msgbox WillowsLab_DoYouWantEchoise, MSGBOX_YESNO
	waitmessage
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectEchoise_5
WillowsLab_EventScript_SelectEchoise_4:
	goto WillowsLab_GiveEchoise
	return

WillowsLab_EventScript_SelectEchoise_2:
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectEchoise_1

WillowsLab_EventScript_SelectEchoise_5:
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectEchoise_4


WillowsLab_EventScript_WhereAreYouGoing::
	lock
	msgbox WillowsLab_EventScript_WhereAreYouGoing_Text_0, MSGBOX_SIGN
	waitmessage
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	waitmovement OBJ_EVENT_ID_PLAYER
	release
	end


WillowsLab_OnTransition:
	compare VAR_NEOBAY_STATE, 0
	goto_if_eq WillowsLab_OnTransition_1
	return

WillowsLab_OnTransition_1:
	setobjectxy 4, 2, 8
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	clearflag FLAG_WILLOW_BALL_TAKEN_0
	clearflag FLAG_WILLOW_BALL_TAKEN_1
	clearflag FLAG_WILLOW_BALL_TAKEN_2
	hideobjectat 5, MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB
	return


WillowIntroduction:
	lockall
	setvar VAR_NEOBAY_STATE, 1
	setvar VAR_AMPURE_RESCUE_STATE, 1
	delay 30
	setobjectxy 5, 8, 2
	applymovement 5, mBradleyEntersFirstTime
	delay 30
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
	closemessage
	waitfanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WillowsLab_ReceivedStarter_2
WillowsLab_ReceivedStarter_1:
	waitmessage
	closemessage
	setvar VAR_NEOBAY_STATE, 2
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

mPlayerEntersFirstTime:
	set_visible
	walk_down
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
	walk_fastest_left
	step_end

mAmpureRunsAround:
	walk_fast_right
	walk_fast_down
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fast_up
	walk_fast_down
	walk_fast_up
	walk_fast_down
	walk_fast_up
	walk_fast_down
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
	walk_fastest_up
	walk_fastest_left
	walk_fastest_left
	walk_fastest_left
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
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_right
	walk_fastest_right
	walk_fastest_right
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
	walk_fastest_up
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

mBradleyFidgetsDown:
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
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

WillowsLab_YouGoFirst_Text_0:
	.string "Bradley: I just can't decide! You go\n"
	.string "first, {PLAYER}! Come on, come on!$"

WillowsLab_TakeYourTime_Text_0:
	.string "Willow: Ohoho, can't decide? Take your\n"
	.string "time, this is a big decision!$"

WillowsLab_Books1_Text_0:
	.string "There's a book titled “People and\n"
	.string "Pokémon: Nature's Balance” …sounds a\l"
	.string "little dense…$"

WillowsLab_Books2_Text_0:
	.string "There's a book titled “Ancient Pokémon\n"
	.string "Mythos” …sounds intruguing!$"

WillowsLab_Books3_Text_0:
	.string "There's a book titled “The Lifecycles\n"
	.string "of Bug Pokémon” …sounds gross!$"

WillowsLab_Books4_Text_0:
	.string "There's a book titled “The Varied\n"
	.string "Pokémon of Mt. Frost” …sounds like an\l"
	.string "interesting place!$"

WillowsLab_Books5_Text_0:
	.string "There are tons of dusty textbooks … it\n"
	.string "looks like Prof. Willow hasn't used this\l"
	.string "shelf in a while.$"

WillowsLab_WillowsComputer_Text_0:
	.string "This is Prof. Willow's personal computer.\n"
	.string "The screen is covered in graphs and\l"
	.string "data!$"

WillowsLab_WillowsNotes_Text_0:
	.string "Looks like a daily log of field notes.\n"
	.string "Prof. Willow sure is thorough!$"

WillowsLab_ExpensiveMachine_Text_0:
	.string "Looks like an expensive machine.\n"
	.string "Hopefully Ampure didn't break\l"
	.string "anything!$"

WillowsLab_TrashCan_Text_0:
	.string "It's filled to the brim with crumpled\n"
	.string "notes.$"

WillowsLab_EventScript_WhereAreYouGoing_Text_0:
	.string "Bradley: Hey! Where are you going? Hurry\n"
	.string "up and choose a Pokémon already!$"

WillowIntroduction_Text_0:
	.string "Bradley: Hey, Prof. Willow!$"

WillowIntroduction_Text_1:
	.string "CRASH!!$"

WillowIntroduction_Text_2:
	.string "Willow: Come on, Ampure! That's fragile!\n"
	.string "Get back in your Pokéball!$"

WillowIntroduction_Text_3:
	.string "Bradley: Prof. Willow! What's going on!?$"

WillowIntroduction_Text_4:
	.string "Willow: Watch out!$"

WillowIntroduction_Text_5:
	.string "Willow: Oh, not again … that little rascal\n"
	.string "just will not keep still!$"

WillowIntroduction_Text_6:
	.string "Bradley: Are you alright, Prof. Willow?$"

WillowIntroduction_Text_7:
	.string "Willow: Ohohoho! Thanks for showing\n"
	.string "concern, Bradley, but I'm fine. This\l"
	.string "happens all the time.$"

WillowIntroduction_Text_8:
	.string "Oh? And who are you?$"

WillowIntroduction_Text_9:
	.string "Bradley: This is {PLAYER}. They've\n"
	.string "been my friend for as long as I can\l"
	.string "remember.$"

WillowIntroduction_Text_10:
	.string "Willow: Did I now?\n"
	.string "… Ah, I remember now!\l"
	.string "Ohoho, you're quite right!$"

WillowIntroduction_Text_11:
	.string "Willow: There are three Pokéballs on\n"
	.string "this table. Each one contains an\l"
	.string "extremely rare Pokémon. Bradley, go\l"
	.string "ahead and choose whichever you like!$"

WillowIntroduction_Text_12:
	.string "Bradley: Actually…$"

WillowIntroduction_Text_13:
	.string "Bradley: I want {PLAYER} to have the\nPokémon.$"

WillowIntroduction_Text_14:
	.string "Willow: But Bradley! You earned this\n"
	.string "Pokémon yourself! You deserve it!$"

WillowIntroduction_Text_15:
	.string "Bradley: No, I made up my mind a long\n"
	.string "time ago. I want {PLAYER} to have the\l"
	.string "Pokémon!$"

WillowIntroduction_Text_16:
	.string "Alright, I've decided. Both of you will\n"
	.string "receive a Pokémon!$"

WillowIntroduction_Text_17:
	.string "Bradley: Wow, Prof. Willow!\n"
	.string "Really!?$"

WillowIntroduction_Text_18:
	.string "Willow: Ohoho, how can I refuse such a\n"
	.string "sincere request? Go ahead and choose\l"
	.string "any Pokéball on the table.$"

WillowIntroduction_Text_19:
	.string "Bradley: This is awesome! Thank you so\n"
	.string "much, Prof. Willow!$"

WillowIntroduction_Text_20:
	.string "Bradley: I'm so excited! You go first,\n"
	.string "{PLAYER}. Come on come on, choose on!$"

WillowsLab_TakeYourTime2_Text_0:
	.string "Willow: Take your time, this is a big\n"
	.string "decision!$"

WillowsLab_ReceivedStarter_Text_0:
	.string "{PLAYER} received the {STR_VAR_1}\nfrom Prof. Willow!$"

WillowsLab_BradleyChoosesVenap_Text_0:
	.string "Bradley: I've made up my mind. I'll take\n"
	.string "this one!$"

WillowsLab_BradleyMadeChoice_Text_0:
	.string "Bradley received the {STR_VAR_1}\nfrom Prof. Willow!$"

WillowsLab_YourePokemonTrainersNow_Text_0:
	.string "Willow: Ohohoho, the looks on your faces\n"
	.string "are priceless!\l"
	.string "From now on, both of you are officially\l"
	.string "Pokémon Trainers! Congratulations!$"

WillowsLab_YourePokemonTrainersNow_Text_1:
	.string "Bradley: You hear that, {PLAYER}?\n"
	.string "We're legit Pokémon Trainers now! We're\l"
	.string "going straight to the big leagues!$"

WillowsLab_YourePokemonTrainersNow_Text_2:
	.string "Willow: Ahem!\n"
	.string "Before scampering off with your new\l"
	.string "Pokémon, there's something I'd like you\l"
	.string "to do for me in return.$"

WillowsLab_YourePokemonTrainersNow_Text_3:
	.string "Bradley: Anything, professor!$"

WillowsLab_YourePokemonTrainersNow_Text_4:
	.string "Bradley: Not a problem, Prof. Willow!\n"
	.string "We'll have your Ampure back before you\l"
	.string "know it!$"

WillowsLab_YourePokemonTrainersNow_Text_5:
	.string "Bradley: Let's go, {PLAYER}! We owe\n"
	.string "the professor, so let's go search for\l"
	.string "her Ampure!\l"
	.string "Come on, race ya there!$"

WillowsLab_WillowIntroduction::
	.string "Willow: Ohoho, so you're {PLAYER}!\n"
	.string "Bradley talks about you quite a lot.\l"
	.string "You can call me Prof. Willow. I'm here\l"
	.string "studying Pokémon habitats in the Neo\l"
	.string "Bay area. Research is what I do best.\l"
	.string "I'm not too good at handling Pokémon\l"
	.string "themselves, unfortunately …$"

WillowsLab_BradleyIsAnAssistant::
	.string "Bradley: I never told you this, but I\n"
	.string "have been helping PROF. WILLOW with\l"
	.string "her research. Collecting samples,\l"
	.string "taking measurements, all that\l"
	.string "science-y stuff.\l"
	.string "It's hard work, but in return she\l"
	.string "promised me a rare Pokémon!$"

WillowsLab_WillowCantJustGivePokemon::
	.string "Willow: Even so, I can't just hand a\n"
	.string "POKéMON to anybody! Owning a POKéMON\l"
	.string "comes with many responsibilities.\l"
	.string "Bradley, you've already shown me that\l"
	.string "you're capable of becoming a Pokémon\l"
	.string "Trainer. I only met {PLAYER} today!$"

WillowsLab_BradleyIsReallySure::
	.string "Bradley: {PLAYER} has wanted to be a\n"
	.string "Pokémon Trainer their entire life!\l"
	.string "Nobody is more passionate and\l"
	.string "responsible than them, and they'd\l"
	.string "definitely make a better Pokémon\l"
	.string "Trainer than I would!\l"
	.string "Trust me on this one, professor!$"

WillowsLab_WillowConcedes::
	.string "… … … …\n"
	.string "… … … …\l"
	.string "… Ohohohohoho! I see, I see. So that's\l"
	.string "how it is!\l"
	.string "You're a subborn one, Bradley, but I like\l"
	.string "that. {PLAYER}, you're lucky to have\l"
	.string "such a good friend.\l"
	.string "I must say, I'm a bit envious myself!$"

WillowsLab_DontBeGreedyText::
	.string "You already chose a Pokémon! Better\n"
	.string "not be greedy.$"

WillowsLab_DoYouWantVenap::
	.string "Prof. Willow: The Grass Pokémon Venap\n"
	.string "caught your eye?\p"
	.string "It might be difficult to raise…but you\n"
	.string "won't regret it!\p"
	.string "Is Venap your final decision?$"

WillowsLab_DoYouWantCelsinge::
	.string "Prof. Willow: The Fire Pokémon Celsinge\n"
	.string "is your pick?\p"
	.string "You can't go wrong there! You'll be set\n"
	.string "up for success!\p"
	.string "Do you want to choose Celsinge?$"

WillowsLab_DoYouWantEchoise::
	.string "Prof. Willow: The Water Pokémon Echoise\n"
	.string "is your favorite?\p"
	.string "Excellent choice! Isn't it just the\n"
	.string "cutest?\p"
	.string "Are you certain you want Echoise?$"

WillowsLab_AmpureMissionDescription::
	.string "Willow: Very well.\n"
	.string "As you saw earlier, my Ampure has\l"
	.string "escaped…\l"
	.string "…again. I'd go find him myself, but with\l"
	.string "my luck, it would take a whole day for\l"
	.string "me to catch him. That's where you two\l"
	.string "come in! Please find my Ampure and\l"
	.string "bring him back to me. He couldn't have\l"
	.string "wandered off too far, so try searching\l"
	.string "between here and Sunset Village. As\l"
	.string "long as you have your Pokémon, you'll\l"
	.string "be safe in the tall grass.\l"
	.string "I entrust you two with bringing Ampure\l"
	.string "back safely!$"
