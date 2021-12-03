SoftwindCity_MapScripts::
	.byte 0


SoftwindCity_TownSign::
	msgbox SoftwindCity_Text_TownSign, MSGBOX_SIGN
	end


SoftwindCity_GymSign::
	msgbox SoftwindCity_Text_GymSign, MSGBOX_SIGN
	end


SoftwindCity_MoltresSign::
	msgbox SoftwindCity_Text_TributeMoltres, MSGBOX_SIGN
	end


SoftwindCity_ArticunoSign::
	msgbox SoftwindCity_Text_TributeArticuno, MSGBOX_SIGN
	end


SoftwindCity_ZapdosSign::
	msgbox SoftwindCity_Text_TributeZapdos, MSGBOX_SIGN
	end


SoftwindCity_Text_TownSign::
	.string "Softwind City\n"
	.string "“Where life drifts softly, like a leaf on\l"
	.string "the wind.”$"

SoftwindCity_Text_GymSign::
	.string "Softwind City Pokémon Gym\n"
	.string "Leader: Therma\l"
	.string "“A woman of history and literature!”$"

SoftwindCity_Text_TributeMoltres::
	.string "A reverent message:\p"
	.string "“It burns through the sky\n"
	.string "On wings of dazzling flame\l"
	.string "Herald of the spring”$"

SoftwindCity_Text_TributeArticuno::
	.string "A reverent message:\p"
	.string "“It sings in the wind\n"
	.string "Bringing winter to the land\l"
	.string "That time may march on”$"

SoftwindCity_Text_TributeZapdos::
	.string "A reverent message:\p"
	.string "“It shocks the world\n"
	.string "With a thunderous fury\l"
	.string "Forging a new path”$"
