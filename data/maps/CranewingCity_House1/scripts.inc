CranewingCity_House1_MapScripts::
	.byte 0


CranewingCity_House1_Man::
	msgbox CranewingCity_House1_Man_Text_0, MSGBOX_NPC
	end


CranewingCity_House1_Trader::
	lock
	faceplayer
	goto_if_set FLAG_CRANEWING_NPC_TRADE_COMPLETED, CranewingCity_House1_Trader_2
CranewingCity_House1_Trader_1:
	compare VAR_TEMP_0, 14
	goto_if_eq CranewingCity_House1_Trader_5
CranewingCity_House1_Trader_4:
	setvar VAR_0x8008, INGAME_TRADE_HUSKII
	copyvar VAR_0x8004, VAR_0x8008
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
	copyvar VAR_0x8009, VAR_RESULT
	msgbox CranewingCity_House1_Trader_Text_0
	waitmessage
	quest_check_started QUEST_TRADE_LUPINE
	compare VAR_RESULT, FALSE
	goto_if_eq CranewingCity_House1_Trader_8
	msgbox CranewingCity_House1_Trader_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq CranewingCity_House1_Trader_11
CranewingCity_House1_Trader_10:
	special ChoosePartyMon
	waitstate
	copyvar VAR_0x800A, VAR_0x8004
	compare VAR_0x8004, 255
	goto_if_eq CranewingCity_House1_Trader_14
CranewingCity_House1_Trader_13:
	copyvar VAR_0x8005, VAR_0x800A
	specialvar VAR_RESULT, GetTradeSpecies
	copyvar VAR_0x800B, VAR_RESULT
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne CranewingCity_House1_Trader_17
CranewingCity_House1_Trader_16:
	copyvar VAR_0x8004, VAR_0x8008
	copyvar VAR_0x8005, VAR_0x800A
	special CreateInGameTradePokemon
	special DoInGameTradeScene
	waitstate
	quest_finish QUEST_TRADE_LUPINE
	msgbox CranewingCity_House1_Trader_Text_3, MSGBOX_DEFAULT
	setflag FLAG_CRANEWING_NPC_TRADE_COMPLETED
	release
	end

CranewingCity_House1_Trader_2:
	goto CranewingCity_House1_TradeCompleted
	goto CranewingCity_House1_Trader_1

CranewingCity_House1_Trader_5:
	goto CranewingCity_House1_Scammed
	goto CranewingCity_House1_Trader_4

CranewingCity_House1_Trader_8:
	quest_start QUEST_TRADE_LUPINE
	msgbox CranewingCity_House1_Trader_Text_1
	release
	end

CranewingCity_House1_Trader_11:
	goto CranewingCity_House1_DeclineTrade
	goto CranewingCity_House1_Trader_10

CranewingCity_House1_Trader_14:
	goto CranewingCity_House1_DeclineTrade
	goto CranewingCity_House1_Trader_13

CranewingCity_House1_Trader_17:
	goto CranewingCity_House1_NotRequestedMon
	goto CranewingCity_House1_Trader_16


CranewingCity_House1_TradeCompleted:
	msgbox CranewingCity_House1_TradeCompleted_Text_0, MSGBOX_NPC
	release
	end


CranewingCity_House1_DeclineTrade:
	msgbox CranewingCity_House1_DeclineTrade_Text_0, MSGBOX_DEFAULT
	release
	end


CranewingCity_House1_NotRequestedMon:
	msgbox CranewingCity_House1_NotRequestedMon_Text_0, MSGBOX_DEFAULT
	setvar VAR_TEMP_0, 14
	release
	end


CranewingCity_House1_Scammed:
	msgbox CranewingCity_House1_Scammed_Text_0
	release
	end


CranewingCity_House1_Man_Text_0:
	.string "Lupine and Huskii are born rivals.\p"
	.string "For each, their lifelong goal is to\n"
	.string "defeat the other in combat.\p"
	.string "I've even heard their evolution is tied\n"
	.string "to each other in some way.$"

CranewingCity_House1_Trader_Text_0:
	.string "I caught this {STR_VAR_2} on a ski\n"
	.string "trip this year.\p"
	.string "It's great and all, but I've always\n"
	.string "wanted its rival, {STR_VAR_1}!$"

CranewingCity_House1_Trader_Text_1:
	.string "Come back when you've caught a\n"
	.string "{STR_VAR_1}!$"

CranewingCity_House1_Trader_Text_2:
	.string "Will you trade me yours?$"

CranewingCity_House1_Trader_Text_3:
	.string "I can't wait to raise this Pokémon!\p"
	.string "I hope you have fun raising that one!$"

CranewingCity_House1_TradeCompleted_Text_0:
	.string "I hope my Pokémon is treating you well,\n"
	.string "and vice versa!\p"
	.string "Maybe someday both of us will manage to\n"
	.string "evolve them one day!$"

CranewingCity_House1_DeclineTrade_Text_0:
	.string "Oh, you don't want to?\p"
	.string "I can't say I blame you.\n"
	.string "You have a great Pokémon there.$"

CranewingCity_House1_NotRequestedMon_Text_0:
	.string "Are you trying to scam me?\p"
	.string "You think I wouldn't know that's the\n"
	.string "wrong Pokémon?\p"
	.string "Don't waste my time.$"

CranewingCity_House1_Scammed_Text_0:
	.string "You still want to trade?\p"
	.string "Sorry, I can't trust you.\n"
	.string "You might try to scam me again.\p"
	.string "Come back later when you've learned not\n"
	.string "to trick people.$"
