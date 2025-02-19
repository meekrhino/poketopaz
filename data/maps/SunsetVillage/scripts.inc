SunsetVillage_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunsetVillage_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunsetVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunsetVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunsetVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_SUNSET_VILLAGE_STATE, 0, SunsetVillage_OnWarpFromLab
	.2byte 0

SunsetVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_SUNSET_VILLAGE_STATE, 0, SunsetVillage_ArriveByBoat
	.2byte 0


SunsetVillage_WillowAndBradleyTrigger::
	lockall
	setvar VAR_NEOBAY_STATE, 8
	call SunsetVillage_IntroAfterArriveFromEast
	call SunsetVillage_BradleyLooksAroundEastVer
	setflag FLAG_HIDE_SUNSET_VILLAGE_WILLOW
	setvar VAR_SUNSET_VILLAGE_STATE, 2
	removeobject 2
	removeobject 1
	releaseall
	end


SunsetVillage_TownSign::
	msgbox SunsetVillage_Text_TownSign, MSGBOX_SIGN
	end


SunsetVillage_DockSign::
	msgbox SunsetVillage_DockSign_Text_0, MSGBOX_SIGN
	end


SunsetVillage_OtherMailbox::
	msgbox Text_OtherMailbox, MSGBOX_SIGN
	end


SunsetVillage_EmptyMailbox::
	msgbox SunsetVillage_EmptyMailbox_Text_0, MSGBOX_SIGN
	end


SunsetVillage_OldWoman::
	msgbox SunsetVillage_OldWoman_Text_0, MSGBOX_NPC
	end


SunsetVillage_OldWomanMailbox::
	lock
	faceplayer
	msgbox SunsetVillage_OldWomanMailbox_Text_0
	waitmessage
	closemessage
	applymovement 4, Common_Movement_FaceOriginalDirection
	end


SunsetVillage_OldMan::
	goto_if_set FLAG_SOLVED_OLD_MAN, SunsetVillage_OldMan_2
	quest_check_started QUEST_HIDDEN_ITEMS
	compare VAR_RESULT, TRUE
	goto_if_ne SunsetVillage_OldMan_8
	lock
	faceplayer
	playse SE_PIN
	applymovement 5, mExclamationPoint
	waitmovement 0
	delay 48
	msgbox SunsetVillage_OldMan_Text_3
	waitmessage
	closemessage
	delay 60
	msgbox SunsetVillage_OldMan_Text_4
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerStepsBack
	delay 32
	applymovement 5, mOldManStepsAside
	waitmovement 0
	setflag FLAG_SOLVED_OLD_MAN
	copyobjectxytoperm 5
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
	quest_finish QUEST_HIDDEN_ITEMS
	release
SunsetVillage_OldMan_1:
	end

SunsetVillage_OldMan_2:
	goto_if_set FLAG_HIDDEN_ITEM_SUNSET_VILLAGE_PEARL, SunsetVillage_OldMan_5
	msgbox SunsetVillage_OldMan_Text_1, MSGBOX_NPC
	goto SunsetVillage_OldMan_1

SunsetVillage_OldMan_5:
	msgbox SunsetVillage_OldMan_Text_0, MSGBOX_NPC
	goto SunsetVillage_OldMan_1

SunsetVillage_OldMan_8:
	lock
	faceplayer
	msgbox SunsetVillage_OldMan_Text_2
	waitmessage
	closemessage
	quest_start QUEST_HIDDEN_ITEMS
	goto SunsetVillage_OldMan_1


SunsetVillage_OnTransition:
	setflag FLAG_VISITED_SUNSET_VILLAGE
	call Common_EventScript_SetupRivalGfxId
	return


SunsetVillage_OnWarpFromLab:
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	special PrintTest
	addobject 1
	setobjectxy 1, 11, 32
	turnobject 1, DIR_SOUTH
	addobject 2
	setobjectxy 2, 10, 32
	turnobject 2, DIR_SOUTH
	return


SunsetVillage_ArriveByBoat:
	lockall
	setvar VAR_SUNSET_VILLAGE_STATE, 1
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 11
	goto_if_eq SunsetVillage_ArriveByBoat_2
