SoftwindCity_MapScripts::
# 26 "data/maps/SoftwindCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SoftwindCity_OnTransition
# 27 "data/maps/SoftwindCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SoftwindCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

SoftwindCity_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 28 "data/maps/SoftwindCity/scripts.pory"
	map_script_2 VAR_SOFTWIND_CITY_STATE, 5, SoftwindCity_AfterTherma
	.2byte 0


SoftwindCity_TownSign::
# 36 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_TownSign, MSGBOX_SIGN
	end


SoftwindCity_GymSign::
# 41 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_GymSign, MSGBOX_SIGN
	end


SoftwindCity_MoltresSign::
# 46 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_TributeMoltres, MSGBOX_SIGN
	end


SoftwindCity_ArticunoSign::
# 51 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_TributeArticuno, MSGBOX_SIGN
	end


SoftwindCity_ZapdosSign::
# 56 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_TributeZapdos, MSGBOX_SIGN
	end


SoftwindCity_ElderGuard::
# 61 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_ElderGuard_Text_0, MSGBOX_NPC
	end


SoftwindCity_WomanInFlowers::
# 66 "data/maps/SoftwindCity/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 67 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_WomanInFlowers_2
SoftwindCity_WomanInFlowers_1:
# 74 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_WomanInFlowers_Text_1, MSGBOX_NPC
	end

SoftwindCity_WomanInFlowers_2:
# 68 "data/maps/SoftwindCity/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 69 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_WomanInFlowers_4
	goto SoftwindCity_WomanInFlowers_1

SoftwindCity_WomanInFlowers_4:
# 70 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_WomanInFlowers_Text_0, MSGBOX_NPC
	end


SoftwindCity_GirlHiding::
# 79 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_GirlHiding_Text_0, MSGBOX_NPC
	end


SoftwindCity_GuyInFrontOfGym::
# 84 "data/maps/SoftwindCity/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 85 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_GuyInFrontOfGym_2
SoftwindCity_GuyInFrontOfGym_1:
# 92 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_GuyInFrontOfGym_Text_1, MSGBOX_NPC
	end

SoftwindCity_GuyInFrontOfGym_2:
# 86 "data/maps/SoftwindCity/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 87 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_GuyInFrontOfGym_4
	goto SoftwindCity_GuyInFrontOfGym_1

SoftwindCity_GuyInFrontOfGym_4:
# 88 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_GuyInFrontOfGym_Text_0, MSGBOX_NPC
	end


SoftwindCity_BaldingMan::
# 97 "data/maps/SoftwindCity/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 98 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_BaldingMan_2
SoftwindCity_BaldingMan_1:
# 105 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_BaldingMan_Text_1, MSGBOX_NPC
	end

SoftwindCity_BaldingMan_2:
# 99 "data/maps/SoftwindCity/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 100 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_BaldingMan_4
	goto SoftwindCity_BaldingMan_1

SoftwindCity_BaldingMan_4:
# 101 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_BaldingMan_Text_0, MSGBOX_NPC
	end


SoftwindCity_TriggerAlisaIntro::
# 110 "data/maps/SoftwindCity/scripts.pory"
	lockall
# 111 "data/maps/SoftwindCity/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 112 "data/maps/SoftwindCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 113 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_TEMP_0
# 114 "data/maps/SoftwindCity/scripts.pory"
	case 18, SoftwindCity_TriggerAlisaIntro_3
# 116 "data/maps/SoftwindCity/scripts.pory"
	case 16, SoftwindCity_TriggerAlisaIntro_4
# 118 "data/maps/SoftwindCity/scripts.pory"
	case 15, SoftwindCity_TriggerAlisaIntro_5
# 120 "data/maps/SoftwindCity/scripts.pory"
	case 14, SoftwindCity_TriggerAlisaIntro_6
# 122 "data/maps/SoftwindCity/scripts.pory"
	case 13, SoftwindCity_TriggerAlisaIntro_7
# 124 "data/maps/SoftwindCity/scripts.pory"
	case 12, SoftwindCity_TriggerAlisaIntro_8
SoftwindCity_TriggerAlisaIntro_1:
# 127 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 128 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerAlisaIntro_Text_0
# 129 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 130 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 131 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 132 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 133 "data/maps/SoftwindCity/scripts.pory"
	delay 60
# 134 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerAlisaIntro_Text_1
# 135 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 136 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 137 "data/maps/SoftwindCity/scripts.pory"
	delay 30
# 138 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 139 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 140 "data/maps/SoftwindCity/scripts.pory"
	delay 30
# 141 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_AlisaAboutTherma_1
# 142 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 143 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 144 "data/maps/SoftwindCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/SoftwindCity/scripts.pory"
	message SoftwindCity_Text_ReceivedPokenav
# 146 "data/maps/SoftwindCity/scripts.pory"
	waitfanfare
# 147 "data/maps/SoftwindCity/scripts.pory"
	setflag FLAG_SYS_POKENAV_GET
# 148 "data/maps/SoftwindCity/scripts.pory"
	setflag FLAG_RECEIVED_POKENAV
# 149 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_AlisaAboutTherma_2
# 150 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 151 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 152 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaStartsToLeave
# 153 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 154 "data/maps/SoftwindCity/scripts.pory"
	delay 60
# 155 "data/maps/SoftwindCity/scripts.pory"
	turnobject 9, DIR_SOUTH
# 156 "data/maps/SoftwindCity/scripts.pory"
	delay 30
# 157 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerAlisaIntro_Text_2
# 158 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 159 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 160 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaFinishesLeaving
# 161 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 162 "data/maps/SoftwindCity/scripts.pory"
	setflag FLAG_HIDE_SOFTWIND_CITY_ALISA
