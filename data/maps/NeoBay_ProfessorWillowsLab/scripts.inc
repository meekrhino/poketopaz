NeoBay_ProfessorWillowsLab_MapScripts::
# 38 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, WillowsLab_OnTransition
# 39 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, WillowsLab_OnLoad
# 40 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 46 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 41 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 1, WillowIntroduction
# 42 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_AMPURE_RESCUE_STATE, 7, WillowsLab_AmpureRescued
# 43 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 7, WillowsLab_Departure
# 44 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 5, WillowsLab_AfterFlashback
	.2byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 47 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 0, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0
# 51 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 4, NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1
# 55 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_AMPURE_RESCUE_STATE, 7, WillowsLab_OnWarp
# 56 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 7, WillowsLab_OnWarp
	.2byte 0

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_0:
# 48 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 5
	end

NeoBay_ProfessorWillowsLab_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE_1:
# 52 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 5
	end


WillowsLab_YouGoFirst::
# 64 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_YouGoFirst_2
# 68 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YouGoFirst_Text_1, MSGBOX_NPC
	end

WillowsLab_YouGoFirst_2:
# 65 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YouGoFirst_Text_0, MSGBOX_NPC
	end


WillowsLab_TakeYourTime::
# 73 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_TakeYourTime_2
# 86 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_TakeYourTime_Text_3, MSGBOX_NPC
WillowsLab_TakeYourTime_1:
	end

WillowsLab_TakeYourTime_2:
# 74 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	lockall
# 75 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	faceplayer
# 76 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_TakeYourTime_Text_0, MSGBOX_YESNO
# 77 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WillowsLab_TakeYourTime_6
# 81 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_TakeYourTime_Text_2
WillowsLab_TakeYourTime_5:
# 83 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	goto WillowsLab_TakeYourTime_1

WillowsLab_TakeYourTime_6:
# 78 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_TakeYourTime_Text_1, MSGBOX_NPC
	goto WillowsLab_TakeYourTime_5


NeoBay_ProfessorWillowsLab_Ampure::
# 92 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox NeoBay_ProfessorWillowsLab_Ampure_Text_0, MSGBOX_NPC
	end


WillowsLab_Books1::
# 97 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Books1_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books2::
# 102 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Books2_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books3::
# 107 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Books3_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books4::
# 112 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Books4_Text_0, MSGBOX_SIGN
	end


WillowsLab_Books5::
# 117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Books5_Text_0, MSGBOX_SIGN
	end


WillowsLab_WillowsComputer::
# 122 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_WillowsComputer_Text_0, MSGBOX_SIGN
	return


WillowsLab_WillowsNotes::
# 126 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_WillowsNotes_Text_0, MSGBOX_SIGN
	return


WillowsLab_ExpensiveMachine::
# 130 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_ExpensiveMachine_Text_0, MSGBOX_SIGN
	return


WillowsLab_TrashCan::
# 134 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_TrashCan_Text_0, MSGBOX_SIGN
	return


WillowsLab_EventScript_SelectVenap::
# 138 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 139 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_ne WillowsLab_EventScript_SelectVenap_2
# 142 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	release
# 143 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 2
	goto_if_ne WillowsLab_EventScript_SelectVenap_5
WillowsLab_EventScript_SelectVenap_4:
# 146 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playmoncry SPECIES_VENAP, CRY_MODE_NORMAL
# 147 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmoncry
# 148 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	showmonpic SPECIES_VENAP, 10, 3
# 149 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special LockMsgBoxBottom
# 150 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_DoYouWantVenap, MSGBOX_YESNO
# 151 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special AllowMsgBoxMove
# 152 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 153 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectVenap_8
WillowsLab_EventScript_SelectVenap_7:
# 156 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_GiveVenap
	return

WillowsLab_EventScript_SelectVenap_2:
	return

WillowsLab_EventScript_SelectVenap_5:
# 144 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectVenap_4

WillowsLab_EventScript_SelectVenap_8:
# 154 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectVenap_7


WillowsLab_EventScript_SelectCelsinge::
# 160 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 161 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_ne WillowsLab_EventScript_SelectCelsinge_2
# 164 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	release
# 165 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 2
	goto_if_ne WillowsLab_EventScript_SelectCelsinge_5
WillowsLab_EventScript_SelectCelsinge_4:
# 168 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playmoncry SPECIES_CELSINGE, CRY_MODE_NORMAL
# 169 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmoncry
# 170 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	showmonpic SPECIES_CELSINGE, 10, 3
# 171 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special LockMsgBoxBottom
# 172 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_DoYouWantCelsinge, MSGBOX_YESNO
# 173 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special AllowMsgBoxMove
# 174 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 175 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectCelsinge_8
WillowsLab_EventScript_SelectCelsinge_7:
# 178 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_GiveCelsinge
	return

WillowsLab_EventScript_SelectCelsinge_2:
	return

WillowsLab_EventScript_SelectCelsinge_5:
# 166 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectCelsinge_4

WillowsLab_EventScript_SelectCelsinge_8:
# 176 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectCelsinge_7


WillowsLab_EventScript_SelectEchoise::
# 182 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 183 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_TEMP_1, 10
	goto_if_ne WillowsLab_EventScript_SelectEchoise_2
# 186 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	release
# 187 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 2
	goto_if_ne WillowsLab_EventScript_SelectEchoise_5
WillowsLab_EventScript_SelectEchoise_4:
# 190 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playmoncry SPECIES_ECHOISE, CRY_MODE_NORMAL
# 191 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmoncry
# 192 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	showmonpic SPECIES_ECHOISE, 10, 3
# 193 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special LockMsgBoxBottom
# 194 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_DoYouWantEchoise, MSGBOX_YESNO
# 195 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special AllowMsgBoxMove
# 196 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 197 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WillowsLab_EventScript_SelectEchoise_8
WillowsLab_EventScript_SelectEchoise_7:
# 200 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_GiveEchoise
	return

