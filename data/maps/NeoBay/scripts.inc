NeoBay_MapScripts::
# 54 "data/maps/NeoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, NeoBay_OnTransition
# 55 "data/maps/NeoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, NeoBay_OnLoad
# 56 "data/maps/NeoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, NeoBay_OnResume
# 57 "data/maps/NeoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NeoBay_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 62 "data/maps/NeoBay/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 58 "data/maps/NeoBay/scripts.pory"
	map_script_2 VAR_AMPURE_RESCUE_STATE, 1, NeoBay_EventScript_SetupBradleyAtBoat
# 59 "data/maps/NeoBay/scripts.pory"
	map_script_2 VAR_AMPURE_RESCUE_STATE, 6, NeoBay_EventScript_SetupBradleyForFight
# 60 "data/maps/NeoBay/scripts.pory"
	map_script_2 VAR_AMPURE_RESCUE_STATE, 5, NeoBay_EventScript_SetupBradleyForAmpure
	.2byte 0

NeoBay_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 63 "data/maps/NeoBay/scripts.pory"
	map_script_2 VAR_AMPURE_RESCUE_STATE, 1, NeoBay_EventScript_BradleyLeadsToGrass
# 64 "data/maps/NeoBay/scripts.pory"
	map_script_2 FLAG_WILD_ENCOUNTER, 1, NeoBay_OnCompletedWildEncounter
# 65 "data/maps/NeoBay/scripts.pory"
	map_script_2 VAR_AMPURE_RESCUE_STATE, 4, NeoBay_EventScript_BradleyBattle
	.2byte 0


NeoBay_EventScript_GoToWillowBradleyTriggerTop::
# 73 "data/maps/NeoBay/scripts.pory"
	lockall
# 74 "data/maps/NeoBay/scripts.pory"
	addobject 1
# 75 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 76 "data/maps/NeoBay/scripts.pory"
	setobjectxy 1, 12, 18
# 77 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyApproachPlayerTop
# 78 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 79 "data/maps/NeoBay/scripts.pory"
	call NeoBay_EventScript_BradleyIntroText
# 80 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyEscortsPlayerTop
# 81 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEscortedByBradleyTop
# 82 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 83 "data/maps/NeoBay/scripts.pory"
	turnobject 1, DIR_WEST
# 84 "data/maps/NeoBay/scripts.pory"
	call NeoBay_EventScript_BradleyShowBoatText
# 85 "data/maps/NeoBay/scripts.pory"
	releaseall
	end


NeoBay_EventScript_GoToWillowBradleyTriggerBottom::
# 90 "data/maps/NeoBay/scripts.pory"
	lockall
# 91 "data/maps/NeoBay/scripts.pory"
	addobject 1
# 92 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 93 "data/maps/NeoBay/scripts.pory"
	setobjectxy 1, 12, 18
# 94 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyApproachPlayerBottom
# 95 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 96 "data/maps/NeoBay/scripts.pory"
	call NeoBay_EventScript_BradleyIntroText
# 97 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyEscortsPlayerBottom
# 98 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEscortedByBradleyBottom
# 99 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 100 "data/maps/NeoBay/scripts.pory"
	turnobject 1, DIR_WEST
# 101 "data/maps/NeoBay/scripts.pory"
	call NeoBay_EventScript_BradleyShowBoatText
# 102 "data/maps/NeoBay/scripts.pory"
	releaseall
	end


NeoBay_EventScript_TownSign::
# 107 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_Text_TownSign, MSGBOX_SIGN
	end


NeoBay_EventScript_DockSign::
# 112 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_Text_DockSign, MSGBOX_SIGN
	end


NeoBay_EventScript_PlayerMailbox::
# 117 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_Text_PlayerMailbox, MSGBOX_SIGN
	end


NeoBay_EventScript_OtherMailbox::
# 122 "data/maps/NeoBay/scripts.pory"
	msgbox Text_OtherMailbox, MSGBOX_SIGN
	end


NeoBay_EventScript_BradleyStopsPlayer::
# 127 "data/maps/NeoBay/scripts.pory"
	lockall
# 128 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mFaceRight
# 129 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 130 "data/maps/NeoBay/scripts.pory"
	compare VAR_AMPURE_RESCUE_STATE, 6
	goto_if_eq NeoBay_EventScript_BradleyStopsPlayer_1
# 145 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyStopsPlayer_Text_1
# 146 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 147 "data/maps/NeoBay/scripts.pory"
	closemessage
# 148 "data/maps/NeoBay/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 149 "data/maps/NeoBay/scripts.pory"
	switch VAR_TEMP_0
# 150 "data/maps/NeoBay/scripts.pory"
	case 9, NeoBay_EventScript_BradleyStopsPlayer_10
# 152 "data/maps/NeoBay/scripts.pory"
	case 10, NeoBay_EventScript_BradleyStopsPlayer_11
# 154 "data/maps/NeoBay/scripts.pory"
	case 16, NeoBay_EventScript_BradleyStopsPlayer_12
# 157 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
NeoBay_EventScript_BradleyStopsPlayer_8:
# 159 "data/maps/NeoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 160 "data/maps/NeoBay/scripts.pory"
	releaseall
	end

NeoBay_EventScript_BradleyStopsPlayer_1:
# 131 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyStopsPlayer_Text_0
# 132 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 133 "data/maps/NeoBay/scripts.pory"
	closemessage
# 134 "data/maps/NeoBay/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 135 "data/maps/NeoBay/scripts.pory"
	switch VAR_TEMP_1
# 136 "data/maps/NeoBay/scripts.pory"
	case 24, NeoBay_EventScript_BradleyStopsPlayer_6
# 138 "data/maps/NeoBay/scripts.pory"
	case 25, NeoBay_EventScript_BradleyStopsPlayer_7
NeoBay_EventScript_BradleyStopsPlayer_4:
# 141 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 142 "data/maps/NeoBay/scripts.pory"
	goto NeoBay_EventScript_DoBradleyBattle
	return

NeoBay_EventScript_BradleyStopsPlayer_6:
# 137 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRematchesBradleyAfterLoss1
	goto NeoBay_EventScript_BradleyStopsPlayer_4

NeoBay_EventScript_BradleyStopsPlayer_7:
# 139 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRematchesBradleyAfterLoss2
	goto NeoBay_EventScript_BradleyStopsPlayer_4

