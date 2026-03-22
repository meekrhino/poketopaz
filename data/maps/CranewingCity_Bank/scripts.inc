CranewingCity_Bank_MapScripts::
	.byte 0


CranewingCity_Bank_Boy::
# 21 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Boy_Text_0, MSGBOX_NPC
	end


CranewingCity_Bank_Manager::
# 26 "data/maps/CranewingCity_Bank/scripts.pory"
	goto_if_set FLAG_BANK_ACCOUNT_CREATED, CranewingCity_Bank_Manager_2
# 41 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Manager_Text_2, MSGBOX_NPC
# 42 "data/maps/CranewingCity_Bank/scripts.pory"
	setflag FLAG_BANK_ACCOUNT_CREATED
CranewingCity_Bank_Manager_1:
	end

CranewingCity_Bank_Manager_2:
# 27 "data/maps/CranewingCity_Bank/scripts.pory"
	lockall
# 28 "data/maps/CranewingCity_Bank/scripts.pory"
	faceplayer
# 29 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Manager_Text_0, MSGBOX_YESNO
# 30 "data/maps/CranewingCity_Bank/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq CranewingCity_Bank_Manager_6
# 35 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Manager_Text_1
CranewingCity_Bank_Manager_5:
# 37 "data/maps/CranewingCity_Bank/scripts.pory"
	closemessage
# 38 "data/maps/CranewingCity_Bank/scripts.pory"
	releaseall
	goto CranewingCity_Bank_Manager_1

CranewingCity_Bank_Manager_6:
# 31 "data/maps/CranewingCity_Bank/scripts.pory"
	bufferbankbalance 0
# 32 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Text_Balance
	goto CranewingCity_Bank_Manager_5


CranewingCity_Bank_Clerk::
# 48 "data/maps/CranewingCity_Bank/scripts.pory"
	lock
# 49 "data/maps/CranewingCity_Bank/scripts.pory"
	faceplayer
# 50 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Clerk_Text_0
# 51 "data/maps/CranewingCity_Bank/scripts.pory"
	goto_if_set FLAG_BANK_ACCOUNT_CREATED, CranewingCity_Bank_Clerk_2
# 55 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Clerk_Text_1
# 56 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Clerk_Text_2
CranewingCity_Bank_Clerk_1:
# 58 "data/maps/CranewingCity_Bank/scripts.pory"
	waitmessage
# 59 "data/maps/CranewingCity_Bank/scripts.pory"
	closemessage
# 60 "data/maps/CranewingCity_Bank/scripts.pory"
	release
	end

CranewingCity_Bank_Clerk_2:
# 52 "data/maps/CranewingCity_Bank/scripts.pory"
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_Clerk_1


CranewingCity_Bank_Duskull::
# 65 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_Duskull_Text_0, MSGBOX_NPC
	end


CranewingCity_Bank_BankClerkMenu:
# 73 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkMenu_Text_0
# 74 "data/maps/CranewingCity_Bank/scripts.pory"
	multichoice 0, 0, MULTI_BANK, FALSE
# 75 "data/maps/CranewingCity_Bank/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/CranewingCity_Bank/scripts.pory"
	case 0, CranewingCity_Bank_BankClerkMenu_3
# 78 "data/maps/CranewingCity_Bank/scripts.pory"
	case 1, CranewingCity_Bank_BankClerkMenu_4
# 80 "data/maps/CranewingCity_Bank/scripts.pory"
	case 2, CranewingCity_Bank_BankClerkMenu_5
# 82 "data/maps/CranewingCity_Bank/scripts.pory"
	case MULTI_B_PRESSED, CranewingCity_Bank_BankClerkMenu_6
CranewingCity_Bank_BankClerkMenu_1:
# 85 "data/maps/CranewingCity_Bank/scripts.pory"
	waitmessage
# 86 "data/maps/CranewingCity_Bank/scripts.pory"
	closemessage
# 87 "data/maps/CranewingCity_Bank/scripts.pory"
	release
	return

CranewingCity_Bank_BankClerkMenu_3:
# 77 "data/maps/CranewingCity_Bank/scripts.pory"
	call CranewingCity_Bank_BankClerkWithdraw
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_4:
# 79 "data/maps/CranewingCity_Bank/scripts.pory"
	call CranewingCity_Bank_BankClerkDeposit
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_5:
# 81 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkMenu_Text_1
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_6:
# 83 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkMenu_Text_1
	goto CranewingCity_Bank_BankClerkMenu_1


CranewingCity_Bank_BankClerkWithdraw:
# 91 "data/maps/CranewingCity_Bank/scripts.pory"
	setvar VAR_0x8004, 0
# 92 "data/maps/CranewingCity_Bank/scripts.pory"
	special Bank
# 93 "data/maps/CranewingCity_Bank/scripts.pory"
	waitstate
# 94 "data/maps/CranewingCity_Bank/scripts.pory"
	switch VAR_RESULT
# 95 "data/maps/CranewingCity_Bank/scripts.pory"
	case 0, CranewingCity_Bank_BankClerkWithdraw_3
# 100 "data/maps/CranewingCity_Bank/scripts.pory"
	case 1, CranewingCity_Bank_BankClerkWithdraw_4
# 104 "data/maps/CranewingCity_Bank/scripts.pory"
	case 2, CranewingCity_Bank_BankClerkWithdraw_5
# 109 "data/maps/CranewingCity_Bank/scripts.pory"
	goto CranewingCity_Bank_BankClerkMenu
CranewingCity_Bank_BankClerkWithdraw_1:
	return