WillowsLab_EventScript_SelectEchoise_2:
	return

WillowsLab_EventScript_SelectEchoise_5:
# 188 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_DontBeGreedy
	goto WillowsLab_EventScript_SelectEchoise_4

WillowsLab_EventScript_SelectEchoise_8:
# 198 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_TakeYourTime2
	goto WillowsLab_EventScript_SelectEchoise_7


WillowsLab_EventScript_WhereAreYouGoing::
# 204 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	lock
# 205 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_EventScript_WhereAreYouGoing_Text_0, MSGBOX_SIGN
# 206 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 207 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mWalkDown
# 208 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 209 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	release
	end


WillowsLab_OnTransition:
# 217 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 1
	goto_if_eq WillowsLab_OnTransition_1
# 225 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_AMPURE_RESCUE_STATE, 7
	goto_if_eq WillowsLab_OnTransition_2
# 226 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 5
	goto_if_eq WillowsLab_OnTransition_2
# 227 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_OnTransition_2
# 235 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 7
	goto_if_eq WillowsLab_OnTransition_3
	return

WillowsLab_OnTransition_1:
# 218 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectxyperm 4, 2, 8
# 219 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
# 220 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	clearflag FLAG_WILLOW_BALL_TAKEN_0
# 221 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	clearflag FLAG_WILLOW_BALL_TAKEN_1
# 222 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	clearflag FLAG_WILLOW_BALL_TAKEN_2
# 223 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 5
	return

WillowsLab_OnTransition_2:
# 228 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	addobject 5
# 229 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	clearflag FLAG_HIDE_WILLOWS_LAB_BRADLEY
# 230 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectxyperm 5, 8, 7
# 231 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_RIGHT
# 232 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectxyperm 4, 11, 6
# 233 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_LEFT
	return

WillowsLab_OnTransition_3:
# 236 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectxyperm 4, 2, 8
# 237 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectmovementtype 4, MOVEMENT_TYPE_FACE_RIGHT
# 238 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 5
	return


WillowsLab_OnLoad:
# 243 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 1
	goto_if_eq WillowsLab_OnLoad_1
# 247 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmetatile 8, 2, METATILE_Lab_Door_WillowsLabExit, 0
	return

WillowsLab_OnLoad_1:
# 244 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmetatile 8, 2, METATILE_Lab_Door_WillowsLabNoWarp, 0
	return


WillowsLab_OnWarp:
# 252 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_AMPURE_RESCUE_STATE, 7
	goto_if_eq WillowsLab_OnWarp_1
# 253 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 5
	goto_if_eq WillowsLab_OnWarp_1
# 254 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_NEOBAY_STATE, 6
	goto_if_eq WillowsLab_OnWarp_1
	return

WillowsLab_OnWarp_1:
# 255 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 256 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	turnobject 5, DIR_EAST
# 257 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	turnobject 4, DIR_WEST
	return


WillowIntroduction:
# 262 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	lockall
# 263 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_NEOBAY_STATE, 2
# 264 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 1
# 265 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmetatile 8, 2, METATILE_Lab_Door_WillowsLabExit, 0
# 266 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special DrawWholeMapView
# 267 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	opendoor 8, 2
# 268 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitdooranim
# 269 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmetatile 8, 1, METATILE_Lab_Door_WillowsLabOpenTop, 0
# 270 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmetatile 8, 2, METATILE_Lab_Door_WillowsLabOpenBottom, 0
# 271 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special DrawWholeMapView
# 272 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	addobject 5
# 273 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectxy 5, 8, 2
# 274 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyEntersFirstTime
# 275 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 16
# 276 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mEntersDoorFromTop
# 277 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 278 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFirstTime
# 279 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 280 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_0, MSGBOX_AUTOCLOSE
# 281 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mFaceUp
# 282 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 283 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 6, mAmpureMakesCrash
# 284 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 6
# 285 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 286 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8005, 4
# 287 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8006, 2
# 288 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8007, 10
# 289 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special ShakeCamera
# 290 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitstate
# 291 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_1, MSGBOX_AUTOCLOSE
# 292 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 293 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playse SE_PIN
# 294 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mExclamationPoint
# 295 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mExclamationPoint
# 296 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mFaceDown
# 297 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 298 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_2, MSGBOX_AUTOCLOSE
# 299 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 6, mAmpureRunsAround
# 300 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyRushesUp
# 301 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 15
# 302 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksDown
# 303 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 304 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8005, 1
# 305 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8006, 20
# 306 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8007, 5
# 307 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special ShakeCamera
# 308 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitstate
# 309 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 310 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_3, MSGBOX_AUTOCLOSE
# 311 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playse SE_PIN
# 312 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 6, mExclamationPoint
# 313 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 314 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 6, mAmpureRushesOut
# 315 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mFaceRight
# 316 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 6
# 317 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playmoncry SPECIES_AMPURE, CRY_MODE_NORMAL
# 318 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmoncry
# 319 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_4, MSGBOX_AUTOCLOSE
# 320 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 6, mAmpureRushesOut2
# 321 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 64
# 322 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceRight
# 323 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 324 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 16
# 325 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceUp
# 326 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
# 327 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 6
# 328 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_5
# 329 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceLeft
# 330 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 331 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 332 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_6
# 333 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_7, MSGBOX_AUTOCLOSE
# 334 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playse SE_PIN
# 335 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mLookLeftStartled
# 336 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 337 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowComesUpToFriends
# 338 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 16
# 339 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceDown
# 340 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 32
# 341 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 342 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 343 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_8
# 344 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_9
# 345 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_WillowIntroduction, MSGBOX_AUTOCLOSE
# 346 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 347 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceRight
# 348 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 15
# 349 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 350 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 351 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_BradleyIsAnAssistant
# 352 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceDown
# 353 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 354 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 355 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_10, MSGBOX_AUTOCLOSE
# 356 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowGoesToTable
# 357 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 358 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_11
# 359 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_12, MSGBOX_AUTOCLOSE
# 360 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyDeliberates
# 361 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 362 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_13, MSGBOX_AUTOCLOSE
# 363 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playse SE_PIN
# 364 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mExclamationPoint
# 365 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 366 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mExclamationPoint
# 367 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 368 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_14
# 369 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_15, MSGBOX_AUTOCLOSE
# 370 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mFaceRight
# 371 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 372 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 373 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_WillowCantJustGivePokemon
# 374 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_BradleyIsReallySure, MSGBOX_AUTOCLOSE
# 375 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 376 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 60
# 377 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mFaceUp
# 378 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 379 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_WillowConcedes
# 380 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_16
# 381 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyFidgetsDown
# 382 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_17
# 383 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_18
# 384 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_19, MSGBOX_AUTOCLOSE
# 385 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceRight
# 386 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 15
# 387 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 388 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 389 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowIntroduction_Text_20
# 390 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 391 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 392 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	copyobjectxytoperm 5
# 393 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	end


