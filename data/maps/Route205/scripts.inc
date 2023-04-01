Route205_MapScripts::
	.byte 0


Route205_RichBoy::
	msgbox Route205_Text_RichBoy, MSGBOX_NPC
	end


Route205_Girl::
	msgbox Route205_Text_Girl, MSGBOX_NPC
	end


Route205_Scientist::
	msgbox Route205_Text_Scientist, MSGBOX_NPC
	end


Route205_Woman::
	msgbox Route205_Text_Woman, MSGBOX_NPC
	end


Route205_Francis::
	trainerbattle_single TRAINER_FRANCIS, Route205_Text_FrancisIntro, Route205_Text_FrancisDefeated
	msgbox Route205_Text_FrancisPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Amy::
	trainerbattle_double TRAINER_AMY_AND_ALLY, Route205_Text_AmyAndAllyIntro, Route205_Text_AmyAndAllyDefeated, Route205_Text_AmyAndAllyTooFewMons
	msgbox Route205_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Ally::
	trainerbattle_double TRAINER_AMY_AND_ALLY, Route205_Text_AmyAndAllyIntro, Route205_Text_AmyAndAllyDefeated, Route205_Text_AmyAndAllyTooFewMons
	msgbox Route205_Text_AllyPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Travis::
	trainerbattle_single TRAINER_TRAVIS, Route205_Text_TravisIntro, Route205_Text_TravisDefeated
	msgbox Route205_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Gwen::
	trainerbattle_single TRAINER_GWEN, Route205_Text_GwenIntro, Route205_Text_GwenDefeated
	msgbox Route205_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Percy::
	trainerbattle_single TRAINER_PERCY, Route205_Text_PercyIntro, Route205_Text_PercyDefeated
	msgbox Route205_Text_PercyPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Ishmael::
	trainerbattle_single TRAINER_ISHMAEL, Route205_Text_IshmaelIntro, Route205_Text_IshmaelDefeated
	msgbox Route205_Text_IshmaelPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Text_RichBoy::
	.string "My friend and I are arguing about what\n"
	.string "Therma will bring back this time.\p"
	.string "I just know it's going to be new\n"
	.string "histories for the library!$"

Route205_Text_Girl::
	.string "My friend just cannot stop gossiping\n"
	.string "about what Therma will bring back.\p"
	.string "But since you asked, I am certain it will\n"
	.string "be new research papers!$"

Route205_Text_Scientist::
	.string "The best time of every season is\n"
	.string "waiting for Therma's new books!\p"
	.string "I am giddy as a Gashawk right now!$"

Route205_Text_Woman::
	.string "I've been waiting to challenge Therma\n"
	.string "since before she left!\p"
	.string "The first time I battled her she won\n"
	.string "handily…\p"
	.string "She's incredibly strong!\p"
	.string "This time is going to be different,\n"
	.string "though!$"

Route205_Text_FrancisIntro::
	.string "My teacher has been talking about\n"
	.string "Pokémon adaptation in Caldera.\p"
	.string "Apparently my Pokémon came from far\n"
	.string "away a long time ago!$"

Route205_Text_FrancisDefeated::
	.string "I guess Lotad adapted to its\n"
	.string "environment, but not to battle…$"

Route205_Text_FrancisPostBattle::
	.string "They say Lotad are actually water type\n"
	.string "in other regions.\p"
	.string "How weird is that?$"

Route205_Text_AmyAndAllyIntro::
	.string "Hehe!\p"
	.string "Wanna see some cute Pokémon?$"

Route205_Text_AmyAndAllyDefeated::
	.string "W…why would you hurt our cute Pokémon?$"

Route205_Text_AmyPostBattle::
	.string "It's okay…$"

Route205_Text_AllyPostBattle::
	.string "You hurt Amy's feelings!\p"
	.string "Why would you do that?$"

Route205_Text_AmyAndAllyTooFewMons::
	.string "Only one Pokémon?\n"
	.string "Ugh, lame.\p"
	.string "We only battle together, so now you\n"
	.string "can't see our cute Pokémon.$"

Route205_Text_TravisIntro::
	.string "Huff…puff…\n"
	.string "I feel unstoppable right now!\p"
	.string "Bring it on!$"

Route205_Text_TravisDefeated::
	.string "I lost, but that won't keep me down!$"

Route205_Text_TravisPostBattle::
	.string "I'm just taking a quick break to catch\n"
	.string "my breath.\p"
	.string "We had a great match, didn't we?$"

Route205_Text_GwenIntro::
	.string "What a beautiful day!\p"
	.string "Would you care to sit and enjoy nature\n"
	.string "with me?$"

Route205_Text_GwenDefeated::
	.string "So relaxing!\p"
	.string "It's hard to be down from a loss when\n"
	.string "surrounded by such beauty.$"

Route205_Text_GwenPostBattle::
	.string "I love to watch the Jalsida gather\n"
	.string "nectar from the flowers.\p"
	.string "Nature is magical!$"

Route205_Text_PercyIntro::
	.string "I just evolved my first Pokémon ever!\p"
	.string "You'll see what that means for you!$"

Route205_Text_PercyDefeated::
	.string "There is no way I lost that.\n"
	.string "You must have cheated.$"

Route205_Text_PercyPostBattle::
	.string "My mom bought me so many Rare Candies\n"
	.string "to evolve Firrel and I still lost?\p"
	.string "Maybe…\n"
	.string "Nahhh.\p"
	.string "I just need more!$"

Route205_Text_IshmaelIntro::
	.string "Ahoy there!\p"
	.string "I finally managed to find the holy grail\n"
	.string "of all fisherman.\p"
	.string "It's worth its weight in gold!$"

Route205_Text_IshmaelDefeated::
	.string "I didn't say it was strong, did I?$"

Route205_Text_IshmaelPostBattle::
	.string "Where did I catch it?\n"
	.string "Hah!\p"
	.string "Like I would spill my secrets with a\n"
	.string "random child?\p"
	.string "You've probably never heard of the\n"
	.string "place anyway.$"
