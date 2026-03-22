SoftwindCity_Gym_MapScripts::
	.byte 0


SoftwindCity_Gym_GymStatue::
# 20 "data/maps/SoftwindCity_Gym/scripts.pory"
	lockall
# 21 "data/maps/SoftwindCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, SoftwindCity_Gym_GymStatue_2
# 25 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
SoftwindCity_Gym_GymStatue_1:
# 27 "data/maps/SoftwindCity_Gym/scripts.pory"
	releaseall
	end

SoftwindCity_Gym_GymStatue_2:
# 22 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	goto SoftwindCity_Gym_GymStatue_1


SoftwindCity_Gym_GymGuide::
# 32 "data/maps/SoftwindCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, SoftwindCity_Gym_GymGuide_2
# 36 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Text_GymGuide, MSGBOX_NPC
SoftwindCity_Gym_GymGuide_1:
	end

SoftwindCity_Gym_GymGuide_2:
# 33 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Text_GymGuidePostVictory, MSGBOX_NPC
	goto SoftwindCity_Gym_GymGuide_1


SoftwindCity_Gym_Yuki::
# 42 "data/maps/SoftwindCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_YUKI, SoftwindCity_Gym_Text_YukiIntro, SoftwindCity_Gym_Text_YukiDefeated
# 43 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_YukiPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Brandyn::
# 48 "data/maps/SoftwindCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRANDYN, SoftwindCity_Gym_Text_BrandynIntro, SoftwindCity_Gym_Text_BrandynDefeated
# 49 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_BrandynPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Nessa::
# 54 "data/maps/SoftwindCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_NESSA, SoftwindCity_Gym_Text_NessaIntro, SoftwindCity_Gym_Text_NessaDefeated
# 55 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_NessaPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Gregor::
# 60 "data/maps/SoftwindCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GREGOR, SoftwindCity_Gym_Text_GregorIntro, SoftwindCity_Gym_Text_GregorDefeated
# 61 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_GregorPostBattle, MSGBOX_AUTOCLOSE
	end


SoftwindCity_Gym_Therma::
# 66 "data/maps/SoftwindCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_THERMA, SoftwindCity_Gym_Text_ThermaIntro, SoftwindCity_Gym_Text_ThermaDefeated, SoftwindCity_Gym_ThermaDefeated, NO_MUSIC
# 67 "data/maps/SoftwindCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_WINDWHISTLE, SoftwindCity_Gym_Therma_2
SoftwindCity_Gym_Therma_1:
# 70 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_ThermaPostBattle, MSGBOX_AUTOCLOSE
	end

SoftwindCity_Gym_Therma_2:
# 68 "data/maps/SoftwindCity_Gym/scripts.pory"
	goto SoftwindCity_Gym_GiveWindwhistle
	goto SoftwindCity_Gym_Therma_1


SoftwindCity_Gym_ThermaDefeated:
# 78 "data/maps/SoftwindCity_Gym/scripts.pory"
	message SoftwindCity_Gym_Text_ReceivedBadge
# 79 "data/maps/SoftwindCity_Gym/scripts.pory"
	waitmessage
# 80 "data/maps/SoftwindCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 81 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_GaleBadgeInfo, MSGBOX_DEFAULT
# 82 "data/maps/SoftwindCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_SOFTWIND_GYM
# 83 "data/maps/SoftwindCity_Gym/scripts.pory"
	setflag FLAG_BADGE02_GET
# 84 "data/maps/SoftwindCity_Gym/scripts.pory"
	setvar VAR_SOFTWIND_CITY_STATE, 5
# 85 "data/maps/SoftwindCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_SOFTWIND_CITY_WILLOW
# 86 "data/maps/SoftwindCity_Gym/scripts.pory"
	subquest_finish SUB_QUEST_GYM_2_SOFTWIND
# 87 "data/maps/SoftwindCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 88 "data/maps/SoftwindCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 89 "data/maps/SoftwindCity_Gym/scripts.pory"
	goto SoftwindCity_Gym_GiveWindwhistle
	end


SoftwindCity_Gym_GiveWindwhistle:
# 94 "data/maps/SoftwindCity_Gym/scripts.pory"
	giveitem ITEM_TM_WINDWHISTLE
# 95 "data/maps/SoftwindCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
# 96 "data/maps/SoftwindCity_Gym/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_Gym_GiveWindwhistle_2
SoftwindCity_Gym_GiveWindwhistle_1:
# 99 "data/maps/SoftwindCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_WINDWHISTLE
# 100 "data/maps/SoftwindCity_Gym/scripts.pory"
	msgbox SoftwindCity_Gym_Text_WindwhistleExplanation, MSGBOX_DEFAULT
# 101 "data/maps/SoftwindCity_Gym/scripts.pory"
	release
	end

SoftwindCity_Gym_GiveWindwhistle_2:
# 97 "data/maps/SoftwindCity_Gym/scripts.pory"
	goto Common_EventScript_ShowBagIsFull
	goto SoftwindCity_Gym_GiveWindwhistle_1