WillowsLab_DontBeGreedy:
# 398 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_DontBeGreedyText, MSGBOX_SIGN
# 399 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	end


WillowsLab_TakeYourTime2:
# 404 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	hidemonpic
# 405 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_TakeYourTime2_Text_0, MSGBOX_NPC
# 406 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	end


WillowsLab_GiveVenap:
# 411 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	bufferspeciesname 0, SPECIES_VENAP
# 412 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENAP
# 413 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	givemon SPECIES_VENAP, 5, ITEM_NONE
# 414 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmonmetlocation 0, MAPSEC_WILLOWS_LAB
# 415 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 1
# 416 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_ReceivedStarter
# 417 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_WILLOW_BALL_TAKEN_0
# 418 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_STARTER_MON, 0
# 419 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_BradleyChoosesEchoise
# 420 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_RegroupAfterPlayerChoosesVenap
# 421 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_YourePokemonTrainersNow
	return


WillowsLab_GiveCelsinge:
# 425 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	bufferspeciesname 0, SPECIES_CELSINGE
# 426 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CELSINGE
# 427 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	givemon SPECIES_CELSINGE, 5, ITEM_NONE
# 428 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmonmetlocation 0, MAPSEC_WILLOWS_LAB
# 429 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 2
# 430 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_ReceivedStarter
# 431 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_WILLOW_BALL_TAKEN_1
# 432 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_STARTER_MON, 1
# 433 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_BradleyChoosesVenap
# 434 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_RegroupAfterPlayerChoosesCelsinge
# 435 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_YourePokemonTrainersNow
	return


WillowsLab_GiveEchoise:
# 439 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	bufferspeciesname 0, SPECIES_ECHOISE
# 440 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ECHOISE
# 441 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	givemon SPECIES_ECHOISE, 5, ITEM_NONE
# 442 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setmonmetlocation 0, MAPSEC_WILLOWS_LAB
# 443 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 3
# 444 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_ReceivedStarter
# 445 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_WILLOW_BALL_TAKEN_2
# 446 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_STARTER_MON, 2
# 447 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_BradleyChoosesCelsinge
# 448 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_RegroupAfterPlayerChoosesEchoise
# 449 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	goto WillowsLab_YourePokemonTrainersNow
	return


WillowsLab_ReceivedStarter:
# 453 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 454 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	message WillowsLab_ReceivedStarter_Text_0
# 455 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 456 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitfanfare
# 457 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 458 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 459 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WillowsLab_ReceivedStarter_2
WillowsLab_ReceivedStarter_1:
# 463 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 464 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 465 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_NEOBAY_STATE, 3
# 466 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	hidemonpic
	return

WillowsLab_ReceivedStarter_2:
# 460 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 461 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	goto WillowsLab_ReceivedStarter_1


WillowsLab_BradleyChoosesVenap:
# 471 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyWalksToVenap
# 472 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 473 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_BradleyChoosesVenap_Text_0
# 474 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	bufferspeciesname 0, SPECIES_VENAP
# 475 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_VENAP
# 476 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 1
# 477 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_BradleyMadeChoice
# 478 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_WILLOW_BALL_TAKEN_0
	return


WillowsLab_BradleyChoosesCelsinge:
# 483 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyWalksToCelsinge
# 484 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 485 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_BradleyChoosesVenap_Text_0
# 486 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	bufferspeciesname 0, SPECIES_CELSINGE
# 487 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_CELSINGE
# 488 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 2
# 489 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_BradleyMadeChoice
# 490 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_WILLOW_BALL_TAKEN_1
	return


WillowsLab_BradleyChoosesEchoise:
# 495 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyWalksToEchoise
# 496 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 497 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_BradleyChoosesVenap_Text_0
# 498 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	bufferspeciesname 0, SPECIES_ECHOISE
# 499 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_ECHOISE
# 500 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	removeobject 3
# 501 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_BradleyMadeChoice
# 502 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_WILLOW_BALL_TAKEN_2
	return


WillowsLab_BradleyMadeChoice:
# 507 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	message WillowsLab_BradleyMadeChoice_Text_0
# 508 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 509 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 60
# 510 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
	return


