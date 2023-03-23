CranewingCity_Glassworks_1F_MapScripts::
	.byte 0


CranewingCity_Glassworks_1F_VisitorMan::
	msgbox CranewingCity_Glassworks_1F_VisitorMan_Text_0, MSGBOX_NPC
	end


CranewingCity_Glassworks_1F_Visitor::
	msgbox CranewingCity_Glassworks_1F_Visitor_Text_0, MSGBOX_NPC
	end


CranewingCity_Glassworks_1F_Tech::
	msgbox CranewingCity_Glassworks_1F_Tech_Text_0, MSGBOX_NPC
	end


CranewingCity_Glassworks_1F_ControlPanel::
	msgbox CranewingCity_Glassworks_1F_ControlPanel_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_FlashLights::
	msgbox CranewingCity_Glassworks_1F_FlashLights_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_TemplateReceptacle::
	msgbox CranewingCity_Glassworks_1F_TemplateReceptacle_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Machinery::
	msgbox CranewingCity_Glassworks_1F_Machinery_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Drawers::
	msgbox CranewingCity_Glassworks_1F_Drawers_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Display::
	msgbox CranewingCity_Glassworks_1F_Display_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_FancyDisplay::
	msgbox CranewingCity_Glassworks_1F_FancyDisplay_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Blueprint::
	msgbox CranewingCity_Glassworks_1F_Blueprint_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_Computer::
	msgbox CranewingCity_Glassworks_1F_Computer_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_TrashCan::
	msgbox CranewingCity_Glassworks_1F_TrashCan_Text_0, MSGBOX_SIGN
	end


CranewingCity_Glassworks_1F_LeadTech::
	lockall
	faceplayer
	compare VAR_STATE_GLASSWORKS, 0
	goto_if_eq CranewingCity_Glassworks_1F_LeadTech_2
	compare VAR_STATE_GLASSWORKS, 1
	goto_if_eq CranewingCity_Glassworks_1F_LeadTech_3
	compare VAR_STATE_GLASSWORKS, 2
	goto_if_eq CranewingCity_Glassworks_1F_LeadTech_4
CranewingCity_Glassworks_1F_LeadTech_1:
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_LeadTech_2:
	goto CranewingCity_Glassworks_1F_MaybeGiveSootSack
	goto CranewingCity_Glassworks_1F_LeadTech_1

CranewingCity_Glassworks_1F_LeadTech_3:
	goto CranewingCity_Glassworks_1F_MaybeGiveGlassBottle
	goto CranewingCity_Glassworks_1F_LeadTech_1

CranewingCity_Glassworks_1F_LeadTech_4:
	goto CranewingCity_Glassworks_1F_AshStore
	goto CranewingCity_Glassworks_1F_LeadTech_1


CranewingCity_Glassworks_1F_MaybeGiveSootSack::
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq CranewingCity_Glassworks_1F_MaybeGiveSootSack_2
CranewingCity_Glassworks_1F_MaybeGiveSootSack_1:
	msgbox CranewingCity_Glassworks_1F_MaybeGiveSootSack_Text_0
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_MaybeGiveSootSack_2:
	subquest_check_finished SUB_QUEST_FIND_MILK
	compare VAR_RESULT, TRUE
	goto_if_eq CranewingCity_Glassworks_1F_MaybeGiveSootSack_4
	goto CranewingCity_Glassworks_1F_MaybeGiveSootSack_1

CranewingCity_Glassworks_1F_MaybeGiveSootSack_4:
	goto CranewingCity_Glassworks_1F_GiveSootSack
	goto CranewingCity_Glassworks_1F_MaybeGiveSootSack_1


CranewingCity_Glassworks_1F_GiveSootSack::
	msgbox CranewingCity_Glassworks_1F_GiveSootSack_Text_0
	waitmessage
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveSootSack_2
	applymovement 3, mGlassworksTechGetsSootSack
CranewingCity_Glassworks_1F_GiveSootSack_1:
	waitmovement 3
	delay 16
	playse SE_DOOR
	waitse
	delay 16
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveSootSack_6
	applymovement 3, mGlassworksTechComesBackLong
	waitmovement 3
	turnobject OBJ_EVENT_ID_PLAYER, DIR_SOUTH