CranewingCity_Bank_BankClerkWithdraw_3:
# 96 "data/maps/CranewingCity_Bank/scripts.pory"
	playse SE_SHOP
# 97 "data/maps/CranewingCity_Bank/scripts.pory"
	waitse
# 98 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkWithdraw_Text_0
	goto CranewingCity_Bank_BankClerkWithdraw_1

CranewingCity_Bank_BankClerkWithdraw_4:
# 101 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkWithdraw_Text_1
# 102 "data/maps/CranewingCity_Bank/scripts.pory"
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkWithdraw_1

CranewingCity_Bank_BankClerkWithdraw_5:
# 105 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkWithdraw_Text_2
# 106 "data/maps/CranewingCity_Bank/scripts.pory"
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkWithdraw_1


CranewingCity_Bank_BankClerkDeposit:
# 115 "data/maps/CranewingCity_Bank/scripts.pory"
	setvar VAR_0x8004, 1
# 116 "data/maps/CranewingCity_Bank/scripts.pory"
	special Bank
# 117 "data/maps/CranewingCity_Bank/scripts.pory"
	waitstate
# 118 "data/maps/CranewingCity_Bank/scripts.pory"
	switch VAR_RESULT
# 119 "data/maps/CranewingCity_Bank/scripts.pory"
	case 0, CranewingCity_Bank_BankClerkDeposit_3
# 124 "data/maps/CranewingCity_Bank/scripts.pory"
	case 1, CranewingCity_Bank_BankClerkDeposit_4
# 128 "data/maps/CranewingCity_Bank/scripts.pory"
	case 2, CranewingCity_Bank_BankClerkDeposit_5
# 133 "data/maps/CranewingCity_Bank/scripts.pory"
	goto CranewingCity_Bank_BankClerkMenu
CranewingCity_Bank_BankClerkDeposit_1:
	return

CranewingCity_Bank_BankClerkDeposit_3:
# 120 "data/maps/CranewingCity_Bank/scripts.pory"
	playse SE_SHOP
# 121 "data/maps/CranewingCity_Bank/scripts.pory"
	waitse
# 122 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkDeposit_Text_0
	goto CranewingCity_Bank_BankClerkDeposit_1

CranewingCity_Bank_BankClerkDeposit_4:
# 125 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkDeposit_Text_1
# 126 "data/maps/CranewingCity_Bank/scripts.pory"
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkDeposit_1

CranewingCity_Bank_BankClerkDeposit_5:
# 129 "data/maps/CranewingCity_Bank/scripts.pory"
	msgbox CranewingCity_Bank_BankClerkDeposit_Text_2
# 130 "data/maps/CranewingCity_Bank/scripts.pory"
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkDeposit_1


CranewingCity_Bank_Boy_Text_0:
# 21 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "I can't wait to open a bank account\n"
	.string "when I become a Pokémon Trainer!\p"
	.string "Mom says the only way to make money is\n"
	.string "to save money, and I plan to be rich!$"

CranewingCity_Bank_Manager_Text_0:
# 29 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Good day to you!\p"
	.string "Would you like to view your Pokémon\n"
	.string "Bank balance?$"

CranewingCity_Bank_Manager_Text_1:
# 35 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Very well then!\p"
	.string "The First Regional Pokémon Bank thanks\n"
	.string "you for your continued patronage!$"

CranewingCity_Bank_Manager_Text_2:
# 41 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Hi there!\n"
	.string "What can I do for you?\p"
	.string "Oh?\n"
	.string "You don't have an account?\p"
	.string "Well, let's get you started with a brand\n"
	.string "new Pokémon Bank account!\p"
	.string "Just fill out these forms…\p"
	.string "and these ones…\p"
	.string "And you're done!\n"
	.string "See the clerk over there to make your\l"
	.string "first deposit!$"

CranewingCity_Bank_Clerk_Text_0:
# 50 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Hello and welcome to the First Regional\n"
	.string "Pokémon Bank!$"

CranewingCity_Bank_Clerk_Text_1:
# 55 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "I'm so sorry, I'm afraid you don't seem\n"
	.string "to have an account with us.$"

CranewingCity_Bank_Clerk_Text_2:
# 56 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "See the clerk to open one today!$"

CranewingCity_Bank_Duskull_Text_0:
# 65 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Oawwoohhoo!$"

CranewingCity_Bank_BankClerkMenu_Text_0:
# 73 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "How may I help you?$"

CranewingCity_Bank_BankClerkMenu_Text_1:
# 81 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Thank you for stopping by.\nWe hope to see you again!$"

CranewingCity_Bank_BankClerkWithdraw_Text_0:
# 98 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Thank you for your business!\nPlease come back again soon!$"

CranewingCity_Bank_BankClerkWithdraw_Text_1:
# 101 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "We don't have that much…$"

CranewingCity_Bank_BankClerkWithdraw_Text_2:
# 105 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "You can't carry that much!$"

CranewingCity_Bank_BankClerkDeposit_Text_0:
# 122 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "Your money is safe with us!$"

CranewingCity_Bank_BankClerkDeposit_Text_1:
# 125 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "You don't have that much…$"

CranewingCity_Bank_BankClerkDeposit_Text_2:
# 129 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "We can't store that much!$"

CranewingCity_Bank_Text_Balance::
# 141 "data/maps/CranewingCity_Bank/scripts.pory"
	.string "You current balance is {STR_VAR_1}.\p"
	.string "Thank you for your continued\n"
	.string "patronage!$"
