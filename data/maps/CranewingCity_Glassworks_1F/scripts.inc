CranewingCity_Glassworks_1F_MapScripts::
	.byte 0


CranewingCity_Glassworks_1F_VisitorMan::
# 26 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_VisitorMan_Text_0, MSGBOX_NPC
	end


CranewingCity_Glassworks_1F_Visitor::
# 31 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_Visitor_Text_0, MSGBOX_NPC
	end


CranewingCity_Glassworks_1F_Tech::
# 36 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_Tech_Text_0, MSGBOX_NPC
	end


CranewingCity_Glassworks_1F_ControlPanel::
# 41 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_ControlPanel_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_FlashLights::
# 46 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_FlashLights_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_TemplateReceptacle::
# 51 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_TemplateReceptacle_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Machinery::
# 56 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_Machinery_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Drawers::
# 61 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_Drawers_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Display::
# 66 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_Display_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_FancyDisplay::
# 71 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_FancyDisplay_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Blueprint::
# 76 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_Blueprint_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Computer::
# 81 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_Computer_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_TrashCan::
# 86 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_TrashCan_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_LeadTech::
# 91 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	lockall
# 92 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	faceplayer
# 93 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_STATE_GLASSWORKS, 0
	goto_if_eq CranewingCity_Glassworks_1F_LeadTech_2
# 96 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_STATE_GLASSWORKS, 1
	goto_if_eq CranewingCity_Glassworks_1F_LeadTech_3
# 99 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_STATE_GLASSWORKS, 2
	goto_if_eq CranewingCity_Glassworks_1F_LeadTech_4
CranewingCity_Glassworks_1F_LeadTech_1:
# 102 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_LeadTech_2:
# 94 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_MaybeGiveSootSack
	goto CranewingCity_Glassworks_1F_LeadTech_1

CranewingCity_Glassworks_1F_LeadTech_3:
# 97 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_MaybeGiveGlassBottle
	goto CranewingCity_Glassworks_1F_LeadTech_1

CranewingCity_Glassworks_1F_LeadTech_4:
# 100 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_AshStore
	goto CranewingCity_Glassworks_1F_LeadTech_1


CranewingCity_Glassworks_1F_MaybeGiveSootSack::
# 106 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 107 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CranewingCity_Glassworks_1F_MaybeGiveSootSack_2
CranewingCity_Glassworks_1F_MaybeGiveSootSack_1:
# 113 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_MaybeGiveSootSack_Text_0
# 114 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_MaybeGiveSootSack_2:
# 108 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 109 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq CranewingCity_Glassworks_1F_MaybeGiveSootSack_4
	goto CranewingCity_Glassworks_1F_MaybeGiveSootSack_1

CranewingCity_Glassworks_1F_MaybeGiveSootSack_4:
# 110 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_GiveSootSack
	goto CranewingCity_Glassworks_1F_MaybeGiveSootSack_1


CranewingCity_Glassworks_1F_GiveSootSack::
# 118 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_GiveSootSack_Text_0
# 119 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmessage
# 120 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	closemessage
# 121 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 122 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveSootSack_2
# 132 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechGetsSootSack
CranewingCity_Glassworks_1F_GiveSootSack_1:
# 134 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmovement 3
# 135 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 16
# 136 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	playse SE_DOOR
# 137 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitse
# 138 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 16
# 139 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveSootSack_6
# 144 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechComesBackLong
# 145 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmovement 3
# 146 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
CranewingCity_Glassworks_1F_GiveSootSack_5:
# 148 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_GiveSootSack_Text_1
# 149 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmessage
# 150 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	closemessage
# 151 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	giveitem ITEM_SOOT_SACK
# 152 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	setvar VAR_STATE_GLASSWORKS, 1
# 153 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	subquest_finish SUB_QUEST_FIND_BOTTLE
# 154 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_GiveSootSack_Text_2
# 155 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_GiveSootSack_2:
# 123 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechGetsSootSackLoopAround
# 124 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 16
# 125 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 126 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 32
# 127 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 128 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 32
# 129 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	goto CranewingCity_Glassworks_1F_GiveSootSack_1

CranewingCity_Glassworks_1F_GiveSootSack_6:
# 140 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechComesBack
# 141 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmovement 3
	goto CranewingCity_Glassworks_1F_GiveSootSack_5


