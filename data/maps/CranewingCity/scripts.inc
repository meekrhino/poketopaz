CranewingCity_MapScripts::
# 17 "data/maps/CranewingCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CranewingCity_OnTransition
	.byte 0


CranewingCity_Sign::
# 24 "data/maps/CranewingCity/scripts.pory"
	msgbox CranewingCity_Text_TownSign, MSGBOX_SIGN
	end


CranewingCity_GlassworksSign::
# 28 "data/maps/CranewingCity/scripts.pory"
	msgbox CranewingCity_Text_GlassworksSign, MSGBOX_SIGN
	end


CranewingCity_Man::
# 33 "data/maps/CranewingCity/scripts.pory"
	msgbox CranewingCity_Man_Text_0, MSGBOX_NPC
	end


CranewingCity_Scientist::
# 38 "data/maps/CranewingCity/scripts.pory"
	msgbox CranewingCity_Scientist_Text_0, MSGBOX_NPC
	end


CranewingCity_Gentleman::
# 43 "data/maps/CranewingCity/scripts.pory"
	msgbox CranewingCity_Gentleman_Text_0, MSGBOX_NPC
	end


CranewingCity_Escort::
# 48 "data/maps/CranewingCity/scripts.pory"
	lockall
# 49 "data/maps/CranewingCity/scripts.pory"
	playse SE_PIN
# 50 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mExclamationPoint
# 51 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
# 52 "data/maps/CranewingCity/scripts.pory"
	delay 60
# 53 "data/maps/CranewingCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 54 "data/maps/CranewingCity/scripts.pory"
	switch VAR_TEMP_0
# 55 "data/maps/CranewingCity/scripts.pory"
	case 18, CranewingCity_Escort_3
# 57 "data/maps/CranewingCity/scripts.pory"
	case 19, CranewingCity_Escort_4
# 59 "data/maps/CranewingCity/scripts.pory"
	case 20, CranewingCity_Escort_5
# 61 "data/maps/CranewingCity/scripts.pory"
	case 21, CranewingCity_Escort_6
# 63 "data/maps/CranewingCity/scripts.pory"
	case 22, CranewingCity_Escort_7
# 65 "data/maps/CranewingCity/scripts.pory"
	case 23, CranewingCity_Escort_8
CranewingCity_Escort_1:
# 68 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
# 69 "data/maps/CranewingCity/scripts.pory"
	msgbox CranewingCity_Escort_Text_0
# 70 "data/maps/CranewingCity/scripts.pory"
	waitmessage
# 71 "data/maps/CranewingCity/scripts.pory"
	closemessage
# 72 "data/maps/CranewingCity/scripts.pory"
	switch VAR_TEMP_0
# 73 "data/maps/CranewingCity/scripts.pory"
	case 18, CranewingCity_Escort_11
# 77 "data/maps/CranewingCity/scripts.pory"
	case 19, CranewingCity_Escort_12
# 81 "data/maps/CranewingCity/scripts.pory"
	case 20, CranewingCity_Escort_13
# 85 "data/maps/CranewingCity/scripts.pory"
	case 21, CranewingCity_Escort_14
# 89 "data/maps/CranewingCity/scripts.pory"
	case 22, CranewingCity_Escort_15
# 93 "data/maps/CranewingCity/scripts.pory"
	case 23, CranewingCity_Escort_16
CranewingCity_Escort_9:
# 98 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortFullMovement
# 99 "data/maps/CranewingCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscortFull
# 100 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
# 101 "data/maps/CranewingCity/scripts.pory"
	msgbox CranewingCity_Escort_Text_1
# 102 "data/maps/CranewingCity/scripts.pory"
	waitmessage
# 103 "data/maps/CranewingCity/scripts.pory"
	closemessage
# 104 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortLeavesTheArea
# 105 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
# 106 "data/maps/CranewingCity/scripts.pory"
	removeobject 4
# 107 "data/maps/CranewingCity/scripts.pory"
	setvar VAR_CRANEWING_CITY_STATE, 1
# 108 "data/maps/CranewingCity/scripts.pory"
	releaseall
	end