WillowsLab_RegroupAfterPlayerChoosesVenap:
# 515 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRegroupsAfterVenap
# 516 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyRegroupsAfterEchoise
# 517 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 30
# 518 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowRegroupsAfterStarter
# 519 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
	return


WillowsLab_RegroupAfterPlayerChoosesCelsinge:
# 524 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRegroupsAfterCelsinge
# 525 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyRegroupsAfterVenap
# 526 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 30
# 527 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowRegroupsAfterStarter
# 528 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
	return


WillowsLab_RegroupAfterPlayerChoosesEchoise:
# 533 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerRegroupsAfterEchoise
# 534 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyRegroupsAfterCelsinge
# 535 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 30
# 536 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowRegroupsAfterStarter
# 537 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
	return


WillowsLab_YourePokemonTrainersNow:
# 542 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 543 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YourePokemonTrainersNow_Text_0
# 544 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YourePokemonTrainersNow_Text_1
# 545 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YourePokemonTrainersNow_Text_2
# 546 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YourePokemonTrainersNow_Text_3
# 547 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureMissionDescription
# 548 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YourePokemonTrainersNow_Text_4, MSGBOX_AUTOCLOSE
# 549 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 550 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceRight
# 551 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 552 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 553 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 30
# 554 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_YourePokemonTrainersNow_Text_5
# 555 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 556 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 557 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyExits
# 558 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerExits
# 559 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 560 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	subquest_finish SUB_QUEST_CHOOSE_POKEMON
# 561 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	warp MAP_NEO_BAY, 1, 0, 0
# 562 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	end


WillowsLab_AmpureRescued:
# 567 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	lockall
# 568 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_AMPURE_RESCUE_STATE, 8
# 569 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_NEOBAY_STATE, 4
# 570 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyFidgetsRight
# 571 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 572 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureRescued_Text_0
# 573 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureRescued_Text_1
# 574 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 575 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 576 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowDeliberates
# 577 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 578 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureRescued_Text_2
# 579 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 580 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 581 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowGivesDexToPlayer
# 582 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 583 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call WillowsLab_ReceivedPokedex
# 584 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowGivesDexToBradley
# 585 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 586 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureRescued_Text_3
# 587 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_PokedexDescription
# 588 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 589 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 590 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyFidgetsUp
# 591 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 5
# 592 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 593 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 594 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureRescued_Text_4
# 595 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 596 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 597 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	fadescreen FADE_TO_BLACK
# 598 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureRescued_Text_5
# 599 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AmpureRescued_Text_6
# 600 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 601 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 602 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	call Script_SetGrayscaleTint
# 603 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	warpsilent MAP_NEO_BAY_FLASHBACK_BEACH, 0, 0, 0
# 604 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	end


WillowsLab_AfterFlashback:
# 609 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	lockall
# 610 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_NEOBAY_STATE, 6
# 611 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 612 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AfterFlashback_Text_0
# 613 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 614 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 60
# 615 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AfterFlashback_Text_1
# 616 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyFidgetsRight
# 617 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 618 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_AfterFlashback_Text_2
# 619 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	quest_start QUEST_FINDING_SIMON
# 620 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWalkLeft
# 621 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_SayGoodbyeToMom, MSGBOX_AUTOCLOSE
# 622 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	end


WillowsLab_ReceivedPokedex:
# 627 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 628 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	message WillowsLab_ReceivedPokedex_Text_0
# 629 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitfanfare
# 630 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 631 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special SetUnlockedPokedexFlags
# 632 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setflag FLAG_RECEIVED_POKEDEX_FROM_WILLOW
	return


WillowsLab_Departure:
# 637 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	lockall
# 638 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_NEOBAY_STATE, 8
# 639 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 30
# 640 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersSecondTime
# 641 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	opendoor 8, 2
# 642 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitdooranim
# 643 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	addobject 5
# 644 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setobjectxy 5, 8, 2
# 645 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mEntersDoorFromTop
# 646 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 647 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closedoor 8, 2
# 648 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitdooranim
# 649 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyEntersSecondTime
# 650 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 651 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay 30
# 652 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 653 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8005, 2
# 654 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8006, 2
# 655 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8007, 5
# 656 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special ShakeCamera
# 657 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitstate
# 658 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceRight
# 659 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 660 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 661 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_HowWasYourMom
# 662 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 663 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceDown
# 664 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 665 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 666 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_NotABadIdea
# 667 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 668 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceRight
# 669 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 670 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 671 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_DescribePokemonLeague
# 672 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 673 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mFaceDown
# 674 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 675 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 0
# 676 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_FroyLivesAway
# 677 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 678 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyFidgetsDown
# 679 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Departure_Text_0
# 680 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 681 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Departure_Text_1
# 682 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 683 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8004, 0
# 684 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8005, 2
# 685 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8006, 2
# 686 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	setvar VAR_0x8007, 5
# 687 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	special ShakeCamera
# 688 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitstate
# 689 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	playse SE_DING_DONG
# 690 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitse
# 691 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 692 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Departure_Text_2
# 693 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 694 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 695 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowExitsInSunset
# 696 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyExitsInSunset
# 697 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerExitsInSunset
# 698 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 699 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	opendoor 8, 2
# 700 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitdooranim
# 701 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowHoldsDoor
# 702 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 703 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	msgbox WillowsLab_Departure_Text_3
# 704 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmessage
# 705 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closemessage
# 706 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 4, mWillowWalkOutDoorInSunset
# 707 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement 5, mBradleyWalkOutDoorInSunset
# 708 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalkOutDoorInSunset
# 709 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitmovement 4
# 710 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	closedoor 8, 2
# 711 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	waitdooranim
# 712 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	warp MAP_SUNSET_VILLAGE, 0xFF, 11, 34
# 713 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	releaseall
	end


