SunsetVillage_PokemonCenter_MapScripts::
# 8 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunsetVillage_PokemonCenter_OnTransition
	.byte 0


SunsetVillage_PokemonCenter_Nurse::
# 15 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 16 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 17 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	waitmessage
# 18 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	waitbuttonpress
# 19 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	release
	end


SunsetVillage_PokemonCenter_Gentleman::
# 24 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_Text_Gentleman, MSGBOX_NPC
	end


SunsetVillage_PokemonCenter_Girl::
# 29 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 30 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_le SunsetVillage_PokemonCenter_Girl_2
# 56 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_Text_Girl_Table, MSGBOX_NPC
SunsetVillage_PokemonCenter_Girl_1:
	end

SunsetVillage_PokemonCenter_Girl_2:
# 31 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	lock
# 32 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_PokemonCenter_Girl_Text_0
# 33 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	waitmessage
# 34 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	closemessage
# 35 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	faceplayer
# 36 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	playse SE_PIN
# 37 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	applymovement 3, mExclamationPoint
# 38 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	delay 48
# 39 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_Text_Girl_PC
# 40 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	waitmessage
# 41 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	closemessage
# 42 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	compare VAR_TEMP_1, 2
	goto_if_eq SunsetVillage_PokemonCenter_Girl_6
# 46 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	applymovement 3, mGirlWalksFromPC_2
SunsetVillage_PokemonCenter_Girl_5:
# 48 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	delay 32
# 49 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 50 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	waitmovement 3
# 51 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	copyobjectxytoperm 3
# 52 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	setobjectmovementtype 3, MOVEMENT_TYPE_LOOK_AROUND
# 53 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	release
	goto SunsetVillage_PokemonCenter_Girl_1

SunsetVillage_PokemonCenter_Girl_6:
# 43 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	applymovement 3, mGirlWalksFromPC_1
	goto SunsetVillage_PokemonCenter_Girl_5


SunsetVillage_PokemonCenter_Fisherman::
# 62 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	lock
# 63 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	faceplayer
# 64 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	checkitem ITEM_OLD_ROD, 1
# 65 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunsetVillage_PokemonCenter_Fisherman_2
# 80 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	quest_check_started QUEST_LOST_FISHING_POLE
# 81 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SunsetVillage_PokemonCenter_Fisherman_8
# 85 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_Text_Fisherman
# 86 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	quest_start QUEST_LOST_FISHING_POLE
SunsetVillage_PokemonCenter_Fisherman_1:
# 89 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	release
	end

SunsetVillage_PokemonCenter_Fisherman_2:
# 66 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	goto_if_set FLAG_COMPLETED_OLD_ROD_QUEST, SunsetVillage_PokemonCenter_Fisherman_5
# 70 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_PokemonCenter_Fisherman_Text_1
# 71 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	giveitem ITEM_POTION
# 72 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SunsetVillage_PokemonCenter_Fisherman_12
SunsetVillage_PokemonCenter_Fisherman_11:
# 75 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	setflag FLAG_COMPLETED_OLD_ROD_QUEST
# 76 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	quest_finish QUEST_LOST_FISHING_POLE
	goto SunsetVillage_PokemonCenter_Fisherman_1

SunsetVillage_PokemonCenter_Fisherman_5:
# 67 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_PokemonCenter_Fisherman_Text_0
	goto SunsetVillage_PokemonCenter_Fisherman_1

SunsetVillage_PokemonCenter_Fisherman_8:
# 82 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	msgbox SunsetVillage_PokemonCenter_Fisherman_Text_2
	goto SunsetVillage_PokemonCenter_Fisherman_1

SunsetVillage_PokemonCenter_Fisherman_12:
# 73 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SunsetVillage_PokemonCenter_Fisherman_11


SunsetVillage_PokemonCenter_OnTransition:
# 97 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SUNSET_VILLAGE
	end


# 142 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
mGirlWalksFromPC_1:
# 143 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 143 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 143 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 143 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 143 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 144 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_right
# 144 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_right
	step_end

# 147 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
mGirlWalksFromPC_2:
# 148 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_right
# 149 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 149 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 149 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 149 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 149 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_down
# 150 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	walk_right
	step_end

SunsetVillage_PokemonCenter_Girl_Text_0:
# 32 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "… … …\n… … …\pDone!$"

SunsetVillage_PokemonCenter_Fisherman_Text_0:
# 67 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "I hope my Old Rod is treating you well!\p"
	.string "Make sure you try fishing in every body\n"
	.string "of water!$"

SunsetVillage_PokemonCenter_Fisherman_Text_1:
# 70 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "That's it!\p"
	.string "That's my Old Rod!\n"
	.string "Thank you for finding it!\p"
	.string "As a reward, take this!\p"
	.string "And keep the rod.\n"
	.string "I bought a nicer one!$"

SunsetVillage_PokemonCenter_Fisherman_Text_2:
# 82 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "Haven't found it yet?\n"
	.string "That's a shame.\p"
	.string "I think I might have lost it somehwere\n"
	.string "near Softwind City?$"

SunsetVillage_Text_Gentleman::
# 104 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "A long time ago, Pokémon Centers\n"
	.string "used to charge for their services, but\l"
	.string "nowadays they're free for anyone to\l"
	.string "use.\p"
	.string "It's really nice!\n"
	.string "Now I can come by any time!$"

SunsetVillage_Text_Girl_PC::
# 114 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "This PC is free for anyone to use!\p"
	.string "I just caught a new Pokémon, so I was\n"
	.string "picking it up from the PC.\p"
	.string "I'm finished now, so go ahead!$"

SunsetVillage_Text_Girl_Table::
# 123 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "If you've never used a PC before, you\n"
	.string "must be from far away!\p"
	.string "Oh, Neo Bay?\n"
	.string "So they finished that bridge?\p"
	.string "That's great news!$"

SunsetVillage_Text_Fisherman::
# 131 "data/maps/SunsetVillage_PokemonCenter/scripts.pory"
	.string "Howdy there!\n"
	.string "Do you like fishing?\p"
	.string "I know I do…\n"
	.string "If only I hadn't lost my Old Rod!\p"
	.string "If you find it in your travels, would you\n"
	.string "bring it back to me?$"
