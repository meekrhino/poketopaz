SunsetVillage_MapScripts::
# 33 "data/maps/SunsetVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SunsetVillage_OnTransition
# 34 "data/maps/SunsetVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, SunsetVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
# 37 "data/maps/SunsetVillage/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SunsetVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SunsetVillage_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 35 "data/maps/SunsetVillage/scripts.pory"
	map_script_2 VAR_SUNSET_VILLAGE_STATE, 0, SunsetVillage_OnWarpFromLab
	.2byte 0

SunsetVillage_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 38 "data/maps/SunsetVillage/scripts.pory"
	map_script_2 VAR_SUNSET_VILLAGE_STATE, 0, SunsetVillage_ArriveByBoat
	.2byte 0


SunsetVillage_WillowAndBradleyTrigger::
# 46 "data/maps/SunsetVillage/scripts.pory"
	lockall
# 47 "data/maps/SunsetVillage/scripts.pory"
	setvar VAR_NEOBAY_STATE, 8
# 48 "data/maps/SunsetVillage/scripts.pory"
	call SunsetVillage_IntroAfterArriveFromEast
# 49 "data/maps/SunsetVillage/scripts.pory"
	call SunsetVillage_BradleyLooksAroundEastVer
# 50 "data/maps/SunsetVillage/scripts.pory"
	setflag FLAG_HIDE_SUNSET_VILLAGE_WILLOW
# 51 "data/maps/SunsetVillage/scripts.pory"
	setvar VAR_SUNSET_VILLAGE_STATE, 2
# 52 "data/maps/SunsetVillage/scripts.pory"
	removeobject 2
# 53 "data/maps/SunsetVillage/scripts.pory"
	removeobject 1
# 55 "data/maps/SunsetVillage/scripts.pory"
	releaseall
	end


SunsetVillage_TownSign::
# 60 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_Text_TownSign, MSGBOX_SIGN
	end


SunsetVillage_DockSign::
# 65 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_DockSign_Text_0, MSGBOX_SIGN
	end


SunsetVillage_OtherMailbox::
# 70 "data/maps/SunsetVillage/scripts.pory"
	msgbox Text_OtherMailbox, MSGBOX_SIGN
	end


SunsetVillage_EmptyMailbox::
# 75 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_EmptyMailbox_Text_0, MSGBOX_SIGN
	end


SunsetVillage_OldWoman::
# 80 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_OldWoman_Text_0, MSGBOX_NPC
	end


SunsetVillage_OldWomanMailbox::
# 85 "data/maps/SunsetVillage/scripts.pory"
	lock
# 86 "data/maps/SunsetVillage/scripts.pory"
	faceplayer
# 87 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_OldWomanMailbox_Text_0
# 88 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 89 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 90 "data/maps/SunsetVillage/scripts.pory"
	applymovement 4, Common_Movement_FaceOriginalDirection
	end


SunsetVillage_OldMan::
# 95 "data/maps/SunsetVillage/scripts.pory"
	goto_if_set FLAG_SOLVED_OLD_MAN, SunsetVillage_OldMan_2
# 104 "data/maps/SunsetVillage/scripts.pory"
	quest_check_started QUEST_HIDDEN_ITEMS
# 105 "data/maps/SunsetVillage/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_ne SunsetVillage_OldMan_8
# 114 "data/maps/SunsetVillage/scripts.pory"
	lock
# 115 "data/maps/SunsetVillage/scripts.pory"
	faceplayer
# 116 "data/maps/SunsetVillage/scripts.pory"
	playse SE_PIN
# 117 "data/maps/SunsetVillage/scripts.pory"
	applymovement 5, mExclamationPoint
# 118 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 119 "data/maps/SunsetVillage/scripts.pory"
	delay 48
# 120 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_OldMan_Text_3
# 121 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 122 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 123 "data/maps/SunsetVillage/scripts.pory"
	delay 60
# 124 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_OldMan_Text_4
# 125 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 126 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 127 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerStepsBack
# 128 "data/maps/SunsetVillage/scripts.pory"
	delay 32
# 129 "data/maps/SunsetVillage/scripts.pory"
	applymovement 5, mOldManStepsAside
# 130 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 131 "data/maps/SunsetVillage/scripts.pory"
	setflag FLAG_SOLVED_OLD_MAN
# 132 "data/maps/SunsetVillage/scripts.pory"
	copyobjectxytoperm 5
# 133 "data/maps/SunsetVillage/scripts.pory"
	setobjectmovementtype 5, MOVEMENT_TYPE_FACE_DOWN