# 888 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyEntersFirstTime:
# 889 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_visible
# 890 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 890 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 890 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 890 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 891 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 891 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 891 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 892 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 895 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyEntersSecondTime:
# 896 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 896 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 896 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 896 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 897 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 897 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 897 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 898 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 899 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 902 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mEntersDoorFromTop:
# 903 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_visible
# 904 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
	step_end

# 907 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerEntersFirstTime:
# 908 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 908 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 909 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 909 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 909 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 910 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 910 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 911 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 914 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerEntersSecondTime:
# 915 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 915 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 915 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 916 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 916 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 917 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 920 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mExclamationPoint:
# 921 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	emote_exclamation_mark
# 922 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 922 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 922 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
	step_end

# 925 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mFaceDown:
# 926 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_down
	step_end

# 929 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mFaceUp:
# 930 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
	step_end

# 933 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mFaceRight:
# 934 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_right
	step_end

# 937 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mFaceLeft:
# 938 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_left
	step_end

# 941 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mAmpureMakesCrash:
# 942 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_left
# 942 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_left
# 942 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_left
# 942 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_left
# 943 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	slide_right
# 944 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
	step_end

# 947 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mAmpureRunsAround:
# 948 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_right
# 949 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_down
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 950 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 951 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_up
# 952 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_down
# 953 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_up
# 954 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_down
# 955 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_up
# 956 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_down
# 957 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 957 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 957 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 957 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 957 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 957 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 958 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 959 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 959 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
# 959 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_left
	step_end

# 962 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyRushesUp:
# 963 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_left
# 964 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_down
	step_end

# 967 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerWalksDown:
# 968 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_fast_down
	step_end

# 971 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mAmpureRushesOut:
# 972 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 972 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 973 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 974 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_up
	step_end

# 977 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mAmpureRushesOut2:
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 978 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_fast_up
# 979 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 979 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 979 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 980 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 980 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 980 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_right
# 981 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 981 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 981 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 981 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_faster_up
# 982 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_invisible
	step_end

# 985 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mLookLeftStartled:
# 986 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	emote_exclamation_mark
# 987 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_left
	step_end

# 990 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowComesUpToFriends:
# 991 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 992 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 992 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 992 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 992 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 993 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_up
	step_end

# 996 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowGoesToTable:
# 997 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 997 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 997 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 998 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 998 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
	step_end

# 1001 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyDeliberates:
# 1002 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_right
# 1003 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1003 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1003 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1003 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1004 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 1008 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyWalksToVenap:
# 1009 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1009 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1010 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1010 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1011 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1012 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1013 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_up
	step_end

# 1016 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyWalksToCelsinge:
# 1017 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1017 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1018 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1018 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1019 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1020 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1020 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1021 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_up
	step_end

# 1024 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyWalksToEchoise:
# 1025 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1025 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1026 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1026 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1027 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1027 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1028 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1028 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1028 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1029 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
	step_end

# 1033 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyRegroupsAfterVenap:
# 1034 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1035 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1035 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1036 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1036 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1037 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1038 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 1041 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyRegroupsAfterCelsinge:
# 1042 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1042 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1043 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1043 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1044 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1044 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1045 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1046 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 1049 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyRegroupsAfterEchoise:
# 1050 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1050 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1050 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1051 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1051 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1052 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1052 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1053 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1054 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 1057 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerRegroupsAfterVenap:
# 1058 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1059 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1059 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1059 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1060 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1061 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 1064 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerRegroupsAfterCelsinge:
# 1065 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1065 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1066 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1066 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1066 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1067 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1068 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 1071 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerRegroupsAfterEchoise:
# 1072 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1072 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1072 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1073 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1073 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1073 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1074 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1075 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_down
	step_end

# 1078 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowRegroupsAfterStarter:
# 1079 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1079 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1080 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1080 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1081 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1081 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1082 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
	step_end

# 1085 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWalkDown:
# 1086 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
	step_end

# 1089 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyExits:
# 1090 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1091 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1091 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1091 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1091 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1092 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1092 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1092 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1092 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1093 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_invisible
	step_end

# 1096 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerExits:
# 1097 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1098 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1099 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1099 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1099 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1099 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1100 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1100 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1100 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1100 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1101 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_invisible
	step_end

# 1104 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowDeliberates:
# 1105 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_right
# 1106 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1106 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1106 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1106 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1107 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_left
	step_end

# 1110 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerExitsInSunset:
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1111 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1112 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1112 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1113 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
	step_end

# 1116 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyExitsInSunset:
# 1117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1118 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1119 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1119 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1119 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1120 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
	step_end

# 1123 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowExitsInSunset:
# 1124 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1124 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1124 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1124 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1124 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1124 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1125 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1125 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1125 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1125 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1125 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
	step_end

# 1128 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowHoldsDoor:
# 1129 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1130 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_left
# 1131 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1131 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
	step_end

# 1134 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mPlayerWalkOutDoorInSunset:
# 1135 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1135 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1135 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1136 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_invisible
	step_end

# 1139 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mBradleyWalkOutDoorInSunset:
# 1140 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1140 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1141 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_invisible
	step_end

# 1144 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowWalkOutDoorInSunset:
# 1145 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1145 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1145 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1146 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1147 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1148 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	set_invisible
	step_end

# 1151 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowGivesDexToPlayer:
# 1152 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1152 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_left
# 1153 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1153 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
	step_end

# 1156 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
mWillowGivesDexToBradley:
# 1157 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_down
# 1158 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_left
# 1159 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1159 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1159 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	delay_16
# 1160 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1161 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_up
# 1162 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_right
# 1163 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	walk_in_place_slow_left
	step_end

