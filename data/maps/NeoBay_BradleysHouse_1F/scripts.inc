NeoBay_BradleysHouse_1F_MapScripts::
	.byte 0


NeoBay_BradleysHouse_1F_BradleysMom::
	compare VAR_NEOBAY_STATE, 2
	goto_if_lt NeoBay_BradleysHouse_1F_BradleysMom_2
	compare VAR_NEOBAY_STATE, 7
	goto_if_lt NeoBay_BradleysHouse_1F_BradleysMom_3
	compare VAR_NEOBAY_STATE, 9
	goto_if_eq NeoBay_BradleysHouse_1F_BradleysMom_4
NeoBay_BradleysHouse_1F_BradleysMom_1:
	end

NeoBay_BradleysHouse_1F_BradleysMom_2:
	msgbox NeoBay_BradleysHouse_1F_BradleysMom_Text_0, MSGBOX_NPC
	goto NeoBay_BradleysHouse_1F_BradleysMom_1

NeoBay_BradleysHouse_1F_BradleysMom_3:
	msgbox NeoBay_BradleysHouse_1F_BradleysMom_Text_1, MSGBOX_NPC
	goto NeoBay_BradleysHouse_1F_BradleysMom_1

NeoBay_BradleysHouse_1F_BradleysMom_4:
	msgbox NeoBay_BradleysHouse_1F_BradleysMom_Text_2, MSGBOX_NPC
	goto NeoBay_BradleysHouse_1F_BradleysMom_1


NeoBay_BradleysHouse_1F_BradleysMom_Text_0:
	.string "Hello, dear!\p"
	.string "Bradley went out looking for you\n"
	.string "earlier, did he find you?$"

NeoBay_BradleysHouse_1F_BradleysMom_Text_1:
	.string "Bradley just ran in shouting about\n"
	.string "finding Simon…\p"
	.string "Please take care of him, would you?\l"
	.string "He needs someone.\p"
	.string "I think he already ran off to that\n"
	.string "Professor Willow's boat.\p"
	.string "You'd better hurry if you're going to\n"
	.string "catch him!$"

NeoBay_BradleysHouse_1F_BradleysMom_Text_2:
	.string "I didn't expect to see either of you so\n"
	.string "soon!\p"
	.string "My Bradley is so forgetful!\p"
	.string "Make sure he doesn't forget to come\n"
	.string "visit, would you?$"