# 134 "data/maps/SunsetVillage/scripts.pory"
	quest_finish QUEST_HIDDEN_ITEMS
# 135 "data/maps/SunsetVillage/scripts.pory"
	release
SunsetVillage_OldMan_1:
	end

SunsetVillage_OldMan_2:
# 96 "data/maps/SunsetVillage/scripts.pory"
	goto_if_set FLAG_HIDDEN_ITEM_SUNSET_VILLAGE_PEARL, SunsetVillage_OldMan_5
# 100 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_OldMan_Text_1, MSGBOX_NPC
	goto SunsetVillage_OldMan_1

SunsetVillage_OldMan_5:
# 97 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_OldMan_Text_0, MSGBOX_NPC
	goto SunsetVillage_OldMan_1

SunsetVillage_OldMan_8:
# 106 "data/maps/SunsetVillage/scripts.pory"
	lock
# 107 "data/maps/SunsetVillage/scripts.pory"
	faceplayer
# 108 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_OldMan_Text_2
# 109 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 110 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 111 "data/maps/SunsetVillage/scripts.pory"
	quest_start QUEST_HIDDEN_ITEMS
	goto SunsetVillage_OldMan_1


SunsetVillage_OnTransition:
# 145 "data/maps/SunsetVillage/scripts.pory"
	setflag FLAG_VISITED_SUNSET_VILLAGE
# 146 "data/maps/SunsetVillage/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SunsetVillage_OnWarpFromLab:
# 150 "data/maps/SunsetVillage/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 151 "data/maps/SunsetVillage/scripts.pory"
	special PrintTest
# 153 "data/maps/SunsetVillage/scripts.pory"
	addobject 1
# 154 "data/maps/SunsetVillage/scripts.pory"
	setobjectxy 1, 11, 32
# 155 "data/maps/SunsetVillage/scripts.pory"
	turnobject 1, DIR_SOUTH
# 157 "data/maps/SunsetVillage/scripts.pory"
	addobject 2
# 158 "data/maps/SunsetVillage/scripts.pory"
	setobjectxy 2, 10, 32
# 159 "data/maps/SunsetVillage/scripts.pory"
	turnobject 2, DIR_SOUTH
	return


SunsetVillage_ArriveByBoat:
# 163 "data/maps/SunsetVillage/scripts.pory"
	lockall
# 164 "data/maps/SunsetVillage/scripts.pory"
	setvar VAR_SUNSET_VILLAGE_STATE, 1
# 165 "data/maps/SunsetVillage/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 167 "data/maps/SunsetVillage/scripts.pory"
	compare VAR_TEMP_0, 11
	goto_if_eq SunsetVillage_ArriveByBoat_2
SunsetVillage_ArriveByBoat_1:
# 176 "data/maps/SunsetVillage/scripts.pory"
	releaseall
	end

SunsetVillage_ArriveByBoat_2:
# 168 "data/maps/SunsetVillage/scripts.pory"
	call SunsetVillage_IntroAfterExitLab
# 169 "data/maps/SunsetVillage/scripts.pory"
	call SunsetVillage_BradleyLooksAroundLabVer
# 170 "data/maps/SunsetVillage/scripts.pory"
	setflag FLAG_HIDE_SUNSET_VILLAGE_WILLOW
# 171 "data/maps/SunsetVillage/scripts.pory"
	setvar VAR_SUNSET_VILLAGE_STATE, 2
# 172 "data/maps/SunsetVillage/scripts.pory"
	removeobject 2
# 173 "data/maps/SunsetVillage/scripts.pory"
	removeobject 1
	goto SunsetVillage_ArriveByBoat_1


SunsetVillage_IntroAfterExitLab:
# 181 "data/maps/SunsetVillage/scripts.pory"
	delay 30
# 182 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_IntroAfterExitLab_Text_0
# 183 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 184 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 185 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mWillowWalksOffOfDock
# 186 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyWalksOffOfDock
# 187 "data/maps/SunsetVillage/scripts.pory"
	delay 30
# 188 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerWalksOffOfDock
# 189 "data/maps/SunsetVillage/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return


SunsetVillage_IntroAfterArriveFromEast:
# 194 "data/maps/SunsetVillage/scripts.pory"
	delay 60
# 195 "data/maps/SunsetVillage/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 196 "data/maps/SunsetVillage/scripts.pory"
	switch VAR_TEMP_1
# 197 "data/maps/SunsetVillage/scripts.pory"
	case 26, SunsetVillage_IntroAfterArriveFromEast_3