# 163 "data/maps/SoftwindCity/scripts.pory"
	setvar VAR_SOFTWIND_CITY_STATE, 1
# 164 "data/maps/SoftwindCity/scripts.pory"
	removeobject 9
# 165 "data/maps/SoftwindCity/scripts.pory"
	releaseall
	end

SoftwindCity_TriggerAlisaIntro_3:
# 115 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaApproaches_1
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_4:
# 117 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaApproaches_2
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_5:
# 119 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaApproaches_3
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_6:
# 121 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaApproaches_4
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_7:
# 123 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaApproaches_5
	goto SoftwindCity_TriggerAlisaIntro_1

SoftwindCity_TriggerAlisaIntro_8:
# 125 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaApproaches_6
	goto SoftwindCity_TriggerAlisaIntro_1


SoftwindCity_TriggerOrion_1::
# 170 "data/maps/SoftwindCity/scripts.pory"
	lockall
# 171 "data/maps/SoftwindCity/scripts.pory"
	special SpawnCameraObject
# 172 "data/maps/SoftwindCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mShiftCameraToRight
# 173 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 174 "data/maps/SoftwindCity/scripts.pory"
	addobject 10
# 175 "data/maps/SoftwindCity/scripts.pory"
	hideobjectat 10, MAP_SOFTWIND_CITY
# 176 "data/maps/SoftwindCity/scripts.pory"
	addobject 11
# 177 "data/maps/SoftwindCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 178 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq SoftwindCity_TriggerOrion_1_2
# 183 "data/maps/SoftwindCity/scripts.pory"
	setobjectxy 10, 45, 36
# 184 "data/maps/SoftwindCity/scripts.pory"
	setobjectxy 11, 45, 36
SoftwindCity_TriggerOrion_1_1:
# 186 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderRunsIntoTown
# 187 "data/maps/SoftwindCity/scripts.pory"
	delay 32
# 188 "data/maps/SoftwindCity/scripts.pory"
	applymovement 10, mRocketFollows
# 189 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 190 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_1_Text_0
# 191 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 192 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 193 "data/maps/SoftwindCity/scripts.pory"
	applymovement 10, mRocketReturnsToForest
# 194 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 195 "data/maps/SoftwindCity/scripts.pory"
	removeobject 10
# 196 "data/maps/SoftwindCity/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mShiftCameraToLeft
# 197 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 198 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_DefenderHopesNotSeen
# 199 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 200 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 201 "data/maps/SoftwindCity/scripts.pory"
	turnobject 11, DIR_WEST
# 202 "data/maps/SoftwindCity/scripts.pory"
	playse SE_PIN
# 203 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mExclamationPoint
# 204 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 205 "data/maps/SoftwindCity/scripts.pory"
	delay 48
# 206 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_TEMP_1
# 207 "data/maps/SoftwindCity/scripts.pory"
	case 34, SoftwindCity_TriggerOrion_1_7
# 209 "data/maps/SoftwindCity/scripts.pory"
	case 35, SoftwindCity_TriggerOrion_1_8
# 211 "data/maps/SoftwindCity/scripts.pory"
	case 36, SoftwindCity_TriggerOrion_1_9
# 213 "data/maps/SoftwindCity/scripts.pory"
	case 37, SoftwindCity_TriggerOrion_1_10
SoftwindCity_TriggerOrion_1_5:
# 216 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 217 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_1_Text_1
# 218 "data/maps/SoftwindCity/scripts.pory"
	waitmessage
# 219 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 220 "data/maps/SoftwindCity/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq SoftwindCity_TriggerOrion_1_12
# 224 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderWalksPastPlayer_1
SoftwindCity_TriggerOrion_1_11:
# 226 "data/maps/SoftwindCity/scripts.pory"
	delay 32
# 227 "data/maps/SoftwindCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 228 "data/maps/SoftwindCity/scripts.pory"
	delay 48
# 229 "data/maps/SoftwindCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 230 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 231 "data/maps/SoftwindCity/scripts.pory"
	removeobject 11
# 232 "data/maps/SoftwindCity/scripts.pory"
	setflag FLAG_HIDE_SOFTWIND_CITY_ROCKET
# 233 "data/maps/SoftwindCity/scripts.pory"
	setflag FLAG_HIDE_SOFTWIND_CITY_ORION
# 234 "data/maps/SoftwindCity/scripts.pory"
	special RemoveCameraObject
# 235 "data/maps/SoftwindCity/scripts.pory"
	setvar VAR_SOFTWIND_CITY_STATE, 2
# 236 "data/maps/SoftwindCity/scripts.pory"
	releaseall
	end

SoftwindCity_TriggerOrion_1_2:
# 179 "data/maps/SoftwindCity/scripts.pory"
	setobjectxy 10, 45, 35
# 180 "data/maps/SoftwindCity/scripts.pory"
	setobjectxy 11, 45, 35
	goto SoftwindCity_TriggerOrion_1_1

SoftwindCity_TriggerOrion_1_7:
# 208 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_1
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_8:
# 210 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_2
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_9:
# 212 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_3
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_10:
# 214 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_3
	goto SoftwindCity_TriggerOrion_1_5

SoftwindCity_TriggerOrion_1_12:
# 221 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderWalksPastPlayer_2
	goto SoftwindCity_TriggerOrion_1_11


SoftwindCity_TriggerOrion_2::
# 241 "data/maps/SoftwindCity/scripts.pory"
	lockall
# 242 "data/maps/SoftwindCity/scripts.pory"
	playse SE_PIN
