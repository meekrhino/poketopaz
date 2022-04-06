SoftwindCity_Gym_MapScripts::
	.byte 0


SoftwindCity_Gym_GymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, SoftwindCity_Gym_GymStatue_2
	msgbox SoftwindCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
SoftwindCity_Gym_GymStatue_1:
	releaseall
	end

SoftwindCity_Gym_GymStatue_2:
	msgbox SoftwindCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto SoftwindCity_Gym_GymStatue_1


SoftwindCity_Gym_GymGuide::
	goto_if_set FLAG_BADGE02_GET, SoftwindCity_Gym_GymGuide_2
	msgbox SoftwindCity_Text_GymGuide, MSGBOX_NPC
SoftwindCity_Gym_GymGuide_1:
	end

SoftwindCity_Gym_GymGuide_2:
	msgbox SoftwindCity_Text_GymGuidePostVictory, MSGBOX_NPC
	goto SoftwindCity_Gym_GymGuide_1


SoftwindCity_Gym_Yuki::
	trainerbattle_single TRAINER_YUKI, SoftwindCity_Gym_Text_YukiIntro, SoftwindCity_Gym_Text_YukiDefeated
	msgbox SoftwindCity_Gym_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Brandyn::
	trainerbattle_single TRAINER_BRANDYN, SoftwindCity_Gym_Text_BrandynIntro, SoftwindCity_Gym_Text_BrandynDefeated
	msgbox SoftwindCity_Gym_Text_BrandynPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Nessa::
	trainerbattle_single TRAINER_NESSA, SoftwindCity_Gym_Text_NessaIntro, SoftwindCity_Gym_Text_NessaDefeated
	msgbox SoftwindCity_Gym_Text_NessaPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Gregor::
	trainerbattle_single TRAINER_GREGOR, SoftwindCity_Gym_Text_GregorIntro, SoftwindCity_Gym_Text_GregorDefeated
	msgbox SoftwindCity_Gym_Text_GregorPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Therma::
	trainerbattle_single TRAINER_THERMA, SoftwindCity_Gym_Text_ThermaIntro, SoftwindCity_Gym_Text_ThermaDefeated, SoftwindCity_Gym_ThermaDefeated, NO_MUSIC
	goto_if_unset FLAG_RECEIVED_TM56, SoftwindCity_Gym_Therma_2
SoftwindCity_Gym_Therma_1:
	msgbox SoftwindCity_Gym_Text_ThermaPostBattle, MSGBOX_AUTOCLOSE
	end

SoftwindCity_Gym_Therma_2:
	goto SoftwindCity_Gym_GiveWindwhistle
	goto SoftwindCity_Gym_Therma_1


SoftwindCity_Gym_ThermaDefeated:
	message SoftwindCity_Gym_Text_ReceivedBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox SoftwindCity_Gym_Text_GaleBadgeInfo, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_SOFTWIND_GYM
	setflag FLAG_BADGE02_GET
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	goto SoftwindCity_Gym_GiveWindwhistle
	end


SoftwindCity_Gym_GiveWindwhistle:
	giveitem ITEM_TM56_WINDWHISTLE
	compare VAR_RESULT, FALSE
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_Gym_GiveWindwhistle_2
SoftwindCity_Gym_GiveWindwhistle_1:
	setflag FLAG_RECEIVED_TM56
	msgbox SoftwindCity_Gym_Text_WindwhistleExplanation, MSGBOX_DEFAULT
	release
	end

SoftwindCity_Gym_GiveWindwhistle_2:
	goto Common_EventScript_ShowBagIsFull
	goto SoftwindCity_Gym_GiveWindwhistle_1


SoftwindCity_Gym_Text_GymStatue::
	.string "Softwind City Pokémon Gym\p"
	.string "Therma's Certified Trainers:\n"
	.string "Alisa$"

SoftwindCity_Gym_Text_GymStatueCertified::
	.string "Softwind City Pokémon Gym\p"
	.string "Therma's Certified Trainers:\n"
	.string "Alisa\l"
	.string "{PLAYER}$"

SoftwindCity_Text_GymGuide::
	.string "Yo, yo!\p"
	.string "Listen, listen. \p"
	.string "You beat Froy, but it only gets\n"
	.string "tougher from here on!\p"
	.string "Therma is as cool-headed as they\n"
	.string "come, an experienced user of the\l"
	.string "Flying-type Pokémon.\p"
	.string "They're fast, they're fierce!\n"
	.string "But listen up!\p"
	.string "Catch them by surprise--\n"
	.string "SHOCK them with Electric-type,\l"
	.string "if you will--and they'll fold like\l"
	.string "paper cranes!\p"
	.string "That's all I've got, champ!\p"
	.string "Take her down and you'll be\n"
	.string "one step closer to Triump Spire!\p"
	.string "…Figuratively speaking.$"

SoftwindCity_Text_GymGuidePostVictory::
	.string "Incredible!\p"
	.string "That's two in a row!\p"
	.string "Quite a feather in your cap if I\n"
	.string "do say so myself…\p"
	.string "And I do, at that!\p"
	.string "Keep up the great work, champ!$"

