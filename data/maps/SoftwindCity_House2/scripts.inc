SoftwindCity_House2_MapScripts::
	.byte 0


SoftwindCity_House2_Gentleman::
# 17 "data/maps/SoftwindCity_House2/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 18 "data/maps/SoftwindCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_House2_Gentleman_2
SoftwindCity_House2_Gentleman_1:
# 89 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Gentleman_Text_4, MSGBOX_NPC
	end

SoftwindCity_House2_Gentleman_2:
# 19 "data/maps/SoftwindCity_House2/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 20 "data/maps/SoftwindCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_House2_Gentleman_5
# 31 "data/maps/SoftwindCity_House2/scripts.pory"
	checkitem ITEM_GLASS_BOTTLE, 1
# 32 "data/maps/SoftwindCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_House2_Gentleman_8
SoftwindCity_House2_Gentleman_7:
# 83 "data/maps/SoftwindCity_House2/scripts.pory"
	checkitem ITEM_MEDICINE_MILK, 1
# 84 "data/maps/SoftwindCity_House2/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_House2_Gentleman_10
	goto SoftwindCity_House2_Gentleman_1

SoftwindCity_House2_Gentleman_5:
# 21 "data/maps/SoftwindCity_House2/scripts.pory"
	lock
# 22 "data/maps/SoftwindCity_House2/scripts.pory"
	faceplayer
# 23 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Gentleman_Text_0
# 24 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmessage
# 25 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Gentleman_Text_1
# 26 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmessage
# 27 "data/maps/SoftwindCity_House2/scripts.pory"
	subquest_finish SUB_QUEST_FIND_MILK
# 28 "data/maps/SoftwindCity_House2/scripts.pory"
	release
	end

SoftwindCity_House2_Gentleman_8:
# 33 "data/maps/SoftwindCity_House2/scripts.pory"
	subquest_check_finished SUB_QUEST_GET_MILK
# 34 "data/maps/SoftwindCity_House2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_House2_Gentleman_12
	goto SoftwindCity_House2_Gentleman_7

SoftwindCity_House2_Gentleman_10:
# 85 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Gentleman_Text_3, MSGBOX_NPC
	end

SoftwindCity_House2_Gentleman_12:
# 35 "data/maps/SoftwindCity_House2/scripts.pory"
	lock
# 36 "data/maps/SoftwindCity_House2/scripts.pory"
	faceplayer
# 37 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Gentleman_Text_0
# 38 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmessage
# 39 "data/maps/SoftwindCity_House2/scripts.pory"
	closemessage
# 40 "data/maps/SoftwindCity_House2/scripts.pory"
	removeitem ITEM_GLASS_BOTTLE, 1
# 41 "data/maps/SoftwindCity_House2/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 42 "data/maps/SoftwindCity_House2/scripts.pory"
	compare VAR_TEMP_1, 3
	goto_if_eq SoftwindCity_House2_Gentleman_15
# 56 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement 1, mManLeavesForMilk
# 57 "data/maps/SoftwindCity_House2/scripts.pory"
	delay 16
# 58 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 59 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmovement 1
# 60 "data/maps/SoftwindCity_House2/scripts.pory"
	playse SE_DOOR
# 61 "data/maps/SoftwindCity_House2/scripts.pory"
	waitse
# 62 "data/maps/SoftwindCity_House2/scripts.pory"
	delay 60
# 63 "data/maps/SoftwindCity_House2/scripts.pory"
	playse SE_DOOR
# 64 "data/maps/SoftwindCity_House2/scripts.pory"
	waitse
# 65 "data/maps/SoftwindCity_House2/scripts.pory"
	compare VAR_TEMP_0, 0
	goto_if_eq SoftwindCity_House2_Gentleman_19
# 70 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement 1, mManReturnsWithMilk
# 71 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmovement 1
SoftwindCity_House2_Gentleman_18:
# 73 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 74 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
SoftwindCity_House2_Gentleman_14:
# 76 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Gentleman_Text_2
# 77 "data/maps/SoftwindCity_House2/scripts.pory"
	subquest_finish SUB_QUEST_GET_MILK
# 78 "data/maps/SoftwindCity_House2/scripts.pory"
	giveitem ITEM_MEDICINE_MILK, 1
# 79 "data/maps/SoftwindCity_House2/scripts.pory"
	release
	end

SoftwindCity_House2_Gentleman_15:
# 43 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement 1, mManLeavesForMilkPlayerBelow
# 44 "data/maps/SoftwindCity_House2/scripts.pory"
	delay 16
# 45 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 46 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmovement 1
# 47 "data/maps/SoftwindCity_House2/scripts.pory"
	playse SE_DOOR
# 48 "data/maps/SoftwindCity_House2/scripts.pory"
	waitse
# 49 "data/maps/SoftwindCity_House2/scripts.pory"
	delay 60
# 50 "data/maps/SoftwindCity_House2/scripts.pory"
	playse SE_DOOR
# 51 "data/maps/SoftwindCity_House2/scripts.pory"
	waitse
# 52 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement 1, mManReturnsWithMilkPlayerBelow
# 53 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmovement 1
	goto SoftwindCity_House2_Gentleman_14

SoftwindCity_House2_Gentleman_19:
# 66 "data/maps/SoftwindCity_House2/scripts.pory"
	applymovement 1, mManReturnsWithMilkPlayerLeft
# 67 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmovement 1
	goto SoftwindCity_House2_Gentleman_18


SoftwindCity_House2_Woman::
# 94 "data/maps/SoftwindCity_House2/scripts.pory"
	lockall