NeoBay_EventScript_BradleyStopsPlayer_10:
# 151 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	goto NeoBay_EventScript_BradleyStopsPlayer_8

NeoBay_EventScript_BradleyStopsPlayer_11:
# 153 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
	goto NeoBay_EventScript_BradleyStopsPlayer_8

NeoBay_EventScript_BradleyStopsPlayer_12:
# 155 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
	goto NeoBay_EventScript_BradleyStopsPlayer_8


NeoBay_EventScript_BradleyConversation::
# 166 "data/maps/NeoBay/scripts.pory"
	lock
# 167 "data/maps/NeoBay/scripts.pory"
	faceplayer
# 168 "data/maps/NeoBay/scripts.pory"
	switch VAR_AMPURE_RESCUE_STATE
# 169 "data/maps/NeoBay/scripts.pory"
	case 6, NeoBay_EventScript_BradleyConversation_3
# 172 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyConversation_Text_0
NeoBay_EventScript_BradleyConversation_1:
# 174 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 175 "data/maps/NeoBay/scripts.pory"
	closemessage
# 176 "data/maps/NeoBay/scripts.pory"
	release
	return

NeoBay_EventScript_BradleyConversation_3:
# 170 "data/maps/NeoBay/scripts.pory"
	goto NeoBay_EventScript_BradleyBattle
	goto NeoBay_EventScript_BradleyConversation_1


NeoBay_EventScript_BradleyOptional::
# 180 "data/maps/NeoBay/scripts.pory"
	goto_if_unset FLAG_DEFEATED_RIVAL_NEOBAY_2, NeoBay_EventScript_BradleyOptional_1
	return

NeoBay_EventScript_BradleyOptional_1:
# 181 "data/maps/NeoBay/scripts.pory"
	lock
# 182 "data/maps/NeoBay/scripts.pory"
	addobject 1
# 183 "data/maps/NeoBay/scripts.pory"
	setobjectxy 1, 26, 23
# 184 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyApproachesForOptionalFight
# 185 "data/maps/NeoBay/scripts.pory"
	delay 32
# 186 "data/maps/NeoBay/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
# 187 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 188 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyOptional_Text_0
# 189 "data/maps/NeoBay/scripts.pory"
	switch VAR_STARTER_MON
# 190 "data/maps/NeoBay/scripts.pory"
	case 0, NeoBay_EventScript_BradleyOptional_5
# 192 "data/maps/NeoBay/scripts.pory"
	case 1, NeoBay_EventScript_BradleyOptional_6
# 194 "data/maps/NeoBay/scripts.pory"
	case 2, NeoBay_EventScript_BradleyOptional_7
NeoBay_EventScript_BradleyOptional_3:
# 197 "data/maps/NeoBay/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_NEOBAY_2
# 198 "data/maps/NeoBay/scripts.pory"
	setvar VAR_NEOBAY_STATE, 9
# 199 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyOptional_Text_1
# 200 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 201 "data/maps/NeoBay/scripts.pory"
	closemessage
# 202 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mWalkLeft
# 203 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 204 "data/maps/NeoBay/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 205 "data/maps/NeoBay/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 206 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 207 "data/maps/NeoBay/scripts.pory"
	opendoor 26, 16
# 208 "data/maps/NeoBay/scripts.pory"
	waitdooranim
# 209 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyLeavesAfterOptionalFight
# 210 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 211 "data/maps/NeoBay/scripts.pory"
	closedoor 26, 16
# 212 "data/maps/NeoBay/scripts.pory"
	waitdooranim
# 213 "data/maps/NeoBay/scripts.pory"
	removeobject 1
# 214 "data/maps/NeoBay/scripts.pory"
	release
	return

NeoBay_EventScript_BradleyOptional_5:
# 191 "data/maps/NeoBay/scripts.pory"
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_2_VENAP, Neobay_Text_BradleyDefeated
	goto NeoBay_EventScript_BradleyOptional_3

NeoBay_EventScript_BradleyOptional_6:
# 193 "data/maps/NeoBay/scripts.pory"
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_2_CELSINGE, Neobay_Text_BradleyDefeated
	goto NeoBay_EventScript_BradleyOptional_3

NeoBay_EventScript_BradleyOptional_7:
# 195 "data/maps/NeoBay/scripts.pory"
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_2_ECHOISE, Neobay_Text_BradleyDefeated
	goto NeoBay_EventScript_BradleyOptional_3


NeoBay_EventScript_BradleyBattle::
# 219 "data/maps/NeoBay/scripts.pory"
	lockall
# 220 "data/maps/NeoBay/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 6
# 221 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyBattle_Text_0
# 222 "data/maps/NeoBay/scripts.pory"
	playfanfare MUS_HEAL
# 223 "data/maps/NeoBay/scripts.pory"
	waitfanfare
# 224 "data/maps/NeoBay/scripts.pory"
	special HealPlayerParty
# 225 "data/maps/NeoBay/scripts.pory"
	goto NeoBay_EventScript_DoBradleyBattle
	end


NeoBay_EventScript_MomRunningShoes::
# 230 "data/maps/NeoBay/scripts.pory"
	lockall
# 231 "data/maps/NeoBay/scripts.pory"
	setvar VAR_NEOBAY_STATE, 7
# 232 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_MomRunningShoes_Text_0
# 233 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 234 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 235 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 236 "data/maps/NeoBay/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 237 "data/maps/NeoBay/scripts.pory"
	addobject 3
# 238 "data/maps/NeoBay/scripts.pory"
	setobjectxy 3, 25, VAR_TEMP_1
# 239 "data/maps/NeoBay/scripts.pory"
	applymovement 3, mNeoBayMomWalksUpToPlayer
# 240 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 241 "data/maps/NeoBay/scripts.pory"
	delay 30
# 242 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_Text_MomAngry
# 243 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 244 "data/maps/NeoBay/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 245 "data/maps/NeoBay/scripts.pory"
	message NeoBay_EventScript_MomRunningShoes_Text_1
# 246 "data/maps/NeoBay/scripts.pory"
	waitfanfare
# 247 "data/maps/NeoBay/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 248 "data/maps/NeoBay/scripts.pory"
	msgbox Neobay_Text_SayGoodbye
# 249 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 250 "data/maps/NeoBay/scripts.pory"
	closemessage
# 251 "data/maps/NeoBay/scripts.pory"
	applymovement 3, mNeoBayMomStartsToLeave