# 199 "data/maps/SunsetVillage/scripts.pory"
	case 27, SunsetVillage_IntroAfterArriveFromEast_4
# 201 "data/maps/SunsetVillage/scripts.pory"
	case 28, SunsetVillage_IntroAfterArriveFromEast_5
# 203 "data/maps/SunsetVillage/scripts.pory"
	case 29, SunsetVillage_IntroAfterArriveFromEast_6
# 205 "data/maps/SunsetVillage/scripts.pory"
	case 30, SunsetVillage_IntroAfterArriveFromEast_7
SunsetVillage_IntroAfterArriveFromEast_1:
# 208 "data/maps/SunsetVillage/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
	return

SunsetVillage_IntroAfterArriveFromEast_3:
# 198 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast1
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_4:
# 200 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast2
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_5:
# 202 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast3
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_6:
# 204 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast4
	goto SunsetVillage_IntroAfterArriveFromEast_1

SunsetVillage_IntroAfterArriveFromEast_7:
# 206 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersFromEast5
	goto SunsetVillage_IntroAfterArriveFromEast_1


SunsetVillage_BradleyLooksAroundLabVer:
# 213 "data/maps/SunsetVillage/scripts.pory"
	delay 30
# 214 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_0
# 215 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 216 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 217 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyWalksOut
# 218 "data/maps/SunsetVillage/scripts.pory"
	delay 32
# 219 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
# 220 "data/maps/SunsetVillage/scripts.pory"
	delay 16
# 221 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mFaceRight
# 222 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 223 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_1
# 224 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 225 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 226 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyLooksAround
# 227 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 2
# 228 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_2
# 229 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 230 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_HeadToSoftwind
# 231 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 232 "data/maps/SunsetVillage/scripts.pory"
	playse SE_PIN
# 233 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mExclamationPoint
# 234 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 235 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_3
# 236 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 237 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 238 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyPanics
# 239 "data/maps/SunsetVillage/scripts.pory"
	turnobject 1, DIR_NORTH
# 240 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 241 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_4
# 242 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 243 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_5
# 244 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 245 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 246 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyRunsToLab
# 247 "data/maps/SunsetVillage/scripts.pory"
	delay 15
# 248 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mFaceLeft
# 249 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 250 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 2
# 251 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mWalkLeftAndDown
# 252 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
# 253 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 1
# 254 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_YouGoOnAhead
# 255 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 256 "data/maps/SunsetVillage/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 257 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 258 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 259 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mWillowWalksToLab
# 260 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 1
# 261 "data/maps/SunsetVillage/scripts.pory"
	subquest_finish SUB_QUEST_SAY_GOODBYE
# 262 "data/maps/SunsetVillage/scripts.pory"
	quest_finish QUEST_GETTING_STARTED
# 263 "data/maps/SunsetVillage/scripts.pory"
	quest_start QUEST_TRIUMPH_SPIRE
	return


SunsetVillage_BradleyLooksAroundEastVer:
# 268 "data/maps/SunsetVillage/scripts.pory"
	playse SE_PIN
# 269 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mStartledWalkRight
# 270 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mWalkRight
# 271 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 2
# 272 "data/maps/SunsetVillage/scripts.pory"
	delay 30
# 273 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundEastVer_Text_0
# 274 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 275 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 276 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyFidgetsRight
# 277 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 2
# 278 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyRecaps
# 279 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 280 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 281 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyWalksOutEastVer
# 282 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 2
# 283 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundEastVer_Text_1
# 284 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 285 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 286 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyLooksAroundEastVer
# 287 "data/maps/SunsetVillage/scripts.pory"
	delay 30
# 288 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mFaceUp
# 289 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
# 290 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 2
# 291 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundEastVer_Text_2
# 292 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 293 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_HeadToSoftwind
# 294 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 295 "data/maps/SunsetVillage/scripts.pory"
	playse SE_PIN
# 296 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mExclamationPoint
# 297 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 298 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_3
# 299 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 300 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 301 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyPanicsEastVer
# 302 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 303 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_4
# 304 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 305 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_BradleyLooksAroundLabVer_Text_5
# 306 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 307 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 308 "data/maps/SunsetVillage/scripts.pory"
	applymovement 2, mBradleyRunsToLabEastVer
# 309 "data/maps/SunsetVillage/scripts.pory"
	delay 30
# 310 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mFaceLeft
# 311 "data/maps/SunsetVillage/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 312 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 2
# 313 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mWalkRight
# 314 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 0
# 315 "data/maps/SunsetVillage/scripts.pory"
	delay 15
