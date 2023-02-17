CranewingCity_Gym_MapScripts::
	.byte 0


CranewingCity_Gym_GymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, CranewingCity_Gym_GymStatue_2
	msgbox CranewingCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
CranewingCity_Gym_GymStatue_1:
	releaseall
	end

CranewingCity_Gym_GymStatue_2:
	msgbox CranewingCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto CranewingCity_Gym_GymStatue_1


CranewingCity_Gym_GymGuide::
	goto_if_set FLAG_BADGE01_GET, CranewingCity_Gym_GymGuide_2
	msgbox CranewingCity_Text_GymGuide, MSGBOX_NPC
CranewingCity_Gym_GymGuide_1:
	end

CranewingCity_Gym_GymGuide_2:
	msgbox CranewingCity_Text_GymGuidePostVictory, MSGBOX_NPC
	goto CranewingCity_Gym_GymGuide_1


CranewingCity_Gym_Man::
	trainerbattle_single TRAINER_SLADE, CranewingCity_Gym_Text_SladeIntro, CranewingCity_Gym_Text_SladeDefeated
	msgbox CranewingCity_Gym_Text_SladePostBattle, MSGBOX_AUTOCLOSE
	end


CranewingCity_Gym_Girl::
	trainerbattle_single TRAINER_LOLA, CranewingCity_Gym_Text_LolaIntro, CranewingCity_Gym_Text_LolaDefeated
	msgbox CranewingCity_Gym_Text_LolaPostBattle, MSGBOX_AUTOCLOSE
	end


CranewingCity_Gym_Froy::
	trainerbattle_single TRAINER_FROY, CranewingCity_Gym_Text_FroyIntro, CranewingCity_Gym_Text_FroyDefeated, CranewingCity_Gym_FroyDefeated, NO_MUSIC
	quest_check_reward_waiting QUEST_CHARTREE_ROCKETS
	compare VAR_RESULT, TRUE
	goto_if_eq CranewingCity_Gym_Froy_2
CranewingCity_Gym_Froy_1:
	goto_if_unset FLAG_RECEIVED_TM51, CranewingCity_Gym_Froy_5
CranewingCity_Gym_Froy_4:
	msgbox CranewingCity_Gym_Text_FroyPostBattle, MSGBOX_DEFAULT
	release
	end

CranewingCity_Gym_Froy_2:
	goto CranewingCity_Gym_RewardQuest
	goto CranewingCity_Gym_Froy_1

CranewingCity_Gym_Froy_5:
	goto CranewingCity_Gym_GiveFlare
	goto CranewingCity_Gym_Froy_4


CranewingCity_Gym_FroyDefeated:
	message CranewingCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox CranewingCity_Gym_Text_CharBadgeInfo, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_CRANEWING_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_ROUTE204_STATE, 1
	setvar VAR_0x8008, 1
	subquest_finish SUB_QUEST_GYM_1_CRANEWING
	call Common_EventScript_SetGymTrainers
	goto CranewingCity_Gym_GiveFlare
	end


CranewingCity_Gym_GiveFlare:
	giveitem ITEM_TM51_FLARE
	compare VAR_RESULT, FALSE
	compare VAR_RESULT, FALSE
	goto_if_eq CranewingCity_Gym_GiveFlare_2
CranewingCity_Gym_GiveFlare_1:
	setflag FLAG_RECEIVED_TM51
	msgbox CranewingCity_Gym_Text_FlareExplanation, MSGBOX_DEFAULT
	release
	end

CranewingCity_Gym_GiveFlare_2:
	goto Common_EventScript_ShowBagIsFull
	goto CranewingCity_Gym_GiveFlare_1


CranewingCity_Gym_RewardQuest:
	msgbox CranewingCity_Gym_Text_QuestResponse
	waitmessage
	delay 48
	playse SE_PIN
	applymovement 1, mExclamationPoint
	waitmovement 0
	msgbox CranewingCity_Gym_Text_CutExplanation
	waitmessage
	giveitem ITEM_HM01
	setflag FLAG_RECEIVED_HM01
	quest_finish QUEST_CHARTREE_ROCKETS
	release
	end


CranewingCity_Gym_Text_GymStatue::
	.string "Cranewing City Pokémon Gym$"

CranewingCity_Gym_Text_GymStatueCertified::
	.string "Cranewing City Pokémon Gym\p"
	.string "Froy's Certified Trainers:\n"
	.string "{PLAYER}$"

CranewingCity_Text_GymGuide::
	.string "Yo, how's it going?\p"
	.string "Listen, my friend!\n"
	.string "Would you like to climb the Triumph Spire?\p"
	.string "Listen, listen.\nI'm no trainer myself,\l"
	.string "but I can deal you some great advice\l"
	.string "if you're willing to listen.\pWhat do you say?\p"
	.string "Perfect!\pWe're going to be GREAT together!\p"
	.string "So listen, listen.\pThis Gym is run by Froy.\p"
	.string "You might have guessed, but he's known\n"
	.string "for using Fire-type Pokémon.\p"
	.string "The Fire-type is known for impressive\n"
	.string "damage dealing ability, but when it \l"
	.string "comes to defense, they're outclassed.\p"
	.string "Especially when it comes to Water- and\n"
	.string "Ground-type Pokémon!\p"
	.string "If you manage to take Froy down, come\n"
	.string "and see me after.\pGo get 'em, champ!$"