CranewingCity_Glassworks_1F_GiveSootSack_5:
	msgbox CranewingCity_Glassworks_1F_GiveSootSack_Text_1
	waitmessage
	closemessage
	giveitem ITEM_SOOT_SACK
	setvar VAR_STATE_GLASSWORKS, 1
	subquest_finish SUB_QUEST_FIND_BOTTLE
	msgbox CranewingCity_Glassworks_1F_GiveSootSack_Text_2
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_GiveSootSack_2:
	applymovement 3, mGlassworksTechGetsSootSackLoopAround
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	goto CranewingCity_Glassworks_1F_GiveSootSack_1

CranewingCity_Glassworks_1F_GiveSootSack_6:
	applymovement 3, mGlassworksTechComesBack
	waitmovement 3
	goto CranewingCity_Glassworks_1F_GiveSootSack_5


CranewingCity_Glassworks_1F_MaybeGiveGlassBottle::
	checkitem ITEM_SOOT_SACK
	compare VAR_RESULT, FALSE
	goto_if_eq CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_2
CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_1:
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_ASH_GATHER_COUNT, 100
	goto_if_ge CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_5
CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_4:
	msgbox CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_Text_0
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_2:
	goto CranewingCity_Glassworks_1F_NoSootSack
	goto CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_1

CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_5:
	goto CranewingCity_Glassworks_1F_GiveGlassBottle
	goto CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_4


CranewingCity_Glassworks_1F_GiveGlassBottle::
	setvar VAR_STATE_GLASSWORKS, 2
	subvar VAR_ASH_GATHER_COUNT, 100
	msgbox CranewingCity_Glassworks_1F_GiveGlassBottle_Text_0
	waitmessage
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveGlassBottle_2
	applymovement 3, mGlassworksTechWalksToMachineLoopAround
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, mFaceRight
	delay 32
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
CranewingCity_Glassworks_1F_GiveGlassBottle_1:
	playse SE_DOOR
	waitse
	applymovement 3, mGlassworksTechRunsMachine
	waitmovement 3
	playse SE_ELEVATOR
	waitse
	playse SE_DING_DONG
	waitse
	compare VAR_TEMP_0, 3
	goto_if_eq CranewingCity_Glassworks_1F_GiveGlassBottle_6
	applymovement 3, mGlassworksTechFinishesMachine
CranewingCity_Glassworks_1F_GiveGlassBottle_5:
	waitmovement 3
	delay 16
	msgbox CranewingCity_Glassworks_1F_GiveGlassBottle_Text_1
	waitmessage
	subquest_finish SUB_QUEST_DELIVER_ASH
	giveitem ITEM_GLASS_BOTTLE
	msgbox CranewingCity_Glassworks_1F_GiveGlassBottle_Text_2
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return

CranewingCity_Glassworks_1F_GiveGlassBottle_2:
	applymovement 3, mGlassworksTechWalksToMachine
	goto CranewingCity_Glassworks_1F_GiveGlassBottle_1

CranewingCity_Glassworks_1F_GiveGlassBottle_6:
	applymovement 3, mGlassworksTechFinishesMachineLong
	goto CranewingCity_Glassworks_1F_GiveGlassBottle_5


CranewingCity_Glassworks_1F_NoSootSack::
	msgbox CranewingCity_Glassworks_1F_NoSootSack_Text_0
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return


CranewingCity_Glassworks_1F_AshStore::
	msgbox CranewingCity_Glassworks_1F_AshStore_Text_0
	goto CranewingCity_Glassworks_1F_LeadTechCleanup
	return


CranewingCity_Glassworks_1F_LeadTechCleanup::
	waitmessage
	releaseall
	end


mGlassworksTechGetsSootSack:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_up
	step_end

mGlassworksTechGetsSootSackLoopAround:
	walk_right
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	step_end

mGlassworksTechComesBack:
	walk_down
	walk_right
	walk_right
	step_end

mGlassworksTechComesBackLong:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	face_up
	step_end

mGlassworksTechWalksToMachine:
	walk_right
	walk_up
	walk_up
	step_end

mGlassworksTechWalksToMachineLoopAround:
	walk_down
	walk_right
	walk_right
	walk_up
	walk_up
	walk_left
	walk_up
	step_end

mGlassworksTechRunsMachine:
	walk_right
	face_up
	delay_16
	delay_16
	walk_right
	walk_right
	walk_up
	step_end