# 243 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mStartledWalkRight
# 244 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 245 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_DefenderScolds
# 246 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 247 "data/maps/SoftwindCity/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 248 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_TEMP_1
# 249 "data/maps/SoftwindCity/scripts.pory"
	case 34, SoftwindCity_TriggerOrion_2_3
# 251 "data/maps/SoftwindCity/scripts.pory"
	case 35, SoftwindCity_TriggerOrion_2_4
# 253 "data/maps/SoftwindCity/scripts.pory"
	case 36, SoftwindCity_TriggerOrion_2_5
# 255 "data/maps/SoftwindCity/scripts.pory"
	case 37, SoftwindCity_TriggerOrion_2_6
SoftwindCity_TriggerOrion_2_1:
# 258 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 259 "data/maps/SoftwindCity/scripts.pory"
	trainerbattle_no_intro TRAINER_WOLSEY_1, SoftwindCity_Text_WolseyDefeated
# 260 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_2_Text_0
# 261 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_2_Text_1
# 262 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 263 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mFaceLeft
# 264 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWillowApproachesDefender
# 265 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 266 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_2_Text_2
# 267 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 268 "data/maps/SoftwindCity/scripts.pory"
	delay 15
# 269 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mFaceRight
# 270 "data/maps/SoftwindCity/scripts.pory"
	delay 15
# 271 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_WolseyWillPunish
# 272 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 273 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_TEMP_1
# 274 "data/maps/SoftwindCity/scripts.pory"
	case 34, SoftwindCity_TriggerOrion_2_9
# 276 "data/maps/SoftwindCity/scripts.pory"
	case 35, SoftwindCity_TriggerOrion_2_10
# 278 "data/maps/SoftwindCity/scripts.pory"
	case 36, SoftwindCity_TriggerOrion_2_11
# 280 "data/maps/SoftwindCity/scripts.pory"
	case 37, SoftwindCity_TriggerOrion_2_12
SoftwindCity_TriggerOrion_2_7:
# 283 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 284 "data/maps/SoftwindCity/scripts.pory"
	removeobject 11
# 285 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_TEMP_1
# 286 "data/maps/SoftwindCity/scripts.pory"
	case 34, SoftwindCity_TriggerOrion_2_15
# 288 "data/maps/SoftwindCity/scripts.pory"
	case 35, SoftwindCity_TriggerOrion_2_16
# 290 "data/maps/SoftwindCity/scripts.pory"
	case 36, SoftwindCity_TriggerOrion_2_17
# 292 "data/maps/SoftwindCity/scripts.pory"
	case 37, SoftwindCity_TriggerOrion_2_18
SoftwindCity_TriggerOrion_2_13:
# 295 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 296 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_WillowCatchesUp
# 297 "data/maps/SoftwindCity/scripts.pory"
	opendoor 29, 32
# 298 "data/maps/SoftwindCity/scripts.pory"
	waitdooranim
# 299 "data/maps/SoftwindCity/scripts.pory"
	addobject 7
# 300 "data/maps/SoftwindCity/scripts.pory"
	setobjectxy 7, 29, 32
# 301 "data/maps/SoftwindCity/scripts.pory"
	applymovement 7, mWalkDown
# 302 "data/maps/SoftwindCity/scripts.pory"
	closedoor 29, 32
# 303 "data/maps/SoftwindCity/scripts.pory"
	waitdooranim
# 304 "data/maps/SoftwindCity/scripts.pory"
	delay 48
# 305 "data/maps/SoftwindCity/scripts.pory"
	playse SE_PIN
# 306 "data/maps/SoftwindCity/scripts.pory"
	applymovement 7, mExclamationPoint
# 307 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 308 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_2_Text_3
# 309 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 310 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mFaceLeft
# 311 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_TEMP_1
# 312 "data/maps/SoftwindCity/scripts.pory"
	case 34, SoftwindCity_TriggerOrion_2_21
# 314 "data/maps/SoftwindCity/scripts.pory"
	case 35, SoftwindCity_TriggerOrion_2_22
# 316 "data/maps/SoftwindCity/scripts.pory"
	case 36, SoftwindCity_TriggerOrion_2_23
# 318 "data/maps/SoftwindCity/scripts.pory"
	case 37, SoftwindCity_TriggerOrion_2_24
SoftwindCity_TriggerOrion_2_19:
# 321 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 322 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_GymDude
# 323 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_2_Text_4
# 324 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 325 "data/maps/SoftwindCity/scripts.pory"
	applymovement 7, mGymDudeRushesOff
# 326 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 327 "data/maps/SoftwindCity/scripts.pory"
	removeobject 7
# 328 "data/maps/SoftwindCity/scripts.pory"
	setflag FLAG_THERMA_RETURNED
# 329 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mFaceRight
# 330 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_TriggerOrion_2_Text_5
# 332 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 333 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWillowDeparts
# 334 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/SoftwindCity/scripts.pory"
	removeobject 8
# 336 "data/maps/SoftwindCity/scripts.pory"
	setvar VAR_SOFTWIND_CITY_STATE, 4
# 337 "data/maps/SoftwindCity/scripts.pory"
	releaseall
	end

SoftwindCity_TriggerOrion_2_3:
# 250 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_2_1
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_4:
# 252 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_2_2
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_5:
# 254 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_2_3
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_6:
# 256 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderAprroachesPlayer_2_4
	goto SoftwindCity_TriggerOrion_2_1

SoftwindCity_TriggerOrion_2_9:
# 275 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderRunsOff
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_10:
# 277 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderRunsOff2
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_11:
# 279 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderRunsOff
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_12:
# 281 "data/maps/SoftwindCity/scripts.pory"
	applymovement 11, mDefenderRunsOff
	goto SoftwindCity_TriggerOrion_2_7