SunsetVillage_ArriveByBoat_1:
	releaseall
	end

SunsetVillage_ArriveByBoat_2:
	call SunsetVillage_IntroAfterExitLab
	call SunsetVillage_BradleyLooksAroundLabVer
	setflag FLAG_HIDE_SUNSET_VILLAGE_WILLOW
	setvar VAR_SUNSET_VILLAGE_STATE, 2
	removeobject 2
	removeobject 1
	goto SunsetVillage_ArriveByBoat_1


SunsetVillage_IntroAfterExitLab:
	delay 30
	msgbox SunsetVillage_IntroAfterExitLab_Text_0
	waitmessage
	closemessage
	applymovement 1, mWillowWalksOffOfDock
	applymovement 2, mBradleyWalksOffOfDock
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksOffOfDock
	waitmovement OBJ_EVENT_ID_PLAYER
	return


SunsetVillage_IntroAfterArriveFromEast:
	delay 60
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 26, SunsetVillage_IntroAfterArriveFromEast_3
	case 27, SunsetVillage_IntroAfterArriveFromEast_4
	case 28, SunsetVillage_IntroAfterArriveFromEast_5
	case 29, SunsetVillage_IntroAfterArriveFromEast_6
	case 30, SunsetVillage_IntroAfterArriveFromEast_7
SunsetVillage_IntroAfterArriveFromEast_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	return

SunsetVillage_IntroAfterArriveFromEast_3:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast1
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_4:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast2
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_5:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast3
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_6:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast4
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_7:
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast5
	goto SunsetVillage_IntroAfterArriveFromEast_1


SunsetVillage_BradleyLooksAroundLabVer:
	delay 30
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_0
	waitmessage
	closemessage
	applymovement 2, mBradleyWalksOut
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
	delay 16
	applymovement 1, mFaceRight
	waitmovement 0
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_1
	waitmessage
	closemessage
	applymovement 2, mBradleyLooksAround
	waitmovement 2
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_2
	waitmessage
	msgbox SunsetVillage_HeadToSoftwind
	waitmessage
	playse SE_PIN
	applymovement 2, mExclamationPoint
	waitmovement 0
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_3
	waitmessage
	closemessage
	applymovement 2, mBradleyPanics
	turnobject 1, DIR_NORTH
	waitmovement 0
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_4
	waitmessage
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_5
	waitmessage
	closemessage
	applymovement 2, mBradleyRunsToLab
	delay 15
	applymovement 1, mFaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement 2
	applymovement 1, mWalkLeftAndDown
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
	waitmovement 1
	msgbox SunsetVillage_YouGoOnAhead
	waitmessage
	giveitem ITEM_POKE_BALL, 5
	waitmessage
	closemessage
	applymovement 1, mWillowWalksToLab
	waitmovement 1
	subquest_finish SUB_QUEST_SAY_GOODBYE
	quest_finish QUEST_GETTING_STARTED
	quest_start QUEST_TRIUMPH_SPIRE
	return


SunsetVillage_BradleyLooksAroundEastVer:
	playse SE_PIN
	applymovement 1, mStartledWalkRight
	applymovement 2, mWalkRight
	waitmovement 2
	delay 30
	msgbox SunsetVillage_BradleyLooksAroundEastVer_Text_0
	waitmessage
	closemessage
	applymovement 2, mBradleyFidgetsRight
	waitmovement 2
	msgbox SunsetVillage_BradleyRecaps
	waitmessage
	closemessage
	applymovement 2, mBradleyWalksOutEastVer
	waitmovement 2
	msgbox SunsetVillage_BradleyLooksAroundEastVer_Text_1
	waitmessage
	closemessage
	applymovement 2, mBradleyLooksAroundEastVer
	delay 30
	applymovement 1, mFaceUp
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
	waitmovement 2
	msgbox SunsetVillage_BradleyLooksAroundEastVer_Text_2
	waitmessage
	msgbox SunsetVillage_HeadToSoftwind
	waitmessage
	playse SE_PIN
	applymovement 2, mExclamationPoint
	waitmovement 0
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_3
	waitmessage
	closemessage
	applymovement 2, mBradleyPanicsEastVer
	waitmovement 0
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_4
	waitmessage
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_5
	waitmessage
	closemessage
	applymovement 2, mBradleyRunsToLabEastVer
	delay 30
	applymovement 1, mFaceLeft
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement 2
	applymovement 1, mWalkRight
	waitmovement 0
	delay 15
	msgbox SunsetVillage_YouGoOnAhead
	waitmessage
	giveitem ITEM_POKE_BALL, 5
	waitmessage
	closemessage
	applymovement 1, mWillowWalksToLabEastVer
	waitmovement 1
	quest_finish QUEST_GETTING_STARTED
	quest_start QUEST_TRIUMPH_SPIRE
	return


