Route203_MapScripts::
	.byte 0


Route203_RouteSignSoftwindCity::
# 21 "data/maps/Route203/scripts.pory"
	msgbox Route203_RouteSignSoftwindCity_Text_0, MSGBOX_SIGN
	end


Route203_RouteSignChartreeForest::
# 26 "data/maps/Route203/scripts.pory"
	msgbox Route203_RouteSignChartreeForest_Text_0, MSGBOX_SIGN
	end


Route203_RouteSignFarmhouse::
# 31 "data/maps/Route203/scripts.pory"
	msgbox Route203_RouteSignFarmhouse_Text_0, MSGBOX_SIGN
	end


Route203_FarmhouseMailbox::
# 36 "data/maps/Route203/scripts.pory"
	msgbox Text_OtherMailbox, MSGBOX_SIGN
	end


Route203_LittleBoy::
# 41 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_LittleBoy, MSGBOX_NPC
	end


Route203_Bard::
# 46 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_Bard, MSGBOX_NPC
	end


Route203_Althlete::
# 51 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_REED, Route203_Text_ReedIntro, Route203_Text_ReedDefeated
# 52 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_ReedPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Youngster::
# 57 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_RYAN, Route203_Text_RyanIntro, Route203_Text_RyanDefeated
# 58 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_RyanPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Fisherman::
# 63 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Route203_Text_AlbertoIntro, Route203_Text_AlbertoDefeated
# 64 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_AlbertoPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Camper::
# 69 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_CHARLIE, Route203_Text_CharlieIntro, Route203_Text_CharlieDefeated
# 70 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_CharliePostBattle, MSGBOX_AUTOCLOSE
	end


Route203_Hiker::
# 75 "data/maps/Route203/scripts.pory"
	trainerbattle_single TRAINER_CLIFTON, Route203_Text_CliftonIntro, Route203_Text_CliftonDefeated
# 76 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_CliftonPostBattle, MSGBOX_AUTOCLOSE
	end


Route203_FarmerLadyNoticesYou::
# 81 "data/maps/Route203/scripts.pory"
	lockall
# 82 "data/maps/Route203/scripts.pory"
	setvar VAR_ROUTE_203_STATE, 1
# 83 "data/maps/Route203/scripts.pory"
	delay 20
# 84 "data/maps/Route203/scripts.pory"
	playse SE_PIN
# 85 "data/maps/Route203/scripts.pory"
	applymovement 11, mLookRightStartled
# 86 "data/maps/Route203/scripts.pory"
	waitmovement 0
# 87 "data/maps/Route203/scripts.pory"
	applymovement 11, mFarmerLadyApproaches
# 88 "data/maps/Route203/scripts.pory"
	waitmovement 0
# 89 "data/maps/Route203/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 90 "data/maps/Route203/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq Route203_FarmerLadyNoticesYou_2
Route203_FarmerLadyNoticesYou_1:
# 95 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestIntro
# 96 "data/maps/Route203/scripts.pory"
	waitmessage
# 97 "data/maps/Route203/scripts.pory"
	applymovement 11, mFaceLeft
# 98 "data/maps/Route203/scripts.pory"
	waitmovement 0
# 99 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestConsider
# 100 "data/maps/Route203/scripts.pory"
	waitmessage
# 101 "data/maps/Route203/scripts.pory"
	delay 30
# 102 "data/maps/Route203/scripts.pory"
	compare VAR_TEMP_0, 22
	goto_if_eq Route203_FarmerLadyNoticesYou_5
# 106 "data/maps/Route203/scripts.pory"
	applymovement 11, mFaceRight
Route203_FarmerLadyNoticesYou_4:
# 108 "data/maps/Route203/scripts.pory"
	waitmovement 0
# 109 "data/maps/Route203/scripts.pory"
	quest_reveal QUEST_MOOCALF_ORPHAN
# 110 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestAsk, MSGBOX_YESNO
# 111 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route203_FarmerLadyNoticesYou_9
# 118 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestRejected
# 119 "data/maps/Route203/scripts.pory"
	waitmessage
# 120 "data/maps/Route203/scripts.pory"
	closemessage
Route203_FarmerLadyNoticesYou_8:
# 122 "data/maps/Route203/scripts.pory"
	applymovement 11, mFarmerLadyWalksBack
# 123 "data/maps/Route203/scripts.pory"
	delay 16
# 124 "data/maps/Route203/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceLeft
# 125 "data/maps/Route203/scripts.pory"
	waitmovement 11
# 126 "data/maps/Route203/scripts.pory"
	releaseall
	end