SoftwindCity_TriggerOrion_2_15:
# 287 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWillowApproachesPlayer1
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_16:
# 289 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWillowApproachesPlayer2
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_17:
# 291 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWillowApproachesPlayer3
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_18:
# 293 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWillowApproachesPlayer4
	goto SoftwindCity_TriggerOrion_2_13

SoftwindCity_TriggerOrion_2_21:
# 313 "data/maps/SoftwindCity/scripts.pory"
	applymovement 7, mGymDudesApproaches1
	goto SoftwindCity_TriggerOrion_2_19

SoftwindCity_TriggerOrion_2_22:
# 315 "data/maps/SoftwindCity/scripts.pory"
	applymovement 7, mGymDudesApproaches2
	goto SoftwindCity_TriggerOrion_2_19

SoftwindCity_TriggerOrion_2_23:
# 317 "data/maps/SoftwindCity/scripts.pory"
	applymovement 7, mGymDudesApproaches3
	goto SoftwindCity_TriggerOrion_2_19

SoftwindCity_TriggerOrion_2_24:
# 319 "data/maps/SoftwindCity/scripts.pory"
	applymovement 7, mGymDudesApproaches4
	goto SoftwindCity_TriggerOrion_2_19


SoftwindCity_WillowWaitingByGym::
# 342 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_WillowWaitingByGym_Text_0, MSGBOX_NPC
	end


SoftwindCity_AlisaWaitingByGym::
# 347 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_AlisaWaitingByGym_Text_0, MSGBOX_NPC
# 348 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_STARTER_MON
# 349 "data/maps/SoftwindCity/scripts.pory"
	case 0, SoftwindCity_AlisaWaitingByGym_3
# 351 "data/maps/SoftwindCity/scripts.pory"
	case 1, SoftwindCity_AlisaWaitingByGym_4
# 353 "data/maps/SoftwindCity/scripts.pory"
	case 2, SoftwindCity_AlisaWaitingByGym_5
SoftwindCity_AlisaWaitingByGym_1:
	end

SoftwindCity_AlisaWaitingByGym_3:
# 350 "data/maps/SoftwindCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALISA_1_VENAP, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AlisaWaitingByGym_1

SoftwindCity_AlisaWaitingByGym_4:
# 352 "data/maps/SoftwindCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALISA_1_CELSINGE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AlisaWaitingByGym_1

SoftwindCity_AlisaWaitingByGym_5:
# 354 "data/maps/SoftwindCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALISA_1_ECHOISE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AlisaWaitingByGym_1


SoftwindCity_OnTransition:
# 363 "data/maps/SoftwindCity/scripts.pory"
	setflag FLAG_VISITED_SOFTWIND_CITY
# 364 "data/maps/SoftwindCity/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
	return


SoftwindCity_AfterTherma:
# 368 "data/maps/SoftwindCity/scripts.pory"
	lock
# 369 "data/maps/SoftwindCity/scripts.pory"
	setvar VAR_SOFTWIND_CITY_STATE, 6
# 370 "data/maps/SoftwindCity/scripts.pory"
	delay 60
# 371 "data/maps/SoftwindCity/scripts.pory"
	addobject 8
# 372 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWillowApproachesAfterTherma
# 373 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 374 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_WillowCongrats
# 375 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 376 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_AfterTherma_Text_0
# 377 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 378 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mFaceLeft
# 379 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 380 "data/maps/SoftwindCity/scripts.pory"
	addobject 9
# 381 "data/maps/SoftwindCity/scripts.pory"
	setobjectxy 9, 21, 32
# 382 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaApproachesAfterTherma
# 383 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 384 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_AfterTherma_Text_1
# 385 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_AfterTherma_Text_2
# 386 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_AlisaCutTheAct
# 387 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mFaceUp
# 388 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 389 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_AfterTherma_Text_3
# 390 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 391 "data/maps/SoftwindCity/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 392 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mWalkRight
# 393 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 394 "data/maps/SoftwindCity/scripts.pory"
	applymovement 8, mFaceLeft
# 395 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 396 "data/maps/SoftwindCity/scripts.pory"
	copyobjectxytoperm 8
# 397 "data/maps/SoftwindCity/scripts.pory"
	copyobjectxytoperm 9
# 398 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_AfterTherma_Text_4
# 399 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 400 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mWalkRightLookUp
# 401 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 402 "data/maps/SoftwindCity/scripts.pory"
	switch VAR_STARTER_MON
# 403 "data/maps/SoftwindCity/scripts.pory"
	case 0, SoftwindCity_AfterTherma_3
# 405 "data/maps/SoftwindCity/scripts.pory"
	case 1, SoftwindCity_AfterTherma_4
# 407 "data/maps/SoftwindCity/scripts.pory"
	case 2, SoftwindCity_AfterTherma_5
SoftwindCity_AfterTherma_1:
# 410 "data/maps/SoftwindCity/scripts.pory"
	setvar VAR_SOFTWIND_CITY_STATE, 7
# 411 "data/maps/SoftwindCity/scripts.pory"
	msgbox SoftwindCity_Text_AlisaRage
# 412 "data/maps/SoftwindCity/scripts.pory"
	closemessage
# 413 "data/maps/SoftwindCity/scripts.pory"
	applymovement 9, mAlisaWalksOffAfterBattle
# 414 "data/maps/SoftwindCity/scripts.pory"
	waitmovement 0
# 415 "data/maps/SoftwindCity/scripts.pory"
	removeobject 9
# 416 "data/maps/SoftwindCity/scripts.pory"
	release
	end

