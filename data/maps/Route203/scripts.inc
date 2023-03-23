Route203_MapScripts::
	.byte 0


Route203_RouteSignSoftwindCity::
	msgbox Route203_RouteSignSoftwindCity_Text_0, MSGBOX_SIGN
	end


Route203_RouteSignChartreeForest::
	msgbox Route203_RouteSignChartreeForest_Text_0, MSGBOX_SIGN
	end


Route203_RouteSignFarmhouse::
	msgbox Route203_RouteSignFarmhouse_Text_0, MSGBOX_SIGN
	end


Route203_FarmhouseMailbox::
	msgbox Text_OtherMailbox, MSGBOX_SIGN
	end


Route203_LittleBoy::
	msgbox Route203_Text_LittleBoy, MSGBOX_NPC
	end


Route203_Bard::
	msgbox Route203_Text_Bard, MSGBOX_NPC
	end


Route203_Althlete::
	trainerbattle_single TRAINER_REED, Route203_Text_ReedIntro, Route203_Text_ReedDefeated
	msgbox Route203_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Youngster::
	trainerbattle_single TRAINER_RYAN, Route203_Text_RyanIntro, Route203_Text_RyanDefeated
	msgbox Route203_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Fisherman::
	trainerbattle_single TRAINER_ALBERTO, Route203_Text_AlbertoIntro, Route203_Text_AlbertoDefeated
	msgbox Route203_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Camper::
	trainerbattle_single TRAINER_CHARLIE, Route203_Text_CharlieIntro, Route203_Text_CharlieDefeated
	msgbox Route203_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Hiker::
	trainerbattle_single TRAINER_CLIFTON, Route203_Text_CliftonIntro, Route203_Text_CliftonDefeated
	msgbox Route203_Text_CliftonPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_FarmerLadyNoticesYou::
	lockall
	setvar VAR_ROUTE_203_STATE, 1
	delay 20
	playse SE_PIN
	applymovement 11, mLookRightStartled
	waitmovement 0
	applymovement 11, mFarmerLadyApproaches
	waitmovement 0
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
	compare VAR_TEMP_0, 22
	goto_if_eq Route203_FarmerLadyNoticesYou_2
Route203_FarmerLadyNoticesYou_1:
	msgbox Route203_Text_FarmerQuestIntro
	waitmessage
	applymovement 11, mFaceLeft
	waitmovement 0
	msgbox Route203_Text_FarmerQuestConsider
	waitmessage
	delay 30
	compare VAR_TEMP_0, 22
	goto_if_eq Route203_FarmerLadyNoticesYou_5
	applymovement 11, mFaceRight
Route203_FarmerLadyNoticesYou_4:
	waitmovement 0
	quest_reveal QUEST_MOOCALF_ORPHAN
	msgbox Route203_Text_FarmerQuestAsk, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route203_FarmerLadyNoticesYou_9
	msgbox Route203_Text_FarmerQuestRejected
	waitmessage
	closemessage
Route203_FarmerLadyNoticesYou_8:
	applymovement 11, mFarmerLadyWalksBack
	delay 16
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
	waitmovement 11
	releaseall
	end

Route203_FarmerLadyNoticesYou_2:
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
	applymovement 11, mFaceUp
	waitmovement 0
	goto Route203_FarmerLadyNoticesYou_1

Route203_FarmerLadyNoticesYou_5:
	applymovement 11, mFaceUp
	goto Route203_FarmerLadyNoticesYou_4

Route203_FarmerLadyNoticesYou_9:
	quest_start QUEST_MOOCALF_ORPHAN
	msgbox Route203_Text_FarmerQuestThankYou
	waitmessage
	closemessage
	goto Route203_FarmerLadyNoticesYou_8