# 252 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 253 "data/maps/NeoBay/scripts.pory"
	setflag FLAG_HIDE_NEO_BAY_MOM
# 254 "data/maps/NeoBay/scripts.pory"
	removeobject 3
# 255 "data/maps/NeoBay/scripts.pory"
	releaseall
	return


NeoBay_OnTransition:
# 262 "data/maps/NeoBay/scripts.pory"
	setflag FLAG_VISITED_NEOBAY_TOWN
# 263 "data/maps/NeoBay/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 264 "data/maps/NeoBay/scripts.pory"
	switch VAR_NEOBAY_STATE
# 265 "data/maps/NeoBay/scripts.pory"
	case 1, NeoBay_OnTransition_2
# 267 "data/maps/NeoBay/scripts.pory"
	case 3, NeoBay_OnTransition_3
# 270 "data/maps/NeoBay/scripts.pory"
	setflag FLAG_HIDE_NEO_BAY_BRADLEY
	return

NeoBay_OnTransition_2:
# 266 "data/maps/NeoBay/scripts.pory"
	clearflag FLAG_HIDE_NEO_BAY_BRADLEY
	return

NeoBay_OnTransition_3:
# 268 "data/maps/NeoBay/scripts.pory"
	clearflag FLAG_HIDE_NEO_BAY_BRADLEY
	return


NeoBay_OnLoad:
# 275 "data/maps/NeoBay/scripts.pory"
	compare VAR_NEOBAY_STATE, 1
	goto_if_eq NeoBay_OnLoad_1
# 280 "data/maps/NeoBay/scripts.pory"
	setmetatile 28, 33, METATILE_NeoBay_BridgeWarp_Left, 0
# 281 "data/maps/NeoBay/scripts.pory"
	setmetatile 29, 33, METATILE_NeoBay_BridgeWarp_Right, 0
	return

NeoBay_OnLoad_1:
# 276 "data/maps/NeoBay/scripts.pory"
	setmetatile 28, 33, METATILE_NeoBay_BridgeReflection_Left, 0
# 277 "data/maps/NeoBay/scripts.pory"
	setmetatile 29, 33, METATILE_NeoBay_BridgeReflection_Right, 0
	return


NeoBay_OnResume:
# 286 "data/maps/NeoBay/scripts.pory"
	goto_if_set FLAG_WILD_ENCOUNTER, NeoBay_OnResume_1
	return

NeoBay_OnResume_1:
# 287 "data/maps/NeoBay/scripts.pory"
	switch VAR_AMPURE_RESCUE_STATE
# 288 "data/maps/NeoBay/scripts.pory"
	case 2, NeoBay_OnResume_4
# 290 "data/maps/NeoBay/scripts.pory"
	case 3, NeoBay_OnResume_5
	return

NeoBay_OnResume_4:
# 289 "data/maps/NeoBay/scripts.pory"
	call NeoBay_UpdateBradleyPositionAfterEncounter
	return

NeoBay_OnResume_5:
# 291 "data/maps/NeoBay/scripts.pory"
	call NeoBay_UpdateBradleyPositionAfterEncounter
	return


NeoBay_EventScript_BradleyIntroText:
# 297 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_Text_BradleyIntroStart, MSGBOX_DEFAULT
# 298 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyFidgetsRight
# 299 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 300 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_Text_BradleyIntroStartLetsGo, MSGBOX_DEFAULT
# 301 "data/maps/NeoBay/scripts.pory"
	subquest_finish SUB_QUEST_FIND_BRADLEY
# 302 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 303 "data/maps/NeoBay/scripts.pory"
	closemessage
	return


NeoBay_EventScript_BradleyShowBoatText:
# 308 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_Text_BradleyShowBoatStart, MSGBOX_DEFAULT
# 309 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 310 "data/maps/NeoBay/scripts.pory"
	closemessage
# 311 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mEnterShip
# 312 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mEnterShip
# 313 "data/maps/NeoBay/scripts.pory"
	waitmovement 0
# 314 "data/maps/NeoBay/scripts.pory"
	setflag FLAG_SPAWN_INVISIBLE
# 315 "data/maps/NeoBay/scripts.pory"
	warp MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 0xFF, 8, 2
	return


NeoBay_EventScript_BradleyLeadsToGrass:
# 320 "data/maps/NeoBay/scripts.pory"
	lockall
# 321 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyWalksUpAndLooksAtPlayer
# 322 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksUpAndLooksAtBradley
# 323 "data/maps/NeoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 324 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyLeadsToGrass_Text_0
# 325 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyLeadsToGrass_Text_1, MSGBOX_AUTOCLOSE
# 326 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 327 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyEscortsPlayerToMeadow
# 328 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEscortsBradleyToMeadow
# 329 "data/maps/NeoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 330 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mBradleyLooksAroundAndFidgets
# 331 "data/maps/NeoBay/scripts.pory"
	waitmovement 1
# 332 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_BradleyLeadsToGrass_Text_2, MSGBOX_AUTOCLOSE
# 333 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 334 "data/maps/NeoBay/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 2
# 335 "data/maps/NeoBay/scripts.pory"
	copyobjectxytoperm 1
# 336 "data/maps/NeoBay/scripts.pory"
	releaseall
	end


NeoBay_EventScript_SetupBradleyAtBoat:
# 341 "data/maps/NeoBay/scripts.pory"
	setrespawn HEAL_LOCATION_NEO_BAY
# 342 "data/maps/NeoBay/scripts.pory"
	addobject 1
# 343 "data/maps/NeoBay/scripts.pory"
	setobjectxy 1, 28, 33
# 344 "data/maps/NeoBay/scripts.pory"
	turnobject 1, DIR_NORTH
# 345 "data/maps/NeoBay/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


NeoBay_OnCompletedWildEncounter:
# 350 "data/maps/NeoBay/scripts.pory"
	clearflag FLAG_WILD_ENCOUNTER
# 351 "data/maps/NeoBay/scripts.pory"
	switch VAR_AMPURE_RESCUE_STATE
# 352 "data/maps/NeoBay/scripts.pory"
	case 2, NeoBay_OnCompletedWildEncounter_3
# 354 "data/maps/NeoBay/scripts.pory"
	case 3, NeoBay_OnCompletedWildEncounter_4
NeoBay_OnCompletedWildEncounter_1:
	return

