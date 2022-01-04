CranewingCity_Bank_MapScripts::
	.byte 0


CranewingCity_Bank_Boy::
	msgbox CranewingCity_Bank_Boy_Text_0, MSGBOX_NPC
	end


CranewingCity_Bank_Manager::
	goto_if_set FLAG_BANK_ACCOUNT_CREATED, CranewingCity_Bank_Manager_2
	msgbox CranewingCity_Bank_Manager_Text_4, MSGBOX_NPC
	setflag FLAG_BANK_ACCOUNT_CREATED
CranewingCity_Bank_Manager_1:
	end

CranewingCity_Bank_Manager_2:
	lockall
	faceplayer
	msgbox CranewingCity_Bank_Manager_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CranewingCity_Bank_Manager_6
	msgbox CranewingCity_Bank_Manager_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq CranewingCity_Bank_Manager_9
	msgbox CranewingCity_Bank_Manager_Text_3
CranewingCity_Bank_Manager_5:
	releaseall
	goto CranewingCity_Bank_Manager_1

CranewingCity_Bank_Manager_6:
	msgbox CranewingCity_Bank_Manager_Text_1
	goto CranewingCity_Bank_Manager_5

CranewingCity_Bank_Manager_9:
	msgbox CranewingCity_Bank_Manager_Text_1
	goto CranewingCity_Bank_Manager_5


CranewingCity_Bank_Clerk::
	lockall
	faceplayer
	msgbox CranewingCity_Bank_Clerk_Text_0
	call CranewingCity_Bank_BankClerkMenu
	releaseall
	end


CranewingCity_Bank_Duskull::
	msgbox CranewingCity_Bank_Duskull_Text_0, MSGBOX_NPC
	end


CranewingCity_Bank_BankClerkMenu:
	multichoice 0, 0, MULTI_BANK, FALSE
	switch VAR_RESULT
	case 0, CranewingCity_Bank_BankClerkMenu_3
	case 1, CranewingCity_Bank_BankClerkMenu_4
	case 2, CranewingCity_Bank_BankClerkMenu_5
	case MULTI_B_PRESSED, CranewingCity_Bank_BankClerkMenu_6
CranewingCity_Bank_BankClerkMenu_1:
	return

CranewingCity_Bank_BankClerkMenu_3:
	msgbox CranewingCity_Bank_BankClerkMenu_Text_0
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_4:
	msgbox CranewingCity_Bank_BankClerkMenu_Text_1
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_5:
	msgbox CranewingCity_Bank_BankClerkMenu_Text_2
	goto CranewingCity_Bank_BankClerkMenu_1

CranewingCity_Bank_BankClerkMenu_6:
	msgbox CranewingCity_Bank_BankClerkMenu_Text_2
	goto CranewingCity_Bank_BankClerkMenu_1


CranewingCity_Bank_Boy_Text_0:
	.string "I can't wait to open a bank account\n"
	.string "when I become a Pokémon Trainer!\p"
	.string "Mom says the only way to make money is\n"
	.string "to save money.$"

CranewingCity_Bank_Manager_Text_0:
	.string "Good day to you!\p"
	.string "Would you like to view your Pokémon\n"
	.string "Bank balance?$"

CranewingCity_Bank_Manager_Text_1:
	.string "placeholder$"

CranewingCity_Bank_Manager_Text_2:
	.string "Very well then!\p"
	.string "Are you here to close your account with\n"
	.string "us?$"

CranewingCity_Bank_Manager_Text_3:
	.string "Of course you don't!\p"
	.string "This is the greatest…\n"
	.string "and only…\l"
	.string "bank in all of Caldera and Kirant!$"

CranewingCity_Bank_Manager_Text_4:
	.string "Hi there!\n"
	.string "What can I do for you?\p"
	.string "Oh?\n"
	.string "You don't have an account?\p"
	.string "Well, let's get you started with a brand\n"
	.string "new Pokémon Bank account!\p"
	.string "Just fill out these forms…$"

CranewingCity_Bank_Clerk_Text_0:
	.string "Hello and welcome to the First Regional\n"
	.string "Pokémon Bank!\p"
	.string "How may I help you?$"

CranewingCity_Bank_Duskull_Text_0:
	.string "Oawwoohhoo!$"

CranewingCity_Bank_BankClerkMenu_Text_0:
	.string "placeholder withdraw$"

CranewingCity_Bank_BankClerkMenu_Text_1:
	.string "placeholder deposit$"

CranewingCity_Bank_BankClerkMenu_Text_2:
	.string "Thank you for stopping by.\nWe hope to see you again!$"