mWillowWalksOffOfDock:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_right
	walk_in_place_slow_down
	step_end

mBradleyWalksOffOfDock:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_slow_down
	step_end

mPlayerWalksOffOfDock:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_right
	walk_in_place_slow_up
	step_end

mPlayerEntersFromEast1:
	walk_left
	walk_left
	walk_left
	step_end

mPlayerEntersFromEast2:
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

mPlayerEntersFromEast3:
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

mPlayerEntersFromEast4:
	walk_up
	walk_up
	walk_left
	walk_up
	walk_left
	walk_left
	step_end

mPlayerEntersFromEast5:
	walk_up
	walk_up
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	step_end

mBradleyWalksOut:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	delay_16
	delay_16
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_slow_left
	step_end

mBradleyLooksAround:
	walk_in_place_slow_right
	delay_16
	delay_16
	delay_16
	walk_in_place_slow_up
	delay_16
	delay_16
	delay_16
	walk_in_place_slow_right
	delay_16
	delay_16
	delay_16
	walk_in_place_slow_left
	step_end

mBradleyPanics:
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_fast_left
	walk_in_place_slow_right
	delay_16
	walk_in_place_slow_up
	delay_16
	walk_in_place_slow_down
	delay_16
	walk_in_place_slow_left
	delay_16
	delay_16
	delay_16
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

mBradleyRunsToLab:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	set_invisible
	step_end

mWillowWalksToLab:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

mBradleyWalksOutEastVer:
	walk_right
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_slow_down
	step_end

mBradleyLooksAroundEastVer:
	walk_in_place_slow_right
	delay_16
	delay_16
	delay_16
	walk_in_place_slow_up
	delay_16
	delay_16
	delay_16
	walk_in_place_slow_left
	delay_16
	delay_16
	delay_16
	walk_in_place_slow_down
	step_end

mBradleyPanicsEastVer:
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_fast_down
	walk_in_place_slow_right
	delay_16
	walk_in_place_slow_left
	delay_16
	walk_in_place_slow_up
	delay_16
	walk_in_place_slow_down
	delay_16
	delay_16
	delay_16
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	step_end

mBradleyRunsToLabEastVer:
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	set_invisible
	step_end

mWillowWalksToLabEastVer:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	set_invisible
	step_end

mWalkRight:
	walk_right
	step_end

mWalkLeftAndDown:
	walk_left
	walk_down
	step_end

mStartledWalkRight:
	emote_exclamation_mark
	walk_right
	step_end

mPlayerStepsBack:
	face_left
	lock_facing_direction
	walk_fast_right
	unlock_facing_direction
	step_end

mOldManStepsAside:
	walk_slow_right
	walk_slow_up
	walk_in_place_slow_down
	step_end

SunsetVillage_DockSign_Text_0:
	.string "“Sunset Pier”$"

SunsetVillage_EmptyMailbox_Text_0:
	.string "The mailbox is open.\pThere's nothing inside…$"

SunsetVillage_OldWoman_Text_0:
	.string "Sunset Village is a sleepy place.\n"
	.string "Not a lot of young folks left here.\p"
	.string "I guess a small town on the edge of\n"
	.string "nowhere doesn't drawn many visitors.$"