SoftwindCity_AfterTherma_3:
# 404 "data/maps/SoftwindCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALISA_1_VENAP, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AfterTherma_1

SoftwindCity_AfterTherma_4:
# 406 "data/maps/SoftwindCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALISA_1_CELSINGE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AfterTherma_1

SoftwindCity_AfterTherma_5:
# 408 "data/maps/SoftwindCity/scripts.pory"
	trainerbattle_no_intro TRAINER_ALISA_1_ECHOISE, SoftwindCity_Text_AlisaDefeated2
	goto SoftwindCity_AfterTherma_1


# 595 "data/maps/SoftwindCity/scripts.pory"
mAlisaApproaches_1:
# 596 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 596 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 596 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 597 "data/maps/SoftwindCity/scripts.pory"
	walk_down
	step_end

# 600 "data/maps/SoftwindCity/scripts.pory"
mAlisaApproaches_2:
# 601 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 602 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 602 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 602 "data/maps/SoftwindCity/scripts.pory"
	walk_down
	step_end

# 605 "data/maps/SoftwindCity/scripts.pory"
mAlisaApproaches_3:
# 606 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 606 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 606 "data/maps/SoftwindCity/scripts.pory"
	walk_down
	step_end

# 609 "data/maps/SoftwindCity/scripts.pory"
mAlisaApproaches_4:
# 610 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 611 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 611 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 611 "data/maps/SoftwindCity/scripts.pory"
	walk_down
	step_end

# 614 "data/maps/SoftwindCity/scripts.pory"
mAlisaApproaches_5:
# 615 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 615 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 616 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 616 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 616 "data/maps/SoftwindCity/scripts.pory"
	walk_down
	step_end

# 619 "data/maps/SoftwindCity/scripts.pory"
mAlisaApproaches_6:
# 620 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 620 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 620 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 621 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 621 "data/maps/SoftwindCity/scripts.pory"
	walk_down
	step_end

# 624 "data/maps/SoftwindCity/scripts.pory"
mAlisaStartsToLeave:
# 625 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 625 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 625 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 626 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 629 "data/maps/SoftwindCity/scripts.pory"
mAlisaFinishesLeaving:
# 630 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 630 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 630 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 630 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 630 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 630 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 630 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 631 "data/maps/SoftwindCity/scripts.pory"
	set_invisible
	step_end

# 634 "data/maps/SoftwindCity/scripts.pory"
mShiftCameraToRight:
# 635 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 635 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 635 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 635 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 638 "data/maps/SoftwindCity/scripts.pory"
mShiftCameraToLeft:
# 639 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 639 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 639 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 639 "data/maps/SoftwindCity/scripts.pory"
	walk_left
	step_end

# 642 "data/maps/SoftwindCity/scripts.pory"
mDefenderRunsIntoTown:
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 643 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 644 "data/maps/SoftwindCity/scripts.pory"
	walk_in_place_slow_right
	step_end

# 647 "data/maps/SoftwindCity/scripts.pory"
mRocketFollows:
# 648 "data/maps/SoftwindCity/scripts.pory"
	set_visible
# 649 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 649 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 649 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 649 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
	step_end

# 652 "data/maps/SoftwindCity/scripts.pory"
mRocketReturnsToForest:
# 653 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 653 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 653 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 653 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 654 "data/maps/SoftwindCity/scripts.pory"
	set_invisible
	step_end

# 657 "data/maps/SoftwindCity/scripts.pory"
mDefenderAprroachesPlayer_1:
# 658 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 659 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 659 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 660 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 660 "data/maps/SoftwindCity/scripts.pory"
	walk_left
	step_end

# 663 "data/maps/SoftwindCity/scripts.pory"
mDefenderAprroachesPlayer_2:
# 664 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 665 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 666 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 666 "data/maps/SoftwindCity/scripts.pory"
	walk_left
	step_end

# 669 "data/maps/SoftwindCity/scripts.pory"
mDefenderAprroachesPlayer_3:
# 670 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 671 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 672 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 672 "data/maps/SoftwindCity/scripts.pory"
	walk_left
	step_end

# 675 "data/maps/SoftwindCity/scripts.pory"
mDefenderWalksPastPlayer_1:
# 676 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 677 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 678 "data/maps/SoftwindCity/scripts.pory"
	set_invisible
	step_end

# 681 "data/maps/SoftwindCity/scripts.pory"
mDefenderWalksPastPlayer_2:
# 682 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 683 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 684 "data/maps/SoftwindCity/scripts.pory"
	set_invisible
	step_end

# 687 "data/maps/SoftwindCity/scripts.pory"
mDefenderAprroachesPlayer_2_1:
# 688 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 688 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 689 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 689 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 692 "data/maps/SoftwindCity/scripts.pory"
mDefenderAprroachesPlayer_2_2:
# 693 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 694 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 694 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 697 "data/maps/SoftwindCity/scripts.pory"
mDefenderAprroachesPlayer_2_3:
# 698 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 698 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 701 "data/maps/SoftwindCity/scripts.pory"
mDefenderAprroachesPlayer_2_4:
# 702 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 703 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 703 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 706 "data/maps/SoftwindCity/scripts.pory"
mWillowApproachesDefender:
# 707 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 707 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 707 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 710 "data/maps/SoftwindCity/scripts.pory"
mDefenderRunsOff:
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 711 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
	step_end

# 714 "data/maps/SoftwindCity/scripts.pory"
mDefenderRunsOff2:
# 715 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 715 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 716 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_down
# 717 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 717 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 717 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 717 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 717 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 717 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 717 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
	step_end

