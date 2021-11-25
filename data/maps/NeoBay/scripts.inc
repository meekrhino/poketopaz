NeoBay_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NeoBay_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, NeoBay_OnLoad
	map_script MAP_SCRIPT_ON_RESUME, NeoBay_OnResume
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NeoBay_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_AMPURE_RESCUE_STATE, 1, NeoBay_EventScript_SetupBradleyAtBoat
	map_script_2 VAR_AMPURE_RESCUE_STATE, 5, NeoBay_EventScript_SetupBradleyForAmpure
	.2byte 0

NeoBay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_AMPURE_RESCUE_STATE, 1, NeoBay_EventScript_BradleyLeadsToGrass
	map_script_2 FLAG_WILD_ENCOUNTER, 1, NeoBay_OnCompletedWildEncounter
	map_script_2 VAR_AMPURE_RESCUE_STATE, 4, NeoBay_EventScript_AmpureCapture
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
	msgbox NeoBay_Text_OtherMailbox, MSGBOX_SIGN
	end


NeoBay_EventScript_BradleyStopsPlayer::
	lockall
	msgbox NeoBay_EventScript_BradleyStopsPlayer_Text_0
	waitmessage
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_0
	case 9, NeoBay_EventScript_BradleyStopsPlayer_3
	case 10, NeoBay_EventScript_BradleyStopsPlayer_4
	case 16, NeoBay_EventScript_BradleyStopsPlayer_5
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
NeoBay_EventScript_BradleyStopsPlayer_1:
	waitmovement OBJ_EVENT_ID_PLAYER
	releaseall
	end

NeoBay_EventScript_BradleyStopsPlayer_3:
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	goto NeoBay_EventScript_BradleyStopsPlayer_1

NeoBay_EventScript_BradleyStopsPlayer_4:
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	goto NeoBay_EventScript_BradleyStopsPlayer_1

NeoBay_EventScript_BradleyStopsPlayer_5:
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
	goto NeoBay_EventScript_BradleyStopsPlayer_1


NeoBay_EventScript_BradleyConversation::
	lock
	faceplayer
	switch VAR_NEOBAY_STATE
	case 3, NeoBay_EventScript_BradleyConversation_3
	msgbox Placeholder_Text
NeoBay_EventScript_BradleyConversation_1:
	waitmessage
	closemessage
	release
	return

NeoBay_EventScript_BradleyConversation_3:
	msgbox NeoBay_EventScript_BradleyConversation_Text_0
	goto NeoBay_EventScript_BradleyConversation_1


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
	warp MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 0, 0, 0
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


NeoBay_EventScript_AmpureCapture:
	lockall
	setvar VAR_AMPURE_RESCUE_STATE, 6
	applymovement 3, mAmpureRunsUpToPlayer
	waitmovement 3
	applymovement 3, mExclamationPoint
	applymovement 2, mLookUpStartled
	applymovement OBJ_EVENT_ID_PLAYER, mLookUpStartled
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox NeoBay_EventScript_AmpureCapture_Text_0
	waitmessage
	applymovement 2, mWalkUpLookRight
	waitmovement 2
	special SavePlayerParty
	special PutRivalMonInPlayerParty
	special StartBradleyAmpureCatch
	delay 60
	removeobject 3
	setobjectxy 2, 12, 22
	turnobject 2, DIR_SOUTH
	waitstate
	special LoadPlayerParty
	msgbox NeoBay_EventScript_AmpureCapture_Text_1
	warp MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 0xFF, 8, 6
	releaseall
	return


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

NeoBay_EventScript_BradleyStopsPlayer_Text_0:
	.string "Bradley: What are you doing? We need to\n"
	.string "find Ampure before it gets away!$"

NeoBay_EventScript_BradleyConversation_Text_0:
	.string "Bradley: I haven't seen Ampure\n"
	.string "anywhere. You should check that tall\l"
	.string "grass!$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_0:
	.string "Bradley: I think I see some tracks here.\n"
	.string "They're heading towards… the meadow?\l"
	.string "I wonder why he'd go there…$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_1:
	.string "{PLAYER}, I think there may be wild\n"
	.string "Pokémon where we're going, so be ready!$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_2:
	.string "Bradley: Help me look for Ampure,\n"
	.string "{PLAYER}! He's probably hiding in this\l"
	.string "tall grass. If you walk around enough,\l"
	.string "he should appear!$"

NeoBay_EventScript_AmpureRescueAfterFirst_Text_0:
	.string "Bradley: Did you find him?\l"
	.string "… … oh, well keep looking.\l"
	.string "Here, I'll heal your Pokémon for you.$"

NeoBay_EventScript_AmpureRescueAfterSecond_Text_0:
	.string "Bradley: Any luck this time?\l"
	.string "… … oh, well keep looking.\l"
	.string "Here, I'll heal your Pokémon again.$"

NeoBay_EventScript_AmpureCapture_Text_0:
	.string "Bradley: I think he likes you,\n"
	.string "{PLAYER}! Just stay still, I'll catch\l"
	.string "him!$"

NeoBay_EventScript_AmpureCapture_Text_1:
	.string "Bradley: ALRIGHT! And that was my first\n"
	.string "time, too!\l"
	.string "Let's go back and return Ampure to\l"
	.string "Prof. Willow!$"

NeoBay_Text_TownSign::
	.string "NEO BAY\n"
	.string "“The most isolated town in Caldera.\l"
	.string "Where new things begin.”$"

NeoBay_Text_DockSign::
	.string "NEO BAY DOCK\n"
	.string "“The only access point for regional\l"
	.string "visitors, rare as they are.”$"

NeoBay_Text_PlayerMailbox::
	.string "{PLAYER}'s Mailbox:\n"
	.string "Looks like there's no mail today…$"

NeoBay_Text_OtherMailbox::
	.string "I shouldn't go snooping through other\n"
	.string "people's mail!$"

NeoBay_Text_BradleyIntroStart::
	.string "Bradley: Well, if it isn't {PLAYER}!\n"
	.string "So you've finally woken up, sleepyhead?\l"
	.string "Honestly, you've got a whole lot of\l"
	.string "nerve, making a friend wait like that!\l"
	.string "… … Nah, I'm just kidding! I'm not that\l"
	.string "bad of a guy, y'know? Anyway!$"

NeoBay_Text_BradleyIntroStartLetsGo::
	.string "Bradley: I called you here because I've\n"
	.string "got a once-in-a-lifetime opportunity\l"
	.string "for ya!\l"
	.string "There's someone you absolutely,\l"
	.string "definitely, positively HAVE to meet!\l"
	.string "Trust me, it'll be worth your time. I\l"
	.string "promise!\l"
	.string "Come on, come on! This way!$"

NeoBay_Text_BradleyShowBoatStart::
	.string "Bradley: Look! You've noticed this\n"
	.string "sleek-looking boat moored here for a\l"
	.string "while now, right? Well, this boat\l"
	.string "belongs to none other than Prof.\l"
	.string "Willow!\l"
	.string "… … …\l"
	.string "… … …\l"
	.string "What, you haven't heard of her? I guess\l"
	.string "you're not quite as worldly as your pal\l"
	.string "Bradley!\l"
	.string "… Anyway, she's a world-famous Pokémon\l"
	.string "Professor, known for her research on\l"
	.string "ancient Pokémon fossils!\l"
	.string "She's cool, calm, composed … and when it\l"
	.string "comes to Pokémon, she's a genius! I\l"
	.string "really admire her!\l"
	.string "Come on, let's go meet her now!$"

Placeholder_Text::
	.string "Placeholder$"
