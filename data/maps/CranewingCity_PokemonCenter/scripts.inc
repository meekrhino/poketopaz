CranewingCity_PokemonCenter_MapScripts::
# 15 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CranewingCity_PokemonCenter_OnTransition
# 16 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, CranewingCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

CranewingCity_PokemonCenter_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 17 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	map_script_2 VAR_CRANEWING_CITY_STATE, 2, CranewingCity_PokemonCenter_OnWarp
	.2byte 0


CranewingCity_PokemonCenter_Nurse::
# 25 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	setvar VAR_0x800B, 1
# 26 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 27 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	waitmessage
# 28 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	waitbuttonpress
# 29 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	release
	end


CranewingCity_PokemonCenter_FatMan::
# 34 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	msgbox CranewingCity_Text_FatMan, MSGBOX_NPC
	end


CranewingCity_PokemonCenter_Beauty::
# 39 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	msgbox CranewingCity_Text_Beauty, MSGBOX_NPC
	end


CranewingCity_PokemonCenter_OnTransition:
# 47 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	setrespawn HEAL_LOCATION_CRANEWING_CITY
	end


CranewingCity_PokemonCenter_OnWarp:
# 52 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	lock
# 53 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 54 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	turnobject 4, DIR_WEST
# 55 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	delay 30
# 56 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	msgbox CranewingCity_PokemonCenter_Text_Bradley
# 57 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	closemessage
# 58 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	applymovement 4, mBradleyLeavesTheCenter
# 59 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	waitmovement 0
# 60 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	removeobject 4
# 61 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	setflag FLAG_HIDE_BRADLEY_CRANEWING_CENTER
# 62 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	setvar VAR_CRANEWING_CITY_STATE, 3
# 63 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	release
	end


# 108 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
mBradleyLeavesTheCenter:
# 109 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	walk_down
# 110 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	walk_left
# 110 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	walk_left
# 110 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	walk_left
# 111 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	walk_down
# 111 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	walk_down
# 112 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	set_invisible
	step_end

CranewingCity_Text_FatMan::
# 70 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
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
# 83 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
	.string "Oh my goodness, you will not BELIEVE\n"
	.string "the things they've got on these\l"
	.string "shelves!\p"
	.string "They've got my favorite romance series!\p"
	.string "All but the last one…$"

CranewingCity_PokemonCenter_Text_Bradley::
# 91 "data/maps/CranewingCity_PokemonCenter/scripts.pory"
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
