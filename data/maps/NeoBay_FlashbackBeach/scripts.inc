NeoBay_FlashbackBeach_MapScripts::
# 23 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoBay_FlashbackBeach_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

NeoBay_FlashbackBeach_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 24 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	map_script_2 VAR_NEOBAY_STATE, 4, NeoBay_FlashbackBeach_DoFlashback
	.2byte 0


NeoBay_FlashbackBeach_DoFlashback::
# 37 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	lockall
# 38 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	setvar VAR_NEOBAY_STATE, 5
# 39 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	special SpawnCameraObject
# 40 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mWalkDownSlow2
# 41 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	applymovement 1, mBradleyRandomSpinning
# 42 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	applymovement 3, mSimonRandomSpinning
# 43 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_0
# 44 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	closemessage
# 45 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay 180
# 46 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_1
# 47 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	closemessage
# 48 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay 180
# 49 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_2
# 50 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	closemessage
# 51 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay 60
# 52 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_3
# 53 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	closemessage
# 54 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, mWalkDownSlow2
# 55 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	msgbox NeoBay_FlashbackBeach_DoFlashback_Text_4
# 56 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	closemessage
# 57 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	fadescreen FADE_TO_BLACK
# 58 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	call Script_RemoveTint
# 59 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	warpsilent MAP_NEO_BAY_PROFESSOR_WILLOWS_LAB, 1, 0, 0
# 60 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	releaseall
	end


# 71 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
mBradleyRandomSpinning:
# 72 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_right
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 73 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 74 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_left
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 75 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 76 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 77 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 78 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_left
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 79 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 80 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 81 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 82 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_right
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 83 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 84 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_left
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 85 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 86 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_right
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 87 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 88 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 89 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 90 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_left
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 91 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 92 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_right
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 93 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 94 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
	step_end

# 97 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
mSimonRandomSpinning:
# 98 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 99 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 100 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_right
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 101 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 102 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 103 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 104 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_left
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 105 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 106 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 107 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 108 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_up
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 109 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 110 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_left
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 111 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 112 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_right
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 113 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 114 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_up
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 115 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 116 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 117 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 118 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_right
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 119 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	delay_16
# 120 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_in_place_slow_down
	step_end

# 123 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
mWalkDownSlow2:
# 124 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_slow_down
# 124 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_slow_down
	step_end

# 127 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
mRunUp2:
# 128 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	player_run_up
# 128 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	player_run_up
	step_end

# 131 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
mWalkFastUp2:
# 132 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_fast_up
# 132 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	walk_fast_up
	step_end

NeoBay_FlashbackBeach_DoFlashback_Text_0:
# 43 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	.string "Bradley: {PLAYER}, Simon and I all\n"
	.string "lived here in Neo Bay$"

NeoBay_FlashbackBeach_DoFlashback_Text_1:
# 46 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	.string "My parents had raised Simon for as long\n"
	.string "as I can remember, and nobody seemed to\l"
	.string "know who his parents were.$"

NeoBay_FlashbackBeach_DoFlashback_Text_2:
# 49 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	.string "The three of us always had so much fun\n"
	.string "together along the beach, searching\l"
	.string "for Pokémon that we could take with us\l"
	.string "on adventures.$"

NeoBay_FlashbackBeach_DoFlashback_Text_3:
# 52 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	.string "But one day, things were different.\p"
	.string "It was foggy, and there weren't signs\n"
	.string "of any Pokémon at all…$"

NeoBay_FlashbackBeach_DoFlashback_Text_4:
# 55 "data/maps/NeoBay_FlashbackBeach/scripts.pory"
	.string "Suddenly, a dark shadow rose of the\n"
	.string "water.\p"
	.string "It was huge!\p"
	.string "{PLAYER} told us to run, so I did…\p"
	.string "{PLAYER} followed on my heels, but\n"
	.string "Simon…\p"
	.string "Simon just froze…$"
