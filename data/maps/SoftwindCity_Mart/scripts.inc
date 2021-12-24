SoftwindCity_Mart_MapScripts::
	.byte 0


SoftwindCity_Mart_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart SoftwindCity_Mart_Data
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


SoftwindCity_Mart_Maniac::
	msgbox SoftwindCity_Mart_Maniac_Text_0, MSGBOX_NPC
	end


SoftwindCity_Mart_Woman::
	msgbox SoftwindCity_Mart_Woman_Text_0, MSGBOX_NPC
	end


SoftwindCity_Mart_Data:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
    .2byte ITEM_BURN_HEAL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_REPEL
	.2byte ITEM_X_SPEED
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFEND
	.2byte ITEM_ORANGE_MAIL
	.2byte ITEM_NONE
	release
	end

SoftwindCity_Mart_Maniac_Text_0:
	.string "I'm stocking up on Burn Heals and Poké\n"
	.string "Balls.\p"
	.string "Then I'm heading to Chartree Forest to\n"
	.string "catch everything I can find!$"

SoftwindCity_Mart_Woman_Text_0:
	.string "The small town vibe in Softwind City is\n"
	.string "wonderful, but the mart has limited\l"
	.string "stock.\p"
	.string "I miss being able to buy Great Balls\n"
	.string "whenever I need them!$"