Route203_FarmerLadyNoticesYou_2:
# 91 "data/maps/Route203/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, mFaceDown
# 92 "data/maps/Route203/scripts.pory"
	applymovement 11, mFaceUp
# 93 "data/maps/Route203/scripts.pory"
	waitmovement 0
	goto Route203_FarmerLadyNoticesYou_1

Route203_FarmerLadyNoticesYou_5:
# 103 "data/maps/Route203/scripts.pory"
	applymovement 11, mFaceUp
	goto Route203_FarmerLadyNoticesYou_4

Route203_FarmerLadyNoticesYou_9:
# 112 "data/maps/Route203/scripts.pory"
	quest_start QUEST_MOOCALF_ORPHAN
# 113 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestThankYou
# 114 "data/maps/Route203/scripts.pory"
	waitmessage
# 115 "data/maps/Route203/scripts.pory"
	closemessage
	goto Route203_FarmerLadyNoticesYou_8


Route203_FarmerLady::
# 131 "data/maps/Route203/scripts.pory"
	lockall
# 132 "data/maps/Route203/scripts.pory"
	faceplayer
# 133 "data/maps/Route203/scripts.pory"
	quest_check_finished QUEST_MOOCALF_ORPHAN
# 134 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_FarmerLady_2
# 143 "data/maps/Route203/scripts.pory"
	checkitem ITEM_MEDICINE_MILK, 1
# 144 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_FarmerLady_9
Route203_FarmerLady_8:
# 147 "data/maps/Route203/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 148 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Route203_FarmerLady_11
# 152 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestSecondChance, MSGBOX_YESNO
# 153 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route203_FarmerLady_14
# 159 "data/maps/Route203/scripts.pory"
	msgbox Route203_FarmerLady_Text_1
# 160 "data/maps/Route203/scripts.pory"
	waitmessage
Route203_FarmerLady_1:
# 164 "data/maps/Route203/scripts.pory"
	releaseall
	end

Route203_FarmerLady_2:
# 135 "data/maps/Route203/scripts.pory"
	compare VAR_ROUTE_203_STATE, 2
	goto_if_eq Route203_FarmerLady_5
# 139 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfStandalone
	goto Route203_FarmerLady_1

Route203_FarmerLady_5:
# 136 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestFinished, MSGBOX_NPC
	goto Route203_FarmerLady_1

Route203_FarmerLady_9:
# 145 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyResolveQuest
	goto Route203_FarmerLady_8

Route203_FarmerLady_11:
# 149 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestInProgress, MSGBOX_NPC
	goto Route203_FarmerLady_1

Route203_FarmerLady_14:
# 154 "data/maps/Route203/scripts.pory"
	quest_start QUEST_MOOCALF_ORPHAN
# 155 "data/maps/Route203/scripts.pory"
	msgbox Route203_FarmerLady_Text_0
# 156 "data/maps/Route203/scripts.pory"
	waitmessage
	goto Route203_FarmerLady_1


Route203_FarmerLadyResolveQuest::
# 172 "data/maps/Route203/scripts.pory"
	lockall
# 173 "data/maps/Route203/scripts.pory"
	quest_set_reward_waiting QUEST_MOOCALF_ORPHAN
# 174 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmerQuestTurnIn
# 175 "data/maps/Route203/scripts.pory"
	waitmessage
# 176 "data/maps/Route203/scripts.pory"
	applymovement 11, mFaceUp
# 177 "data/maps/Route203/scripts.pory"
	waitmovement 0
# 178 "data/maps/Route203/scripts.pory"
	opendoor 17, 5
# 179 "data/maps/Route203/scripts.pory"
	waitdooranim
# 180 "data/maps/Route203/scripts.pory"
	applymovement 11, mFarmerLadyEntersHouse
# 181 "data/maps/Route203/scripts.pory"
	waitmovement 0
# 182 "data/maps/Route203/scripts.pory"
	closedoor 17, 5
# 183 "data/maps/Route203/scripts.pory"
	quest_finish QUEST_MOOCALF_ORPHAN
# 184 "data/maps/Route203/scripts.pory"
	delay 120
# 185 "data/maps/Route203/scripts.pory"
	opendoor 17, 5
# 186 "data/maps/Route203/scripts.pory"
	waitdooranim
# 187 "data/maps/Route203/scripts.pory"
	applymovement 11, mFarmerLadyExitsHouse
# 188 "data/maps/Route203/scripts.pory"
	waitmovement 0
# 189 "data/maps/Route203/scripts.pory"
	closedoor 17, 5