WillowsLab_YouGoFirst_Text_0:
# 65 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: I guess we'd better go talk to\n"
	.string "our folks like the Prof. said…$"

WillowsLab_YouGoFirst_Text_1:
# 68 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: I just can't decide!\n"
	.string "You go first, {PLAYER}!\p"
	.string "Come on, come on, come on!$"

WillowsLab_TakeYourTime_Text_0:
# 76 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: So, you stopped by your family\n"
	.string "to say goodbye, did you?$"

WillowsLab_TakeYourTime_Text_1:
# 78 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: … … …\n"
	.string "… … …\p"
	.string "You haven't even left my lab.\p"
	.string "Get going before I regret giving you a\n"
	.string "Pokémon!$"

WillowsLab_TakeYourTime_Text_2:
# 81 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Better get going!\p"
	.string "If you're not back in time, we'll meet\n"
	.string "you at Sunset Village.\p"
	.string "I believe Route 201 is open now, if you'd\n"
	.string "rather take that path.$"

WillowsLab_TakeYourTime_Text_3:
# 86 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ohoho, can't decide?\p"
	.string "Take your time, this is a big decision!$"

NeoBay_ProfessorWillowsLab_Ampure_Text_0:
# 92 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Ampure: Piu?$"

WillowsLab_Books1_Text_0:
# 97 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "There's a book titled “People and\n"
	.string "Pokémon: Nature's Balance”…\p"
	.string "Sounds a little dense…$"

WillowsLab_Books2_Text_0:
# 102 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "There's a book titled “Ancient Pokémon\n"
	.string "Mythos”…\p"
	.string "Sounds intruguing!$"

WillowsLab_Books3_Text_0:
# 107 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "There's a book titled “The Lifecycles\n"
	.string "of Bug Pokémon”…\p"
	.string "Sounds gross!$"

WillowsLab_Books4_Text_0:
# 112 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "There's a book titled “The Varied\n"
	.string "Pokémon of Mt. Frost”…\p"
	.string "Sounds like an interesting place!$"

WillowsLab_Books5_Text_0:
# 117 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "There are tons of dusty textbooks…\p"
	.string "It looks like Prof. Willow hasn't used\n"
	.string "this shelf in a while.$"

WillowsLab_WillowsComputer_Text_0:
# 122 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "This is Prof. Willow's personal computer.\p"
	.string "The screen is covered in graphs and\n"
	.string "data!$"

WillowsLab_WillowsNotes_Text_0:
# 126 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Looks like a daily log of field notes.\n"
	.string "Prof. Willow sure is thorough!$"

WillowsLab_ExpensiveMachine_Text_0:
# 130 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Looks like an expensive machine.\p"
	.string "Hopefully Ampure didn't break anything!$"

WillowsLab_TrashCan_Text_0:
# 134 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "It's filled to the brim with crumpled\n"
	.string "notes.$"

WillowsLab_EventScript_WhereAreYouGoing_Text_0:
# 205 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Hey!\n"
	.string "Where are you going?\p"
	.string "Hurry up and choose a Pokémon already!$"

WillowIntroduction_Text_0:
# 280 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Hey, Prof. Willow!$"

WillowIntroduction_Text_1:
# 291 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "CRASH!!$"

WillowIntroduction_Text_2:
# 298 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Come on, Ampure!\n"
	.string "That's fragile!\p"
	.string "Get back in your Pokéball!$"

WillowIntroduction_Text_3:
# 310 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Prof. Willow! What's going on!?$"

WillowIntroduction_Text_4:
# 319 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Watch out!$"

WillowIntroduction_Text_5:
# 328 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Oh, not again…\p"
	.string "That little rascal just will not keep\n"
	.string "still!$"

WillowIntroduction_Text_6:
# 332 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Are you alright, Prof. Willow?$"

WillowIntroduction_Text_7:
# 333 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ohohoho!\p"
	.string "Thanks for showing concern, Bradley,\n"
	.string "but I'm fine.\p"
	.string "This happens all the time.$"

WillowIntroduction_Text_8:
# 343 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Oh? And who are you?$"

WillowIntroduction_Text_9:
# 344 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: This is {PLAYER}.\p"
	.string "They've been my friend for as long as I\n"
	.string "can remember.$"

WillowIntroduction_Text_10:
# 355 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Did I now?\n"
	.string "… Ah, I remember now!\p"
	.string "Ohoho, you're quite right!$"

WillowIntroduction_Text_11:
# 358 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: There are three Pokéballs on\n"
	.string "this table.\p"
	.string "Each one contains an extremely rare\n"
	.string "Pokémon.\p"
	.string "Bradley, go ahead and choose whichever\n"
	.string "you like!$"

WillowIntroduction_Text_12:
# 359 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Actually…$"

WillowIntroduction_Text_13:
# 362 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: I want {PLAYER} to have the\nPokémon.$"

WillowIntroduction_Text_14:
# 368 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: But Bradley!\n"
	.string "You earned this Pokémon yourself!\l"
	.string "You deserve it!$"

WillowIntroduction_Text_15:
# 369 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: No, I made up my mind a long\n"
	.string "time ago.\p"
	.string "I want {PLAYER} to have the Pokémon!$"

WillowIntroduction_Text_16:
# 380 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Alright, I've decided.\p"
	.string "Both of you will receive a Pokémon!$"

WillowIntroduction_Text_17:
# 382 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Wow, Prof. Willow!\n"
	.string "Really!?$"

WillowIntroduction_Text_18:
# 383 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ohoho, how can I refuse such a\n"
	.string "sincere request?\p"
	.string "Go ahead and choose any Pokéball on\n"
	.string "the table.$"

