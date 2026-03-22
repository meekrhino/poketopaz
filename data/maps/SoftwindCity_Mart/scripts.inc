SoftwindCity_Mart_MapScripts::
	.byte 0


SoftwindCity_Mart_Clerk::
# 11 "data/maps/SoftwindCity_Mart/scripts.pory"
	lock
# 12 "data/maps/SoftwindCity_Mart/scripts.pory"
	faceplayer
# 13 "data/maps/SoftwindCity_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 14 "data/maps/SoftwindCity_Mart/scripts.pory"
	waitmessage
# 15 "data/maps/SoftwindCity_Mart/scripts.pory"
	pokemart SoftwindCity_Mart_Data
# 16 "data/maps/SoftwindCity_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 17 "data/maps/SoftwindCity_Mart/scripts.pory"
	release
	end


SoftwindCity_Mart_Maniac::
# 22 "data/maps/SoftwindCity_Mart/scripts.pory"
	msgbox SoftwindCity_Mart_Maniac_Text_0, MSGBOX_NPC
	end


SoftwindCity_Mart_Woman::
# 27 "data/maps/SoftwindCity_Mart/scripts.pory"
	msgbox SoftwindCity_Mart_Woman_Text_0, MSGBOX_NPC
	end


# 46 "data/maps/SoftwindCity_Mart/scripts.pory"

# 47 "data/maps/SoftwindCity_Mart/scripts.pory"
SoftwindCity_Mart_Data:
# 48 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_POKE_BALL
# 49 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_POTION
# 50 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_ANTIDOTE
# 51 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_PARALYZE_HEAL
# 52 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_AWAKENING
# 53 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_BURN_HEAL
# 54 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_ESCAPE_ROPE
# 55 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_REPEL
# 56 "data/maps/SoftwindCity_Mart/scripts.pory"
    .2byte ITEM_NONE
# 57 "data/maps/SoftwindCity_Mart/scripts.pory"
    release
# 58 "data/maps/SoftwindCity_Mart/scripts.pory"
    end

SoftwindCity_Mart_Maniac_Text_0:
# 22 "data/maps/SoftwindCity_Mart/scripts.pory"
	.string "I'm stocking up on Burn Heals and Poké\n"
	.string "Balls.\p"
	.string "Then I'm heading to Chartree Forest to\n"
	.string "catch everything I can find!$"

SoftwindCity_Mart_Woman_Text_0:
# 27 "data/maps/SoftwindCity_Mart/scripts.pory"
	.string "The small town vibe in Softwind City is\n"
	.string "wonderful, but the mart has limited\l"
	.string "stock.\p"
	.string "I miss being able to buy Great Balls\n"
	.string "whenever I need them!$"