# 316 "data/maps/SunsetVillage/scripts.pory"
	msgbox SunsetVillage_YouGoOnAhead
# 317 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 318 "data/maps/SunsetVillage/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 319 "data/maps/SunsetVillage/scripts.pory"
	waitmessage
# 320 "data/maps/SunsetVillage/scripts.pory"
	closemessage
# 321 "data/maps/SunsetVillage/scripts.pory"
	applymovement 1, mWillowWalksToLabEastVer
# 322 "data/maps/SunsetVillage/scripts.pory"
	waitmovement 1
# 323 "data/maps/SunsetVillage/scripts.pory"
	quest_finish QUEST_GETTING_STARTED
# 324 "data/maps/SunsetVillage/scripts.pory"
	quest_start QUEST_TRIUMPH_SPIRE
	return


# 375 "data/maps/SunsetVillage/scripts.pory"
mWillowWalksOffOfDock:
# 376 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 376 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 376 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 376 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 376 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 376 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 377 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 377 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 378 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_down
	step_end

# 381 "data/maps/SunsetVillage/scripts.pory"
mBradleyWalksOffOfDock:
# 382 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 383 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 383 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 383 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 383 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 383 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 383 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 384 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 385 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_down
	step_end

# 388 "data/maps/SunsetVillage/scripts.pory"
mPlayerWalksOffOfDock:
# 389 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 389 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 389 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 389 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 389 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 389 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 390 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 391 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_up
	step_end

# 394 "data/maps/SunsetVillage/scripts.pory"
mPlayerEntersFromEast1:
# 395 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 395 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 395 "data/maps/SunsetVillage/scripts.pory"
	walk_left
	step_end

# 398 "data/maps/SunsetVillage/scripts.pory"
mPlayerEntersFromEast2:
# 399 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 400 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 401 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 401 "data/maps/SunsetVillage/scripts.pory"
	walk_left
	step_end

# 404 "data/maps/SunsetVillage/scripts.pory"
mPlayerEntersFromEast3:
# 405 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 406 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 406 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 407 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 407 "data/maps/SunsetVillage/scripts.pory"
	walk_left
	step_end

# 410 "data/maps/SunsetVillage/scripts.pory"
mPlayerEntersFromEast4:
# 411 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 411 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 412 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 413 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 414 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 414 "data/maps/SunsetVillage/scripts.pory"
	walk_left
	step_end

# 417 "data/maps/SunsetVillage/scripts.pory"
mPlayerEntersFromEast5:
# 418 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 418 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 419 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 420 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 420 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 421 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 421 "data/maps/SunsetVillage/scripts.pory"
	walk_left
	step_end

# 424 "data/maps/SunsetVillage/scripts.pory"
mBradleyWalksOut:
# 425 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 426 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 426 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 426 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 426 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 426 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 427 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 427 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 428 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_left
# 428 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_left
# 429 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_left
	step_end

# 432 "data/maps/SunsetVillage/scripts.pory"
mBradleyLooksAround:
# 433 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_right
# 434 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 434 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 434 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 435 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_up
# 436 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 436 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 436 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 437 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_right
# 438 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 438 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 438 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 439 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_left
	step_end

# 442 "data/maps/SunsetVillage/scripts.pory"
mBradleyPanics:
# 443 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_left
# 443 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_left
# 443 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_left
# 444 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_right
# 445 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 446 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_up
# 447 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 448 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_down
# 449 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 450 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_left
# 451 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 451 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 451 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 452 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 452 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 452 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
	step_end

# 455 "data/maps/SunsetVillage/scripts.pory"
mBradleyRunsToLab:
# 456 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 456 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 456 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 457 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 458 "data/maps/SunsetVillage/scripts.pory"
	set_invisible
	step_end

# 461 "data/maps/SunsetVillage/scripts.pory"
mWillowWalksToLab:
# 462 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 463 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 463 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 463 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 463 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 463 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 463 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 463 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 464 "data/maps/SunsetVillage/scripts.pory"
	set_invisible
	step_end

# 467 "data/maps/SunsetVillage/scripts.pory"
mBradleyWalksOutEastVer:
# 468 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 469 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 469 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 470 "data/maps/SunsetVillage/scripts.pory"
	walk_right
# 471 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 471 "data/maps/SunsetVillage/scripts.pory"
	walk_up
# 472 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_down
# 472 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_down
# 473 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_down
	step_end

