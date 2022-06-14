NeoBay_House1_MapScripts::
	.byte 0


NeoBay_House1_Woman::
	compare VAR_NEOBAY_STATE, 3
	goto_if_lt NeoBay_House1_Woman_2
	msgbox NeoBay_House1_Woman_Text_1, MSGBOX_NPC
NeoBay_House1_Woman_1:
	end

NeoBay_House1_Woman_2:
	msgbox NeoBay_House1_Woman_Text_0, MSGBOX_NPC
	goto NeoBay_House1_Woman_1


NeoBay_House1_Man::
	compare VAR_NEOBAY_STATE, 6
	goto_if_lt NeoBay_House1_Man_2
	msgbox NeoBay_House1_Man_Text_1, MSGBOX_NPC
NeoBay_House1_Man_1:
	end

NeoBay_House1_Man_2:
	msgbox NeoBay_House1_Man_Text_0, MSGBOX_NPC
	goto NeoBay_House1_Man_1


NeoBay_House1_Woman_Text_0:
	.string "What a beautiful day!\p"
	.string "Someone your age should get out and\n"
	.string "have some fun!\p"
	.string "Stay away from the tall grass, though!\p"
	.string "It's not safe without a Pokémon of your\n"
	.string "own.$"

NeoBay_House1_Woman_Text_1:
	.string "What a beautiful day!\p"
	.string "Wow, you got a Pokémon?\n"
	.string "That's wonderful, dear!\p"
	.string "Take good care of it, would you?$"

NeoBay_House1_Man_Text_0:
	.string "I heard that the old bridge on Route\n"
	.string "201 might be repaired soon!\p"
	.string "My wife and I can't wait to visit friends\n"
	.string "in Sunset Village.$"

NeoBay_House1_Man_Text_1:
	.string "I just got word that the old bridge on\n"
	.string "Route 201 has been repaired!\p"
	.string "Oh, you have your own Pokémon now?\p"
	.string "You should take a trip to Sunset\n"
	.string "Village!\p"
	.string "It's a long walk, but worth it!$"