CranewingCity_Glassworks_1F_MaybeGiveGlassBottle::
# 159 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	checkitem ITEM_SOOT_SACK
# 160 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_2
CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_1:
# 163 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 164 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_ASH_GATHER_COUNT, 100
	goto_if_ge CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_5
CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_4:
# 167 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_Text_0
# 168 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_2:
# 161 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_NoSootSack
	goto CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_1

CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_5:
# 165 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_GiveGlassBottle
	goto CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_4


CranewingCity_Glassworks_1F_GiveGlassBottle::
# 172 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	setvar VAR_STATE_GLASSWORKS, 2
# 173 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	subvar VAR_ASH_GATHER_COUNT, 100
# 174 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_GiveGlassBottle_Text_0
# 175 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmessage
# 176 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	closemessage
# 177 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 178 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveGlassBottle_2
# 182 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechWalksToMachineLoopAround
# 183 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 32
# 184 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 185 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 32
# 186 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 187 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 32
# 188 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
CranewingCity_Glassworks_1F_GiveGlassBottle_1:
# 190 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	playse SE_DOOR
# 191 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitse
# 192 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechRunsMachine
# 193 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmovement 3
# 194 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	playse SE_ELEVATOR
# 195 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitse
# 196 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	playse SE_DING_DONG
# 197 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitse
# 198 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveGlassBottle_6
# 202 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechFinishesMachine
CranewingCity_Glassworks_1F_GiveGlassBottle_5:
# 204 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmovement 3
# 205 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay 16
# 206 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_GiveGlassBottle_Text_1
# 207 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmessage
# 208 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	subquest_finish SUB_QUEST_DELIVER_ASH
# 209 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	giveitem ITEM_GLASS_BOTTLE
# 210 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_GiveGlassBottle_Text_2
# 211 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_GiveGlassBottle_2:
# 179 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechWalksToMachine
	goto CranewingCity_Glassworks_1F_GiveGlassBottle_1

CranewingCity_Glassworks_1F_GiveGlassBottle_6:
# 199 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	applymovement 3, mGlassworksTechFinishesMachineLong
	goto CranewingCity_Glassworks_1F_GiveGlassBottle_5


CranewingCity_Glassworks_1F_NoSootSack::
# 215 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_NoSootSack_Text_0
# 216 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return


CranewingCity_Glassworks_1F_AshStore::
# 220 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	msgbox CranewingCity_Glassworks_1F_AshStore_Text_0
# 221 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return


CranewingCity_Glassworks_1F_LeadTechCleanup::
# 225 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	waitmessage
# 226 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	releaseall
	end


# 242 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechGetsSootSack:
# 243 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 244 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 244 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 244 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 245 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
	step_end

# 248 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechGetsSootSackLoopAround:
# 249 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 250 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 250 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 251 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 251 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 251 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 251 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 252 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
# 252 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
	step_end

# 255 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechComesBack:
# 256 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 257 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 257 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
	step_end

# 260 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechComesBackLong:
# 261 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 262 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 262 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 262 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 262 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 263 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_in_place_slow_up
	step_end

# 266 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechWalksToMachine:
# 267 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 268 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
# 268 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
	step_end

# 271 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechWalksToMachineLoopAround:
# 272 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 273 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 273 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 274 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
# 274 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
# 275 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 276 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
	step_end

# 279 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechRunsMachine:
# 280 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 281 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_in_place_slow_up
# 282 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay_16
# 282 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	delay_16
# 283 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 283 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_right
# 284 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_up
	step_end

# 287 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechFinishesMachineLong:
# 288 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 288 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 289 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 289 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 289 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 290 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 291 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 292 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_in_place_slow_down
	step_end

# 295 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
mGlassworksTechFinishesMachine:
# 296 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 296 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_down
# 297 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 297 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 297 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_left
# 298 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	walk_in_place_slow_down
	step_end

CranewingCity_Glassworks_1F_VisitorMan_Text_0:
# 26 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "I'm here on business from Gallea City.\p"
	.string "I'm hoping to place a large order for my\n"
	.string "company.$"

CranewingCity_Glassworks_1F_Visitor_Text_0:
# 31 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "The engineers do some excellent work\n"
	.string "here!\p"
	.string "Look at the beautiful pieces they have\n"
	.string "on display here!$"

