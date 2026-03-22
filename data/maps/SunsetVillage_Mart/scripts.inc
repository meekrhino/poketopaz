SunsetVillage_Mart_MapScripts::
	.byte 0


SunsetVillage_Mart_Clerk::
# 11 "data/maps/SunsetVillage_Mart/scripts.pory"
	lock
# 12 "data/maps/SunsetVillage_Mart/scripts.pory"
	faceplayer
# 13 "data/maps/SunsetVillage_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 14 "data/maps/SunsetVillage_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/SunsetVillage_Mart/scripts.pory"
	pokemart SunsetVillage_Mart_Data
# 16 "data/maps/SunsetVillage_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/SunsetVillage_Mart/scripts.pory"
	release
	end


SunsetVillage_Mart_OldMan::
# 22 "data/maps/SunsetVillage_Mart/scripts.pory"
	msgbox SunsetVillage_Mart_OldMan_Text_0, MSGBOX_NPC
	end


SunsetVillage_Mart_OldWoman::
# 27 "data/maps/SunsetVillage_Mart/scripts.pory"
	msgbox SunsetVillage_Mart_OldWoman_Text_0, MSGBOX_NPC
	end


# 46 "data/maps/SunsetVillage_Mart/scripts.pory"

# 47 "data/maps/SunsetVillage_Mart/scripts.pory"
SunsetVillage_Mart_Data:
# 48 "data/maps/SunsetVillage_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 49 "data/maps/SunsetVillage_Mart/scripts.pory"
	.2byte ITEM_POTION
# 50 "data/maps/SunsetVillage_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 51 "data/maps/SunsetVillage_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 52 "data/maps/SunsetVillage_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 53 "data/maps/SunsetVillage_Mart/scripts.pory"
	.2byte ITEM_NONE
# 54 "data/maps/SunsetVillage_Mart/scripts.pory"
	release
# 55 "data/maps/SunsetVillage_Mart/scripts.pory"
	end

SunsetVillage_Mart_OldMan_Text_0:
# 22 "data/maps/SunsetVillage_Mart/scripts.pory"
	.string "My grandson is a Pokémon Trainer, and\n"
	.string "his birthday is coming up.\p"
	.string "I'm buying him a Potion.\n"
	.string "Kids love those!$"

SunsetVillage_Mart_OldWoman_Text_0:
# 27 "data/maps/SunsetVillage_Mart/scripts.pory"
	.string "If there's one thing I've learned, it's\n"
	.string "that you can never be too prepared.\p"
	.string "If you buy enough Potions and\n"
	.string "Antidotes, you'll be ready for anything!$"