# 190 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfStandalone
	end


Route203_FarmerLadyGiveMoocalfStandalone::
# 195 "data/maps/Route203/scripts.pory"
	lockall
# 196 "data/maps/Route203/scripts.pory"
	msgbox Route203_Text_FarmQuestGiveMoocalf
# 197 "data/maps/Route203/scripts.pory"
	waitmessage
# 198 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalf
	return


Route203_FarmerLadyGiveMoocalf::
# 202 "data/maps/Route203/scripts.pory"
	setvar VAR_TEMP_1, SPECIES_MOOCALF
# 203 "data/maps/Route203/scripts.pory"
	givemon SPECIES_MOOCALF, 7
# 204 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Route203_FarmerLadyGiveMoocalf_2
# 207 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Route203_FarmerLadyGiveMoocalf_3
Route203_FarmerLadyGiveMoocalf_1:
# 210 "data/maps/Route203/scripts.pory"
	goto Common_EventScript_NoMoreRoomForPokemon
	end

Route203_FarmerLadyGiveMoocalf_2:
# 205 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfParty
	goto Route203_FarmerLadyGiveMoocalf_1

Route203_FarmerLadyGiveMoocalf_3:
# 208 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfPC
	goto Route203_FarmerLadyGiveMoocalf_1


Route203_FarmerLadyGiveMoocalfParty::
# 215 "data/maps/Route203/scripts.pory"
	call Route203_FarmerLadyGiveMoocalfFanfare
# 216 "data/maps/Route203/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 217 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route203_FarmerLadyGiveMoocalfParty_2
Route203_FarmerLadyGiveMoocalfParty_1:
# 220 "data/maps/Route203/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 221 "data/maps/Route203/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
# 222 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfEnd
	end

Route203_FarmerLadyGiveMoocalfParty_2:
# 218 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfEnd
	goto Route203_FarmerLadyGiveMoocalfParty_1


Route203_FarmerLadyGiveMoocalfPC::
# 227 "data/maps/Route203/scripts.pory"
	call Route203_FarmerLadyGiveMoocalfFanfare
# 228 "data/maps/Route203/scripts.pory"
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
# 229 "data/maps/Route203/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route203_FarmerLadyGiveMoocalfPC_2
Route203_FarmerLadyGiveMoocalfPC_1:
# 232 "data/maps/Route203/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
# 233 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfTransferredToPC
	end

Route203_FarmerLadyGiveMoocalfPC_2:
# 230 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfTransferredToPC
	goto Route203_FarmerLadyGiveMoocalfPC_1


Route203_FarmerLadyGiveMoocalfTransferredToPC::
# 238 "data/maps/Route203/scripts.pory"
	call Common_EventScript_TransferredToPC
# 239 "data/maps/Route203/scripts.pory"
	goto Route203_FarmerLadyGiveMoocalfEnd
	end


Route203_FarmerLadyGiveMoocalfFanfare::
# 244 "data/maps/Route203/scripts.pory"
	bufferspeciesname STR_VAR_2, SPECIES_MOOCALF
# 245 "data/maps/Route203/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 246 "data/maps/Route203/scripts.pory"
	message Route203_Text_ReceivedMoocalf
# 247 "data/maps/Route203/scripts.pory"
	waitmessage
# 248 "data/maps/Route203/scripts.pory"
	waitfanfare
# 249 "data/maps/Route203/scripts.pory"
	bufferspeciesname STR_VAR_1, SPECIES_MOOCALF
	return


Route203_FarmerLadyGiveMoocalfEnd::
# 254 "data/maps/Route203/scripts.pory"
	setvar VAR_ROUTE_203_STATE, 2
# 255 "data/maps/Route203/scripts.pory"
	releaseall
	end


# 469 "data/maps/Route203/scripts.pory"
mFarmerLadyApproaches:
# 470 "data/maps/Route203/scripts.pory"
	walk_down
# 471 "data/maps/Route203/scripts.pory"
	walk_right
# 471 "data/maps/Route203/scripts.pory"
	walk_right
# 471 "data/maps/Route203/scripts.pory"
	walk_right
# 471 "data/maps/Route203/scripts.pory"
	walk_right
# 471 "data/maps/Route203/scripts.pory"
	walk_right
	step_end

# 474 "data/maps/Route203/scripts.pory"
mFarmerLadyWalksBack:
# 475 "data/maps/Route203/scripts.pory"
	walk_slow_left
# 475 "data/maps/Route203/scripts.pory"
	walk_slow_left
# 475 "data/maps/Route203/scripts.pory"
	walk_slow_left
