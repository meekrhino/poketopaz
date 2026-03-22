SoftwindCity_PokemonCenter_MapScripts::
# 7 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SoftwindCity_PokemonCenter_OnTransition
	.byte 0


SoftwindCity_PokemonCenter_Nurse::
# 14 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 15 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	waitmessage
# 17 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 18 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	release
	end


SoftwindCity_PokemonCenter_Boy::
# 23 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	msgbox SoftwindCity_Text_Boy, MSGBOX_NPC
	end


SoftwindCity_PokemonCenter_Judge::
# 28 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	msgbox SoftwindCity_Text_Judge, MSGBOX_NPC
	end


SoftwindCity_PokemonCenter_MomPerson::
# 33 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	msgbox SoftwindCity_Text_MomPerson, MSGBOX_NPC
	end


SoftwindCity_PokemonCenter_OnTransition:
# 41 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_SOFTWIND_CITY
	end


SoftwindCity_Text_Boy::
# 48 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	.string "I read that there are tons of kinds of\n"
	.string "Pokémon in the old forest and beyond!\p"
	.string "I can't wait until I have a Pokémon\n"
	.string "partner of my own to find out!$"

SoftwindCity_Text_Judge::
# 57 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	.string "I just wanted to head west down Route\n"
	.string "205, but there's so much commotion.\p"
	.string "I'll just rest here until it calms down.$"

SoftwindCity_Text_MomPerson::
# 65 "data/maps/SoftwindCity_PokemonCenter/scripts.pory"
	.string "After my son left to become a Pokémon\n"
	.string "Trainer, I took a cruise to Caldera.\p"
	.string "I'm from Johto, to the west of here.\p"
	.string "It's so beautiful I decided to stay!\p"
	.string "Someday I'll have to visit Kirant as\n"
	.string "well.$"
