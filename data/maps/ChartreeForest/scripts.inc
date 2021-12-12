ChartreeForest_MapScripts::
	.byte 0


ChartreeForest_TriggerFroy::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 19, ChartreeForest_TriggerFroy_3
	case 20, ChartreeForest_TriggerFroy_4
	case 21, ChartreeForest_TriggerFroy_5
ChartreeForest_TriggerFroy_1:
	waitmovement 0
	msgbox ChartreeForest_Text_FroyIntroduction
	waitmessage
	closemessage
	applymovement 1, mFroyLooksAround
	waitmovement 0
	msgbox ChartreeForest_Text_FroyAboutGym
	waitmessage
	closemessage
	applymovement 1, mFroyStartsToLeave
	waitmovement 0
	msgbox ChartreeForest_Text_FroyAboutAsh
	waitmessage
	closemessage
	switch VAR_TEMP_1
	case 19, ChartreeForest_TriggerFroy_8
	case 20, ChartreeForest_TriggerFroy_9
	case 21, ChartreeForest_TriggerFroy_10
ChartreeForest_TriggerFroy_6:
	waitmovement 0
	removeobject 1
	setvar VAR_CHARTREE_FOREST_STATE, 1
	releaseall
	end

ChartreeForest_TriggerFroy_3:
	applymovement 1, mFroyApproaches_1
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_4:
	applymovement 1, mFroyApproaches_2
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_5:
	applymovement 1, mFroyApproaches_3
	goto ChartreeForest_TriggerFroy_1

ChartreeForest_TriggerFroy_8:
	applymovement 1, mFroyLeaves_1
	goto ChartreeForest_TriggerFroy_6

ChartreeForest_TriggerFroy_9:
	applymovement 1, mFroyLeaves_2
	goto ChartreeForest_TriggerFroy_6

ChartreeForest_TriggerFroy_10:
	applymovement 1, mFroyLeaves_3
	goto ChartreeForest_TriggerFroy_6


ChartreeForest_SignRoute203::
	msgbox ChartreeForest_SignRoute203_Text_0, MSGBOX_SIGN
	end


ChartreeForest_SignRoute204::
	msgbox ChartreeForest_SignRoute204_Text_0, MSGBOX_SIGN
	end


ChartreeForest_Sign::
	msgbox ChartreeForest_Sign_Text_0, MSGBOX_SIGN
	end


ChartreeForest_DeadendMan::
	msgbox ChartreeForest_DeadendMan_Text_0, MSGBOX_NPC
	end


ChartreeForest_LostWoman::
	msgbox ChartreeForest_LostWoman_Text_0, MSGBOX_NPC
	end


ChartreeForest_Gentleman::
	trainerbattle_single TRAINER_FRANKLIN, ChartreeForest_Text_FranklinIntro, ChartreeForest_Text_FranklinDefeated
	msgbox ChartreeForest_Text_FranklinPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_BugCatcher::
	trainerbattle_single TRAINER_MARVIN, ChartreeForest_Text_MarvinIntro, ChartreeForest_Text_MarvinDefeated
	msgbox ChartreeForest_Text_MarvinPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_Fisherman::
	trainerbattle_single TRAINER_WALLY, ChartreeForest_Text_WallyIntro, ChartreeForest_Text_WallyDefeated
	msgbox ChartreeForest_Text_WallyPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_HexManiac::
	trainerbattle_single TRAINER_ZELDA, ChartreeForest_Text_ZeldaIntro, ChartreeForest_Text_ZeldaDefeated
	msgbox ChartreeForest_Text_ZeldaPostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_Lass::
	trainerbattle_single TRAINER_SARAH, ChartreeForest_Text_SarahIntro, ChartreeForest_Text_SarahDefeated
	msgbox ChartreeForest_Text_SarahPostBattle, MSGBOX_AUTOCLOSE
	end


mFroyApproaches_1:
	walk_up
	walk_left
	walk_left
	walk_left
	step_end

mFroyApproaches_2:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

mFroyApproaches_3:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

mFroyLooksAround:
	face_right
	delay_16
	delay_16
	delay_16
	face_up
	delay_16
	delay_16
	delay_16
	face_down
	delay_16
	delay_16
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	face_left
	step_end

mFroyStartsToLeave:
	walk_right
	walk_right
	face_left
	step_end

mFroyLeaves_1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	set_invisible
	step_end

mFroyLeaves_2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	set_invisible
	step_end

mFroyLeaves_3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	set_invisible
	step_end