CranewingCity_Escort_3:
# 56 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortApproaches_1
	goto CranewingCity_Escort_1

CranewingCity_Escort_4:
# 58 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortApproaches_2
	goto CranewingCity_Escort_1

CranewingCity_Escort_5:
# 60 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortApproaches_3
	goto CranewingCity_Escort_1

CranewingCity_Escort_6:
# 62 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortApproaches_4
	goto CranewingCity_Escort_1

CranewingCity_Escort_7:
# 64 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortApproaches_5
	goto CranewingCity_Escort_1

CranewingCity_Escort_8:
# 66 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortApproaches_6
	goto CranewingCity_Escort_1

CranewingCity_Escort_11:
# 74 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortMovement_1
# 75 "data/maps/CranewingCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort1
# 76 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_12:
# 78 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortMovement_2
# 79 "data/maps/CranewingCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort2
# 80 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_13:
# 82 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortMovement_3
# 83 "data/maps/CranewingCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort3
# 84 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_14:
# 86 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortMovement_4
# 87 "data/maps/CranewingCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort4
# 88 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_15:
# 90 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortMovement_5
# 91 "data/maps/CranewingCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort5
# 92 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
	goto CranewingCity_Escort_9

CranewingCity_Escort_16:
# 94 "data/maps/CranewingCity/scripts.pory"
	applymovement 4, mEscortMovement_6
# 95 "data/maps/CranewingCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerFollowsEscort6
# 96 "data/maps/CranewingCity/scripts.pory"
	waitmovement 0
	goto CranewingCity_Escort_9


CranewingCity_OnTransition:
# 116 "data/maps/CranewingCity/scripts.pory"
	setflag FLAG_VISITED_CRANEWING_CITY
# 117 "data/maps/CranewingCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


# 139 "data/maps/CranewingCity/scripts.pory"
mEscortApproaches_1:
# 140 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 140 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 140 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 141 "data/maps/CranewingCity/scripts.pory"
	walk_up
	step_end

# 144 "data/maps/CranewingCity/scripts.pory"
mEscortApproaches_2:
# 145 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 145 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 146 "data/maps/CranewingCity/scripts.pory"
	walk_up
	step_end

# 149 "data/maps/CranewingCity/scripts.pory"
mEscortApproaches_3:
# 150 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 151 "data/maps/CranewingCity/scripts.pory"
	walk_up
	step_end

# 154 "data/maps/CranewingCity/scripts.pory"
mEscortApproaches_4:
# 155 "data/maps/CranewingCity/scripts.pory"
	walk_up
	step_end

# 158 "data/maps/CranewingCity/scripts.pory"
mEscortApproaches_5:
# 159 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 160 "data/maps/CranewingCity/scripts.pory"
	walk_up
	step_end

# 163 "data/maps/CranewingCity/scripts.pory"
mEscortApproaches_6:
# 164 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 164 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 165 "data/maps/CranewingCity/scripts.pory"
	walk_up
	step_end

# 168 "data/maps/CranewingCity/scripts.pory"
mEscortMovement_1:
# 169 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 169 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 169 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 170 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 170 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 170 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 170 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 170 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 170 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 173 "data/maps/CranewingCity/scripts.pory"
mEscortMovement_2:
# 174 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 174 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 174 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 175 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 175 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 175 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 175 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 175 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 178 "data/maps/CranewingCity/scripts.pory"
mEscortMovement_3:
# 179 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 179 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 179 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 180 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 180 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 180 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 180 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 183 "data/maps/CranewingCity/scripts.pory"
mEscortMovement_4:
# 184 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 184 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 184 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 185 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 185 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 185 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 188 "data/maps/CranewingCity/scripts.pory"
mEscortMovement_5:
# 189 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 189 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 189 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 190 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 190 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 193 "data/maps/CranewingCity/scripts.pory"
mEscortMovement_6:
# 194 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 194 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 194 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 195 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 198 "data/maps/CranewingCity/scripts.pory"
mPlayerFollowsEscort1:
# 199 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 199 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 199 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 199 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 200 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 200 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 200 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 200 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 200 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 203 "data/maps/CranewingCity/scripts.pory"
mPlayerFollowsEscort2:
# 204 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 204 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 204 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 204 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 205 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 205 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 205 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 205 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 208 "data/maps/CranewingCity/scripts.pory"
mPlayerFollowsEscort3:
# 209 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 209 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 209 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 209 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 210 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 210 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 210 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 213 "data/maps/CranewingCity/scripts.pory"
mPlayerFollowsEscort4:
# 214 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 214 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 214 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 214 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 215 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 215 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 218 "data/maps/CranewingCity/scripts.pory"
mPlayerFollowsEscort5:
# 219 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 219 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 219 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 219 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 220 "data/maps/CranewingCity/scripts.pory"
	walk_right
	step_end