WillowIntroduction_Text_19:
# 384 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: This is awesome!\n"
	.string "Thank you so much, Prof. Willow!$"

WillowIntroduction_Text_20:
# 389 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: I'm so excited!\n"
	.string "You go first, {PLAYER}.\p"
	.string "Come on come on, choose one!$"

WillowsLab_TakeYourTime2_Text_0:
# 405 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Take your time, this is a big\n"
	.string "decision!$"

WillowsLab_ReceivedStarter_Text_0:
# 454 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "{PLAYER} received the {STR_VAR_1}\nfrom Prof. Willow!$"

WillowsLab_BradleyChoosesVenap_Text_0:
# 473 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: I've made up my mind.\p"
	.string "I'll take this one!$"

WillowsLab_BradleyMadeChoice_Text_0:
# 507 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley received the {STR_VAR_1}\nfrom Prof. Willow!$"

WillowsLab_YourePokemonTrainersNow_Text_0:
# 543 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ohohoho, the looks on your\n"
	.string "faces are priceless!\p"
	.string "From now on, both of you are officially\n"
	.string "Pokémon Trainers!\l"
	.string "Congratulations!$"

WillowsLab_YourePokemonTrainersNow_Text_1:
# 544 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: You hear that, {PLAYER}?\n"
	.string "We're legit Pokémon Trainers now!\p"
	.string "We're going straight to the big leagues!$"

WillowsLab_YourePokemonTrainersNow_Text_2:
# 545 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ahem!\n"
	.string "Before scampering off with your new\l"
	.string "Pokémon, there's something I'd like you\l"
	.string "to do for me in return.$"

WillowsLab_YourePokemonTrainersNow_Text_3:
# 546 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Anything, professor!$"

WillowsLab_YourePokemonTrainersNow_Text_4:
# 548 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Not a problem, Prof. Willow!\p"
	.string "We'll have your Ampure back before you\n"
	.string "know it!$"

WillowsLab_YourePokemonTrainersNow_Text_5:
# 554 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Let's go, {PLAYER}!\p"
	.string "We owe the professor, so let's go search\n"
	.string "for her Ampure!\p"
	.string "Come on, race ya there!$"

WillowsLab_AmpureRescued_Text_0:
# 572 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: We did it professor!\n"
	.string "{PLAYER} found Ampure and I caught\l"
	.string "it!$"

WillowsLab_AmpureRescued_Text_1:
# 573 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ohohohoho!\n"
	.string "I'm glad.\p"
	.string "It would have taken me ages to find\n"
	.string "Ampure by myself.\p"
	.string "Thank you very much, you two.$"

WillowsLab_AmpureRescued_Text_2:
# 578 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: I think I have the perfect way\n"
	.string "to reward you.\p"
	.string "Each of you can take one of these.$"

WillowsLab_AmpureRescued_Text_3:
# 586 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: This is one of those Pokédex\n"
	.string "things, right?$"

WillowsLab_AmpureRescued_Text_4:
# 594 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Did you hear that, {PLAYER}!?\pWe're finally going to be able\nto find Simon.$"

WillowsLab_AmpureRescued_Text_5:
# 598 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Who is this Simon?$"

WillowsLab_AmpureRescued_Text_6:
# 599 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: … … …\nHe was our friend…\p…and he was my brother.$"

WillowsLab_AfterFlashback_Text_0:
# 612 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: By the time either of us looked\n"
	.string "back, he was gone…\p"
	.string "We never saw him again.$"

WillowsLab_AfterFlashback_Text_1:
# 615 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: I… I'm so sorry.$"

WillowsLab_AfterFlashback_Text_2:
# 618 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: That's why we have to get to\n"
	.string "the next town, Professor!\p"
	.string "I just know Simon is out there\n"
	.string "somewhere, and he could still be in\l"
	.string "danger.$"

WillowsLab_ReceivedPokedex_Text_0:
# 628 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "{PLAYER} received the Pokédex!$"

WillowsLab_Departure_Text_0:
# 679 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: I can't wait until we get to\n"
	.string "land!$"

WillowsLab_Departure_Text_1:
# 681 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ohohoho!\p"
	.string "That's good, Bradley, because we've\n"
	.string "arrived!$"

WillowsLab_Departure_Text_2:
# 692 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Come on!\p"
	.string "It's time for you to take your first\n"
	.string "step in a new place!$"

WillowsLab_Departure_Text_3:
# 703 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Go ahead!$"

WillowsLab_WillowIntroduction::
# 721 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Ohoho, so you're {PLAYER}!\n"
	.string "Bradley talks about you quite a lot.\p"
	.string "You can call me Prof. Willow.\p"
	.string "I'm here studying Pokémon habitats in\n"
	.string "the Neo Bay area.\p"
	.string "Research is what I do best.\p"
	.string "I'm not too good at handling Pokémon\n"
	.string "themselves, unfortunately…$"

WillowsLab_BradleyIsAnAssistant::
# 729 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: I never told you this, but I\n"
	.string "have been helping PROF. WILLOW with her\l"
	.string "research.\p"
	.string "Collecting samples, taking\n"
	.string "measurements, all that science-y\l"
	.string "stuff.\p"
	.string "It's hard work, but in return she\n"
	.string "promised me a rare Pokémon!$"

WillowsLab_WillowCantJustGivePokemon::
# 737 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Even so, I can't just hand a\n"
	.string "Pokémon to anybody!\p"
	.string "Owning a Pokémon comes with many\n"
	.string "responsibilities.\p"
	.string "Bradley, you've already shown me that\n"
	.string "you're capable of becoming a Pokémon\l"
	.string "Trainer.\p"
	.string "I only met {PLAYER} today!$"