SoftwindCity_Gym_Text_YukiIntro::
	.string "Bird Pokémon make the best partners!\p"
	.string "They're strong and they grow quickly!\p"
	.string "What more could you want?$"

SoftwindCity_Gym_Text_YukiDefeated::
	.string "Wow, I guess birds aren't the only\n"
	.string "strong Pokémon!$"

SoftwindCity_Gym_Text_YukiPostBattle::
	.string "I wonder if I should think about\n"
	.string "diversifying my team…$"

SoftwindCity_Gym_Text_BrandynIntro::
	.string "What do you think of Flying-type\n"
	.string "Pokémon?\p"
	.string "This is my favorite one!$"

SoftwindCity_Gym_Text_BrandynDefeated::
	.string "Wow, I can't believe it!\n"
	.string "You beat my favorite Pokémon!$"

SoftwindCity_Gym_Text_BrandynPostBattle::
	.string "Alright, you got me.\n"
	.string "I just use that Grific because I was\l"
	.string "required to bring a Flying-type.$"

SoftwindCity_Gym_Text_NessaIntro::
	.string "I was so excited when Therma invited me\n"
	.string "to be part of her gym!\p"
	.string "I've been training this Pokémon ever\n"
	.string "since!$"

SoftwindCity_Gym_Text_NessaDefeated::
	.string "Aww… I worked so hard…$"

SoftwindCity_Gym_Text_NessaPostBattle::
	.string "I don't like teaming up with Brandyn.\p"
	.string "He says he loves it but somehow I don't\n"
	.string "believe it…$"

SoftwindCity_Gym_Text_GregorIntro::
	.string "Cumulus!\p"
	.string "Nimbus!\p"
	.string "Stratus!\p"
	.string "Cirrus!\p"
	.string "As…per…atus?\p"
	.string "I'm studying types of clouds to help me\n"
	.string "work better with my Pokémon.$"

SoftwindCity_Gym_Text_GregorDefeated::
	.string "My studying isn't going so well…$"

SoftwindCity_Gym_Text_GregorPostBattle::
	.string "No matter how much I study clouds, I\n"
	.string "can't figure out how to evolve my\l"
	.string "Cirroft!$"

SoftwindCity_Gym_Text_ThermaIntro::
	.string "Well.\n"
	.string "I'm not surprised you made it this far.\l"
	.string "I've worked with Professor Willow for\l"
	.string "years, and I trust her judgment when it\l"
	.string "comes to choosing her aids.\p"
	.string "With… one possible exception.\p"
	.string "Regardless, I am the Softwind Pokémon\n"
	.string "Gym Leader.\p"
	.string "Through careful study and dutiful\n"
	.string "preparation, I have honed my battle\l"
	.string "plan.\p"
	.string "My Pokémon will strike faster than you\n"
	.string "can blink!$"

SoftwindCity_Gym_Text_ThermaDefeated::
	.string "Remarkable!\p"
	.string "Willow has done it again.\p"
	.string "Where that woman finds these\n"
	.string "incredible students…\p"
	.string "No matter!\p"
	.string "Without a doubt you have earned this.\p"
	.string "As proof of your success, please take\n"
	.string "this official Pokémon League Badge!$"

SoftwindCity_Gym_Text_ThermaPostBattle::
	.string "I encourage you to seek solace in the\n"
	.string "colorful history of Caldera and Kirant\l"
	.string "as you travel.\p"
	.string "I do not doubt that you will travel far\n"
	.string "and learn much.\p"
	.string "As you grow stronger, strive to\n"
	.string "maintain your humility.\p"
	.string "It will be your greatest ally.\p"
	.string "Do not let yourself be drawn down the\n"
	.string "path of your predecessor.$"

SoftwindCity_Gym_Text_ReceivedBadge::
	.string "{PLAYER} received the Gale Badge\nfrom Therma.$"

SoftwindCity_Gym_Text_GaleBadgeInfo::
	.string "The Gale Badge allows your Pokémon to\n"
	.string "use the hidden move Flash outside of\l"
	.string "battle.\p"
	.string "You will need it as your journey takes\n"
	.string "you to the west, if you are to make it\l"
	.string "through Mt. Mist.\p"
	.string "Furthermore, it will allow you to raise\n"
	.string "traded Pokémon beyond level 30\l"
	.string "without fear of disobedience.\p"
	.string "As an additional reward for your\n"
	.string "exceptional battle skill, please take\l"
	.string "this as well.$"

SoftwindCity_Gym_Text_WindwhistleExplanation::
	.string "TM56 is Technical Machine that will\n"
	.string "teach your Pokémon Windwhistle.\p"
	.string "It is the tool of a cunning Pokémon\n"
	.string "Trainer.\p"
	.string "Not only will this move incapacitate\n"
	.string "your opponent with confusion, it may\l"
	.string "also weaken their defenses!\p"
	.string "The combination will doubtless leave\n"
	.string "your opponents a in desperate way.$"
