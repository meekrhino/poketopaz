CranewingCity_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CranewingCity_PokemonCenter_OnTransition
	.byte 0


CranewingCity_PokemonCenter_Nurse::
	setvar VAR_0x800B, 1
	call Common_EventScript_PkmnCenterNurse
	waitmessage
	waitbuttonpress
	release
	end


CranewingCity_PokemonCenter_FatMan::
	msgbox CranewingCity_Text_FatMan, MSGBOX_NPC
	end


CranewingCity_PokemonCenter_Beauty::
	msgbox CranewingCity_Text_Beauty, MSGBOX_NPC
	end


CranewingCity_PokemonCenter_OnTransition:
	setrespawn HEAL_LOCATION_SOFTWIND_CITY
	end


CranewingCity_Text_FatMan::
	.string "Hiding?\n"
	.string "No, not at all!\p"
	.string "I was just studying this here plant.\p"
	.string "You've probably seen plants just like\n"
	.string "this one in other Pokémon centers,\l"
	.string "right?\p"
	.string "Well, they were all grown in old Pinedale\n"
	.string "Forest before it burned down.\p"
	.string "The ones you see today are all just\n"
	.string "grafts of an old tree before the fire!\p"
	.string "… … …\p"
	.string "Okay, fine, I made it up.\p"
	.string "I'm hiding from those scary people in\n"
	.string "black uniforms!$"

CranewingCity_Text_Beauty::
	.string "Oh my goodness, you will not BELIEVE\n"
	.string "the things they've got on these\l"
	.string "shelves!\p"
	.string "They've got my favorite romance series!\p"
	.string "All but the last one…$"