WillowsLab_BradleyIsReallySure::
# 747 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: {PLAYER} has wanted to be a\n"
	.string "Pokémon Trainer their entire life!\p"
	.string "Nobody is more passionate and\n"
	.string "responsible than them, and they'd\l"
	.string "definitely make a better Pokémon\l"
	.string "Trainer than I would!\p"
	.string "Bradley: Please, professor.\n"
	.string "Trust me on this one!$"

WillowsLab_WillowConcedes::
# 756 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "… … … …\n"
	.string "… … … …\l"
	.string "… … … …\l"
	.string "… … … …\p"
	.string "… Ohohohohoho! I see, I see.\n"
	.string "So that's how it is!\p"
	.string "You're a stubborn one, Bradley,\n"
	.string "but I like that.\p"
	.string "{PLAYER}, you're lucky to have such a\n"
	.string "good friend.\p"
	.string "I must say, I'm a bit envious myself!$"

WillowsLab_DontBeGreedyText::
# 769 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "You already chose a Pokémon!\n"
	.string "Better not be greedy.$"

WillowsLab_DoYouWantVenap::
# 775 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Prof. Willow: The Grass Pokémon Venap\n"
	.string "caught your eye?\p"
	.string "It might be difficult to raise…\n"
	.string "but you won't regret it!\p"
	.string "Is Venap your final decision?$"

WillowsLab_DoYouWantCelsinge::
# 783 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Prof. Willow: The Fire Pokémon Celsinge\n"
	.string "is your pick?\p"
	.string "You can't go wrong there!\n"
	.string "You'll be set up for success!\p"
	.string "Do you want to choose Celsinge?$"

WillowsLab_DoYouWantEchoise::
# 791 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Prof. Willow: The Water Pokémon Echoise\n"
	.string "is your favorite?\p"
	.string "Excellent choice!\n"
	.string "Isn't it just the cutest?\p"
	.string "Are you certain you want Echoise?$"

WillowsLab_AmpureMissionDescription::
# 799 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Very well.\p"
	.string "As you saw earlier, my Ampure has\n"
	.string "escaped…\p"
	.string "…again.\p"
	.string "I'd go find him myself, but with my luck,\n"
	.string "it would take a whole day for me to\l"
	.string "catch him.\p"
	.string "That's where you two come in!\p"
	.string "Please find my Ampure and bring him\n"
	.string "back to me.\p"
	.string "He couldn't have wandered off too far,\n"
	.string "so try searching between here and\l"
	.string "Sunset Village.\p"
	.string "As long as you have your Pokémon, you'll\n"
	.string "be safe in the tall grass.\p"
	.string "I entrust you two with bringing Ampure\n"
	.string "back safely!$"

WillowsLab_PokedexDescription::
# 814 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: Yes, Bradley.\p"
	.string "In fact, I'm pretty sure that they're\n"
	.string "the only ones to ever come to Caldera\l"
	.string "or Kirant.\p"
	.string "Prof. Oak of the Kanto region gave\n"
	.string "these to me when he heard I was coming\l"
	.string "here.\p"
	.string "But my research has prevented me from\n"
	.string "filling them properly.\p"
	.string "I think that you two will be perfect for\n"
	.string "the job.\p"
	.string "Your Pokémon are already quite fond of\n"
	.string "you.\p"
	.string "You should have no problem catching\n"
	.string "and trading Pokémon beyond this town!$"

WillowsLab_SayGoodbyeToMom::
# 829 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: I've never seen such\n"
	.string "determination as I see right now in\l"
	.string "both of you.\p"
	.string "I'd be more than happy to take you\n"
	.string "across the water to Sunset Village.\p"
	.string "But before we leave, you must promise\n"
	.string "me that you will say goodbye to your\l"
	.string "families.$"

WillowsLab_HowWasYourMom::
# 840 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: How was your mom?\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "Yeah…\p"
	.string "Mine was pretty sad too, but she's sure\n"
	.string "we'll be fine.\p"
	.string "Who knows?\p"
	.string "Maybe we'll return as Pokémon Champions\n"
	.string "and our parents will never have to worry\l"
	.string "about us again!$"

WillowsLab_NotABadIdea::
# 852 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: That isn't a bad idea, Bradley.\p"
	.string "{PLAYER}, have you ever thought of\n"
	.string "taking the Pokémon League challenge?\p"
	.string "Not only will your Pokémon grow along\n"
	.string "the way, it will help you complete your\l"
	.string "Pokédex and take you all around the\l"
	.string "regions in search of your friend.\p"
	.string "You could achive all of your goals at\n"
	.string "the same time.$"

WillowsLab_DescribePokemonLeague::
# 863 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Bradley: Yeah, {PLAYER}!\n"
	.string "That will be perfect!\p"
	.string "Here, I'll explain how the League works\n"
	.string "in our region.\p"
	.string "Unlike other places, our League has 12\n"
	.string "gyms!\p"
	.string "Six gyms here in Caldera, and six in\n"
	.string "Kirant.\p"
	.string "If you defeat all 12 and collect the\n"
	.string "badges they give you, you'll be allowed\l"
	.string "into Triumph Spire, where the Elite Four\l"
	.string "await…\p"
	.string "But we have a LONG way to go before\n"
	.string "that happens!$"

WillowsLab_FroyLivesAway::
# 877 "data/maps/NeoBay_ProfessorWillowsLab/scripts.pory"
	.string "Willow: I'm only taking you as far as\n"
	.string "Sunset Village.\p"
	.string "The first gym leader, Froy, lives in\n"
	.string "Cranewing City.\p"
	.string "That's another two towns over.$"
