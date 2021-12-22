SunsetVillage_Mart_MapScripts::
	.byte 0


SunsetVillage_Mart_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SunsetVillage_Mart_Data
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


SunsetVillage_Mart_OldMan::
	msgbox SunsetVillage_Mart_OldMan_Text_0, MSGBOX_NPC
	end


SunsetVillage_Mart_OldWoman::
	msgbox SunsetVillage_Mart_OldWoman_Text_0, MSGBOX_NPC
	end


SunsetVillage_Mart_Data:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE
	release
	end

SunsetVillage_Mart_OldMan_Text_0:
	.string "My grandson is a Pokémon Trainer, and\n"
	.string "his birthday is coming up.\p"
	.string "I'm buying him a Potion.\n"
	.string "Kids love those!$"

SunsetVillage_Mart_OldWoman_Text_0:
	.string "If there's one thing I've learned, it's\n"
	.string "that you can never be too prepared.\p"
	.string "If you buy enough Potions and\n"
	.string "Antidotes, you'll be ready for\l"
	.string "anything!$"
