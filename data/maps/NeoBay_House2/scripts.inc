NeoBay_House2_MapScripts::
	.byte 0


NeoBay_House2_FatMan::
	compare VAR_NEOBAY_STATE, 8
	goto_if_lt NeoBay_House2_FatMan_2
	msgbox NeoBay_House2_FatMan_Text_1, MSGBOX_NPC
NeoBay_House2_FatMan_1:
	end

NeoBay_House2_FatMan_2:
	msgbox NeoBay_House2_FatMan_Text_0, MSGBOX_NPC
	goto NeoBay_House2_FatMan_1


NeoBay_House2_FatMan_Text_0:
	.string "Did you see that ship floating at the\n"
	.string "dock?\p"
	.string "I can hardly believe it, myself!\p"
	.string "I wonder what it's doing here!$"

NeoBay_House2_FatMan_Text_1:
	.string "That Professor was really something.\p"
	.string "I wonder what business she had in Neo\n"
	.string "Bay.$"
