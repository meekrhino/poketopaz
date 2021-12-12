SunsetVillage_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SunsetVillage_PokemonCenter_OnTransition
	.byte 0


SunsetVillage_PokemonCenter_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


SunsetVillage_PokemonCenter_Gentleman::
	msgbox SunsetVillage_Text_Gentleman, MSGBOX_NPC
	end


SunsetVillage_PokemonCenter_Girl::
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_1, 3
	goto_if_le SunsetVillage_PokemonCenter_Girl_2
	msgbox SunsetVillage_Text_Girl_Table, MSGBOX_NPC
SunsetVillage_PokemonCenter_Girl_1:
	end

SunsetVillage_PokemonCenter_Girl_2:
	lock
	msgbox SunsetVillage_PokemonCenter_Girl_Text_0
	waitmessage
	closemessage
	faceplayer
	applymovement 3, mExclamationPoint
	delay 32
	msgbox SunsetVillage_Text_Girl_PC
	waitmessage
	closemessage
	compare VAR_TEMP_1, 2
	goto_if_eq SunsetVillage_PokemonCenter_Girl_6
	applymovement 3, mGirlWalksFromPC_2
SunsetVillage_PokemonCenter_Girl_5:
	delay 32
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
	waitmovement 3
	copyobjectxytoperm 3
	setobjectmovementtype 3, MOVEMENT_TYPE_LOOK_AROUND
	release
	goto SunsetVillage_PokemonCenter_Girl_1

SunsetVillage_PokemonCenter_Girl_6:
	applymovement 3, mGirlWalksFromPC_1
	goto SunsetVillage_PokemonCenter_Girl_5


SunsetVillage_PokemonCenter_Fisherman::
	checkitem ITEM_OLD_ROD, 1
	compare VAR_RESULT, TRUE
	goto_if_eq SunsetVillage_PokemonCenter_Fisherman_2
	msgbox SunsetVillage_Text_Fisherman, MSGBOX_NPC
SunsetVillage_PokemonCenter_Fisherman_1:
	end

SunsetVillage_PokemonCenter_Fisherman_2:
	goto_if_set FLAG_COMPLETED_OLD_ROD_QUEST, SunsetVillage_PokemonCenter_Fisherman_5
	lock
	faceplayer
	msgbox SunsetVillage_PokemonCenter_Fisherman_Text_1
	giveitem ITEM_POTION
	compare VAR_RESULT, FALSE
	goto_if_eq SunsetVillage_PokemonCenter_Fisherman_9
SunsetVillage_PokemonCenter_Fisherman_8:
	setflag FLAG_COMPLETED_OLD_ROD_QUEST
	release
	goto SunsetVillage_PokemonCenter_Fisherman_1

SunsetVillage_PokemonCenter_Fisherman_5:
	msgbox SunsetVillage_PokemonCenter_Fisherman_Text_0, MSGBOX_NPC
	goto SunsetVillage_PokemonCenter_Fisherman_1

SunsetVillage_PokemonCenter_Fisherman_9:
	goto Common_EventScript_ShowBagIsFull
	goto SunsetVillage_PokemonCenter_Fisherman_8


SunsetVillage_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_SUNSET_VILLAGE
	end


mGirlWalksFromPC_1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	step_end

mGirlWalksFromPC_2:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	step_end

SunsetVillage_PokemonCenter_Girl_Text_0:
	.string "… … …\n… … …\pDone!$"

SunsetVillage_PokemonCenter_Fisherman_Text_0:
	.string "I hope my Old Rod is treating you well!\p"
	.string "Make sure you try fishing in every body\n"
	.string "of water!$"

SunsetVillage_PokemonCenter_Fisherman_Text_1:
	.string "That's it!\p"
	.string "That's my Old Rod!\n"
	.string "Thank you for finding it!\p"
	.string "As a reward, take this!\p"
	.string "And keep the rod.\n"
	.string "I bought a nicer one!$"

SunsetVillage_Text_Gentleman::
	.string "A long time ago, Pokémon Centers\n"
	.string "used to charge for their services, but\l"
	.string "nowadays they're free for anyone to\l"
	.string "use.\p"
	.string "It's really nice!\n"
	.string "Now I can come by any time!$"

SunsetVillage_Text_Girl_PC::
	.string "This PC is free for anyone to use!\p"
	.string "I just caught a new Pokémon, so I was\n"
	.string "picking it up from the PC.\p"
	.string "I'm finished now, so go ahead!$"

SunsetVillage_Text_Girl_Table::
	.string "If you've never used a PC before, you\n"
	.string "must be from far away!\p"
	.string "Oh, Neo Bay?\n"
	.string "So they finished that bridge?\p"
	.string "That's great news!$"

SunsetVillage_Text_Fisherman::
	.string "Howdy there!\n"
	.string "Do you like fishing?\p"
	.string "I know I do…\n"
	.string "If only I hadn't lost my Old Rod!\p"
	.string "If you find it in your travels, would you\n"
	.string "bring it back to me?$"
