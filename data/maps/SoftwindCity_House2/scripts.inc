SoftwindCity_House2_MapScripts::
	.byte 0


SoftwindCity_House2_Gentleman::
	msgbox SoftwindCity_House2_Gentleman_Text_0, MSGBOX_NPC
	end


SoftwindCity_House2_Woman::
	goto_if_set FLAG_RECEIVED_SOFTWIND_GREAT_BALL, SoftwindCity_House2_Woman_2
	msgbox SoftwindCity_House2_Woman_Text_1, MSGBOX_NPC
	giveitem ITEM_GREAT_BALL
	setflag FLAG_RECEIVED_SOFTWIND_GREAT_BALL
SoftwindCity_House2_Woman_1:
	end

SoftwindCity_House2_Woman_2:
	msgbox SoftwindCity_House2_Woman_Text_0, MSGBOX_NPC
	goto SoftwindCity_House2_Woman_1


SoftwindCity_House2_Gentleman_Text_0:
	.string "Thanks to the low cost of living here,\n"
	.string "my wife and I were able to retire young!\p"
	.string "We worked our years in Colossus City,\n"
	.string "and now we get to relax in this lovely\l"
	.string "town.$"

SoftwindCity_House2_Woman_Text_0:
	.string "I hope your adventure is everything\n"
	.string "you dream of, and that you end up\l"
	.string "somewhere wonderful at the end of it.\p"
	.string "That's what happened to me.$"

SoftwindCity_House2_Woman_Text_1:
	.string "Now that I'm retired, I don't need this\n"
	.string "anymore.\p"
	.string "Why don't you take it?$"