mGlassworksTechFinishesMachineLong:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_down
	walk_left
	face_down
	step_end

mGlassworksTechFinishesMachine:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	face_down
	step_end

CranewingCity_Glassworks_1F_VisitorMan_Text_0:
	.string "I'm here on business from Gallea City.\p"
	.string "I'm hoping to place a large order for my\n"
	.string "company.$"

CranewingCity_Glassworks_1F_Visitor_Text_0:
	.string "The engineers do some excellent work\n"
	.string "here!\p"
	.string "Look at the beautiful pieces they have\n"
	.string "on display here!$"

CranewingCity_Glassworks_1F_Tech_Text_0:
	.string "I helped develop the machinery here!\p"
	.string "It can use templates to automatically\n"
	.string "convert ash into high quality glass\l"
	.string "items!\p"
	.string "If you need something made, you should\n"
	.string "speak to my boss over there.$"

CranewingCity_Glassworks_1F_ControlPanel_Text_0:
	.string "It's some kind of high-tech control\n"
	.string "panel.$"

CranewingCity_Glassworks_1F_FlashLights_Text_0:
	.string "There are tons of lights and number\n"
	.string "displays.$"

CranewingCity_Glassworks_1F_TemplateReceptacle_Text_0:
	.string "There's a large opening and an empty\n"
	.string "clamp.$"

CranewingCity_Glassworks_1F_Machinery_Text_0:
	.string "The massive machine is rumbling softly.$"

CranewingCity_Glassworks_1F_Drawers_Text_0:
	.string "There are several locked drawers.$"

CranewingCity_Glassworks_1F_Display_Text_0:
	.string "The case contains a beautiful piece of\n"
	.string "art made of glass.$"

CranewingCity_Glassworks_1F_FancyDisplay_Text_0:
	.string "The case contains a stunning model of\n"
	.string "Jirachi made of glass.$"

CranewingCity_Glassworks_1F_Blueprint_Text_0:
	.string "The table is covered in schematics for\n"
	.string "glass objects.$"

CranewingCity_Glassworks_1F_Computer_Text_0:
	.string "The screen displays a continuous\n"
	.string "readout of data.$"

CranewingCity_Glassworks_1F_TrashCan_Text_0:
	.string "The bin is full of old scrap and other\n"
	.string "trash.$"

CranewingCity_Glassworks_1F_MaybeGiveSootSack_Text_0:
	.string "I'm sorry, but I can't help you.\p"
	.string "Maybe if you had a Soot Sack and some\n"
	.string "ash, I could work with that…\p"
	.string "Unfortunately we don't have any spares\n"
	.string "to give to just anyone right now.$"

CranewingCity_Glassworks_1F_GiveSootSack_Text_0:
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
	.string "Here you go.$"

CranewingCity_Glassworks_1F_GiveSootSack_Text_2:
	.string "Just go run about in Chartree Forest.\p"
	.string "Come back when you have collected 100\n"
	.string "ash.\p"
	.string "That should cover one glass bottle.$"

CranewingCity_Glassworks_1F_MaybeGiveGlassBottle_Text_0:
	.string "You'll need to come back with at least\n"
	.string "100 ash before I can make you your\l"
	.string "glass bottle.$"

CranewingCity_Glassworks_1F_GiveGlassBottle_Text_0:
	.string "Ah, you have the ash!\n"
	.string "Excellent!\p"
	.string "I'll run that through the machine right\n"
	.string "away.$"

CranewingCity_Glassworks_1F_GiveGlassBottle_Text_1:
	.string "And that's all there is to it!\p"
	.string "Here's your bottle.$"

CranewingCity_Glassworks_1F_GiveGlassBottle_Text_2:
	.string "I've got to get back to work, but I hope\n"
	.string "everything works out with that\l"
	.string "Moocalf.$"

CranewingCity_Glassworks_1F_NoSootSack_Text_0:
	.string "What's this?\n"
	.string "No Soot Sack on you?\p"
	.string "You'll have to bring the ash to me if you\n"
	.string "want me to make anything.$"

CranewingCity_Glassworks_1F_AshStore_Text_0:
	.string "I'm sorry, I just don't have time to work\n"
	.string "on requests just now.\p"
	.string "We just got another order in for a full\n"
	.string "thousand pieces…$"
