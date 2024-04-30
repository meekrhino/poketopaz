Route205_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route205_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

Route205_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_ROUTE_205_STATE, 2, Route205_FlowerGuyComesOut
	.2byte 0


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


Route205_FlowerGirl::
	msgbox Route205_FlowerGirl_Text_0, MSGBOX_NPC
	end


Route205_FlowerShopGuard::
	lockall
	faceplayer
	compare VAR_ROUTE_205_STATE, 0
	goto_if_eq Route205_FlowerShopGuard_2
	msgbox Route205_FlowerShopGuard_Text_1
Route205_FlowerShopGuard_1:
	waitmessage
	closemessage
	applymovement 15, mFaceUp
	waitmovement 15
	opendoor 34, 5
	waitdooranim
	applymovement 15, mFlowerGuyEntersHouse
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerEntersHouse
	waitmovement OBJ_EVENT_ID_PLAYER
	closedoor 34, 5
	waitdooranim
	warp MAP_ROUTE205_FLOWER_SHOP, 0, 0, 0
	releaseall
	end

Route205_FlowerShopGuard_2:
	msgbox Route205_FlowerShopGuard_Text_0
	setvar VAR_ROUTE_205_STATE, 1
	goto Route205_FlowerShopGuard_1


Route205_FlowerGuyComesOut::
	lockall
	setvar VAR_ROUTE_205_STATE, 1
	delay 30
	applymovement OBJ_EVENT_ID_PLAYER, mFaceUp
	waitmovement OBJ_EVENT_ID_PLAYER
	opendoor 34, 5
	waitdooranim
	addobject 15
	setobjectxy 15, 34, 5
	msgbox Route205_FlowerGuyComesOut_Text_0
	waitmessage
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, mPlayerSlidesDown
	applymovement 15, mWalkDown
	waitmovement 15
	closedoor 34, 5
	waitdooranim
	msgbox Route205_FlowerGuyComesOut_Text_1
	waitmessage
	clearflag FLAG_HIDE_ROUTE_205_FLOWER_GUY
	releaseall
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


Route205_FlowerShop::
	msgbox Route205_FlowerShop_Text_0, MSGBOX_SIGN
	end


Route205_DEBUG::
	givemon SPECIES_FLAAFFY, 5
	givemon SPECIES_AMPHAROS, 5
	end


mFlowerGuyEntersHouse:
	walk_up
	set_invisible
	step_end

mPlayerEntersHouse:
	walk_up
	walk_up
	set_invisible
	step_end

mPlayerSlidesDown:
	lock_facing_direction
	walk_down
	unlock_facing_direction
	step_end

Route205_FlowerGirl_Text_0:
	.string "I have a friend that lives in the Kanto\n"
	.string "region.\p"
	.string "She said they have a Pokémon that's\n"
	.string "really similar to Ampure.\p"
	.string "Peek-o-something?\n"
	.string "isn't that silly?$"

Route205_FlowerShopGuard_Text_0:
	.string "Just keep moving, kid.\n"
	.string "Nothing to see here!\p"
	.string "… … …\n"
	.string "… … …\p"
	.string "Oh, who am I kidding, you're just a kid.\p"
	.string "What harm could you do?\p"
	.string "Come on in, I suppose.$"

Route205_FlowerShopGuard_Text_1:
	.string "Ah, it's you again.\p"
	.string "Please come on inside.$"

Route205_FlowerGuyComesOut_Text_0:
	.string "Excuse me, please.$"

Route205_FlowerGuyComesOut_Text_1:
	.string "Come back any time.\pJust don't spill the beans…\nErr, that is…\pKeep your face shut!\nOr… um… else!\p…How was that?$"

Route205_FlowerShop_Text_0:
	.string "Small Cottage\n"
	.string "Only For Friends$"

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

Route205_Text_DebugDefeatedEnemy1::
	.string "I'm enemy 1 and you win!$"

Route205_Text_DebugDefeatedEnemy2::
	.string "I'm enemy 2 and you win!$"
