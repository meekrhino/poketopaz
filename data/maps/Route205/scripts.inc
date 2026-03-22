Route205_MapScripts::
# 16 "data/maps/Route205/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route205_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route205_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 17 "data/maps/Route205/scripts.pory"
	map_script_2 VAR_ROUTE_205_STATE, 2, Route205_FlowerGuyComesOut
	.2byte 0


Route205_RichBoy::
# 25 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_RichBoy, MSGBOX_NPC
	end


Route205_Girl::
# 30 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_Girl, MSGBOX_NPC
	end


Route205_Scientist::
# 35 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_Scientist, MSGBOX_NPC
	end


Route205_Woman::
# 40 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_Woman, MSGBOX_NPC
	end


Route205_FlowerGirl::
# 45 "data/maps/Route205/scripts.pory"
	msgbox Route205_FlowerGirl_Text_0, MSGBOX_NPC
	end


Route205_FlowerShopGuard::
# 50 "data/maps/Route205/scripts.pory"
	lockall
# 51 "data/maps/Route205/scripts.pory"
	faceplayer
# 52 "data/maps/Route205/scripts.pory"
	compare VAR_ROUTE_205_STATE, 0
	goto_if_eq Route205_FlowerShopGuard_2
# 57 "data/maps/Route205/scripts.pory"
	msgbox Route205_FlowerShopGuard_Text_1
Route205_FlowerShopGuard_1:
# 59 "data/maps/Route205/scripts.pory"
	waitmessage
# 60 "data/maps/Route205/scripts.pory"
	closemessage
# 61 "data/maps/Route205/scripts.pory"
	applymovement 15, mFaceUp
# 62 "data/maps/Route205/scripts.pory"
	waitmovement 15
# 63 "data/maps/Route205/scripts.pory"
	opendoor 34, 5
# 64 "data/maps/Route205/scripts.pory"
	waitdooranim
# 65 "data/maps/Route205/scripts.pory"
	applymovement 15, mFlowerGuyEntersHouse
# 66 "data/maps/Route205/scripts.pory"
	delay 30
# 67 "data/maps/Route205/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersHouse
# 68 "data/maps/Route205/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 69 "data/maps/Route205/scripts.pory"
	closedoor 34, 5
# 70 "data/maps/Route205/scripts.pory"
	waitdooranim
# 71 "data/maps/Route205/scripts.pory"
	warp MAP_ROUTE205_FLOWER_SHOP, 0, 0, 0
# 72 "data/maps/Route205/scripts.pory"
	releaseall
	end

Route205_FlowerShopGuard_2:
# 53 "data/maps/Route205/scripts.pory"
	msgbox Route205_FlowerShopGuard_Text_0
# 54 "data/maps/Route205/scripts.pory"
	setvar VAR_ROUTE_205_STATE, 1
	goto Route205_FlowerShopGuard_1


Route205_FlowerGuyComesOut::
# 77 "data/maps/Route205/scripts.pory"
	lockall
# 78 "data/maps/Route205/scripts.pory"
	setvar VAR_ROUTE_205_STATE, 1
# 79 "data/maps/Route205/scripts.pory"
	delay 30
# 80 "data/maps/Route205/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
# 81 "data/maps/Route205/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 82 "data/maps/Route205/scripts.pory"
	opendoor 34, 5
# 83 "data/maps/Route205/scripts.pory"
	waitdooranim
# 84 "data/maps/Route205/scripts.pory"
	addobject 15
# 85 "data/maps/Route205/scripts.pory"
	setobjectxy 15, 34, 5
# 86 "data/maps/Route205/scripts.pory"
	msgbox Route205_FlowerGuyComesOut_Text_0
# 87 "data/maps/Route205/scripts.pory"
	waitmessage
# 88 "data/maps/Route205/scripts.pory"
	closemessage
# 89 "data/maps/Route205/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerSlidesDown
# 90 "data/maps/Route205/scripts.pory"
	applymovement 15, mWalkDown
# 91 "data/maps/Route205/scripts.pory"
	waitmovement 15
# 92 "data/maps/Route205/scripts.pory"
	closedoor 34, 5
# 93 "data/maps/Route205/scripts.pory"
	waitdooranim
# 94 "data/maps/Route205/scripts.pory"
	msgbox Route205_FlowerGuyComesOut_Text_1
# 95 "data/maps/Route205/scripts.pory"
	waitmessage
# 96 "data/maps/Route205/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_205_FLOWER_GUY
# 97 "data/maps/Route205/scripts.pory"
	releaseall
	end


Route205_Francis::
# 102 "data/maps/Route205/scripts.pory"
	trainerbattle_single TRAINER_FRANCIS, Route205_Text_FrancisIntro, Route205_Text_FrancisDefeated
