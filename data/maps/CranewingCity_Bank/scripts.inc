CranewingCity_Bank_MapScripts::
	.byte 0


CranewingCity_Bank_Boy::
	msgbox CranewingCity_Bank_Boy_Text_0, MSGBOX_NPC
	end


CranewingCity_Bank_Manager::
	goto_if_set FLAG_BANK_ACCOUNT_CREATED, CranewingCity_Bank_Manager_2
	msgbox CranewingCity_Bank_Manager_Text_2, MSGBOX_NPC
	setflag FLAG_BANK_ACCOUNT_CREATED
CranewingCity_Bank_Manager_1:
	end

CranewingCity_Bank_Manager_2:
	lockall
	faceplayer
	msgbox CranewingCity_Bank_Manager_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CranewingCity_Bank_Manager_6
	msgbox CranewingCity_Bank_Manager_Text_1
CranewingCity_Bank_Manager_5:
	closemessage
	releaseall
	goto CranewingCity_Bank_Manager_1

CranewingCity_Bank_Manager_6:
	bufferbankbalance 0
	msgbox CranewingCity_Bank_Text_Balance
	goto CranewingCity_Bank_Manager_5


CranewingCity_Bank_Clerk::
	lock
	faceplayer
	msgbox CranewingCity_Bank_Clerk_Text_0
	goto_if_set FLAG_BANK_ACCOUNT_CREATED, CranewingCity_Bank_Clerk_2
	msgbox CranewingCity_Bank_Clerk_Text_1
	msgbox CranewingCity_Bank_Clerk_Text_2
CranewingCity_Bank_Clerk_1:
	waitmessage
	closemessage
	release
	end

CranewingCity_Bank_Clerk_2:
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_Clerk_1


CranewingCity_Bank_Duskull::
	msgbox CranewingCity_Bank_Duskull_Text_0, MSGBOX_NPC
	end


CranewingCity_Bank_BankClerkMenu:
	msgbox CranewingCity_Bank_BankClerkMenu_Text_0
	multichoice 0, 0, MULTI_BANK, FALSE
	switch VAR_RESULT
	case 0, CranewingCity_Bank_BankClerkMenu_3
	case 1, CranewingCity_Bank_BankClerkMenu_4
	case 2, CranewingCity_Bank_BankClerkMenu_5
	case MULTI_B_PRESSED, CranewingCity_Bank_BankClerkMenu_6
CranewingCity_Bank_BankClerkMenu_1:
	waitmessage
	closemessage
	release
	return

CranewingCity_Bank_BankClerkMenu_3:
	call CranewingCity_Bank_BankClerkWithdraw
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_4:
	call CranewingCity_Bank_BankClerkDeposit
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_5:
	msgbox CranewingCity_Bank_BankClerkMenu_Text_1
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_6:
	msgbox CranewingCity_Bank_BankClerkMenu_Text_1
	goto CranewingCity_Bank_BankClerkMenu_1


CranewingCity_Bank_BankClerkWithdraw:
	setvar VAR_0x8004, 0
	special Bank
	waitstate
	switch VAR_RESULT
	case 0, CranewingCity_Bank_BankClerkWithdraw_3
	case 1, CranewingCity_Bank_BankClerkWithdraw_4
	case 2, CranewingCity_Bank_BankClerkWithdraw_5
	goto CranewingCity_Bank_BankClerkMenu
CranewingCity_Bank_BankClerkWithdraw_1:
	return

CranewingCity_Bank_BankClerkWithdraw_3:
	playse SE_SHOP
	waitse
	msgbox CranewingCity_Bank_BankClerkWithdraw_Text_0
	goto CranewingCity_Bank_BankClerkWithdraw_1

CranewingCity_Bank_BankClerkWithdraw_4:
	msgbox CranewingCity_Bank_BankClerkWithdraw_Text_1
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkWithdraw_1

CranewingCity_Bank_BankClerkWithdraw_5:
	msgbox CranewingCity_Bank_BankClerkWithdraw_Text_2
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkWithdraw_1


CranewingCity_Bank_BankClerkDeposit:
	setvar VAR_0x8004, 1
	special Bank
	waitstate
	switch VAR_RESULT
	case 0, CranewingCity_Bank_BankClerkDeposit_3
	case 1, CranewingCity_Bank_BankClerkDeposit_4
	case 2, CranewingCity_Bank_BankClerkDeposit_5
	goto CranewingCity_Bank_BankClerkMenu
CranewingCity_Bank_BankClerkDeposit_1:
	return

CranewingCity_Bank_BankClerkDeposit_3:
	playse SE_SHOP
	waitse
	msgbox CranewingCity_Bank_BankClerkDeposit_Text_0
	goto CranewingCity_Bank_BankClerkDeposit_1

CranewingCity_Bank_BankClerkDeposit_4:
	msgbox CranewingCity_Bank_BankClerkDeposit_Text_1
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkDeposit_1

CranewingCity_Bank_BankClerkDeposit_5:
	msgbox CranewingCity_Bank_BankClerkDeposit_Text_2
	goto CranewingCity_Bank_BankClerkMenu
	goto CranewingCity_Bank_BankClerkDeposit_1


CranewingCity_Bank_Boy_Text_0:
	.string "I can't wait to open a bank account\n"
	.string "when I become a Pokémon Trainer!\p"
	.string "Mom says the only way to make money is\n"
	.string "to save money, and I plan to be rich!$"

CranewingCity_Bank_Manager_Text_0:
	.string "Good day to you!\p"
	.string "Would you like to view your Pokémon\n"
	.string "Bank balance?$"

CranewingCity_Bank_Manager_Text_1:
	.string "Very well then!\p"
	.string "The First Regional Pokémon Bank thanks\n"
	.string "you for your continued patronage!$"

CranewingCity_Bank_Manager_Text_2:
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
	.string "Hello and welcome to the First Regional\n"
	.string "Pokémon Bank!$"

CranewingCity_Bank_Clerk_Text_1:
	.string "I'm so sorry, I'm afraid you don't seem\n"
	.string "to have an account with us.$"

CranewingCity_Bank_Clerk_Text_2:
	.string "See the clerk to open one today!$"

CranewingCity_Bank_Duskull_Text_0:
	.string "Oawwoohhoo!$"

CranewingCity_Bank_BankClerkMenu_Text_0:
	.string "How may I help you?$"

CranewingCity_Bank_BankClerkMenu_Text_1:
	.string "Thank you for stopping by.\nWe hope to see you again!$"

CranewingCity_Bank_BankClerkWithdraw_Text_0:
	.string "Thank you for your business!\nPlease come back again soon!$"

CranewingCity_Bank_BankClerkWithdraw_Text_1:
	.string "We don't have that much…$"

CranewingCity_Bank_BankClerkWithdraw_Text_2:
	.string "You can't carry that much!$"

CranewingCity_Bank_BankClerkDeposit_Text_0:
	.string "Your money is safe with us!$"

CranewingCity_Bank_BankClerkDeposit_Text_1:
	.string "You don't have that much…$"

CranewingCity_Bank_BankClerkDeposit_Text_2:
	.string "We can't store that much!$"

CranewingCity_Bank_Text_Balance::
	.string "You current balance is {STR_VAR_1}.\p"
	.string "Thank you for your continued\n"
	.string "patronage!$"
