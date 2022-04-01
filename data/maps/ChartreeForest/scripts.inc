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


ChartreeForest_RocketGrunt1::
	trainerbattle_single TRAINER_GRUNT_CHARTREE_1, ChartreeForest_Text_RocketGrunt1Intro, ChartreeForest_Text_RocketGrunt1Defeated
	msgbox ChartreeForest_Text_RocketGrunt1PostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_RocketGrunt2::
	trainerbattle_single TRAINER_GRUNT_CHARTREE_2, ChartreeForest_Text_RocketGrunt2Intro, ChartreeForest_Text_RocketGrunt2Defeated
	msgbox ChartreeForest_Text_RocketGrunt2PostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_RocketGrunt3::
	trainerbattle_single TRAINER_GRUNT_CHARTREE_3, ChartreeForest_Text_RocketGrunt3Intro, ChartreeForest_Text_RocketGrunt3Defeated
	msgbox ChartreeForest_Text_RocketGrunt3PostBattle, MSGBOX_AUTOCLOSE
	end


ChartreeForest_RocketGrunt4::
	msgbox ChartreeForest_RocketGrunt4_Text_0, MSGBOX_NPC
	end


ChartreeForest_Balfour::
	lock
	applymovement 14, mLookRightStartled
	waitmovement 0
	msgbox ChartreeForest_Balfour_Text_0
	closemessage
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	switch VAR_TEMP_1
	case 6, ChartreeForest_Balfour_3
	case 7, ChartreeForest_Balfour_4
ChartreeForest_Balfour_1:
	msgbox ChartreeForest_Text_BalfourAttacks
	closemessage
	applymovement 15, mWalkRight2
	waitmovement 0
	msgbox ChartreeForest_Balfour_Text_1
	closemessage
	trainerbattle_no_intro 15, ChartreeForest_Text_BalfourDefeated
	msgbox ChartreeForest_Balfour_Text_2
	msgbox ChartreeForest_Text_BalfourScoffsAtDefeat
	closemessage
	switch VAR_TEMP_1
	case 6, ChartreeForest_Balfour_7
	case 7, ChartreeForest_Balfour_8
ChartreeForest_Balfour_5:
	waitmovement 0
	msgbox ChartreeForest_Balfour_Text_3
	closemessage
	applymovement 14, mGruntRunsAwayAfterBalfour
	waitmovement 0
	removeobject 15
	removeobject 14
	setvar VAR_CHARTREE_FOREST_STATE, 3
	setflag FLAG_HIDE_BRADLEY_ROUTE_204
	clearflag FLAG_ROCKETS_IN_CHARTREE
	setflag FLAG_HIDE_ROCKETS_IN_CHARTREE
	release
	end

ChartreeForest_Balfour_3:
	applymovement 15, mBalfourApproachesTop
	goto ChartreeForest_Balfour_1

ChartreeForest_Balfour_4:
	applymovement 15, mBalfourApproachesBottom
	goto ChartreeForest_Balfour_1

ChartreeForest_Balfour_7:
	applymovement 15, mBalfourDepartsTop
	goto ChartreeForest_Balfour_5

ChartreeForest_Balfour_8:
	applymovement 15, mBalfourDepartsBottom
	goto ChartreeForest_Balfour_5


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

mLookRightStartled:
	face_right
	emote_exclamation_mark
	step_end

mBalfourApproachesTop:
	walk_right
	walk_right
	walk_right
	step_end

mBalfourApproachesBottom:
	walk_right
	walk_right
	walk_down
	walk_right
	step_end

mWalkRight2:
	walk_right
	walk_right
	step_end

mBalfourDepartsTop:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	set_invisible
	step_end

mBalfourDepartsBottom:
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	set_invisible
	step_end

mGruntRunsAwayAfterBalfour:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
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

ChartreeForest_RocketGrunt4_Text_0:
	.string "Sorry, kid.\n"
	.string "I was told not to leave this spot.\p"
	.string "I know better than to get drawn into a\n"
	.string "fight with one of you Trainer kids.\p"
	.string "Get gone!$"

ChartreeForest_Balfour_Text_0:
	.string "Grunt: Uh, Balfour sir?\p"
	.string "This kid just beat all the workers that\n"
	.string "were left.$"

ChartreeForest_Balfour_Text_1:
	.string "Balfour: We're taking this ash, and\n"
	.string "there isn't anything you can do about\l"
	.string "it.$"

ChartreeForest_Balfour_Text_2:
	.string "Grunt: …what?\pThis kid beat an Executive!?$"

ChartreeForest_Balfour_Text_3:
	.string "Grunt: Where are Allard and Shook?\p"
	.string "If it wasn't for their failure, we could\n"
	.string "have collected so much more ash…$"

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
	.string "Froy: It looks like they've gone, at\n"
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

ChartreeForest_Text_RocketGrunt1Intro::
	.string "Team Rocket has important work in this\n"
	.string "forest.\p"
	.string "We have no time for you.\n"
	.string "Get out of our way!$"

ChartreeForest_Text_RocketGrunt1Defeated::
	.string "Another kid causing trouble…$"

ChartreeForest_Text_RocketGrunt1PostBattle::
	.string "Well, you beat me.\p"
	.string "What, you thought I'd just let you\n"
	.string "pass?\p"
	.string "My Pokémon are defeated, but I'm still\n"
	.string "standing.$"

ChartreeForest_Text_RocketGrunt2Intro::
	.string "What's a little kid like you doing in a\n"
	.string "dangerous place like this?$"

ChartreeForest_Text_RocketGrunt2Defeated::
	.string "This strong at your age?$"

ChartreeForest_Text_RocketGrunt2PostBattle::
	.string "You may be strong, but you'd still best\n"
	.string "step lightly.\p"
	.string "Team Rocket has business here.\n"
	.string "That means you don't.$"

ChartreeForest_Text_RocketGrunt3Intro::
	.string "You must be the kid that fool lost to.\p"
	.string "That won't happen again!\n"
	.string "I won't disappoint Balfour!$"

ChartreeForest_Text_RocketGrunt3Defeated::
	.string "Such shame…$"

ChartreeForest_Text_RocketGrunt3PostBattle::
	.string "Look, just don't mention you saw me,\n"
	.string "alright?\p"
	.string "I'd rather Balfour just thinks I missed\n"
	.string "seeing you…$"

ChartreeForest_Text_BalfourAttacks::
	.string "Balfour: …This isn't the same one that\n"
	.string "defeated all of your Pokémon, is it?\p"
	.string "This is someone new.\p"
	.string "Why can't any of our missions end\n"
	.string "peacefully?\p"
	.string "Why is it that we always end up\n"
	.string "fighting?\p"
	.string "Well, I guess it's part of the job,\n"
	.string "stopping ignorant children.$"

ChartreeForest_Text_BalfourDefeated::
	.string "…! You're lucky, kid.$"

ChartreeForest_Text_BalfourScoffsAtDefeat::
	.string "Balfour: Heh, you're lucky, kid.\p"
	.string "I didn't bring my own Pokémon into this\n"
	.string "sooty forest, but still…\p"
	.string "You are impressive.\n"
	.string "You win this time, but we I have no\l"
	.string "doubt we will meet again.$"