# 103 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_FrancisPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Amy::
# 108 "data/maps/Route205/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_ALLY, Route205_Text_AmyAndAllyIntro, Route205_Text_AmyAndAllyDefeated, Route205_Text_AmyAndAllyTooFewMons
# 109 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Ally::
# 114 "data/maps/Route205/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_ALLY, Route205_Text_AmyAndAllyIntro, Route205_Text_AmyAndAllyDefeated, Route205_Text_AmyAndAllyTooFewMons
# 115 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_AllyPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Travis::
# 120 "data/maps/Route205/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route205_Text_TravisIntro, Route205_Text_TravisDefeated
# 121 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Gwen::
# 126 "data/maps/Route205/scripts.pory"
	trainerbattle_single TRAINER_GWEN, Route205_Text_GwenIntro, Route205_Text_GwenDefeated
# 127 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_GwenPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Percy::
# 132 "data/maps/Route205/scripts.pory"
	trainerbattle_single TRAINER_PERCY, Route205_Text_PercyIntro, Route205_Text_PercyDefeated
# 133 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_PercyPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_Ishmael::
# 138 "data/maps/Route205/scripts.pory"
	trainerbattle_single TRAINER_ISHMAEL, Route205_Text_IshmaelIntro, Route205_Text_IshmaelDefeated
# 139 "data/maps/Route205/scripts.pory"
	msgbox Route205_Text_IshmaelPostBattle, MSGBOX_AUTOCLOSE
	end


Route205_FlowerShop::
# 144 "data/maps/Route205/scripts.pory"
	msgbox Route205_FlowerShop_Text_0, MSGBOX_SIGN
	end


Route205_DEBUG::
# 149 "data/maps/Route205/scripts.pory"
	givemon SPECIES_WOLFROST, 5
# 150 "data/maps/Route205/scripts.pory"
	givemon SPECIES_TUNDROLF, 5
	end


# 329 "data/maps/Route205/scripts.pory"
mFlowerGuyEntersHouse:
# 330 "data/maps/Route205/scripts.pory"
	walk_up
# 331 "data/maps/Route205/scripts.pory"
	set_invisible
	step_end

# 334 "data/maps/Route205/scripts.pory"
mPlayerEntersHouse:
# 335 "data/maps/Route205/scripts.pory"
	walk_up
# 335 "data/maps/Route205/scripts.pory"
	walk_up
# 336 "data/maps/Route205/scripts.pory"
	set_invisible
	step_end

# 339 "data/maps/Route205/scripts.pory"
mPlayerSlidesDown:
# 340 "data/maps/Route205/scripts.pory"
	lock_facing_direction
# 341 "data/maps/Route205/scripts.pory"
	walk_down
# 342 "data/maps/Route205/scripts.pory"
	unlock_facing_direction
	step_end

Route205_FlowerGirl_Text_0:
# 45 "data/maps/Route205/scripts.pory"
	.string "I have a friend that lives in the Kanto\n"
	.string "region.\p"
	.string "She said they have a Pokémon that's\n"
	.string "really similar to Ampure.\p"
	.string "Peek-o-something?\n"
	.string "isn't that silly?$"

Route205_FlowerShopGuard_Text_0:
# 53 "data/maps/Route205/scripts.pory"
	.string "Just keep moving, kid.\n"
	.string "Nothing to see here!\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "Oh, who am I kidding, you're just a kid.\p"
	.string "What harm could you do?\p"
	.string "Come on in, I suppose.$"

Route205_FlowerShopGuard_Text_1:
# 57 "data/maps/Route205/scripts.pory"
	.string "Ah, it's you again.\p"
	.string "Please come on inside.$"

Route205_FlowerGuyComesOut_Text_0:
# 86 "data/maps/Route205/scripts.pory"
	.string "Excuse me, please.$"

Route205_FlowerGuyComesOut_Text_1:
# 94 "data/maps/Route205/scripts.pory"
	.string "Come back any time.\pJust don't spill the beans…\nErr, that is…\pKeep your face shut!\nOr… um… else!\p…How was that?$"

Route205_FlowerShop_Text_0:
# 144 "data/maps/Route205/scripts.pory"
	.string "Small Cottage\n"
	.string "Only For Friends$"

Route205_Text_RichBoy::
# 157 "data/maps/Route205/scripts.pory"
	.string "My friend and I are arguing about what\n"
	.string "Therma will bring back this time.\p"
	.string "I just know it's going to be new\n"
	.string "histories for the library!$"

Route205_Text_Girl::
# 166 "data/maps/Route205/scripts.pory"
	.string "My friend just cannot stop gossiping\n"
	.string "about what Therma will bring back.\p"
	.string "But since you asked, I am certain it will\n"
	.string "be new research papers!$"

Route205_Text_Scientist::
# 175 "data/maps/Route205/scripts.pory"
	.string "The best time of every season is\n"
	.string "waiting for Therma's new books!\p"
	.string "I am giddy as a Gashawk right now!$"