SunsetVillage_OldWomanMailbox_Text_0:
	.string "I'm expecting a letter from my\n"
	.string "granddaughter!\p"
	.string "It's the highlight of my week.\n"
	.string "Make sure you visit or write home often!$"

SunsetVillage_OldMan_Text_0:
	.string "Well done!\pYou should sell that.\nIt's worth quite a bit.$"

SunsetVillage_OldMan_Text_1:
	.string "Go ahead!\pIt's hidden on the ground,\njust there.$"

SunsetVillage_OldMan_Text_2:
	.string "Fuhuhu! I've hidden an item somewhere\n"
	.string "in town!\p"
	.string "If you can find it, it's yours!\n"
	.string "You won't be able to just see it, though.\p"
	.string "You'll have to search carefully!$"

SunsetVillage_OldMan_Text_3:
	.string "Ah! Clever!\p"
	.string "You're right, of course!\n"
	.string "It's right behind me!$"

SunsetVillage_OldMan_Text_4:
	.string "Step aside, please.$"

SunsetVillage_IntroAfterExitLab_Text_0:
	.string "Willow: Follow me!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_0:
	.string "Willow: Well, here we are!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_1:
	.string "Bradley: Finally!\nI can't believe we've left Neo Bay!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_2:
	.string "Bradley: So this is Sunset Village, huh?$"

SunsetVillage_BradleyLooksAroundLabVer_Text_3:
	.string "Bradley: WAIT!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_4:
	.string "Bradley: I left my bag at home!\nIt has my Pokédex in it and everything!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_5:
	.string "Willow: Ohoho, don't worry Bradley. We\n"
	.string "can go back for them now.$"

SunsetVillage_BradleyLooksAroundEastVer_Text_0:
	.string "Willow: Ah, {PLAYER}!\n"
	.string "I'm glad to see you made it.\p"
	.string "You must have walked along Route 201.\p"
	.string "You missed quite a discussion on the\n"
	.string "way!$"

SunsetVillage_BradleyLooksAroundEastVer_Text_1:
	.string "Bradley: Look around!\nI can't believe we've left Neo Bay!$"

SunsetVillage_BradleyLooksAroundEastVer_Text_2:
	.string "Bradley: This is Sunset Village!$"

SunsetVillage_Text_TownSign::
	.string "Sunset Village\n"
	.string "“Where the sun sets on one adventure,\l"
	.string "and rises on another.”$"

SunsetVillage_HeadToSoftwind::
	.string "Willow: That's correct.\n"
	.string "If you head north from here, you should\l"
	.string "reach Softwind City, where one of the\l"
	.string "gyms of the Pokémon League is.\p"
	.string "Therma is the leader there, but she also\n"
	.string "has a huge library.\p"
	.string "That's where I was planning to start my\n"
	.string "research on-$"

SunsetVillage_YouGoOnAhead::
	.string "Willow: {PLAYER}, why don't you go on\n"
	.string "ahead?\p"
	.string "Bradley and I will return to Neo Bay,\n"
	.string "then meet you at the library in\l"
	.string "Softwind.\p"
	.string "You can battle Therma and get stronger\n"
	.string "than Bradley!\p"
	.string "Then he'll have to catch up to you, and\n"
	.string "rivalry will make you both stronger.\p"
	.string "Oh, listen to me go on.\p"
	.string "Well, you had better get a move on.\p"
	.string "Oh!\n"
	.string "And take these!\p"
	.string "See you soon!$"

SunsetVillage_BradleyRecaps::
	.string "Bradley: Yeah you did!\p"
	.string "I decided you and I are going to take on\n"
	.string "the Pokémon League challenge!\p"
	.string "We'll travel all over and beat all 12\n"
	.string "gyms, even the ones on Kirant!\p"
	.string "If we do that, we'll definitely find\n"
	.string "Simon along the way!\p"
	.string "Then all three of us can travel to the\n"
	.string "Triumph Spire and take on the Elite\l"
	.string "Four!\p"
	.string "Isn't my plan amazing!? Anyway…$"