# 720 "data/maps/SoftwindCity/scripts.pory"
mGymDudesApproaches1:
# 721 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 722 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 722 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 722 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 725 "data/maps/SoftwindCity/scripts.pory"
mGymDudesApproaches2:
# 726 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 726 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 727 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 727 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 727 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 730 "data/maps/SoftwindCity/scripts.pory"
mGymDudesApproaches3:
# 731 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 731 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 731 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 732 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 732 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 732 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 735 "data/maps/SoftwindCity/scripts.pory"
mGymDudesApproaches4:
# 736 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 736 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 737 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 738 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 738 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 739 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 739 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 742 "data/maps/SoftwindCity/scripts.pory"
mGymDudeRushesOff:
# 743 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 743 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 743 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 744 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 744 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 744 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 744 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
# 744 "data/maps/SoftwindCity/scripts.pory"
	walk_fast_left
	step_end

# 747 "data/maps/SoftwindCity/scripts.pory"
mWalkRight4:
# 748 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 748 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 748 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 748 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 751 "data/maps/SoftwindCity/scripts.pory"
mWillowApproachesPlayer1:
# 752 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 752 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 753 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 754 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 754 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 754 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 757 "data/maps/SoftwindCity/scripts.pory"
mWillowApproachesPlayer2:
# 758 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 758 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 758 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 758 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 758 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 761 "data/maps/SoftwindCity/scripts.pory"
mWillowApproachesPlayer3:
# 762 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 762 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 763 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 764 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 764 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 764 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 767 "data/maps/SoftwindCity/scripts.pory"
mWillowApproachesPlayer4:
# 768 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 768 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 769 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 769 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 770 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 770 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 770 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 773 "data/maps/SoftwindCity/scripts.pory"
mWillowDeparts:
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 774 "data/maps/SoftwindCity/scripts.pory"
	walk_left
	step_end

# 777 "data/maps/SoftwindCity/scripts.pory"
mWillowApproachesAfterTherma:
# 778 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 778 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 778 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 778 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 779 "data/maps/SoftwindCity/scripts.pory"
	walk_up
	step_end

# 782 "data/maps/SoftwindCity/scripts.pory"
mAlisaApproachesAfterTherma:
# 783 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 784 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 784 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 784 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 785 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 785 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 785 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 785 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 785 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 786 "data/maps/SoftwindCity/scripts.pory"
	walk_up
# 787 "data/maps/SoftwindCity/scripts.pory"
	walk_right
	step_end

# 790 "data/maps/SoftwindCity/scripts.pory"
mAlisaWalksOffAfterBattle:
# 791 "data/maps/SoftwindCity/scripts.pory"
	walk_down
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 792 "data/maps/SoftwindCity/scripts.pory"
	walk_left
# 793 "data/maps/SoftwindCity/scripts.pory"
	set_invisible
	step_end

# 796 "data/maps/SoftwindCity/scripts.pory"
mWalkRightLookUp:
# 797 "data/maps/SoftwindCity/scripts.pory"
	walk_right
# 798 "data/maps/SoftwindCity/scripts.pory"
	walk_in_place_slow_up
	step_end

SoftwindCity_ElderGuard_Text_0:
# 61 "data/maps/SoftwindCity/scripts.pory"
	.string "My sisters and I hold the sacred duty\n"
	.string "of guarding the towers.\p"
	.string "Until our protectors return, these\n"
	.string "doors shall remain closed.$"

SoftwindCity_WomanInFlowers_Text_0:
# 70 "data/maps/SoftwindCity/scripts.pory"
	.string "Hmm…\n"
	.string "Milk…\p"
	.string "No, I don't know anywhere you could find\n"
	.string "that.$"

SoftwindCity_WomanInFlowers_Text_1:
# 74 "data/maps/SoftwindCity/scripts.pory"
	.string "I love the way the flowers sway in the\n"
	.string "breeze.\p"
	.string "I sit and watch them to help center\n"
	.string "myself.$"

SoftwindCity_GirlHiding_Text_0:
# 79 "data/maps/SoftwindCity/scripts.pory"
	.string "Wow, you noticed me hiding behind here?\p"
	.string "It's so easy to hide behind buildings.\p"
	.string "I've actually stumbled on some lost and\n"
	.string "forgotten things a few times!$"

SoftwindCity_GuyInFrontOfGym_Text_0:
# 88 "data/maps/SoftwindCity/scripts.pory"
	.string "I'm working here.\p"
	.string "Go ask someone else about milk.$"

SoftwindCity_GuyInFrontOfGym_Text_1:
# 92 "data/maps/SoftwindCity/scripts.pory"
	.string "I'm sorry, Gym Leader Therma is\n"
	.string "currently away on research.\p"
	.string "She will take your challenge when she\n"
	.string "returns.$"

SoftwindCity_BaldingMan_Text_0:
# 101 "data/maps/SoftwindCity/scripts.pory"
	.string "A sick Moocalf out at the old\n"
	.string "Farmhouse?\p"
	.string "I wish I could help you, but I don't have\n"
	.string "any milk.$"

SoftwindCity_BaldingMan_Text_1:
# 105 "data/maps/SoftwindCity/scripts.pory"
	.string "I'm old enough to remember Pinedale\n"
	.string "Forest before the fire.\p"
	.string "Now…\p"
	.string "Well, let's just say this.\p"
	.string "If you're heading east, I hope you have\n"
	.string "Burn Heals!$"

SoftwindCity_TriggerAlisaIntro_Text_0:
# 128 "data/maps/SoftwindCity/scripts.pory"
	.string "???: Hi!\n"
	.string "Who are you?\l"
	.string "… …\p"
	.string "Well, {PLAYER}, I guess you aren't so\n"
	.string "unfortunate.\p"
	.string "There are certainly worse names out\n"
	.string "there.$"