# 223 "data/maps/CranewingCity/scripts.pory"
mPlayerFollowsEscort6:
# 224 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 224 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 224 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 224 "data/maps/CranewingCity/scripts.pory"
	walk_down
	step_end

# 227 "data/maps/CranewingCity/scripts.pory"
mEscortFullMovement:
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 228 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 229 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 230 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 231 "data/maps/CranewingCity/scripts.pory"
	walk_in_place_slow_up
	step_end

# 234 "data/maps/CranewingCity/scripts.pory"
mPlayerFollowsEscortFull:
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 235 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 236 "data/maps/CranewingCity/scripts.pory"
	walk_up
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 237 "data/maps/CranewingCity/scripts.pory"
	walk_left
# 238 "data/maps/CranewingCity/scripts.pory"
	walk_in_place_slow_up
	step_end

# 241 "data/maps/CranewingCity/scripts.pory"
mEscortLeavesTheArea:
# 242 "data/maps/CranewingCity/scripts.pory"
	walk_down
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 243 "data/maps/CranewingCity/scripts.pory"
	walk_right
# 244 "data/maps/CranewingCity/scripts.pory"
	set_invisible
	step_end

CranewingCity_Man_Text_0:
# 33 "data/maps/CranewingCity/scripts.pory"
	.string "I ran into a scary spider Pokémon in the\n"
	.string "forest the other day.\p"
	.string "I'm not too prideful to admit it.\p"
	.string "Pokémon can be terrifying when you\n"
	.string "don't have your own.$"

CranewingCity_Scientist_Text_0:
# 38 "data/maps/CranewingCity/scripts.pory"
	.string "I work at the Glassworks in town\n"
	.string "developing new products.\p"
	.string "I already have two patents in my five\n"
	.string "years at the company!\p"
	.string "I developed a new luxury glass for\n"
	.string "storing Potions in.$"

CranewingCity_Gentleman_Text_0:
# 43 "data/maps/CranewingCity/scripts.pory"
	.string "A savvy trainer stores their money at\n"
	.string "the Cranewing City Bank!\p"
	.string "Keep your money safe and make a little\n"
	.string "bit besides!$"

CranewingCity_Escort_Text_0:
# 69 "data/maps/CranewingCity/scripts.pory"
	.string "Hello there!\n"
	.string "You must be new in town!\p"
	.string "Have you visited the Glassworks yet?\p"
	.string "You just have to see it.\n"
	.string "Come with me!$"

CranewingCity_Escort_Text_1:
# 101 "data/maps/CranewingCity/scripts.pory"
	.string "Here we are!\n"
	.string "This is the Glassworks!\p"
	.string "They make some incredible stuff, and\n"
	.string "there are always opportunities to get\l"
	.string "involved!\p"
	.string "Anyway, I hope you enjoy your stay.$"

CranewingCity_Text_TownSign::
# 123 "data/maps/CranewingCity/scripts.pory"
	.string "Cranewing City\n"
	.string "“Home of the world-famous Glassworks!”$"

CranewingCity_Text_GlassworksSign::
# 129 "data/maps/CranewingCity/scripts.pory"
	.string "Glassworks\n"
	.string "Makers of the finest glassware in two\l"
	.string "regions.$"
