CranewingCity_House3_MapScripts::
	.byte 0


CranewingCity_House3_Employee::
# 4 "data/maps/CranewingCity_House3/scripts.pory"
	goto_if_set FLAG_RECEIVED_CRANEWING_CHARCOAL, CranewingCity_House3_Employee_2
# 8 "data/maps/CranewingCity_House3/scripts.pory"
	lock
# 9 "data/maps/CranewingCity_House3/scripts.pory"
	faceplayer
# 10 "data/maps/CranewingCity_House3/scripts.pory"
	msgbox CranewingCity_House3_Employee_Text_1
# 11 "data/maps/CranewingCity_House3/scripts.pory"
	giveitem ITEM_CHARCOAL
# 12 "data/maps/CranewingCity_House3/scripts.pory"
	setflag FLAG_RECEIVED_CRANEWING_CHARCOAL
# 13 "data/maps/CranewingCity_House3/scripts.pory"
	release
CranewingCity_House3_Employee_1:
	end

CranewingCity_House3_Employee_2:
# 5 "data/maps/CranewingCity_House3/scripts.pory"
	msgbox CranewingCity_House3_Employee_Text_0, MSGBOX_NPC
	goto CranewingCity_House3_Employee_1


CranewingCity_House3_Employee_Text_0:
# 5 "data/maps/CranewingCity_House3/scripts.pory"
	.string "I tried to give one of those to Froy,\n"
	.string "but he was too fired up about something\l"
	.string "to listen.$"

CranewingCity_House3_Employee_Text_1:
# 10 "data/maps/CranewingCity_House3/scripts.pory"
	.string "Firey gaze…\n"
	.string "Fearsome expression…\p"
	.string "You must be a Pokémon Trainer!\p"
	.string "I make these from recycled scrap after\n"
	.string "my work at the Glassworks.\p"
	.string "Please, take it!\p"
	.string "It'll help you compete with the best!$"