# 95 "data/maps/SoftwindCity_House2/scripts.pory"
	faceplayer
# 96 "data/maps/SoftwindCity_House2/scripts.pory"
	goto_if_set FLAG_RECEIVED_SOFTWIND_GREAT_BALL, SoftwindCity_House2_Woman_2
# 100 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Woman_Text_1
# 101 "data/maps/SoftwindCity_House2/scripts.pory"
	waitmessage
# 102 "data/maps/SoftwindCity_House2/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 103 "data/maps/SoftwindCity_House2/scripts.pory"
	setflag FLAG_RECEIVED_SOFTWIND_GREAT_BALL
SoftwindCity_House2_Woman_1:
# 105 "data/maps/SoftwindCity_House2/scripts.pory"
	releaseall
	end

SoftwindCity_House2_Woman_2:
# 97 "data/maps/SoftwindCity_House2/scripts.pory"
	msgbox SoftwindCity_House2_Woman_Text_0
	goto SoftwindCity_House2_Woman_1


# 121 "data/maps/SoftwindCity_House2/scripts.pory"
mManLeavesForMilk:
# 122 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 123 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 123 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 123 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 123 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 124 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 124 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 124 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 124 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 125 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 125 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 126 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_down
# 127 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 128 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_down
# 129 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 129 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 130 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 131 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 132 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 133 "data/maps/SoftwindCity_House2/scripts.pory"
	set_invisible
	step_end

# 136 "data/maps/SoftwindCity_House2/scripts.pory"
mManLeavesForMilkPlayerBelow:
# 137 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 137 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 137 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 137 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 138 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 138 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 138 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 138 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 138 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 139 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 139 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 140 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_down
# 141 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 142 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_down
# 143 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 144 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_down
# 145 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 146 "data/maps/SoftwindCity_House2/scripts.pory"
	set_invisible
	step_end

# 149 "data/maps/SoftwindCity_House2/scripts.pory"
mManReturnsWithMilk:
# 150 "data/maps/SoftwindCity_House2/scripts.pory"
	face_up
# 151 "data/maps/SoftwindCity_House2/scripts.pory"
	set_visible
# 152 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 153 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 154 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 155 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 156 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 156 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 157 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 158 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 159 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 160 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 160 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 161 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 161 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 161 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 161 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 162 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 162 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 162 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 163 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_faster_up
	step_end

# 166 "data/maps/SoftwindCity_House2/scripts.pory"
mManReturnsWithMilkPlayerLeft:
# 167 "data/maps/SoftwindCity_House2/scripts.pory"
	face_up
# 168 "data/maps/SoftwindCity_House2/scripts.pory"
	set_visible
# 169 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 170 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 171 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 172 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 173 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 173 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 174 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 175 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 176 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 177 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 177 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 178 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 178 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 178 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 178 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 179 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 179 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 179 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 179 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 179 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 180 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_faster_up
	step_end

# 183 "data/maps/SoftwindCity_House2/scripts.pory"
mManReturnsWithMilkPlayerBelow:
# 184 "data/maps/SoftwindCity_House2/scripts.pory"
	face_up
# 185 "data/maps/SoftwindCity_House2/scripts.pory"
	set_visible
# 186 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 187 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 188 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_right
# 189 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 190 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 190 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 191 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 192 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 193 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_in_place_slow_up
# 194 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 194 "data/maps/SoftwindCity_House2/scripts.pory"
	delay_16
# 195 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 195 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 195 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 195 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_up
# 196 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 196 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
# 196 "data/maps/SoftwindCity_House2/scripts.pory"
	walk_left
	step_end

SoftwindCity_House2_Gentleman_Text_0:
# 23 "data/maps/SoftwindCity_House2/scripts.pory"
	.string "Well now, milk for a sick Moocalf?\p"
	.string "We don't have any, but…\p"
	.string "I'll run straight out and pick some up.\p"
	.string "Just pass me the bottle!$"

SoftwindCity_House2_Gentleman_Text_1:
# 25 "data/maps/SoftwindCity_House2/scripts.pory"
	.string "You don't have a bottle?\p"
	.string "Come back with a bottle and I will gladly\n"
	.string "help you.$"

SoftwindCity_House2_Gentleman_Text_2:
# 76 "data/maps/SoftwindCity_House2/scripts.pory"
	.string "Here you are!\p"
	.string "Now go help that Moocalf!$"

SoftwindCity_House2_Gentleman_Text_3:
# 85 "data/maps/SoftwindCity_House2/scripts.pory"
	.string "Please deliver that milk to the Moocalf!$"

SoftwindCity_House2_Gentleman_Text_4:
# 89 "data/maps/SoftwindCity_House2/scripts.pory"
	.string "Thanks to the low cost of living here,\n"
	.string "my wife and I were able to retire young!\p"
	.string "We worked our years in Colossus City,\n"
	.string "and now we get to relax in this lovely\l"
	.string "town.$"

SoftwindCity_House2_Woman_Text_0:
# 97 "data/maps/SoftwindCity_House2/scripts.pory"
	.string "I hope your adventure is everything\n"
	.string "you dream of, and that you end up\l"
	.string "somewhere wonderful at the end of it.\p"
	.string "That's what happened to me.$"

SoftwindCity_House2_Woman_Text_1:
# 100 "data/maps/SoftwindCity_House2/scripts.pory"
	.string "Now that I'm retired, I don't need this\n"
	.string "anymore.\p"
	.string "Why don't you take it?$"