SoftwindCity_TriggerAlisaIntro_Text_1:
# 134 "data/maps/SoftwindCity/scripts.pory"
	.string "???: This is Softwind City, and I've\n"
	.string "been waiting ages for the Gym Leader to\l"
	.string "get back…$"

SoftwindCity_TriggerAlisaIntro_Text_2:
# 157 "data/maps/SoftwindCity/scripts.pory"
	.string "???: What?\n"
	.string "My name? It's Alisa.\p"
	.string "You'd better remember that, {PLAYER},\n"
	.string "'cause I'm going to beat you to the\l"
	.string "Pokémon League.\p"
	.string "So you'd better watch out, kid!$"

SoftwindCity_TriggerOrion_1_Text_0:
# 190 "data/maps/SoftwindCity/scripts.pory"
	.string "???: You had better run!\p"
	.string "And don't you dare come back around\n"
	.string "here again!$"

SoftwindCity_TriggerOrion_1_Text_1:
# 217 "data/maps/SoftwindCity/scripts.pory"
	.string "Hey you!\pForget you saw me here, okay?\nOtherwise…$"

SoftwindCity_TriggerOrion_2_Text_0:
# 260 "data/maps/SoftwindCity/scripts.pory"
	.string "Defender: I don't understand what\n"
	.string "happened…\p"
	.string "How could I lose to someone so\n"
	.string "inexperienced!?$"

SoftwindCity_TriggerOrion_2_Text_1:
# 261 "data/maps/SoftwindCity/scripts.pory"
	.string "Willow: {PLAYER}?\n"
	.string "Is that you?$"

SoftwindCity_TriggerOrion_2_Text_2:
# 266 "data/maps/SoftwindCity/scripts.pory"
	.string "Defender: Uh oh.\pI've stayed too long.$"

SoftwindCity_TriggerOrion_2_Text_3:
# 308 "data/maps/SoftwindCity/scripts.pory"
	.string "Man: Professor Willow!$"

SoftwindCity_TriggerOrion_2_Text_4:
# 323 "data/maps/SoftwindCity/scripts.pory"
	.string "Willow: Thank you very much.$"

SoftwindCity_TriggerOrion_2_Text_5:
# 331 "data/maps/SoftwindCity/scripts.pory"
	.string "Willow: Well, {PLAYER}, Therma awaits!\p"
	.string "After beating Team Rocket, I have no\n"
	.string "doubt you'll win! Ohohoho!$"

SoftwindCity_WillowWaitingByGym_Text_0:
# 342 "data/maps/SoftwindCity/scripts.pory"
	.string "I'm certain you can beat her.\p"
	.string "She's not half the prodigy she sees\n"
	.string "herself as.$"

SoftwindCity_AlisaWaitingByGym_Text_0:
# 347 "data/maps/SoftwindCity/scripts.pory"
	.string "Well then, {PLAYER}.\p"
	.string "Why not show me how “special” you are?$"

SoftwindCity_AfterTherma_Text_0:
# 376 "data/maps/SoftwindCity/scripts.pory"
	.string "???: Hello?\pAh, it is you, professor.$"

SoftwindCity_AfterTherma_Text_1:
# 384 "data/maps/SoftwindCity/scripts.pory"
	.string "Alisa: My dear Prof. Willow!\p"
	.string "It really has been far too long.$"

SoftwindCity_AfterTherma_Text_2:
# 385 "data/maps/SoftwindCity/scripts.pory"
	.string "Willow: Is that you, Alisa?\p"
	.string "My, you have grown up haven't you.$"

SoftwindCity_AfterTherma_Text_3:
# 389 "data/maps/SoftwindCity/scripts.pory"
	.string "Willow: … Here, {PLAYER}.\p"
	.string "I'll heal your Pokémon for you.\p"
	.string "I'm certain you can beat her.\p"
	.string "She's not half the prodigy she sees\n"
	.string "herself as.$"

SoftwindCity_AfterTherma_Text_4:
# 398 "data/maps/SoftwindCity/scripts.pory"
	.string "Alisa: Hah!\n"
	.string "This from you?\p"
	.string "Even with this… person… you'll never\n"
	.string "find it.\p"
	.string "Well then, {PLAYER}.\p"
	.string "Why not show me how “special” you are?$"

SoftwindCity_Text_TownSign::
# 423 "data/maps/SoftwindCity/scripts.pory"
	.string "Softwind City\n"
	.string "“Where life drifts softly, like a leaf on\l"
	.string "the wind.”$"

SoftwindCity_Text_GymSign::
# 430 "data/maps/SoftwindCity/scripts.pory"
	.string "Softwind City Pokémon Gym\n"
	.string "Leader: Therma\l"
	.string "“A woman of history and literature!”$"

SoftwindCity_Text_TributeMoltres::
# 438 "data/maps/SoftwindCity/scripts.pory"
	.string "A reverent message:\p"
	.string "“It burns through the sky\n"
	.string "On wings of dazzling flame\l"
	.string "Herald of the spring”$"

SoftwindCity_Text_TributeArticuno::
# 445 "data/maps/SoftwindCity/scripts.pory"
	.string "A reverent message:\p"
	.string "“It sings in the wind\n"
	.string "Bringing winter to the land\l"
	.string "That time may march on”$"

SoftwindCity_Text_TributeZapdos::
# 452 "data/maps/SoftwindCity/scripts.pory"
	.string "A reverent message:\p"
	.string "“It shocks the world\n"
	.string "With a thunderous fury\l"
	.string "Forging a new path”$"