# 475 "data/maps/Route203/scripts.pory"
	walk_slow_left
# 475 "data/maps/Route203/scripts.pory"
	walk_slow_left
# 476 "data/maps/Route203/scripts.pory"
	walk_slow_up
# 477 "data/maps/Route203/scripts.pory"
	delay_16
# 478 "data/maps/Route203/scripts.pory"
	walk_in_place_slow_down
	step_end

# 481 "data/maps/Route203/scripts.pory"
mFarmerLadyEntersHouse:
# 482 "data/maps/Route203/scripts.pory"
	walk_up
# 483 "data/maps/Route203/scripts.pory"
	set_invisible
	step_end

# 486 "data/maps/Route203/scripts.pory"
mFarmerLadyExitsHouse:
# 487 "data/maps/Route203/scripts.pory"
	set_visible
# 488 "data/maps/Route203/scripts.pory"
	walk_down
	step_end

Route203_RouteSignSoftwindCity_Text_0:
# 21 "data/maps/Route203/scripts.pory"
	.string "Route 203\n{LEFT_ARROW} Softwind City$"

Route203_RouteSignChartreeForest_Text_0:
# 26 "data/maps/Route203/scripts.pory"
	.string "Chartree Forest\n“Tred carefully, preserve the balance”$"

Route203_RouteSignFarmhouse_Text_0:
# 31 "data/maps/Route203/scripts.pory"
	.string "203 Farmhouse\p“Home of the best Moomoo Milk\nin all of Caldera!”\pNow CLOSED$"

Route203_FarmerLady_Text_0:
# 155 "data/maps/Route203/scripts.pory"
	.string "Thank you for seeing sense.$"

Route203_FarmerLady_Text_1:
# 159 "data/maps/Route203/scripts.pory"
	.string "I should have known.$"

Route203_Text_LittleBoy::
# 262 "data/maps/Route203/scripts.pory"
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
# 273 "data/maps/Route203/scripts.pory"
	.string "I'm a storyteller from far away.\p"
	.string "I travelled here to see this forest's\n"
	.string "transformation.\p"
	.string "It must have been an incredible\n"
	.string "community effort to contain the flames\l"
	.string "to just this forest.\p"
	.string "I can see it now…\p"
	.string "“And the Pokémon and Trainers did join\n"
	.string "as one force, unto the flames…”$"

Route203_Text_ReedIntro::
# 284 "data/maps/Route203/scripts.pory"
	.string "Puff… puff…\p"
	.string "I'm training for the… puff… Kalypso\n"
	.string "City… marathon!\p"
	.string "This is going to be the… puff… year!$"

Route203_Text_ReedDefeated::
# 290 "data/maps/Route203/scripts.pory"
	.string "Just let me… puff… catch my breath!$"

Route203_Text_ReedPostBattle::
# 296 "data/maps/Route203/scripts.pory"
	.string "Clearly I need more training.\p"
	.string "If I'm winded after a Pokémon battle,\n"
	.string "what chance do I have in Kalypso City?$"

Route203_Text_RyanIntro::
# 302 "data/maps/Route203/scripts.pory"
	.string "Bird Pokémon are the best!\n"
	.string "Don't you agree?\p"
	.string "Everyone in my family has raised bird\n"
	.string "Pokémon. I'll show you why!$"

Route203_Text_RyanDefeated::
# 308 "data/maps/Route203/scripts.pory"
	.string "Maybe I should branch out after all.$"

Route203_Text_RyanPostBattle::
# 314 "data/maps/Route203/scripts.pory"
	.string "I've decided, I'm going to try new\n"
	.string "Pokémon!\p"
	.string "I'll travel across the sea to Johto and\n"
	.string "catch a Pidgey!$"

Route203_Text_AlbertoIntro::
# 320 "data/maps/Route203/scripts.pory"
	.string "I saw a fellow fisherman down here, and\n"
	.string "thought there might be good catchin'!\p"
	.string "But it was just a puddle…\p"
	.string "I know all the best fishing spots, check\n"
	.string "it out!$"

Route203_Text_AlbertoDefeated::
# 326 "data/maps/Route203/scripts.pory"
	.string "The search continues!\p"
	.string "I'll find even rarer Water Pokémon!$"

Route203_Text_AlbertoPostBattle::
# 332 "data/maps/Route203/scripts.pory"
	.string "I hope that man is okay.\p"
	.string "I think he might have had too much to\n"
	.string "drink.\p"
	.string "He dropped his fishing rod as he\n"
	.string "wandered off mumbling about Sunset\l"
	.string "Village.$"