NeoBay_OnCompletedWildEncounter_3:
# 353 "data/maps/NeoBay/scripts.pory"
	call NeoBay_EventScript_AmpureRescueAfterFirst
	goto NeoBay_OnCompletedWildEncounter_1

NeoBay_OnCompletedWildEncounter_4:
# 355 "data/maps/NeoBay/scripts.pory"
	call NeoBay_EventScript_AmpureRescueAfterSecond
	goto NeoBay_OnCompletedWildEncounter_1


NeoBay_UpdateBradleyPositionAfterEncounter:
# 361 "data/maps/NeoBay/scripts.pory"
	special PrintTest
# 362 "data/maps/NeoBay/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 363 "data/maps/NeoBay/scripts.pory"
	addvar VAR_TEMP_0, 1
# 364 "data/maps/NeoBay/scripts.pory"
	setobjectxy 1, VAR_TEMP_0, VAR_TEMP_1
# 365 "data/maps/NeoBay/scripts.pory"
	copyobjectxytoperm 1
# 366 "data/maps/NeoBay/scripts.pory"
	turnobject 1, DIR_WEST
	return


NeoBay_EventScript_AmpureRescueAfterFirst:
# 371 "data/maps/NeoBay/scripts.pory"
	lockall
# 372 "data/maps/NeoBay/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 3
# 373 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 374 "data/maps/NeoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 375 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_AmpureRescueAfterFirst_Text_0
# 376 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 377 "data/maps/NeoBay/scripts.pory"
	closemessage
# 378 "data/maps/NeoBay/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 379 "data/maps/NeoBay/scripts.pory"
	releaseall
	return


NeoBay_EventScript_AmpureRescueAfterSecond:
# 384 "data/maps/NeoBay/scripts.pory"
	lockall
# 385 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 386 "data/maps/NeoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 387 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_AmpureRescueAfterSecond_Text_0
# 388 "data/maps/NeoBay/scripts.pory"
	playfanfare MUS_HEAL
# 389 "data/maps/NeoBay/scripts.pory"
	waitfanfare
# 390 "data/maps/NeoBay/scripts.pory"
	closemessage
# 391 "data/maps/NeoBay/scripts.pory"
	special HealPlayerParty
# 392 "data/maps/NeoBay/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 5
# 393 "data/maps/NeoBay/scripts.pory"
	warp MAP_NEO_BAY, 0xFF, 12, 23
# 394 "data/maps/NeoBay/scripts.pory"
	releaseall
	return


NeoBay_EventScript_SetupBradleyForAmpure:
# 399 "data/maps/NeoBay/scripts.pory"
	addobject 1
# 400 "data/maps/NeoBay/scripts.pory"
	addobject 2
# 401 "data/maps/NeoBay/scripts.pory"
	setobjectxy 1, 11, 23
# 402 "data/maps/NeoBay/scripts.pory"
	turnobject 1, DIR_EAST
# 403 "data/maps/NeoBay/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_WEST
# 404 "data/maps/NeoBay/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 4
	return


NeoBay_EventScript_SetupBradleyForFight:
# 408 "data/maps/NeoBay/scripts.pory"
	addobject 1
# 409 "data/maps/NeoBay/scripts.pory"
	setobjectxyperm 1, 11, 23
	return


NeoBay_EventScript_AmpureCapture:
# 413 "data/maps/NeoBay/scripts.pory"
	lockall
# 414 "data/maps/NeoBay/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 7
# 415 "data/maps/NeoBay/scripts.pory"
	addobject 2
# 416 "data/maps/NeoBay/scripts.pory"
	applymovement 2, mAmpureRunsUpToPlayer
# 417 "data/maps/NeoBay/scripts.pory"
	waitmovement 2
# 418 "data/maps/NeoBay/scripts.pory"
	delay 48
# 419 "data/maps/NeoBay/scripts.pory"
	playse SE_PIN
# 420 "data/maps/NeoBay/scripts.pory"
	applymovement 2, mExclamationPoint
# 421 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mLookUpStartled
# 422 "data/maps/NeoBay/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mLookUpStartled
# 423 "data/maps/NeoBay/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 424 "data/maps/NeoBay/scripts.pory"
	playmoncry SPECIES_AMPURE, CRY_MODE_NORMAL
# 425 "data/maps/NeoBay/scripts.pory"
	waitmoncry
# 426 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_AmpureCapture_Text_0
# 427 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 428 "data/maps/NeoBay/scripts.pory"
	applymovement 1, mWalkUpLookRight
# 429 "data/maps/NeoBay/scripts.pory"
	waitmovement 1
# 430 "data/maps/NeoBay/scripts.pory"
	special SavePlayerParty
# 431 "data/maps/NeoBay/scripts.pory"
	special PutRivalMonInPlayerParty
# 432 "data/maps/NeoBay/scripts.pory"
	special StartBradleyAmpureCatch
# 433 "data/maps/NeoBay/scripts.pory"
	waitstate
# 434 "data/maps/NeoBay/scripts.pory"
	delay 60
# 435 "data/maps/NeoBay/scripts.pory"
	fadescreen FADE_TO_WHITE
# 436 "data/maps/NeoBay/scripts.pory"
	removeobject 2
# 437 "data/maps/NeoBay/scripts.pory"
	setobjectxy 1, 12, 22
# 438 "data/maps/NeoBay/scripts.pory"
	turnobject 1, DIR_SOUTH
# 439 "data/maps/NeoBay/scripts.pory"
	special LoadPlayerParty
# 440 "data/maps/NeoBay/scripts.pory"
	fadescreen FADE_FROM_WHITE
# 441 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_AmpureCapture_Text_1
# 442 "data/maps/NeoBay/scripts.pory"
	waitmessage
# 443 "data/maps/NeoBay/scripts.pory"
	subquest_finish SUB_QUEST_RESCUE_AMPURE
# 444 "data/maps/NeoBay/scripts.pory"
	warp MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 0xFF, 8, 6
# 445 "data/maps/NeoBay/scripts.pory"
	releaseall
	return


NeoBay_EventScript_DoBradleyBattle:
# 450 "data/maps/NeoBay/scripts.pory"
	msgbox NeoBay_EventScript_DoBradleyBattle_Text_0
# 451 "data/maps/NeoBay/scripts.pory"
	closemessage
# 452 "data/maps/NeoBay/scripts.pory"
	switch VAR_STARTER_MON
# 453 "data/maps/NeoBay/scripts.pory"
	case 0, NeoBay_EventScript_DoBradleyBattle_3
