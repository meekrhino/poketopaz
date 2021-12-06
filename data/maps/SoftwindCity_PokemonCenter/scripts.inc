SoftwindCity_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SoftwindCity_PokemonCenter_OnTransition
	.byte 0


SoftwindCity_PokemonCenter_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


SoftwindCity_PokemonCenter_Boy::
	msgbox SoftwindCity_Text_Boy, MSGBOX_NPC
	end


SoftwindCity_PokemonCenter_Judge::
	msgbox SoftwindCity_Text_Judge, MSGBOX_NPC
	end


SoftwindCity_PokemonCenter_MomPerson::
	msgbox SoftwindCity_Text_MomPerson, MSGBOX_NPC
	end


SoftwindCity_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_SOFTWIND_CITY
	end


SoftwindCity_Text_Boy::
	.string "I read that there are tons of kinds of\n"
	.string "Pokémon in the old forest and beyond!\p"
	.string "I can't wait until I have a Pokémon\n"
	.string "partner of my own to find out!$"

SoftwindCity_Text_Judge::
	.string "I just wanted to head west down Route\n"
	.string "205, but there's so much commotion.\p"
	.string "I'll just rest here until it calms down.$"

SoftwindCity_Text_MomPerson::
	.string "After my son left to become a Pokémon\n"
	.string "Trainer, I took a cruise to Caldera.\p"
	.string "I'm from Johto, to the west of here.\p"
	.string "It's so beautiful I decided to stay!\p"
	.string "Someday I'll have to visit Kirant as\n"
	.string "well.$"
