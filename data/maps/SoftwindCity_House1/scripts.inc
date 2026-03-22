SoftwindCity_House1_MapScripts::
	.byte 0


SoftwindCity_House1_Boy::
# 11 "data/maps/SoftwindCity_House1/scripts.pory"
	quest_check_started QUEST_MOOCALF_ORPHAN
# 12 "data/maps/SoftwindCity_House1/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq SoftwindCity_House1_Boy_2
SoftwindCity_House1_Boy_1:
# 24 "data/maps/SoftwindCity_House1/scripts.pory"
	msgbox SoftwindCity_House1_Boy_Text_2, MSGBOX_NPC
	end

SoftwindCity_House1_Boy_2:
# 13 "data/maps/SoftwindCity_House1/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_MILK
# 14 "data/maps/SoftwindCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_House1_Boy_5
# 18 "data/maps/SoftwindCity_House1/scripts.pory"
	subquest_check_finished SUB_QUEST_FIND_BOTTLE
# 19 "data/maps/SoftwindCity_House1/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq SoftwindCity_House1_Boy_7
	goto SoftwindCity_House1_Boy_1

SoftwindCity_House1_Boy_5:
# 15 "data/maps/SoftwindCity_House1/scripts.pory"
	msgbox SoftwindCity_House1_Boy_Text_0, MSGBOX_NPC
	end

SoftwindCity_House1_Boy_7:
# 20 "data/maps/SoftwindCity_House1/scripts.pory"
	msgbox SoftwindCity_House1_Boy_Text_1, MSGBOX_NPC
	end


SoftwindCity_House1_Boy_Text_0:
# 15 "data/maps/SoftwindCity_House1/scripts.pory"
	.string "Ugh, no.\p"
	.string "I don't have any milk, or anything else\n"
	.string "for that matter.\p"
	.string "Ask somebody else.$"

SoftwindCity_House1_Boy_Text_1:
# 20 "data/maps/SoftwindCity_House1/scripts.pory"
	.string "Stop bothering me about your errands.\p"
	.string "I'm not giving a stranger a glass\n"
	.string "bottle.\p"
	.string "Who would do that?$"

SoftwindCity_House1_Boy_Text_2:
# 24 "data/maps/SoftwindCity_House1/scripts.pory"
	.string "I wasn't around for the big fire in\n"
	.string "Chartree Forest.\p"
	.string "That was the last time anything\n"
	.string "interesting ever happened in this town!$"