# 455 "data/maps/NeoBay/scripts.pory"
	case 1, NeoBay_EventScript_DoBradleyBattle_4
# 457 "data/maps/NeoBay/scripts.pory"
	case 2, NeoBay_EventScript_DoBradleyBattle_5
NeoBay_EventScript_DoBradleyBattle_1:
# 460 "data/maps/NeoBay/scripts.pory"
	goto NeoBay_EventScript_AmpureCapture
	return

NeoBay_EventScript_DoBradleyBattle_3:
# 454 "data/maps/NeoBay/scripts.pory"
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_1_VENAP, Neobay_Text_BradleyDefeated2
	goto NeoBay_EventScript_DoBradleyBattle_1

NeoBay_EventScript_DoBradleyBattle_4:
# 456 "data/maps/NeoBay/scripts.pory"
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_1_CELSINGE, Neobay_Text_BradleyDefeated2
	goto NeoBay_EventScript_DoBradleyBattle_1

NeoBay_EventScript_DoBradleyBattle_5:
# 458 "data/maps/NeoBay/scripts.pory"
	trainerbattle_no_intro TRAINER_BRADLEY_NEOBAY_1_ECHOISE, Neobay_Text_BradleyDefeated2
	goto NeoBay_EventScript_DoBradleyBattle_1


# 572 "data/maps/NeoBay/scripts.pory"
mBradleyApproachPlayerTop:
# 573 "data/maps/NeoBay/scripts.pory"
	walk_down
# 573 "data/maps/NeoBay/scripts.pory"
	walk_down
# 573 "data/maps/NeoBay/scripts.pory"
	walk_down
# 573 "data/maps/NeoBay/scripts.pory"
	walk_down
# 573 "data/maps/NeoBay/scripts.pory"
	walk_down
# 574 "data/maps/NeoBay/scripts.pory"
	walk_right
# 575 "data/maps/NeoBay/scripts.pory"
	walk_down
# 576 "data/maps/NeoBay/scripts.pory"
	walk_right
# 576 "data/maps/NeoBay/scripts.pory"
	walk_right
# 576 "data/maps/NeoBay/scripts.pory"
	walk_right
# 576 "data/maps/NeoBay/scripts.pory"
	walk_right
	step_end

# 579 "data/maps/NeoBay/scripts.pory"
mBradleyApproachPlayerBottom:
# 580 "data/maps/NeoBay/scripts.pory"
	walk_down
# 580 "data/maps/NeoBay/scripts.pory"
	walk_down
# 580 "data/maps/NeoBay/scripts.pory"
	walk_down
# 580 "data/maps/NeoBay/scripts.pory"
	walk_down
# 580 "data/maps/NeoBay/scripts.pory"
	walk_down
# 580 "data/maps/NeoBay/scripts.pory"
	walk_down
# 581 "data/maps/NeoBay/scripts.pory"
	walk_right
# 582 "data/maps/NeoBay/scripts.pory"
	walk_down
# 583 "data/maps/NeoBay/scripts.pory"
	walk_right
# 583 "data/maps/NeoBay/scripts.pory"
	walk_right
# 583 "data/maps/NeoBay/scripts.pory"
	walk_right
# 583 "data/maps/NeoBay/scripts.pory"
	walk_right
	step_end

# 586 "data/maps/NeoBay/scripts.pory"
mBradleyFidgetsRight:
# 587 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_right
# 587 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_right
# 587 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_right
# 587 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_right
	step_end

# 590 "data/maps/NeoBay/scripts.pory"
mBradleyFidgetsLeft:
# 591 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_left
# 591 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_left
# 591 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_left
# 591 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_left
	step_end

# 594 "data/maps/NeoBay/scripts.pory"
mBradleyFidgetsDown:
# 595 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
# 595 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
# 595 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
# 595 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
	step_end

# 598 "data/maps/NeoBay/scripts.pory"
mBradleyFidgetsUp:
# 599 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_up
# 599 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_up
# 599 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_up
# 599 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_up
	step_end

# 602 "data/maps/NeoBay/scripts.pory"
mBradleyEscortsPlayerTop:
# 603 "data/maps/NeoBay/scripts.pory"
	walk_down
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 604 "data/maps/NeoBay/scripts.pory"
	walk_right
# 605 "data/maps/NeoBay/scripts.pory"
	walk_down
# 605 "data/maps/NeoBay/scripts.pory"
	walk_down
# 605 "data/maps/NeoBay/scripts.pory"
	walk_down
# 605 "data/maps/NeoBay/scripts.pory"
	walk_down
# 605 "data/maps/NeoBay/scripts.pory"
	walk_down
# 605 "data/maps/NeoBay/scripts.pory"
	walk_down
# 606 "data/maps/NeoBay/scripts.pory"
	walk_right
# 606 "data/maps/NeoBay/scripts.pory"
	walk_right
# 606 "data/maps/NeoBay/scripts.pory"
	walk_right
# 606 "data/maps/NeoBay/scripts.pory"
	walk_right
	step_end

# 609 "data/maps/NeoBay/scripts.pory"
mBradleyEscortsPlayerBottom:
# 610 "data/maps/NeoBay/scripts.pory"
	walk_up
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 611 "data/maps/NeoBay/scripts.pory"
	walk_right
# 612 "data/maps/NeoBay/scripts.pory"
	walk_down
# 612 "data/maps/NeoBay/scripts.pory"
	walk_down
# 612 "data/maps/NeoBay/scripts.pory"
	walk_down
# 612 "data/maps/NeoBay/scripts.pory"
	walk_down
# 612 "data/maps/NeoBay/scripts.pory"
	walk_down
# 612 "data/maps/NeoBay/scripts.pory"
	walk_down
# 612 "data/maps/NeoBay/scripts.pory"
	walk_down
# 613 "data/maps/NeoBay/scripts.pory"
	walk_right
# 613 "data/maps/NeoBay/scripts.pory"
	walk_right
# 613 "data/maps/NeoBay/scripts.pory"
	walk_right
# 613 "data/maps/NeoBay/scripts.pory"
	walk_right
	step_end

# 616 "data/maps/NeoBay/scripts.pory"
mPlayerEscortedByBradleyTop:
# 617 "data/maps/NeoBay/scripts.pory"
	walk_left
# 618 "data/maps/NeoBay/scripts.pory"
	walk_down
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 619 "data/maps/NeoBay/scripts.pory"
	walk_right