Route203_FarmerLady::
	lockall
	faceplayer
	quest_check_finished QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_FarmerLady_2
	checkitem ITEM_MEDICINE_MILK, 1
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_FarmerLady_9
Route203_FarmerLady_8:
	quest_check_started QUEST_MOOCALF_ORPHAN
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_FarmerLady_11
	msgbox Route203_Text_FarmerQuestSecondChance, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route203_FarmerLady_14
	msgbox Route203_FarmerLady_Text_1
	waitmessage
Route203_FarmerLady_1:
	releaseall
	end

Route203_FarmerLady_2:
	compare VAR_ROUTE_203_STATE, 2
	goto_if_eq Route203_FarmerLady_5
	goto Route203_FarmerLadyGiveMoocalfStandalone
	goto Route203_FarmerLady_1

Route203_FarmerLady_5:
	msgbox Route203_Text_FarmerQuestFinished, MSGBOX_NPC
	goto Route203_FarmerLady_1

Route203_FarmerLady_9:
	goto Route203_FarmerLadyResolveQuest
	goto Route203_FarmerLady_8

Route203_FarmerLady_11:
	msgbox Route203_Text_FarmerQuestInProgress, MSGBOX_NPC
	goto Route203_FarmerLady_1

Route203_FarmerLady_14:
	quest_start QUEST_MOOCALF_ORPHAN
	msgbox Route203_FarmerLady_Text_0
	waitmessage
	goto Route203_FarmerLady_1


Route203_FarmerLadyResolveQuest::
	lockall
	quest_set_reward_waiting QUEST_MOOCALF_ORPHAN
	msgbox Route203_Text_FarmerQuestTurnIn
	waitmessage
	applymovement 11, mFaceUp
	waitmovement 0
	opendoor 17, 5
	waitdooranim
	applymovement 11, mFarmerLadyEntersHouse
	waitmovement 0
	closedoor 17, 5
	quest_finish QUEST_MOOCALF_ORPHAN
	delay 120
	opendoor 17, 5
	waitdooranim
	applymovement 11, mFarmerLadyExitsHouse
	waitmovement 0
	closedoor 17, 5
	goto Route203_FarmerLadyGiveMoocalfStandalone
	end


Route203_FarmerLadyGiveMoocalfStandalone::
	lockall
	msgbox Route203_Text_FarmQuestGiveMoocalf
	waitmessage
	goto Route203_FarmerLadyGiveMoocalf
	return


Route203_FarmerLadyGiveMoocalf::
	setvar VAR_TEMP_1, SPECIES_MOOCALF
	givemon SPECIES_MOOCALF, 7
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route203_FarmerLadyGiveMoocalf_2
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route203_FarmerLadyGiveMoocalf_3
Route203_FarmerLadyGiveMoocalf_1:
	goto Common_EventScript_NoMoreRoomForPokemon
	end

Route203_FarmerLadyGiveMoocalf_2:
	goto Route203_FarmerLadyGiveMoocalfParty
	goto Route203_FarmerLadyGiveMoocalf_1

Route203_FarmerLadyGiveMoocalf_3:
	goto Route203_FarmerLadyGiveMoocalfPC
	goto Route203_FarmerLadyGiveMoocalf_1


Route203_FarmerLadyGiveMoocalfParty::
	call Route203_FarmerLadyGiveMoocalfFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route203_FarmerLadyGiveMoocalfParty_2
Route203_FarmerLadyGiveMoocalfParty_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto Route203_FarmerLadyGiveMoocalfEnd
	end

Route203_FarmerLadyGiveMoocalfParty_2:
	goto Route203_FarmerLadyGiveMoocalfEnd
	goto Route203_FarmerLadyGiveMoocalfParty_1


Route203_FarmerLadyGiveMoocalfPC::
	call Route203_FarmerLadyGiveMoocalfFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq Route203_FarmerLadyGiveMoocalfPC_2
Route203_FarmerLadyGiveMoocalfPC_1:
	call Common_EventScript_NameReceivedBoxMon
	goto Route203_FarmerLadyGiveMoocalfTransferredToPC
	end

