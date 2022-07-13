CranewingCity_PokemonCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CranewingCity_PokemonCenter_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CranewingCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CranewingCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
	map_script_2 VAR_CRANEWING_CITY_STATE, 2, CranewingCity_PokemonCenter_OnWarp
	.2byte 0


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
	setrespawn HEAL_LOCATION_CRANEWING_CITY
	end


CranewingCity_PokemonCenter_OnWarp:
	lock
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	turnobject 4, DIR_WEST
	delay 30
	msgbox CranewingCity_PokemonCenter_Text_Bradley
	closemessage
	applymovement 4, mBradleyLeavesTheCenter
	waitmovement 0
	removeobject 4
	setflag FLAG_HIDE_BRADLEY_CRANEWING_CENTER
	setvar VAR_CRANEWING_CITY_STATE, 3
	release
	end


mBradleyLeavesTheCenter:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	set_invisible
	step_end

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

CranewingCity_PokemonCenter_Text_Bradley::
	.string "Bradley: They fixed me right up!\p"
	.string "It didn't take long at all!\n"
	.string "Now we have to beat Froy and--\p"
	.string "What?\p"
	.string "You've already beaten him!?\p"
	.string "… I guess I have some catching up to do.\p"
	.string "Prof. Willow is waiting for us back in\n"
	.string "Softwind City.\p"
	.string "You go and meet her, I'll stay here and\n"
	.string "get ready to challenge the gym.$"