CranewingCity_Text_GymGuidePostVictory::
	.string "Wow! What a match!\n"
	.string "We make a heck of a team, we do!\p"
	.string "Listen, listen!\n"
	.string "Check your Trainer Card.\p"
	.string "You'll see your shiny Char Badge\n"
	.string "recorded inside of it.\p"
	.string "Congratulations!\p"
	.string "You could say you've just climbed the\n"
	.string "first step to the top of the\l"
	.string "Triump Spire!\p"
	.string "You could also say you're miles from\n"
	.string "even starting that climb…\p"
	.string "But let's look on the positive side!\n"
	.string "You're off to a fantastic start, champ!$"

CranewingCity_Gym_Text_SladeIntro::
	.string "Leader Froy runs his gym just like he\n"
	.string "runs the glass business.\p"
	.string "Absolutely no room for error!$"

CranewingCity_Gym_Text_SladeDefeated::
	.string "I think I made a mistake…$"

CranewingCity_Gym_Text_SladePostBattle::
	.string "Go on then!\p"
	.string "If anyone can stand up to Froy's\n"
	.string "exacting standards, it's you!$"

CranewingCity_Gym_Text_LolaIntro::
	.string "There's a reason Froy asked me to be\n"
	.string "the last step before him!\p"
	.string "If you thought your last fight was\n"
	.string "hard, well get ready to see a real\l"
	.string "challenge!$"

CranewingCity_Gym_Text_LolaDefeated::
	.string "You're still no match for Froy!$"

CranewingCity_Gym_Text_LolaPostBattle::
	.string "Froy's completely mastered the Fire\n"
	.string "type.\p"
	.string "He's the best there is, at Pokémon\n"
	.string "battles and at glass-making!$"

CranewingCity_Gym_Text_FroyIntro::
	.string "Froy: Ah, {PLAYER}, we meet again!\p"
	.string "As you can see, I am the Cranewing\n"
	.string "Pokémon Gym Leader.\p"
	.string "My Pokémon and I have honed our skills\n"
	.string "together making the finest glass in\l"
	.string "Caldera!\p"
	.string "Allow me to demonstrate what it looks\n"
	.string "like when you settle for nothing short\l"
	.string "of perfection!$"

CranewingCity_Gym_Text_FroyDefeated::
	.string "Froy: Well, well well…\p"
	.string "… … …ha!\p"
	.string "Ha ha ha!\p"
	.string "Incredible demonstration!\p"
	.string "It's rare that I meet someone with\n"
	.string "dedication equal to my own!\p"
	.string "As the Pokémon League's rules say, I\n"
	.string "now owe you a badge to prove your\l"
	.string "victory here.\p"
	.string "Please accept the official Pokémon\n"
	.string "League Char Badge!$"

CranewingCity_Gym_Text_FroyPostBattle::
	.string "Froy: I have no doubt that your\n"
	.string "determination will see you through the\l"
	.string "Pokémon League challenge!\p"
	.string "Battle as many Trainers as you can\n"
	.string "along the way.\p"
	.string "They're sure to have many things to\n"
	.string "teach you and your Pokémon.$"

CranewingCity_Gym_Text_ReceivedBadge::
	.string "{PLAYER} received the Char Badge\nfrom Froy.$"

CranewingCity_Gym_Text_CharBadgeInfo::
	.string "Froy: The Char Badge allows your\n"
	.string "Pokémon to use the HM move Cut outside\l"
	.string "of battle.\p"
	.string "It also means you are one step along\n"
	.string "the road to the Triumph Spire and\l"
	.string "becoming the Champion!\p"
	.string "As my thanks for a heated battle,\n"
	.string "please take this, as well.$"

CranewingCity_Gym_Text_FlareExplanation::
	.string "Froy: That Technical Machine, TM51,\n"
	.string "contains Flare.\p"
	.string "It inflicts more and more damage with\n"
	.string "each passing turn!\p"
	.string "Using a TM, you can instantly teach\n"
	.string "that move to your Pokémon!\p"
	.string "Of course TMs can be used as many times\n"
	.string "as you want, so you could be like me and\l"
	.string "teach it to all of your Pokémon!$"

CranewingCity_Gym_Text_QuestResponse::
	.string "Froy: You managed to drive off those\n"
	.string "monsters\n"
	.string "that were terrorizing my forest?\p"
	.string "Tell me everything! … … …\n"
	.string "… … …\p"
	.string "This Balfour has a great deal\n"
	.string "to answer for!\p"
	.string "You can bet they'll be hearing it from\n"
	.string "me if I get my hands on them!\p"
	.string "Team Rocket… I have a feeling this\n"
	.string "won't be the last we hear of them.$"

CranewingCity_Gym_Text_ReceiveCut::
	.string "Froy: Wait, I have something that might\n"
	.string "help you keep up!\p"
	.string "Not that I think you'll need it, of\n"
	.string "course…\p"
	.string "$"

CranewingCity_Gym_Text_CutExplanation::
	.string "Froy: This is a Hidden Machine!\n"
	.string "It's a very powerful and rare item.\p"
	.string "HMs contain moves that can be used by\n"
	.string "your Pokémon even outside of battle!\p"
	.string "Moreover, you don't even need to teach\n"
	.string "the move to your Pokémon!\p"
	.string "As long as you have the appropriate Gym\n"
	.string "Badge, an HM allows any compatible\l"
	.string "Pokémon to use the move outside of\l"
	.string "battle!\p"
	.string "Cut will let your Pokémon chop down\n"
	.string "some small trees that would block your\l"
	.string "path!\p"
	.string "Now get going!\p"
	.string "You've got a long way to go yet.\n"
	.string "Ha ha ha!$"