SoftwindCity_Text_AlisaAboutTherma_1::
# 459 "data/maps/SoftwindCity/scripts.pory"
	.string "???: Therma went to the library in\n"
	.string "Saharan City, which is a few towns over.\p"
	.string "Well, it will be when they finish building\n"
	.string "the route in between.\p"
	.string "But to get there now, Therma had to go a\n"
	.string "really long way around…\p"
	.string "Here, I'll show you.$"

SoftwindCity_Text_AlisaAboutTherma_2::
# 470 "data/maps/SoftwindCity/scripts.pory"
	.string "???: You can see what I mean on that.\p"
	.string "Anyway, why are you here?\n"
	.string "… …\p"
	.string "You want to challenge Therma, too?\n"
	.string "Well I guess you'll have to wait around\l"
	.string "like me.\p"
	.string "Or have you not beaten Froy yet?\p"
	.string "You could always do that instead.\p"
	.string "Froy has his gym in Cranewing, which is\n"
	.string "to the east of here through Chartree\l"
	.string "Forest.\p"
	.string "You can see where that is on the\n"
	.string "PokéNav I gave you.$"

SoftwindCity_Text_ReceivedPokenav::
# 484 "data/maps/SoftwindCity/scripts.pory"
	.string "{PLAYER} received a PokéNav.$"

SoftwindCity_Text_DefenderHopesNotSeen::
# 488 "data/maps/SoftwindCity/scripts.pory"
	.string "???: …that isn't good.\p"
	.string "Ophelia said she didn't want any Orion\n"
	.string "Defenders to be seen in Softwind yet.\p"
	.string "I hope that Rocket didn't recognize my\n"
	.string "uniform…$"

SoftwindCity_Text_DefenderScolds::
# 497 "data/maps/SoftwindCity/scripts.pory"
	.string "???: Hey, were you the one who defeated\n"
	.string "the Rockets?\p"
	.string "… Well, quit sticking your nose in things\n"
	.string "you know nothing about!\p"
	.string "Nobody asked you for help.\p"
	.string "We, the Orion Defenders, were supposed\n"
	.string "to take them down and capture Balfour,\l"
	.string "but you just had to let him escape!\p"
	.string "What am I supposed to tell Ophelia!?\n"
	.string "You'll pay for this intrusion!$"

SoftwindCity_Text_WolseyDefeated::
# 508 "data/maps/SoftwindCity/scripts.pory"
	.string "W… what!?$"

SoftwindCity_Text_WolseyWillPunish::
# 512 "data/maps/SoftwindCity/scripts.pory"
	.string "Defender: {PLAYER}, is it?\n"
	.string "I'm Wolsey.\p"
	.string "Remember that name, because I'll be\n"
	.string "back to punish you some other time for\l"
	.string "your audacity.\p"
	.string "You hear me!?\p"
	.string "Until then, stay out of our way!$"

SoftwindCity_Text_WillowCatchesUp::
# 522 "data/maps/SoftwindCity/scripts.pory"
	.string "Willow: {PLAYER}, who was that?\p"
	.string "… … …\n"
	.string "An Orion Defender?\p"
	.string "That's odd, I thought that organization\n"
	.string "died out ages ago…\p"
	.string "But that doesn't matter.\n"
	.string "What happened in Chartree?\p"
	.string "Bradley rushed in there, but it was over\n"
	.string "before I could get there to help.\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "So Team Rocket has returned…\p"
	.string "I wonder what they were planning to do\n"
	.string "with that ash…$"

SoftwindCity_Text_GymDude::
# 534 "data/maps/SoftwindCity/scripts.pory"
	.string "Man: Therma has returned!\p"
	.string "She says she will meet with you straight\n"
	.string "away, just as soon as she deals with all\l"
	.string "of the gym challenges that have piled\l"
	.string "up in her absence.$"

SoftwindCity_Text_WillowCongrats::
# 542 "data/maps/SoftwindCity/scripts.pory"
	.string "Willow: Congratulations, {PLAYER}!\p"
	.string "You still have a long way to go until the\n"
	.string "Pokémon League, but it really is an\l"
	.string "achievement to even get this far.\p"
	.string "Now, I'd like you to meet Therma with me.\p"
	.string "You see, what I want from her is--$"

SoftwindCity_Text_AlisaCutTheAct::
# 553 "data/maps/SoftwindCity/scripts.pory"
	.string "Alisa: Cut the cute act, Professor.\p"
	.string "I know what you're doing here, and you\n"
	.string "will not succeed.\p"
	.string "You've lost your touch.\n"
	.string "You can't even choose your aids well\l"
	.string "anymore.\p"
	.string "I mean look at this child.\p"
	.string "They will never amount to anything.\p"
	.string "They're nothing like me!\p"
	.string "I could beat him any day of the week.$"

SoftwindCity_Text_AlisaDefeated2::
# 567 "data/maps/SoftwindCity/scripts.pory"
	.string "I can't believe this!$"

SoftwindCity_Text_AlisaRage::
# 573 "data/maps/SoftwindCity/scripts.pory"
	.string "Alisa: You must have gotten lucky.\p"
	.string "There's no wa you could have beaten me\n"
	.string "if I was at my best…\p"
	.string "Well, {PLAYER}, I hope you've enjoyed\n"
	.string "your little journey, because those\l"
	.string "Rockets in the forest?\p"
	.string "That was only the beginning.\p"
	.string "Team Rocket and the Orion Defenders\n"
	.string "have come back.\p"
	.string "There's a war on the horizon, and you\n"
	.string "had better hope your little job doesn't\l"
	.string "put you in the middle of it.\p"
	.string "You're getting in over your head,\n"
	.string "{PLAYER}. You had better watch\l"
	.string "yourself.$"
