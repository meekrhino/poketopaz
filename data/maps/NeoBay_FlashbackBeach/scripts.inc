NeoBay_FlashbackBeach_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_FlashbackBeach_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_FlashbackBeach_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_NEOBAY_STATE, 4, NeoBay_FlashbackBeach_DoFlashback
	.2byte 0


NeoBay_FlashbackBeach_DoFlashback::
	lockall
	setvar VAR_NEOBAY_STATE, 5
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, mWalkDownSlow2
	applymovement 1, mBradleyRandomSpinning
	applymovement 3, mSimonRandomSpinning
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_0
	closemessage
	delay 180
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_1
	closemessage
	delay 180
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_2
	closemessage
	delay 60
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_3
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, mWalkDownSlow2
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_4
	closemessage
	fadescreen FADE_TO_BLACK
	call Script_RemoveTint
	warpsilent MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 1, 0, 0
	releaseall
	end


mBradleyRandomSpinning:
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	step_end

mSimonRandomSpinning:
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	delay_16
	face_down
	step_end

mWalkDownSlow2:
	walk_slow_down
	walk_slow_down
	step_end

mRunUp2:
	player_run_up
	player_run_up
	step_end

mWalkFastUp2:
	walk_fast_up
	walk_fast_up
	step_end

NeoBay_FlashbackBeach_DoFlashback_Text_0:
	.string "Bradley: {PLAYER}, Simon and I all\n"
	.string "lived here in Neo Bay$"

NeoBay_FlashbackBeach_DoFlashback_Text_1:
	.string "My parents had raised Simon for as long\n"
	.string "as I can remember, and nobody seemed\l"
	.string "to know who his parents were.$"

NeoBay_FlashbackBeach_DoFlashback_Text_2:
	.string "The three of us always had so much fun\n"
	.string "together along the beach, searching\l"
	.string "for Pokémon that we could take with us\l"
	.string "on adventures.$"

NeoBay_FlashbackBeach_DoFlashback_Text_3:
	.string "But one day, things were different.\p"
	.string "It was foggy, and there weren't signs\n"
	.string "of any Pokémon at all…$"

NeoBay_FlashbackBeach_DoFlashback_Text_4:
	.string "Suddenly, a dark shadow rose of the\n"
	.string "water.\p"
	.string "It was huge!\p"
	.string "{PLAYER} told us to run, so I did…\p"
	.string "{PLAYER} followed on my heels, but\n"
	.string "Simon…\p"
	.string "Simon just froze…$"