Route203_FarmerLadyGiveMoocalfPC_2:
	goto Route203_FarmerLadyGiveMoocalfTransferredToPC
	goto Route203_FarmerLadyGiveMoocalfPC_1


Route203_FarmerLadyGiveMoocalfTransferredToPC::
	call Common_EventScript_TransferredToPC
	goto Route203_FarmerLadyGiveMoocalfEnd
	end


Route203_FarmerLadyGiveMoocalfFanfare::
	bufferspeciesname STR_VAR_2, SPECIES_MOOCALF
	playfanfare MUS_OBTAIN_ITEM
	message Route203_Text_ReceivedMoocalf
	waitmessage
	waitfanfare
	bufferspeciesname STR_VAR_1, SPECIES_MOOCALF
	return


Route203_FarmerLadyGiveMoocalfEnd::
	setvar VAR_ROUTE_203_STATE, 2
	releaseall
	end


mFarmerLadyApproaches:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

mFarmerLadyWalksBack:
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_left
	walk_slow_up
	delay_16
	face_down
	step_end

mFarmerLadyEntersHouse:
	walk_up
	set_invisible
	step_end

mFarmerLadyExitsHouse:
	set_visible
	walk_down
	step_end

Route203_RouteSignSoftwindCity_Text_0:
	.string "Route 203\n{LEFT_ARROW} Softwind City$"

Route203_RouteSignChartreeForest_Text_0:
	.string "Chartree Forest\n“Tred carefully, preserve the balance”$"

Route203_RouteSignFarmhouse_Text_0:
	.string "203 Farmhouse\p“Home of the best Moomoo Milk\nin all of Caldera!”\pNow CLOSED$"

Route203_FarmerLady_Text_0:
	.string "Thank you for seeing sense.$"

Route203_FarmerLady_Text_1:
	.string "I should have known.$"

Route203_Text_LittleBoy::
	.string "After Pinedale Forest got burned up,\n"
	.string "lots of new Pokémon came!\p"
	.string "My sister says some of them aren't\n"
	.string "anywhere else in the world!\p"
	.string "It's called bio… bio…\n"
	.string "biomalerfacy? No…\p"
	.string "Oh!\p"
	.string "I remember!\p"
	.string "It's called biodiversity!$"

Route203_Text_Bard::
	.string "I'm a storyteller from far away.\p"
	.string "I travelled here to see this forest's\n"
	.string "transformation.\p"
	.string "It must have been an incredible\n"
	.string "community effort to contain the\l"
	.string "flames to just this forest.\p"
	.string "I can see it now…\p"
	.string "“And the Pokémon and Trainers did join\n"
	.string "as one force, unto the flames…”$"

Route203_Text_ReedIntro::
	.string "Puff… puff…\p"
	.string "I'm training for the… puff… Kalypso\n"
	.string "City… marathon!\p"
	.string "This is going to be the… puff… year!$"

Route203_Text_ReedDefeated::
	.string "Just let me… puff… catch my breath!$"

Route203_Text_ReedPostBattle::
	.string "Clearly I need more training.\p"
	.string "If I'm winded after a Pokémon battle,\n"
	.string "what chance do I have in Kalypso City?$"

Route203_Text_RyanIntro::
	.string "Bird Pokémon are the best!\n"
	.string "Don't you agree?\p"
	.string "Everyone in my family has raised bird\n"
	.string "Pokémon. I'll show you why!$"

Route203_Text_RyanDefeated::
	.string "Maybe I should branch out after all.$"

Route203_Text_RyanPostBattle::
	.string "I've decided, I'm going to try new\n"
	.string "Pokémon!\p"
	.string "I'll travel across the sea to Johto and\n"
	.string "catch a Pidgey!$"

Route203_Text_AlbertoIntro::
	.string "I saw a fellow fisherman down here, and\n"
	.string "thought there might be good catchin'!\p"
	.string "But it was just a puddle…\p"
	.string "I know all the best fishing spots, check\n"
	.string "it out!$"