Route203_Text_CharlieIntro::
# 338 "data/maps/Route203/scripts.pory"
	.string "I love to go camping in Chartree Forest!\p"
	.string "I never get cold, because all the Fire\n"
	.string "Pokémon keep the forest so warm at\l"
	.string "night!\p"
	.string "Do you like to camp?$"

Route203_Text_CharlieDefeated::
# 344 "data/maps/Route203/scripts.pory"
	.string "You'll definitely be safe camping\n"
	.string "wherever you want!$"

Route203_Text_CharliePostBattle::
# 350 "data/maps/Route203/scripts.pory"
	.string "I sometimes wonder what Chartree\n"
	.string "Forest was like before.\p"
	.string "I think it's better now, though!\p"
	.string "It's my favorite place.$"

Route203_Text_CliftonIntro::
# 356 "data/maps/Route203/scripts.pory"
	.string "Ho ho!\p"
	.string "What's a young one like you doing so far\n"
	.string "from home?\p"
	.string "You're not properly geared for long\n"
	.string "distance travel!$"

Route203_Text_CliftonDefeated::
# 362 "data/maps/Route203/scripts.pory"
	.string "Well, maybe you'll be okay after all!$"

Route203_Text_CliftonPostBattle::
# 368 "data/maps/Route203/scripts.pory"
	.string "I hiked over from Mistvale City, but I\n"
	.string "got bored in Softwind City.\p"
	.string "Too quaint for my tastes.\p"
	.string "City folk like hiking too, you know!$"

Route203_Text_FarmerQuestIntro::
# 374 "data/maps/Route203/scripts.pory"
	.string "Oh, hello there!\p"
	.string "I had hoped someone would stop by.\p"
	.string "My husband and I used to operate a\n"
	.string "Miltank farm here, but after the fire…\p"
	.string "Well, we've only got one young Moocalf\n"
	.string "left.\p"
	.string "And now this one has come down sick.$"

Route203_Text_FarmerQuestConsider::
# 385 "data/maps/Route203/scripts.pory"
	.string "I just…\p"
	.string "I just don't know what to do.$"

Route203_Text_FarmerQuestAsk::
# 391 "data/maps/Route203/scripts.pory"
	.string "Poor Moocalf needs milk, but without\n"
	.string "the Miltank around we don't have any.\p"
	.string "Please, will you find milk for us?$"

Route203_Text_FarmerQuestThankYou::
# 399 "data/maps/Route203/scripts.pory"
	.string "Oh, thank you!\n"
	.string "Thank you!\p"
	.string "I'm afraid I don't know where you could\n"
	.string "find milk…\p"
	.string "I'm sure if you ask around somebody will\n"
	.string "be able to help you.\p"
	.string "Moocalf is counting on you.$"

Route203_Text_FarmerQuestRejected::
# 410 "data/maps/Route203/scripts.pory"
	.string "I…\n"
	.string "Okay.\p"
	.string "That's fine.\p"
	.string "I'm sure someone more kind will come by\n"
	.string "soon.$"

Route203_Text_FarmerQuestSecondChance::
# 419 "data/maps/Route203/scripts.pory"
	.string "What, back to laugh at our misfortune?\p"
	.string "Or have you changed your mind?$"

Route203_Text_FarmerQuestInProgress::
# 426 "data/maps/Route203/scripts.pory"
	.string "Did you find the milk for Moocalf?\p"
	.string "Oh…\n"
	.string "I hope you can find it soon…$"

Route203_Text_FarmerQuestFinished::
# 434 "data/maps/Route203/scripts.pory"
	.string "Thank you again for your help.\p"
	.string "Not a lot of folk your age would take\n"
	.string "the time these days.\p"
	.string "I hope Moocalf is well.$"

Route203_Text_FarmerQuestTurnIn::
# 443 "data/maps/Route203/scripts.pory"
	.string "Did you find the milk for Moocalf?\p"
	.string "You did!?\p"
	.string "Thank you!\n"
	.string "I'll administer it right away!$"

Route203_Text_FarmQuestGiveMoocalf::
# 451 "data/maps/Route203/scripts.pory"
	.string "Thank you again for your help.\p"
	.string "My husband and I have gotten too old to\n"
	.string "properly care for Moocalf…\p"
	.string "You're a Pokémon Trainer right?\p"
	.string "Please, take it with you!$"

Route203_Text_ReceivedMoocalf::
# 461 "data/maps/Route203/scripts.pory"
	.string "{PLAYER} obtained the {STR_VAR_2}.$"
