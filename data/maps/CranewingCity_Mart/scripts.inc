CranewingCity_Mart_MapScripts::
	.byte 0


CranewingCity_Mart_Clerk::
# 11 "data/maps/CranewingCity_Mart/scripts.pory"
	lock
# 12 "data/maps/CranewingCity_Mart/scripts.pory"
	faceplayer
# 13 "data/maps/CranewingCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 14 "data/maps/CranewingCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/CranewingCity_Mart/scripts.pory"
	pokemart CranewingCity_Mart_Data
# 16 "data/maps/CranewingCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/CranewingCity_Mart/scripts.pory"
	release
	end


CranewingCity_Mart_OldMan::
# 22 "data/maps/CranewingCity_Mart/scripts.pory"
	msgbox CranewingCity_Mart_OldMan_Text_0, MSGBOX_NPC
	end


# 41 "data/maps/CranewingCity_Mart/scripts.pory"

# 42 "data/maps/CranewingCity_Mart/scripts.pory"
CranewingCity_Mart_Data:
# 43 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_POKE_BALL
# 44 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_POTION
# 45 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 46 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 47 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_AWAKENING
# 48 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_BURN_HEAL
# 49 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_ESCAPE_ROPE
# 50 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_REPEL
# 51 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_X_ATTACK
# 52 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_X_DEFEND
# 53 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_X_SPEED
# 54 "data/maps/CranewingCity_Mart/scripts.pory"
    .2byte ITEM_NONE
# 55 "data/maps/CranewingCity_Mart/scripts.pory"
    release
# 56 "data/maps/CranewingCity_Mart/scripts.pory"
    end

CranewingCity_Mart_OldMan_Text_0:
# 22 "data/maps/CranewingCity_Mart/scripts.pory"
	.string "The local glassworks produces the best\n"
	.string "glass in the region.\p"
	.string "We export all across Caldera, to Kirant,\n"
	.string "and beyond!\p"
	.string "Make sure you visit while you're in town!$"
