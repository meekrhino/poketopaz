NeoBay_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, NeoBay_OnTransition
	.byte 0


NeoBay_EventScript_GoToWillowBradleyTriggerTop::
	lockall
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


NeoBay_OnTransition:
	setflag FLAG_VISITED_NEOBAY_TOWN
	call Common_EventScript_SetupRivalGfxId
	compare VAR_NEOBAY_STATE, 0
	goto_if_eq NeoBay_OnTransition_2
NeoBay_OnTransition_1:
	end

NeoBay_OnTransition_2:
	call NeoBay_EventScript_SetBradleyPositionIntroStart
	goto NeoBay_OnTransition_1


NeoBay_EventScript_SetBradleyPositionIntroStart:
	setobjectxy 2, 12, 18
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