# 620 "data/maps/NeoBay/scripts.pory"
	walk_down
# 620 "data/maps/NeoBay/scripts.pory"
	walk_down
# 620 "data/maps/NeoBay/scripts.pory"
	walk_down
# 620 "data/maps/NeoBay/scripts.pory"
	walk_down
# 620 "data/maps/NeoBay/scripts.pory"
	walk_down
# 620 "data/maps/NeoBay/scripts.pory"
	walk_down
# 621 "data/maps/NeoBay/scripts.pory"
	walk_right
# 621 "data/maps/NeoBay/scripts.pory"
	walk_right
# 621 "data/maps/NeoBay/scripts.pory"
	walk_right
	step_end

# 624 "data/maps/NeoBay/scripts.pory"
mPlayerEscortedByBradleyBottom:
# 625 "data/maps/NeoBay/scripts.pory"
	walk_left
# 626 "data/maps/NeoBay/scripts.pory"
	walk_up
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 627 "data/maps/NeoBay/scripts.pory"
	walk_right
# 628 "data/maps/NeoBay/scripts.pory"
	walk_down
# 628 "data/maps/NeoBay/scripts.pory"
	walk_down
# 628 "data/maps/NeoBay/scripts.pory"
	walk_down
# 628 "data/maps/NeoBay/scripts.pory"
	walk_down
# 628 "data/maps/NeoBay/scripts.pory"
	walk_down
# 628 "data/maps/NeoBay/scripts.pory"
	walk_down
# 628 "data/maps/NeoBay/scripts.pory"
	walk_down
# 629 "data/maps/NeoBay/scripts.pory"
	walk_right
# 629 "data/maps/NeoBay/scripts.pory"
	walk_right
# 629 "data/maps/NeoBay/scripts.pory"
	walk_right
	step_end

# 632 "data/maps/NeoBay/scripts.pory"
mEnterShip:
# 633 "data/maps/NeoBay/scripts.pory"
	walk_down
# 633 "data/maps/NeoBay/scripts.pory"
	walk_down
# 634 "data/maps/NeoBay/scripts.pory"
	set_invisible
	step_end

# 637 "data/maps/NeoBay/scripts.pory"
mBradleyWalksUpAndLooksAtPlayer:
# 638 "data/maps/NeoBay/scripts.pory"
	walk_up
# 639 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_right
	step_end

# 642 "data/maps/NeoBay/scripts.pory"
mPlayerWalksUpAndLooksAtBradley:
# 643 "data/maps/NeoBay/scripts.pory"
	walk_up
# 644 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_left
	step_end

# 647 "data/maps/NeoBay/scripts.pory"
mBradleyEscortsPlayerToMeadow:
# 648 "data/maps/NeoBay/scripts.pory"
	walk_up
# 648 "data/maps/NeoBay/scripts.pory"
	walk_up
# 648 "data/maps/NeoBay/scripts.pory"
	walk_up
# 649 "data/maps/NeoBay/scripts.pory"
	walk_left
# 649 "data/maps/NeoBay/scripts.pory"
	walk_left
# 649 "data/maps/NeoBay/scripts.pory"
	walk_left
# 649 "data/maps/NeoBay/scripts.pory"
	walk_left
# 650 "data/maps/NeoBay/scripts.pory"
	walk_up
# 650 "data/maps/NeoBay/scripts.pory"
	walk_up
# 650 "data/maps/NeoBay/scripts.pory"
	walk_up
# 650 "data/maps/NeoBay/scripts.pory"
	walk_up
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 651 "data/maps/NeoBay/scripts.pory"
	walk_left
# 652 "data/maps/NeoBay/scripts.pory"
	walk_up
	step_end

# 655 "data/maps/NeoBay/scripts.pory"
mPlayerEscortsBradleyToMeadow:
# 656 "data/maps/NeoBay/scripts.pory"
	walk_up
# 656 "data/maps/NeoBay/scripts.pory"
	walk_up
# 656 "data/maps/NeoBay/scripts.pory"
	walk_up
# 657 "data/maps/NeoBay/scripts.pory"
	walk_left
# 657 "data/maps/NeoBay/scripts.pory"
	walk_left
# 657 "data/maps/NeoBay/scripts.pory"
	walk_left
# 657 "data/maps/NeoBay/scripts.pory"
	walk_left
# 657 "data/maps/NeoBay/scripts.pory"
	walk_left
# 658 "data/maps/NeoBay/scripts.pory"
	walk_up
# 658 "data/maps/NeoBay/scripts.pory"
	walk_up
# 658 "data/maps/NeoBay/scripts.pory"
	walk_up
# 658 "data/maps/NeoBay/scripts.pory"
	walk_up
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 659 "data/maps/NeoBay/scripts.pory"
	walk_left
# 660 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_up
	step_end

# 663 "data/maps/NeoBay/scripts.pory"
mBradleyLooksAroundAndFidgets:
# 664 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_right
# 665 "data/maps/NeoBay/scripts.pory"
	delay_16
# 665 "data/maps/NeoBay/scripts.pory"
	delay_16
# 665 "data/maps/NeoBay/scripts.pory"
	delay_16
# 665 "data/maps/NeoBay/scripts.pory"
	delay_16
# 666 "data/maps/NeoBay/scripts.pory"
	walk_left
# 667 "data/maps/NeoBay/scripts.pory"
	walk_up
# 667 "data/maps/NeoBay/scripts.pory"
	walk_up
# 668 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_left
# 669 "data/maps/NeoBay/scripts.pory"
	delay_16
# 669 "data/maps/NeoBay/scripts.pory"
	delay_16
# 669 "data/maps/NeoBay/scripts.pory"
	delay_16
# 670 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_up
# 671 "data/maps/NeoBay/scripts.pory"
	delay_16
# 671 "data/maps/NeoBay/scripts.pory"
	delay_16
# 671 "data/maps/NeoBay/scripts.pory"
	delay_16
# 672 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_right
# 673 "data/maps/NeoBay/scripts.pory"
	delay_16
# 673 "data/maps/NeoBay/scripts.pory"
	delay_16
# 673 "data/maps/NeoBay/scripts.pory"
	delay_16
# 674 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_up
# 675 "data/maps/NeoBay/scripts.pory"
	delay_16
# 675 "data/maps/NeoBay/scripts.pory"
	delay_16
# 675 "data/maps/NeoBay/scripts.pory"
	delay_16