# 476 "data/maps/SunsetVillage/scripts.pory"
mBradleyLooksAroundEastVer:
# 477 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_right
# 478 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 478 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 478 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 479 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_up
# 480 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 480 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 480 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 481 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_left
# 482 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 482 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 482 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 483 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_down
	step_end

# 486 "data/maps/SunsetVillage/scripts.pory"
mBradleyPanicsEastVer:
# 487 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_down
# 487 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_down
# 487 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_fast_down
# 488 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_right
# 489 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 490 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_left
# 491 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 492 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_up
# 493 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 494 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_down
# 495 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 495 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 495 "data/maps/SunsetVillage/scripts.pory"
	delay_16
# 496 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 496 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 497 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 497 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
	step_end

# 500 "data/maps/SunsetVillage/scripts.pory"
mBradleyRunsToLabEastVer:
# 501 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 502 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 502 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 503 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 503 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 503 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 503 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 503 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_left
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 504 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_down
# 505 "data/maps/SunsetVillage/scripts.pory"
	set_invisible
	step_end

# 508 "data/maps/SunsetVillage/scripts.pory"
mWillowWalksToLabEastVer:
# 509 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 509 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 509 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 509 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 509 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 509 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 510 "data/maps/SunsetVillage/scripts.pory"
	walk_down
# 511 "data/maps/SunsetVillage/scripts.pory"
	set_invisible
	step_end

# 514 "data/maps/SunsetVillage/scripts.pory"
mWalkRight:
# 515 "data/maps/SunsetVillage/scripts.pory"
	walk_right
	step_end

# 518 "data/maps/SunsetVillage/scripts.pory"
mWalkLeftAndDown:
# 519 "data/maps/SunsetVillage/scripts.pory"
	walk_left
# 520 "data/maps/SunsetVillage/scripts.pory"
	walk_down
	step_end

# 523 "data/maps/SunsetVillage/scripts.pory"
mStartledWalkRight:
# 524 "data/maps/SunsetVillage/scripts.pory"
	emote_exclamation_mark
# 525 "data/maps/SunsetVillage/scripts.pory"
	walk_right
	step_end

# 528 "data/maps/SunsetVillage/scripts.pory"
mPlayerStepsBack:
# 529 "data/maps/SunsetVillage/scripts.pory"
	face_left
# 530 "data/maps/SunsetVillage/scripts.pory"
	lock_facing_direction
# 531 "data/maps/SunsetVillage/scripts.pory"
	walk_fast_right
# 532 "data/maps/SunsetVillage/scripts.pory"
	unlock_facing_direction
	step_end

# 535 "data/maps/SunsetVillage/scripts.pory"
mOldManStepsAside:
# 536 "data/maps/SunsetVillage/scripts.pory"
	walk_slow_right
# 537 "data/maps/SunsetVillage/scripts.pory"
	walk_slow_up
# 538 "data/maps/SunsetVillage/scripts.pory"
	walk_in_place_slow_down
	step_end

SunsetVillage_DockSign_Text_0:
# 65 "data/maps/SunsetVillage/scripts.pory"
	.string "“Sunset Pier”$"

SunsetVillage_EmptyMailbox_Text_0:
# 75 "data/maps/SunsetVillage/scripts.pory"
	.string "The mailbox is open.\pThere's nothing inside…$"

SunsetVillage_OldWoman_Text_0:
# 80 "data/maps/SunsetVillage/scripts.pory"
	.string "Sunset Village is a sleepy place.\n"
	.string "Not a lot of young folks left here.\p"
	.string "I guess a small town on the edge of\n"
	.string "nowhere doesn't drawn many visitors.$"

SunsetVillage_OldWomanMailbox_Text_0:
# 87 "data/maps/SunsetVillage/scripts.pory"
	.string "I'm expecting a letter from my\n"
	.string "granddaughter!\p"
	.string "It's the highlight of my week.\n"
	.string "Make sure you visit or write home often!$"

SunsetVillage_OldMan_Text_0:
# 97 "data/maps/SunsetVillage/scripts.pory"
	.string "Well done!\pYou should sell that.\nIt's worth quite a bit.$"

SunsetVillage_OldMan_Text_1:
# 100 "data/maps/SunsetVillage/scripts.pory"
	.string "Go ahead!\pIt's hidden on the ground,\njust there.$"

SunsetVillage_OldMan_Text_2:
# 108 "data/maps/SunsetVillage/scripts.pory"
	.string "Fuhuhu! I've hidden an item somewhere\n"
	.string "in town!\p"
	.string "If you can find it, it's yours!\n"
	.string "You won't be able to just see it, though.\p"
	.string "You'll have to search carefully!$"

