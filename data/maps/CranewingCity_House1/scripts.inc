CranewingCity_House1_MapScripts::
	.byte 0


CranewingCity_House1_Man::
# 12 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_Man_Text_0, MSGBOX_NPC
	end


CranewingCity_House1_Trader::
# 17 "data/maps/CranewingCity_House1/scripts.pory"
	lock
# 18 "data/maps/CranewingCity_House1/scripts.pory"
	faceplayer
# 19 "data/maps/CranewingCity_House1/scripts.pory"
	goto_if_set FLAG_CRANEWING_NPC_TRADE_COMPLETED, CranewingCity_House1_Trader_2
CranewingCity_House1_Trader_1:
# 22 "data/maps/CranewingCity_House1/scripts.pory"
	compare VAR_TEMP_0, 14
	goto_if_eq CranewingCity_House1_Trader_5
CranewingCity_House1_Trader_4:
# 25 "data/maps/CranewingCity_House1/scripts.pory"
	setvar VAR_0x8008, INGAME_TRADE_HUSKII
# 26 "data/maps/CranewingCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 27 "data/maps/CranewingCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetInGameTradeSpeciesInfo
# 28 "data/maps/CranewingCity_House1/scripts.pory"
	copyvar VAR_0x8009, VAR_RESULT
# 29 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_Trader_Text_0
# 30 "data/maps/CranewingCity_House1/scripts.pory"
	waitmessage
# 31 "data/maps/CranewingCity_House1/scripts.pory"
	quest_check_started QUEST_TRADE_LUPINE
# 32 "data/maps/CranewingCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq CranewingCity_House1_Trader_8
# 38 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_Trader_Text_2, MSGBOX_YESNO
# 39 "data/maps/CranewingCity_House1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CranewingCity_House1_Trader_11
CranewingCity_House1_Trader_10:
# 42 "data/maps/CranewingCity_House1/scripts.pory"
	special ChoosePartyMon
# 43 "data/maps/CranewingCity_House1/scripts.pory"
	waitstate
# 44 "data/maps/CranewingCity_House1/scripts.pory"
	copyvar VAR_0x800A, VAR_0x8004
# 45 "data/maps/CranewingCity_House1/scripts.pory"
	compare VAR_0x8004, 255
	goto_if_eq CranewingCity_House1_Trader_14
CranewingCity_House1_Trader_13:
# 48 "data/maps/CranewingCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 49 "data/maps/CranewingCity_House1/scripts.pory"
	specialvar VAR_RESULT, GetTradeSpecies
# 50 "data/maps/CranewingCity_House1/scripts.pory"
	copyvar VAR_0x800B, VAR_RESULT
# 51 "data/maps/CranewingCity_House1/scripts.pory"
	compare VAR_RESULT, VAR_0x8009
	goto_if_ne CranewingCity_House1_Trader_17
CranewingCity_House1_Trader_16:
# 54 "data/maps/CranewingCity_House1/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8008
# 55 "data/maps/CranewingCity_House1/scripts.pory"
	copyvar VAR_0x8005, VAR_0x800A
# 56 "data/maps/CranewingCity_House1/scripts.pory"
	special CreateInGameTradePokemon
# 57 "data/maps/CranewingCity_House1/scripts.pory"
	special DoInGameTradeScene
# 58 "data/maps/CranewingCity_House1/scripts.pory"
	waitstate
# 59 "data/maps/CranewingCity_House1/scripts.pory"
	quest_finish QUEST_TRADE_LUPINE
# 60 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_Trader_Text_3, MSGBOX_DEFAULT
# 61 "data/maps/CranewingCity_House1/scripts.pory"
	setflag FLAG_CRANEWING_NPC_TRADE_COMPLETED
# 62 "data/maps/CranewingCity_House1/scripts.pory"
	release
	end

CranewingCity_House1_Trader_2:
# 20 "data/maps/CranewingCity_House1/scripts.pory"
	goto CranewingCity_House1_TradeCompleted
	goto CranewingCity_House1_Trader_1

CranewingCity_House1_Trader_5:
# 23 "data/maps/CranewingCity_House1/scripts.pory"
	goto CranewingCity_House1_Scammed
	goto CranewingCity_House1_Trader_4

CranewingCity_House1_Trader_8:
# 33 "data/maps/CranewingCity_House1/scripts.pory"
	quest_start QUEST_TRADE_LUPINE
