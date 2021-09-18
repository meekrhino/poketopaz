.set LOCALID_FOSSIL, 1

DesertUnderpass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DesertUnderpass_OnTransition
	.byte 0

DesertUnderpass_OnTransition:
	setflag FLAG_LANDMARK_DESERT_UNDERPASS
	end

DesertUnderpass_EventScript_Fossil::
	lock
	faceplayer
	goto_if_set FLAG_CHOSE_ROOT_FOSSIL, DesertUnderpass_EventScript_GiveFangFossil
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, DesertUnderpass_EventScript_GiveTuskFossil
	release
	end

DesertUnderpass_EventScript_GiveFangFossil::
	giveitem ITEM_FANG_FOSSIL
	removeobject LOCALID_FOSSIL
	release
	end

DesertUnderpass_EventScript_GiveTuskFossil::
	giveitem ITEM_TUSK_FOSSIL
	removeobject LOCALID_FOSSIL
	release
	end

@ Unused
DesertUnderpass_Text_FoundTuskFossil::
	.string "{PLAYER} found the TUSK FOSSIL.$"

@ Unused
DesertUnderpass_Text_FoundFangFossil::
	.string "{PLAYER} found the FANG FOSSIL.$"

