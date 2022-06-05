.set LOCALID_FOSSIL_SCIENTIST, 5

RustboroCity_DevonCorp_2F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_2F_OnTransition
	.byte 0

RustboroCity_DevonCorp_2F_OnTransition:
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	end

RustboroCity_DevonCorp_2F_EventScript_SetFossilReady::
	setvar VAR_FOSSIL_RESURRECTION_STATE, 2
	return

RustboroCity_DevonCorp_2F_EventScript_TalkToPokemonScientist::
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_BallScientist::
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto_if_set FLAG_MET_DEVON_EMPLOYEE, RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DevelopedBalls::
	msgbox RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_PokenavScientist::
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	goto_if_set FLAG_RECEIVED_POKENAV, RustboroCity_DevonCorp_2F_EventScript_HasPokenav
	msgbox RustboroCity_DevonCorp_2F_Text_IMadePokenav, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_HasPokenav::
	msgbox RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_PokemonDreamsScientist::
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	msgbox RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilScientist::
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FossilMonReady
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_StillRegenerating
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils, MSGBOX_DEFAULT
	checkitem ITEM_TUSK_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeTuskFossil
	checkitem ITEM_FANG_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_NoticeFangFossil
	release
	end

@ This whole section has needless duplication and could be condensed considerably
RustboroCity_DevonCorp_2F_EventScript_NoticeTuskFossil::
	closemessage
	playse SE_PIN
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	checkitem ITEM_FANG_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	goto RustboroCity_DevonCorp_2F_EventScript_GiveTuskFossil
	end

RustboroCity_DevonCorp_2F_EventScript_GiveTuskFossil::
	bufferitemname 0, ITEM_TUSK_FOSSIL
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
	removeitem ITEM_TUSK_FOSSIL
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	setvar VAR_WHICH_FOSSIL_REVIVED, 1
	release
	end

RustboroCity_DevonCorp_2F_EventScript_NoticeFangFossil::
	closemessage
	playse SE_PIN
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_FOSSIL_SCIENTIST, Common_Movement_Delay48
	waitmovement 0
	msgbox RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil
	checkitem ITEM_TUSK_FOSSIL, 1
	compare VAR_RESULT, TRUE
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ChooseFossil
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFangFossil
	end

RustboroCity_DevonCorp_2F_EventScript_GiveFangFossil::
	bufferitemname 0, ITEM_FANG_FOSSIL
	msgbox RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher, MSGBOX_DEFAULT
	removeitem ITEM_FANG_FOSSIL
	setvar VAR_FOSSIL_RESURRECTION_STATE, 1
	setvar VAR_WHICH_FOSSIL_REVIVED, 2
	release
	end

RustboroCity_DevonCorp_2F_EventScript_DeclineGiveFossil::
	msgbox RustboroCity_DevonCorp_2F_Text_OhIsThatSo, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_StillRegenerating::
	msgbox RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_FossilMonReady::
	compare VAR_WHICH_FOSSIL_REVIVED, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FlintuskReady
	compare VAR_WHICH_FOSSIL_REVIVED, 2
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_AllufangReady
	end

RustboroCity_DevonCorp_2F_EventScript_FlintuskReady::
	bufferspeciesname 1, SPECIES_FLINTUSK
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveFlintusk
	end

RustboroCity_DevonCorp_2F_EventScript_AllufangReady::
	bufferspeciesname 1, SPECIES_ALLUFANG
	msgbox RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife, MSGBOX_DEFAULT
	goto RustboroCity_DevonCorp_2F_EventScript_ReceiveAllufang
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFlintusk::
	setvar VAR_TEMP_1, SPECIES_FLINTUSK
	givemon SPECIES_FLINTUSK, 20, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFlintuskParty
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveFlintuskPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFlintuskParty::
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFlintuskFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFlintusk
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFlintusk
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveFlintuskPC::
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedFlintuskFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TransferFlintuskToPC
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_TransferFlintuskToPC
	end

RustboroCity_DevonCorp_2F_EventScript_TransferFlintuskToPC::
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFlintusk
	end