# 34 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_Trader_Text_1
# 35 "data/maps/CranewingCity_House1/scripts.pory"
	release
	end

CranewingCity_House1_Trader_11:
# 40 "data/maps/CranewingCity_House1/scripts.pory"
	goto CranewingCity_House1_DeclineTrade
	goto CranewingCity_House1_Trader_10

CranewingCity_House1_Trader_14:
# 46 "data/maps/CranewingCity_House1/scripts.pory"
	goto CranewingCity_House1_DeclineTrade
	goto CranewingCity_House1_Trader_13

CranewingCity_House1_Trader_17:
# 52 "data/maps/CranewingCity_House1/scripts.pory"
	goto CranewingCity_House1_NotRequestedMon
	goto CranewingCity_House1_Trader_16


CranewingCity_House1_TradeCompleted:
# 70 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_TradeCompleted_Text_0, MSGBOX_NPC
# 71 "data/maps/CranewingCity_House1/scripts.pory"
	release
	end


CranewingCity_House1_DeclineTrade:
# 76 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_DeclineTrade_Text_0, MSGBOX_DEFAULT
# 77 "data/maps/CranewingCity_House1/scripts.pory"
	release
	end


CranewingCity_House1_NotRequestedMon:
# 82 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_NotRequestedMon_Text_0, MSGBOX_DEFAULT
# 83 "data/maps/CranewingCity_House1/scripts.pory"
	setvar VAR_TEMP_0, 14
# 84 "data/maps/CranewingCity_House1/scripts.pory"
	release
	end


CranewingCity_House1_Scammed:
# 89 "data/maps/CranewingCity_House1/scripts.pory"
	msgbox CranewingCity_House1_Scammed_Text_0
# 90 "data/maps/CranewingCity_House1/scripts.pory"
	release
	end


CranewingCity_House1_Man_Text_0:
# 12 "data/maps/CranewingCity_House1/scripts.pory"
	.string "Lupine and Huskii are born rivals.\p"
	.string "For each, their lifelong goal is to\n"
	.string "defeat the other in combat.\p"
	.string "I've even heard their evolution is tied\n"
	.string "to each other in some way.$"

CranewingCity_House1_Trader_Text_0:
# 29 "data/maps/CranewingCity_House1/scripts.pory"
	.string "I caught this {STR_VAR_2} on a ski\n"
	.string "trip this year.\p"
	.string "It's great and all, but I've always\n"
	.string "wanted its rival, {STR_VAR_1}!$"

CranewingCity_House1_Trader_Text_1:
# 34 "data/maps/CranewingCity_House1/scripts.pory"
	.string "Come back when you've caught a\n"
	.string "{STR_VAR_1}!$"

CranewingCity_House1_Trader_Text_2:
# 38 "data/maps/CranewingCity_House1/scripts.pory"
	.string "Will you trade me yours?$"

CranewingCity_House1_Trader_Text_3:
# 60 "data/maps/CranewingCity_House1/scripts.pory"
	.string "I can't wait to raise this Pokémon!\p"
	.string "I hope you have fun raising that one!$"

CranewingCity_House1_TradeCompleted_Text_0:
# 70 "data/maps/CranewingCity_House1/scripts.pory"
	.string "I hope my Pokémon is treating you well,\n"
	.string "and vice versa!\p"
	.string "Maybe someday both of us will manage to\n"
	.string "evolve them one day!$"

CranewingCity_House1_DeclineTrade_Text_0:
# 76 "data/maps/CranewingCity_House1/scripts.pory"
	.string "Oh, you don't want to?\p"
	.string "I can't say I blame you.\n"
	.string "You have a great Pokémon there.$"

CranewingCity_House1_NotRequestedMon_Text_0:
# 82 "data/maps/CranewingCity_House1/scripts.pory"
	.string "Are you trying to scam me?\p"
	.string "You think I wouldn't know that's the\n"
	.string "wrong Pokémon?\p"
	.string "Don't waste my time.$"

CranewingCity_House1_Scammed_Text_0:
# 89 "data/maps/CranewingCity_House1/scripts.pory"
	.string "You still want to trade?\p"
	.string "Sorry, I can't trust you.\n"
	.string "You might try to scam me again.\p"
	.string "Come back later when you've learned not\n"
	.string "to trick people.$"