CranewingCity_Glassworks_1F_Tech_Text_0:
# 36 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "I helped develop the machinery here!\p"
	.string "It can use templates to automatically\n"
	.string "convert ash into high quality glass\l"
	.string "items!\p"
	.string "If you need something made, you should\n"
	.string "speak to my boss over there.$"

CranewingCity_Glassworks_1F_ControlPanel_Text_0:
# 41 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "It's some kind of high-tech control\n"
	.string "panel.$"

CranewingCity_Glassworks_1F_FlashLights_Text_0:
# 46 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "There are tons of lights and number\n"
	.string "displays.$"

CranewingCity_Glassworks_1F_TemplateReceptacle_Text_0:
# 51 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "There's a large opening and an empty\n"
	.string "clamp.$"

CranewingCity_Glassworks_1F_Machinery_Text_0:
# 56 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "The massive machine is rumbling softly.$"

CranewingCity_Glassworks_1F_Drawers_Text_0:
# 61 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "There are several locked drawers.$"

CranewingCity_Glassworks_1F_Display_Text_0:
# 66 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "The case contains a beautiful piece of\n"
	.string "art made of glass.$"

CranewingCity_Glassworks_1F_FancyDisplay_Text_0:
# 71 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "The case contains a stunning model of\n"
	.string "Jirachi made of glass.$"

CranewingCity_Glassworks_1F_Blueprint_Text_0:
# 76 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "The table is covered in schematics for\n"
	.string "glass objects.$"

CranewingCity_Glassworks_1F_Computer_Text_0:
# 81 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "The screen displays a continuous\n"
	.string "readout of data.$"

CranewingCity_Glassworks_1F_TrashCan_Text_0:
# 86 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "The bin is full of old scrap and other\n"
	.string "trash.$"

CranewingCity_Glassworks_1F_MaybeGiveSootSack_Text_0:
# 113 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "I'm sorry, but I can't help you.\p"
	.string "Maybe if you had a Soot Sack and some\n"
	.string "ash, I could work with that…\p"
	.string "Unfortunately we don't have any spares\n"
	.string "to give to just anyone right now.$"

CranewingCity_Glassworks_1F_GiveSootSack_Text_0:
# 118 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "I'm sorry, but I can't help you.\p"
	.string "Maybe if you had a Soot Sack and some\n"
	.string "ash…\p"
	.string "… …\n"
	.string "… …\p"
	.string "For a sick Moocalf?\p"
	.string "I don't have a lot of spares, but…\p"
	.string "Okay, I'll give you a Soot Sack, but\n"
	.string "you'll have to gather the ash yourself.$"

CranewingCity_Glassworks_1F_GiveSootSack_Text_1:
# 148 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "Here you go.$"

CranewingCity_Glassworks_1F_GiveSootSack_Text_2:
# 154 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "Just go run about in Chartree Forest.\p"
	.string "Come back when you have collected 100\n"
	.string "ash.\p"
	.string "That should cover one glass bottle.$"

CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_Text_0:
# 167 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "You'll need to come back with at least\n"
	.string "100 ash before I can make you your\l"
	.string "glass bottle.$"

CranewingCity_Glassworks_1F_GiveGlassBottle_Text_0:
# 174 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "Ah, you have the ash!\n"
	.string "Excellent!\p"
	.string "I'll run that through the machine right\n"
	.string "away.$"

CranewingCity_Glassworks_1F_GiveGlassBottle_Text_1:
# 206 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "And that's all there is to it!\p"
	.string "Here's your bottle.$"

CranewingCity_Glassworks_1F_GiveGlassBottle_Text_2:
# 210 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "I've got to get back to work, but I hope\n"
	.string "everything works out with that Moocalf.$"

CranewingCity_Glassworks_1F_NoSootSack_Text_0:
# 215 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "What's this?\n"
	.string "No Soot Sack on you?\p"
	.string "You'll have to bring the ash to me if you\n"
	.string "want me to make anything.$"

CranewingCity_Glassworks_1F_AshStore_Text_0:
# 220 "data/maps/CranewingCity_Glassworks_1F/scripts.pory"
	.string "I'm sorry, I just don't have time to work\n"
	.string "on requests just now.\p"
	.string "We just got another order in for a full\n"
	.string "thousand pieces…$"