Route203_Text_AlbertoDefeated::
	.string "The search continues!\p"
	.string "I'll find even rarer Water Pokémon!$"

Route203_Text_AlbertoPostBattle::
	.string "I hope that man is okay.\p"
	.string "I think he might have had too much to\n"
	.string "drink.\p"
	.string "He dropped his fishing rod as he\n"
	.string "wandered off mumbling about Sunset\l"
	.string "Village.$"

Route203_Text_CharlieIntro::
	.string "I love to go camping in Chartree Forest!\p"
	.string "I never get cold, because all the Fire\n"
	.string "Pokémon keep the forest so warm at\l"
	.string "night!\p"
	.string "Do you like to camp?$"

Route203_Text_CharlieDefeated::
	.string "You'll definitely be safe camping\n"
	.string "wherever you want!$"

Route203_Text_CharliePostBattle::
	.string "I sometimes wonder what Chartree\n"
	.string "Forest was like before.\p"
	.string "I think it's better now, though!\p"
	.string "It's my favorite place.$"

Route203_Text_CliftonIntro::
	.string "Ho ho!\p"
	.string "What's a young one like you doing so far\n"
	.string "from home?\p"
	.string "You're not properly geared for long\n"
	.string "distance travel!$"

Route203_Text_CliftonDefeated::
	.string "Well, maybe you'll be okay after all!$"

Route203_Text_CliftonPostBattle::
	.string "I hiked over from Mistvale City, but I\n"
	.string "got bored in Softwind City.\p"
	.string "Too quaint for my tastes.\p"
	.string "City folk like hiking too, you know!$"

Route203_Text_FarmerQuestIntro::
	.string "Oh, hello there!\p"
	.string "I had hoped someone would stop by.\p"
	.string "My husband and I used to operate a\n"
	.string "Miltank farm here, but after the fire…\p"
	.string "Well, we've only got one young Moocalf\n"
	.string "left.\p"
	.string "And now this one has come down sick.$"

Route203_Text_FarmerQuestConsider::
	.string "I just…\p"
	.string "I just don't know what to do.$"

Route203_Text_FarmerQuestAsk::
	.string "Poor Moocalf needs milk, but without\n"
	.string "the Miltank around we don't have any.\p"
	.string "Please, will you find milk for us?$"

Route203_Text_FarmerQuestThankYou::
	.string "Oh, thank you!\n"
	.string "Thank you!\p"
	.string "I'm afraid I don't know where you could\n"
	.string "find milk…\p"
	.string "I'm sure if you ask around somebody will\n"
	.string "be able to help you.\p"
	.string "Moocalf is counting on you.$"

Route203_Text_FarmerQuestRejected::
	.string "I…\n"
	.string "Okay.\p"
	.string "That's fine.\p"
	.string "I'm sure someone more kind will come by\n"
	.string "soon.$"

Route203_Text_FarmerQuestSecondChance::
	.string "What, back to laugh at our misfortune?\p"
	.string "Or have you changed your mind?$"

Route203_Text_FarmerQuestInProgress::
	.string "Did you find the milk for Moocalf?\p"
	.string "Oh…\n"
	.string "I hope you can find it soon…$"

Route203_Text_FarmerQuestFinished::
	.string "Thank you again for your help.\p"
	.string "Not a lot of folk your age would take\n"
	.string "the time these days.\p"
	.string "I hope Moocalf is well.$"

Route203_Text_FarmerQuestTurnIn::
	.string "Did you find the milk for Moocalf?\p"
	.string "You did!?\p"
	.string "Thank you!\n"
	.string "I'll administer it right away!$"

Route203_Text_FarmQuestGiveMoocalf::
	.string "Thank you again for your help.\p"
	.string "My husband and I have gotten too old to\n"
	.string "properly care for Moocalf…\p"
	.string "You're a Pokémon Trainer right?\p"
	.string "Please, take it with you!$"

Route203_Text_ReceivedMoocalf::
	.string "{PLAYER} obtained the {STR_VAR_2}.$"