SunsetVillage_OldMan_Text_3:
# 120 "data/maps/SunsetVillage/scripts.pory"
	.string "Ah! Clever!\p"
	.string "You're right, of course!\n"
	.string "It's right behind me!$"

SunsetVillage_OldMan_Text_4:
# 124 "data/maps/SunsetVillage/scripts.pory"
	.string "Step aside, please.$"

SunsetVillage_IntroAfterExitLab_Text_0:
# 182 "data/maps/SunsetVillage/scripts.pory"
	.string "Willow: Follow me!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_0:
# 214 "data/maps/SunsetVillage/scripts.pory"
	.string "Willow: Well, here we are!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_1:
# 223 "data/maps/SunsetVillage/scripts.pory"
	.string "Bradley: Finally!\nI can't believe we've left Neo Bay!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_2:
# 228 "data/maps/SunsetVillage/scripts.pory"
	.string "Bradley: So this is Sunset Village, huh?$"

SunsetVillage_BradleyLooksAroundLabVer_Text_3:
# 235 "data/maps/SunsetVillage/scripts.pory"
	.string "Bradley: WAIT!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_4:
# 241 "data/maps/SunsetVillage/scripts.pory"
	.string "Bradley: I left my bag at home!\nIt has my Pokédex in it and everything!$"

SunsetVillage_BradleyLooksAroundLabVer_Text_5:
# 243 "data/maps/SunsetVillage/scripts.pory"
	.string "Willow: Ohoho, don't worry Bradley. We\n"
	.string "can go back for them now.$"

SunsetVillage_BradleyLooksAroundEastVer_Text_0:
# 273 "data/maps/SunsetVillage/scripts.pory"
	.string "Willow: Ah, {PLAYER}!\n"
	.string "I'm glad to see you made it.\p"
	.string "You must have walked along Route 201.\p"
	.string "You missed quite a discussion on the\n"
	.string "way!$"

SunsetVillage_BradleyLooksAroundEastVer_Text_1:
# 283 "data/maps/SunsetVillage/scripts.pory"
	.string "Bradley: Look around!\nI can't believe we've left Neo Bay!$"

SunsetVillage_BradleyLooksAroundEastVer_Text_2:
# 291 "data/maps/SunsetVillage/scripts.pory"
	.string "Bradley: This is Sunset Village!$"

SunsetVillage_Text_TownSign::
# 331 "data/maps/SunsetVillage/scripts.pory"
	.string "Sunset Village\n"
	.string "“Where the sun sets on one adventure,\l"
	.string "and rises on another.”$"

SunsetVillage_HeadToSoftwind::
# 338 "data/maps/SunsetVillage/scripts.pory"
	.string "Willow: That's correct.\n"
	.string "If you head north from here, you should\l"
	.string "reach Softwind City, where one of the\l"
	.string "gyms of the Pokémon League is.\p"
	.string "Therma is the leader there, but she also\n"
	.string "has a huge library.\p"
	.string "That's where I was planning to start my\n"
	.string "research on-$"

SunsetVillage_YouGoOnAhead::
# 348 "data/maps/SunsetVillage/scripts.pory"
	.string "Willow: {PLAYER}, why don't you go on\n"
	.string "ahead?\p"
	.string "Bradley and I will return to Neo Bay,\n"
	.string "then meet you at the library in\l"
	.string "Softwind.\p"
	.string "You can battle Therma and get stronger\n"
	.string "than Bradley!\p"
	.string "Then he'll have to catch up to you, and\n"
	.string "rivalry will make you both stronger.\p"
	.string "Oh, listen to me go on.\p"
	.string "Well, you had better get a move on.\p"
	.string "Oh!\n"
	.string "And take these!\p"
	.string "See you soon!$"

SunsetVillage_BradleyRecaps::
# 360 "data/maps/SunsetVillage/scripts.pory"
	.string "Bradley: Yeah you did!\p"
	.string "I decided you and I are going to take on\n"
	.string "the Pokémon League challenge!\p"
	.string "We'll travel all over and beat all 12\n"
	.string "gyms, even the ones on Kirant!\p"
	.string "If we do that, we'll definitely find\n"
	.string "Simon along the way!\p"
	.string "Then all three of us can travel to the\n"
	.string "Triumph Spire and take on the Elite\l"
	.string "Four!\p"
	.string "Isn't my plan amazing!? Anyway…$"
