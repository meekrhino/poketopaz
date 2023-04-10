Route205_FlowerShop_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route205_FlowerShop_OnTransition
	.byte 0


Route205_FlowerShop_OnTransition:
	setvar VAR_ROUTE_205_STATE, 2
	setflag FLAG_HIDE_ROUTE_205_FLOWER_GUY
	return

