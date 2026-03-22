NeoBay_House2_MapScripts::
	.byte 0


NeoBay_House2_FatMan::
# 18 "data/maps/NeoBay_House2/scripts.pory"
	compare VAR_NEOBAY_STATE, 8
	goto_if_lt NeoBay_House2_FatMan_2
# 22 "data/maps/NeoBay_House2/scripts.pory"
	msgbox NeoBay_House2_FatMan_Text_1, MSGBOX_NPC
NeoBay_House2_FatMan_1:
	end

NeoBay_House2_FatMan_2:
# 19 "data/maps/NeoBay_House2/scripts.pory"
	msgbox NeoBay_House2_FatMan_Text_0, MSGBOX_NPC
	goto NeoBay_House2_FatMan_1


NeoBay_House2_FatMan_Text_0:
# 19 "data/maps/NeoBay_House2/scripts.pory"
	.string "Did you see that ship floating at the\n"
	.string "dock?\p"
	.string "I can hardly believe it, myself!\p"
	.string "I wonder what it's doing here!$"

NeoBay_House2_FatMan_Text_1:
# 22 "data/maps/NeoBay_House2/scripts.pory"
	.string "That Professor was really something.\p"
	.string "I wonder what business she had in Neo\n"
	.string "Bay.$"