RustboroCity_DevonCorp_2F_EventScript_ReceivedFlintuskFanfare::
	bufferspeciesname 1, SPECIES_FLINTUSK
	playfanfare MUS_OBTAIN_ITEM
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_FLINTUSK
	return

RustboroCity_DevonCorp_2F_EventScript_FinishReceivingFlintusk::
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveAllufang::
	setvar VAR_TEMP_1, SPECIES_ALLUFANG
	givemon SPECIES_ALLUFANG, 20, ITEM_NONE
	compare VAR_RESULT, 0
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAllufangParty
	compare VAR_RESULT, 1
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_ReceiveAllufangPC
	goto Common_EventScript_NoMoreRoomForPokemon
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveAllufangParty::
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAllufangFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAllufang
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAllufang
	end

RustboroCity_DevonCorp_2F_EventScript_ReceiveAllufangPC::
	call RustboroCity_DevonCorp_2F_EventScript_ReceivedAllufangFanfare
	msgbox gText_NicknameThisPokemon, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq RustboroCity_DevonCorp_2F_EventScript_TransferAllufangToPC
	call Common_EventScript_NameReceivedBoxMon
	goto RustboroCity_DevonCorp_2F_EventScript_TransferAllufangToPC
	end

RustboroCity_DevonCorp_2F_EventScript_TransferAllufangToPC::
	call Common_EventScript_TransferredToPC
	goto RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAllufang
	end

RustboroCity_DevonCorp_2F_EventScript_ReceivedAllufangFanfare::
	bufferspeciesname 1, SPECIES_ALLUFANG
	playfanfare MUS_OBTAIN_ITEM
	message RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher
	waitmessage
	waitfanfare
	bufferspeciesname 0, SPECIES_ALLUFANG
	return

RustboroCity_DevonCorp_2F_EventScript_FinishReceivingAllufang::
	setvar VAR_FOSSIL_RESURRECTION_STATE, 0
	setflag FLAG_RECEIVED_REVIVED_FOSSIL_MON
	release
	end

RustboroCity_DevonCorp_2F_EventScript_ChooseFossil::
	message RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne
	waitmessage
	multichoice 17, 6, MULTI_FOSSIL, FALSE
	switch VAR_RESULT
	case 0, RustboroCity_DevonCorp_2F_EventScript_ChooseFangFossil
	case 1, RustboroCity_DevonCorp_2F_EventScript_ChooseTuskFossil
	case 2, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
	case MULTI_B_PRESSED, RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect
	end

RustboroCity_DevonCorp_2F_EventScript_ChooseFangFossil::
	goto RustboroCity_DevonCorp_2F_EventScript_GiveFangFossil
	end

RustboroCity_DevonCorp_2F_EventScript_ChooseTuskFossil::
	goto RustboroCity_DevonCorp_2F_EventScript_GiveTuskFossil
	end

RustboroCity_DevonCorp_2F_EventScript_CancelFossilSelect::
	release
	end

RustboroCity_DevonCorp_2F_EventScript_MatchCallScientist::
	lock
	faceplayer
	compare VAR_FOSSIL_RESURRECTION_STATE, 1
	call_if_eq RustboroCity_DevonCorp_2F_EventScript_SetFossilReady
	compare VAR_RUSTBORO_CITY_STATE, 6
	goto_if_ge RustboroCity_DevonCorp_2F_EventScript_WorkOnNext
	msgbox RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_EventScript_WorkOnNext::
	msgbox RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext, MSGBOX_DEFAULT
	release
	end

RustboroCity_DevonCorp_2F_Text_DeviceForTalkingToPokemon:
	.string "We're developing a device for talking\n"
	.string "with Pokémon.\p"
	.string "But we haven't had much success…$"

RustboroCity_DevonCorp_2F_Text_DevelopingNewBalls:
	.string "I'm developing new kinds of\n"
	.string "POKé BALLS…\p"
	.string "But I haven't made much headway…$"

RustboroCity_DevonCorp_2F_Text_WeFinallyMadeNewBalls:
	.string "We finally made new kinds of\n"
	.string "POKé BALLS!\p"
	.string "The REPEAT BALL makes it easier to\n"
	.string "catch Pokémon you've caught before.\p"
	.string "The TIMER BALL gets better at catching\n"
	.string "Pokémon the longer a battle runs.\p"
	.string "Both are proudly developed by\n"
	.string "the DEVON CORPORATION.\p"
	.string "Please give them a try!$"

