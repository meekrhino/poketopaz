CranewingCity_Mart_MapScripts::
	.byte 0


CranewingCity_Mart_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart CranewingCity_Mart_Data
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end


CranewingCity_Mart_OldMan::
	msgbox CranewingCity_Mart_OldMan_Text_0, MSGBOX_NPC
	end


CranewingCity_Mart_Data:
    .2byte ITEM_POKE_BALL
    .2byte ITEM_POTION
    .2byte ITEM_ANTIDOTE
    .2byte ITEM_PARALYZE_HEAL
    .2byte ITEM_AWAKENING
    .2byte ITEM_BURN_HEAL
    .2byte ITEM_ESCAPE_ROPE
    .2byte ITEM_REPEL
    .2byte ITEM_X_ATTACK
    .2byte ITEM_X_DEFEND
    .2byte ITEM_X_SPEED
    .2byte ITEM_NONE
    release
    end

CranewingCity_Mart_OldMan_Text_0:
	.string "The local glassworks produces the best\n"
	.string "glass in the region.\p"
	.string "We export all across Caldera, to Kirant,\n"
	.string "and beyond!\p"
	.string "Make sure you visit while you're in town!$"