ChartreeForest_SignRoute203_Text_0:
	.string "{DOWN_ARROW} Exit to Route 203$"

ChartreeForest_SignRoute204_Text_0:
	.string "{DOWN_ARROW} Exit to Route 204$"

ChartreeForest_Sign_Text_0:
	.string "Chartree Forest\p"
	.string "“In memory of Pinedale Forest, which\n"
	.string "once stood here”$"

ChartreeForest_DeadendMan_Text_0:
	.string "Oh man, I must have taken a wrong turn.\p"
	.string "I really wish I was going the other\n"
	.string "direction!$"

ChartreeForest_LostWoman_Text_0:
	.string "I'm so lost…\p"
	.string "I jumped over that ledge and now I\n"
	.string "don't know where to go…$"

ChartreeForest_Text_FroyIntroduction::
	.string "Froy: Hey kid, I'm Froy.\p"
	.string "Have you seen any people in black\n"
	.string "around?\p"
	.string "They've stirred up all of the ash, and I\n"
	.string "have to wait for it to fully settle\l"
	.string "again before it can be collected.\p"
	.string "I'm not sure what they're looking for,\n"
	.string "but…$"

ChartreeForest_Text_FroyAboutGym::
	.string "Froy: It looks liek they've gone, at\n"
	.string "least for now.\p"
	.string "At's supposed to be my job as gym\n"
	.string "leader to protect the forest from\l"
	.string "harm, but if they've already gone,\l"
	.string "there isn't much I can do…\p"
	.string "Oh!\n"
	.string "You're looking to challenge me?\p"
	.string "Well, we can't do it here. Cranewing, my\n"
	.string "home, is just past here.\p"
	.string "If you can make it through the rest of\n"
	.string "the forest yourself, you might have a\l"
	.string "chance of beating me!$"

ChartreeForest_Text_FroyAboutAsh::
	.string "Froy: The ash here is important for\n"
	.string "making glass.\p"
	.string "When you reach Cranewing, you'll\n"
	.string "appreciate why we value this ash so\l"
	.string "highly.\p"
	.string "But to the common person, there is\n"
	.string "nothing in the forest of worth\p"
	.string "I wonder what those guys in black were\n"
	.string "doing here…$"

ChartreeForest_Text_FranklinIntro::
	.string "Ahem!\p"
	.string "I walked just a few steps into this\n"
	.string "forest, and got a lung full of air.\p"
	.string "And my clothes are filthy!\n"
	.string "How irritating!$"

ChartreeForest_Text_FranklinDefeated::
	.string "You can handle this forest, I'm sure.$"

ChartreeForest_Text_FranklinPostBattle::
	.string "I think I'll go home and clean myself up.\p"
	.string "I can't arrive in Cranewing looking like\n"
	.string "this.$"

ChartreeForest_Text_MarvinIntro::
	.string "I can't decide if this forest is great\n"
	.string "for bug trainers, or terrifying!$"

ChartreeForest_Text_MarvinDefeated::
	.string "I guess I'm leaning toward terrifying if\n"
	.string "you're in here!$"

ChartreeForest_Text_MarvinPostBattle::
	.string "There are some awesome bugs in this\n"
	.string "forest, but all these fire types make\l"
	.string "it hard for my other Pokémon.$"

ChartreeForest_Text_WallyIntro::
	.string "You must be wondering what a fisherman\n"
	.string "like me is doing in a dark, dusty place\l"
	.string "like this!$"

ChartreeForest_Text_WallyDefeated::
	.string "I need more training still…$"

ChartreeForest_Text_WallyPostBattle::
	.string "It's simple!\n"
	.string "I come here to train my Pokémon against\l"
	.string "all of these Fire type Pokémon!\p"
	.string "There may not be any Water Pokémon to\n"
	.string "catch, but it's great for training then!$"

ChartreeForest_Text_ZeldaIntro::
	.string "… … …\n"
	.string "…I've been waiting for you…$"

ChartreeForest_Text_ZeldaDefeated::
	.string "… … …$"

ChartreeForest_Text_ZeldaPostBattle::
	.string "…I knew you would defeat me…$"

ChartreeForest_Text_SarahIntro::
	.string "You'd better turn back now!\p"
	.string "You'll never get through this forest.\n"
	.string "You're not even close!$"

ChartreeForest_Text_SarahDefeated::
	.string "You beat me, but you should still turn\n"
	.string "back!$"

ChartreeForest_Text_SarahPostBattle::
	.string "…Okay, I might have exaggerated.\p"
	.string "You're actually very close to the exit.$"
