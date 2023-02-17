CranewingCity_House3_MapScripts::
	.byte 0


CranewingCity_House3_Employee::
	goto_if_set FLAG_RECEIVED_CRANEWING_CHARCOAL, CranewingCity_House3_Employee_2
	lock
	faceplayer
	msgbox CranewingCity_House3_Employee_Text_1
	giveitem ITEM_CHARCOAL
	setflag FLAG_RECEIVED_CRANEWING_CHARCOAL
	release
CranewingCity_House3_Employee_1:
	end

CranewingCity_House3_Employee_2:
	msgbox CranewingCity_House3_Employee_Text_0, MSGBOX_NPC
	goto CranewingCity_House3_Employee_1


CranewingCity_House3_Employee_Text_0:
	.string "I tried to give one of those to Froy,\n"
	.string "but he was too fired up about\l"
	.string "something to listen.$"

CranewingCity_House3_Employee_Text_1:
	.string "Firey gaze…\n"
	.string "Fearsome expression…\p"
	.string "You must be a Pokémon Trainer!\p"
	.string "I make these from recycled scrap after\n"
	.string "my work at the Glassworks.\p"
	.string "Please, take it!\p"
	.string "It'll help you compete with the best!$"