RustboroCity_DevonCorp_2F_Text_IMadePokenav:
	.string "I made the POKéNAV!\p"
	.string "As an engineer, I feel blessed to have\n"
	.string "made something so great!$"

RustboroCity_DevonCorp_2F_Text_WowThatsAPokenav:
	.string "Oh, wow!\n"
	.string "That's a POKéNAV!\p"
	.string "It came about as a result of our\n"
	.string "PRESIDENT's desire to learn about\l"
	.string "the feelings of Pokémon.\p"
	.string "Would you like me to describe its\n"
	.string "features in detail?\p"
	.string "No, no. I think you'll find out just by\n"
	.string "trying the POKéNAV out.$"

RustboroCity_DevonCorp_2F_Text_DeviceToVisualizePokemonDreams:
	.string "I'm trying to develop a device that\n"
	.string "visually reproduces the dreams of\l"
	.string "Pokémon…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_DevelopDeviceToResurrectFossils:
	.string "I've been trying to develop a device\n"
	.string "that resurrects Pokémon from fossils…\p"
	.string "And, it's working!$"

RustboroCity_DevonCorp_2F_Text_WantToBringFossilBackToLife:
	.string "Wait! That thing you have there…\n"
	.string "Is that a Pokémon fossil?\p"
	.string "Would you like to bring that Pokémon\n"
	.string "back to life?\p"
	.string "I can with my newly developed\n"
	.string "FOSSIL REGENERATOR.$"

RustboroCity_DevonCorp_2F_Text_OhIsThatSo:
	.string "Oh, is that so?\p"
	.string "DEVON's technological expertise\n"
	.string "is outstanding, I tell you.$"

RustboroCity_DevonCorp_2F_Text_TwoFossilsPickOne:
	.string "Oh, now that's a surprise!\n"
	.string "You have not one, but two, fossils?\p"
	.string "Unfortunately, my machine can only\n"
	.string "regenerate one Pokémon at a time.\p"
	.string "Would you like to pick one of your\n"
	.string "fossils for regeneration?$"

RustboroCity_DevonCorp_2F_Text_HandedFossilToResearcher:
	.string "Excellent!\n"
	.string "Let's do this right away.\p"
	.string "{PLAYER} handed the {STR_VAR_1} to\n"
	.string "the DEVON RESEARCHER.$"

RustboroCity_DevonCorp_2F_Text_FossilRegeneratorTakesTime:
	.string "The FOSSIL REGENERATOR, which I made,\n"
	.string "is incredible.\p"
	.string "But it has one drawback--it takes\n"
	.string "a long time to work.\p"
	.string "So, uh… How about you go for a stroll\n"
	.string "and look around for a while?$"

RustboroCity_DevonCorp_2F_Text_FossilizedMonBroughtBackToLife:
	.string "Thanks for waiting!\p"
	.string "Your fossilized Pokémon has been\n"
	.string "brought back to life!\p"
	.string "The fossil was an ancient Pokémon.\n"
	.string "{STR_VAR_2}, it was!$"

RustboroCity_DevonCorp_2F_Text_ReceivedMonFromResearcher:
	.string "{PLAYER} received {STR_VAR_2} from\n"
	.string "the DEVON RESEARCHER.$"

@ Unused
RustboroCity_DevonCorp_2F_Text_TooManyPokemon:
	.string "Uh-oh, you've got too many Pokémon.\n"
	.string "You have no room for this one.$"

RustboroCity_DevonCorp_2F_Text_DevelopNewPokenavFeature:
	.string "I'm trying to develop a new feature\n"
	.string "for the POKéNAV…\p"
	.string "But it's not going well.$"

RustboroCity_DevonCorp_2F_Text_WhatToWorkOnNext:
	.string "Well, now what shall I work on\n"
	.string "developing next?\p"
	.string "Our company allows us to make our\n"
	.string "inspirations into reality.\p"
	.string "One couldn't ask for a better\n"
	.string "environment as an engineer.$"