Route205_Text_Woman::
# 183 "data/maps/Route205/scripts.pory"
	.string "I've been waiting to challenge Therma\n"
	.string "since before she left!\p"
	.string "The first time I battled her she won\n"
	.string "handily…\p"
	.string "She's incredibly strong!\p"
	.string "This time is going to be different,\n"
	.string "though!$"

Route205_Text_FrancisIntro::
# 193 "data/maps/Route205/scripts.pory"
	.string "My teacher has been talking about\n"
	.string "Pokémon adaptation in Caldera.\p"
	.string "Apparently my Pokémon came from far\n"
	.string "away a long time ago!$"

Route205_Text_FrancisDefeated::
# 199 "data/maps/Route205/scripts.pory"
	.string "I guess Lotad adapted to its\n"
	.string "environment, but not to battle…$"

Route205_Text_FrancisPostBattle::
# 205 "data/maps/Route205/scripts.pory"
	.string "They say Lotad are actually water type\n"
	.string "in other regions.\p"
	.string "How weird is that?$"

Route205_Text_AmyAndAllyIntro::
# 211 "data/maps/Route205/scripts.pory"
	.string "Hehe!\p"
	.string "Wanna see some cute Pokémon?$"

Route205_Text_AmyAndAllyDefeated::
# 217 "data/maps/Route205/scripts.pory"
	.string "W…why would you hurt our cute Pokémon?$"

Route205_Text_AmyPostBattle::
# 223 "data/maps/Route205/scripts.pory"
	.string "It's okay…$"

Route205_Text_AllyPostBattle::
# 229 "data/maps/Route205/scripts.pory"
	.string "You hurt Amy's feelings!\p"
	.string "Why would you do that?$"

Route205_Text_AmyAndAllyTooFewMons::
# 235 "data/maps/Route205/scripts.pory"
	.string "Only one Pokémon?\n"
	.string "Ugh, lame.\p"
	.string "We only battle together, so now you\n"
	.string "can't see our cute Pokémon.$"

Route205_Text_TravisIntro::
# 241 "data/maps/Route205/scripts.pory"
	.string "Huff…puff…\n"
	.string "I feel unstoppable right now!\p"
	.string "Bring it on!$"

Route205_Text_TravisDefeated::
# 247 "data/maps/Route205/scripts.pory"
	.string "I lost, but that won't keep me down!$"

Route205_Text_TravisPostBattle::
# 253 "data/maps/Route205/scripts.pory"
	.string "I'm just taking a quick break to catch\n"
	.string "my breath.\p"
	.string "We had a great match, didn't we?$"

Route205_Text_GwenIntro::
# 259 "data/maps/Route205/scripts.pory"
	.string "What a beautiful day!\p"
	.string "Would you care to sit and enjoy nature\n"
	.string "with me?$"

Route205_Text_GwenDefeated::
# 265 "data/maps/Route205/scripts.pory"
	.string "So relaxing!\p"
	.string "It's hard to be down from a loss when\n"
	.string "surrounded by such beauty.$"

Route205_Text_GwenPostBattle::
# 271 "data/maps/Route205/scripts.pory"
	.string "I love to watch the Jalsida gather\n"
	.string "nectar from the flowers.\p"
	.string "Nature is magical!$"

Route205_Text_PercyIntro::
# 277 "data/maps/Route205/scripts.pory"
	.string "I just evolved my first Pokémon ever!\p"
	.string "You'll see what that means for you!$"

Route205_Text_PercyDefeated::
# 283 "data/maps/Route205/scripts.pory"
	.string "There is no way I lost that.\n"
	.string "You must have cheated.$"

Route205_Text_PercyPostBattle::
# 289 "data/maps/Route205/scripts.pory"
	.string "My mom bought me so many Rare Candies\n"
	.string "to evolve Firrel and I still lost?\p"
	.string "Maybe…\n"
	.string "Nahhh.\p"
	.string "I just need more!$"

Route205_Text_IshmaelIntro::
# 295 "data/maps/Route205/scripts.pory"
	.string "Ahoy there!\p"
	.string "I finally managed to find the holy grail\n"
	.string "of all fisherman.\p"
	.string "It's worth its weight in gold!$"

Route205_Text_IshmaelDefeated::
# 301 "data/maps/Route205/scripts.pory"
	.string "I didn't say it was strong, did I?$"

Route205_Text_IshmaelPostBattle::
# 307 "data/maps/Route205/scripts.pory"
	.string "Where did I catch it?\n"
	.string "Hah!\p"
	.string "Like I would spill my secrets with a\n"
	.string "random child?\p"
	.string "You've probably never heard of the\n"
	.string "place anyway.$"

Route205_Text_DebugDefeatedEnemy1::
# 313 "data/maps/Route205/scripts.pory"
	.string "I'm enemy 1 and you win!$"

Route205_Text_DebugDefeatedEnemy2::
# 319 "data/maps/Route205/scripts.pory"
	.string "I'm enemy 2 and you win!$"
