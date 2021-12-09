SoftwindCity_MapScripts::
	.byte 0


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
	msgbox SoftwindCity_WomanInFlowers_Text_0, MSGBOX_NPC
	end


SoftwindCity_GirlHiding::
	msgbox SoftwindCity_GirlHiding_Text_0, MSGBOX_NPC
	end


SoftwindCity_GuyInFrontOfGym::
	msgbox SoftwindCity_GuyInFrontOfGym_Text_0, MSGBOX_NPC
	end


SoftwindCity_BaldingMan::
	msgbox SoftwindCity_BaldingMan_Text_0, MSGBOX_NPC
	end


SoftwindCity_TriggerAlisaIntro::
	lock
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
	release
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
	applymovement 11, mExclamationPoint
	waitmovement 0
	delay 30
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
	waitmovement 0
	removeobject 11
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
	face_right
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

SoftwindCity_ElderGuard_Text_0:
	.string "My sisters and I hold the sacred duty\n"
	.string "of guarding the towers.\p"
	.string "Until our protectors return, these\n"
	.string "doors shall remain closed.$"

SoftwindCity_WomanInFlowers_Text_0:
	.string "I love the way the flowers sway in the\n"
	.string "breeze.\p"
	.string "I sit and watch them to help center\n"
	.string "myself.$"

SoftwindCity_GirlHiding_Text_0:
	.string "Wow, you noticed me hiding behind here?\p"
	.string "It's so easy to hide behind buildings.\p"
	.string "I've found items behind them a few\n"
	.string "times!$"

SoftwindCity_GuyInFrontOfGym_Text_0:
	.string "I'm sorry, Gym Leader Therma is\n"
	.string "currently away on research.\p"
	.string "She will take your challenge when she\n"
	.string "returns.$"

SoftwindCity_BaldingMan_Text_0:
	.string "I'm old enough to remember Pinedale\n"
	.string "Forest before the fire.\p"
	.string "Now…\p"
	.string "Well, let's just say if you're heading\n"
	.string "east I hope you have Burn Heals.$"

SoftwindCity_TriggerAlisaIntro_Text_0:
	.string "???: Hi!\n"
	.string "Who are you?\l"
	.string "… …\p"
	.string "Well, {PLAYER}, I guess you aren't so\n"
	.string "unfortunate.\p"
	.string "There are certainly worse names out\n"
	.string "there.$"

SoftwindCity_TriggerAlisaIntro_Text_1:
	.string "???: This is Softwind City, and I've been\n"
	.string "waiting ages for the Gym Leader to get\l"
	.string "back…$"

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
	.string "Pokénav I gave you.$"

SoftwindCity_Text_ReceivedPokenav::
	.string "{PLAYER} received a Pokénav.$"

SoftwindCity_Text_DefenderHopesNotSeen::
	.string "???: …that isn't good.\p"
	.string "Ophelia said she didn't want any Orion\n"
	.string "Defenders to be seen in Softwind yet.\p"
	.string "I hope that Rocket didn't recognize my\n"
	.string "uniform…$"