# 676 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
# 676 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
# 676 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
# 676 "data/maps/NeoBay/scripts.pory"
	walk_in_place_fast_down
# 677 "data/maps/NeoBay/scripts.pory"
	walk_left
# 678 "data/maps/NeoBay/scripts.pory"
	delay_16
# 678 "data/maps/NeoBay/scripts.pory"
	delay_16
# 678 "data/maps/NeoBay/scripts.pory"
	delay_16
# 679 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_up
# 680 "data/maps/NeoBay/scripts.pory"
	delay_16
# 680 "data/maps/NeoBay/scripts.pory"
	delay_16
# 680 "data/maps/NeoBay/scripts.pory"
	delay_16
# 681 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_left
# 682 "data/maps/NeoBay/scripts.pory"
	delay_16
# 682 "data/maps/NeoBay/scripts.pory"
	delay_16
# 682 "data/maps/NeoBay/scripts.pory"
	delay_16
# 683 "data/maps/NeoBay/scripts.pory"
	walk_right
# 684 "data/maps/NeoBay/scripts.pory"
	walk_down
	step_end

# 687 "data/maps/NeoBay/scripts.pory"
mWalkLeft:
# 688 "data/maps/NeoBay/scripts.pory"
	walk_left
	step_end

# 691 "data/maps/NeoBay/scripts.pory"
mAmpureRunsUpToPlayer:
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
# 692 "data/maps/NeoBay/scripts.pory"
	walk_fast_down
	step_end

# 695 "data/maps/NeoBay/scripts.pory"
mLookUpStartled:
# 696 "data/maps/NeoBay/scripts.pory"
	emote_exclamation_mark
# 697 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_up
	step_end

# 700 "data/maps/NeoBay/scripts.pory"
mWalkUpLookRight:
# 701 "data/maps/NeoBay/scripts.pory"
	walk_up
# 702 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_right
	step_end

# 705 "data/maps/NeoBay/scripts.pory"
mBradleyApproachesForOptionalFight:
# 706 "data/maps/NeoBay/scripts.pory"
	walk_up
# 706 "data/maps/NeoBay/scripts.pory"
	walk_up
# 706 "data/maps/NeoBay/scripts.pory"
	walk_up
# 706 "data/maps/NeoBay/scripts.pory"
	walk_up
# 706 "data/maps/NeoBay/scripts.pory"
	walk_up
	step_end

# 709 "data/maps/NeoBay/scripts.pory"
mBradleyLeavesAfterOptionalFight:
# 710 "data/maps/NeoBay/scripts.pory"
	walk_up
# 711 "data/maps/NeoBay/scripts.pory"
	set_invisible
	step_end

# 714 "data/maps/NeoBay/scripts.pory"
mPlayerRematchesBradleyAfterLoss1:
# 715 "data/maps/NeoBay/scripts.pory"
	walk_left
# 715 "data/maps/NeoBay/scripts.pory"
	walk_left
# 715 "data/maps/NeoBay/scripts.pory"
	walk_left
# 716 "data/maps/NeoBay/scripts.pory"
	walk_up
# 717 "data/maps/NeoBay/scripts.pory"
	walk_left
	step_end

# 720 "data/maps/NeoBay/scripts.pory"
mPlayerRematchesBradleyAfterLoss2:
# 721 "data/maps/NeoBay/scripts.pory"
	walk_left
# 721 "data/maps/NeoBay/scripts.pory"
	walk_left
# 721 "data/maps/NeoBay/scripts.pory"
	walk_left
# 722 "data/maps/NeoBay/scripts.pory"
	walk_up
# 722 "data/maps/NeoBay/scripts.pory"
	walk_up
# 723 "data/maps/NeoBay/scripts.pory"
	walk_left
	step_end

# 726 "data/maps/NeoBay/scripts.pory"
mNeoBayMomWalksUpToPlayer:
# 727 "data/maps/NeoBay/scripts.pory"
	walk_left
# 727 "data/maps/NeoBay/scripts.pory"
	walk_left
# 727 "data/maps/NeoBay/scripts.pory"
	walk_left
# 727 "data/maps/NeoBay/scripts.pory"
	walk_left
# 727 "data/maps/NeoBay/scripts.pory"
	walk_left
# 727 "data/maps/NeoBay/scripts.pory"
	walk_left
# 727 "data/maps/NeoBay/scripts.pory"
	walk_left
	step_end

# 730 "data/maps/NeoBay/scripts.pory"
mNeoBayMomStartsToLeave:
# 731 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 731 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 731 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 731 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 732 "data/maps/NeoBay/scripts.pory"
	delay_16
# 732 "data/maps/NeoBay/scripts.pory"
	delay_16
# 732 "data/maps/NeoBay/scripts.pory"
	delay_16
# 732 "data/maps/NeoBay/scripts.pory"
	delay_16
# 733 "data/maps/NeoBay/scripts.pory"
	walk_in_place_slow_left
# 734 "data/maps/NeoBay/scripts.pory"
	delay_16
# 734 "data/maps/NeoBay/scripts.pory"
	delay_16
# 734 "data/maps/NeoBay/scripts.pory"
	delay_16
# 734 "data/maps/NeoBay/scripts.pory"
	delay_16
# 735 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 735 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 735 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 735 "data/maps/NeoBay/scripts.pory"
	walk_slow_right
# 736 "data/maps/NeoBay/scripts.pory"
	set_invisible
	step_end

NeoBay_EventScript_BradleyStopsPlayer_Text_0:
# 131 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Come on!\n"
	.string "Let's battle!$"

NeoBay_EventScript_BradleyStopsPlayer_Text_1:
# 145 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: What are you doing?\n"
	.string "We need to find Ampure before it gets\l"
	.string "away!$"

NeoBay_EventScript_BradleyConversation_Text_0:
# 172 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: I haven't seen Ampure\n"
	.string "anywhere.\p"
	.string "You should check that tall grass!$"

NeoBay_EventScript_BradleyOptional_Text_0:
# 188 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Hey, what are you up to?\p"
	.string "I'm on my way to grab the things I\n"
	.string "forgot.\p"
	.string "Oh!\n"
	.string "I know!\p"
	.string "Let's have a battle since you're here!$"

NeoBay_EventScript_BradleyOptional_Text_1:
# 199 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: If only I didn't have to go\n"
	.string "back for my things, I'd be twice as\l"
	.string "strong!\p"
	.string "I'm gonna pass you up, just you wait!$"