SoftwindCity_Gym_Text_GymStatue::
# 108 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Softwind City Pokémon Gym\p"
	.string "Therma's Certified Trainers:\n"
	.string "Alisa$"

SoftwindCity_Gym_Text_GymStatueCertified::
# 114 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Softwind City Pokémon Gym\p"
	.string "Therma's Certified Trainers:\n"
	.string "Alisa\l"
	.string "{PLAYER}$"

SoftwindCity_Text_GymGuide::
# 121 "data/maps/SoftwindCity_Gym/scripts.pory"
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
# 141 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Incredible!\p"
	.string "That's two in a row!\p"
	.string "Quite a feather in your cap if I\n"
	.string "do say so myself…\p"
	.string "And I do, at that!\p"
	.string "Keep up the great work, champ!$"

SoftwindCity_Gym_Text_YukiIntro::
# 150 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Bird Pokémon make the best partners!\p"
	.string "They're strong and they grow quickly!\p"
	.string "What more could you want?$"

SoftwindCity_Gym_Text_YukiDefeated::
# 156 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Wow, I guess birds aren't the only\n"
	.string "strong Pokémon!$"

SoftwindCity_Gym_Text_YukiPostBattle::
# 162 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "I wonder if I should think about\n"
	.string "diversifying my team…$"

SoftwindCity_Gym_Text_BrandynIntro::
# 168 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "What do you think of Flying-type\n"
	.string "Pokémon?\p"
	.string "This is my favorite one!$"

SoftwindCity_Gym_Text_BrandynDefeated::
# 174 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Wow, I can't believe it!\n"
	.string "You beat my favorite Pokémon!$"

SoftwindCity_Gym_Text_BrandynPostBattle::
# 180 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Alright, you got me.\n"
	.string "I just use that Grific because I was\l"
	.string "required to bring a Flying-type.$"

SoftwindCity_Gym_Text_NessaIntro::
# 186 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "I was so excited when Therma invited me\n"
	.string "to be part of her gym!\p"
	.string "I've been training this Pokémon ever\n"
	.string "since!$"

SoftwindCity_Gym_Text_NessaDefeated::
# 192 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Aww… I worked so hard…$"

SoftwindCity_Gym_Text_NessaPostBattle::
# 198 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "I don't like teaming up with Brandyn.\p"
	.string "He says he loves it but somehow I don't\n"
	.string "believe it…$"

SoftwindCity_Gym_Text_GregorIntro::
# 204 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Cumulus!\p"
	.string "Nimbus!\p"
	.string "Stratus!\p"
	.string "Cirrus!\p"
	.string "As…per…atus?\p"
	.string "I'm studying types of clouds to help me\n"
	.string "work better with my Pokémon.$"

SoftwindCity_Gym_Text_GregorDefeated::
# 211 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "My studying isn't going so well…$"

SoftwindCity_Gym_Text_GregorPostBattle::
# 217 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "No matter how much I study clouds, I\n"
	.string "can't figure out how to evolve my\l"
	.string "Cirroft!$"

SoftwindCity_Gym_Text_ThermaIntro::
# 223 "data/maps/SoftwindCity_Gym/scripts.pory"
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
# 239 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "Remarkable!\p"
	.string "Willow has done it again.\p"
	.string "Where that woman finds these\n"
	.string "incredible students…\p"
	.string "No matter!\p"
	.string "Without a doubt you have earned this.\p"
	.string "As proof of your success, please take\n"
	.string "this official Pokémon League Badge!$"

SoftwindCity_Gym_Text_ThermaPostBattle::
# 251 "data/maps/SoftwindCity_Gym/scripts.pory"
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
# 263 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "{PLAYER} received the Gale Badge\nfrom Therma.$"

SoftwindCity_Gym_Text_GaleBadgeInfo::
# 267 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "The Gale Badge allows your Pokémon to\n"
	.string "use the hidden move Flash outside of\l"
	.string "battle.\p"
	.string "You will need it as your journey takes\n"
	.string "you to the west, if you are to make it\l"
	.string "through Mt. Mist.\p"
	.string "Furthermore, it will allow you to raise\n"
	.string "traded Pokémon beyond level 30 without\l"
	.string "fear of disobedience.\p"
	.string "As an additional reward for your\n"
	.string "exceptional battle skill, please take\l"
	.string "this as well.$"

SoftwindCity_Gym_Text_WindwhistleExplanation::
# 281 "data/maps/SoftwindCity_Gym/scripts.pory"
	.string "TM56 is Technical Machine that will\n"
	.string "teach your Pokémon Windwhistle.\p"
	.string "It is the tool of a cunning Pokémon\n"
	.string "Trainer.\p"
	.string "Not only will this move incapacitate\n"
	.string "your opponent with confusion, it may\l"
	.string "also weaken their defenses!\p"
	.string "The combination will doubtless leave\n"
	.string "your opponents a in desperate way.$"