NeoBay_EventScript_BradleyBattle_Text_0:
# 221 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Still nothing?\n"
	.string "I'm tired of looking…\p"
	.string "Why don't we have a Pokémon battle\n"
	.string "while we wait?\p"
	.string "I'll heal your Pokémon first!$"

NeoBay_EventScript_MomRunningShoes_Text_0:
# 232 "data/maps/NeoBay/scripts.pory"
	.string "Mom: Wait!\p{PLAYER}!$"

NeoBay_EventScript_MomRunningShoes_Text_1:
# 245 "data/maps/NeoBay/scripts.pory"
	.string "{PLAYER} put on the\nRunning Shoes.$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_0:
# 324 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: I think I see some tracks here.\n"
	.string "They're heading towards… the meadow?\p"
	.string "I wonder why he'd go there…$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_1:
# 325 "data/maps/NeoBay/scripts.pory"
	.string "{PLAYER}, I think there may be wild\n"
	.string "Pokémon where we're going, so be ready!$"

NeoBay_EventScript_BradleyLeadsToGrass_Text_2:
# 332 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Help me look for Ampure,\n"
	.string "{PLAYER}!\p"
	.string "He's probably hiding in this tall grass.\p"
	.string "If you walk around enough, he should\n"
	.string "appear!$"

NeoBay_EventScript_AmpureRescueAfterFirst_Text_0:
# 375 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Did you find him?\n"
	.string "… … …\p"
	.string "Oh, well keep looking.\p"
	.string "Here, I'll heal your Pokémon for you.$"

NeoBay_EventScript_AmpureRescueAfterSecond_Text_0:
# 387 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Any luck this time?\n"
	.string "… … …\p"
	.string "Oh, well keep looking.\p"
	.string "Here, I'll heal your Pokémon again.$"

NeoBay_EventScript_AmpureCapture_Text_0:
# 426 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: I think he likes you,\n"
	.string "{PLAYER}!\p"
	.string "Just stay still, I'll catch him!$"

NeoBay_EventScript_AmpureCapture_Text_1:
# 441 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: ALRIGHT! And that was my first\n"
	.string "time, too!\p"
	.string "Let's get back to Prof. Willow with the\n"
	.string "good news!$"

NeoBay_EventScript_DoBradleyBattle_Text_0:
# 450 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Alright!\p"
	.string "I'm shaking with excitement!\n"
	.string "Here goes…\p"
	.string "{PLAYER}, I challenge you to a\n"
	.string "Pokémon battle!\p"
	.string "Wow… that felt so good to finally say!$"

NeoBay_Text_TownSign::
# 466 "data/maps/NeoBay/scripts.pory"
	.string "Neo Bay\n"
	.string "“The most isolated town in Caldera.\l"
	.string "Where new things begin.”$"

NeoBay_Text_DockSign::
# 473 "data/maps/NeoBay/scripts.pory"
	.string "Neo Bay Dock\n"
	.string "“The only access point for regional\l"
	.string "visitors, rare though they are.”$"

NeoBay_Text_PlayerMailbox::
# 480 "data/maps/NeoBay/scripts.pory"
	.string "{PLAYER}'s Mailbox:\n"
	.string "Looks like there's no mail today…$"

Text_OtherMailbox::
# 487 "data/maps/NeoBay/scripts.pory"
	.string "I shouldn't go snooping through other\n"
	.string "people's mail!$"

NeoBay_Text_BradleyIntroStart::
# 493 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Well, if it isn't {PLAYER}!\p"
	.string "So you've finally woken up, sleepyhead?\p"
	.string "Honestly, you've got a whole lot of\n"
	.string "nerve, making a friend wait like that!\p"
	.string "… … Nah, I'm just kidding!\n"
	.string "I'm not that bad of a guy, y'know?\p"
	.string "Anyway!$"

NeoBay_Text_BradleyIntroStartLetsGo::
# 503 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: I called you here because I've\n"
	.string "got a once-in-a-lifetime opportunity\l"
	.string "for ya!\p"
	.string "There's someone you absolutely,\n"
	.string "definitely, positively HAVE to meet!\p"
	.string "Trust me, it'll be worth your time.\n"
	.string "I promise!\p"
	.string "Come on, come on! This way!$"

NeoBay_Text_BradleyShowBoatStart::
# 513 "data/maps/NeoBay/scripts.pory"
	.string "Bradley: Look!\n"
	.string "You've noticed this sleek-looking boat\l"
	.string "moored here for a while now, right?\p"
	.string "Well, this boat belongs to none other\n"
	.string "than Prof. Willow!\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "What, you haven't heard of her?\n"
	.string "I guess you're not quite as worldly as\l"
	.string "your pal Bradley!\p"
	.string "… Anyway, she's a world-famous Pokémon\n"
	.string "Professor, known for her research on\l"
	.string "ancient Pokémon fossils!\p"
	.string "She's cool, calm, composed…\n"
	.string "and when it comes to Pokémon, she's a\l"
	.string "genius!\p"
	.string "I really admire her!\n"
	.string "Come on, let's go meet her now!$"

Neobay_Text_BradleyDefeated::
# 531 "data/maps/NeoBay/scripts.pory"
	.string "Hah, I knew I was right!$"

Neobay_Text_BradleyDefeated2::
# 537 "data/maps/NeoBay/scripts.pory"
	.string "Wow, that good already?$"

Placeholder_Text::
# 543 "data/maps/NeoBay/scripts.pory"
	.string "Placeholder$"

NeoBay_Text_MomAngry::
# 547 "data/maps/NeoBay/scripts.pory"
	.string "Mom: That professor woman came looking\n"
	.string "for you.\p"
	.string "She said you're leaving to search for\n"
	.string "Simon.\n"
	.string "Is that true?\p"
	.string "… … …\p"
	.string "And you weren't even going to say\n"
	.string "goodbye…\p"
	.string "I…\n"
	.string "I guess I can't stop you.\p"
	.string "Please… please come back to visit…\p"
	.string "At least take these with you.$"

Neobay_Text_SayGoodbye::
# 561 "data/maps/NeoBay/scripts.pory"
	.string "Mom: If you're ever in danger, or you\n"
	.string "want to come home, these running shoes\l"
	.string "will help you move much faster.\p"
	.string "I'll miss you, {PLAYER}.\p"
	.string "$"
