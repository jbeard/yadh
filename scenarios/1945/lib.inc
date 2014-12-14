# #############################
# Liberia
# #############################


country = {
	tag = LIB
	energy = 500
	metal = 500
	rare_materials = 200
	oil = 200
	supplies = 200
	
	capital = 969
	
	manpower = 10
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
		}
	}
	
	diplomacy = {
		relation = { tag = USA value = 200 }
	}
	
	nationalprovinces = { 969 }
	ownedprovinces = { 969 }
	controlledprovinces = { 969 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1310 1320 1330 1340 1350 1360 1370 1380 1396 1560 1570 1580 1590 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2290 2300 2310 2450 2620 2630 2640 2646 2800 2810 2820 2860 2870 2880 2900 2910 2920 3010 3020 3030 3040 3050 3110 3120 3130 3140 3210 3220 3230 3240 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3510 3610 3620 3630 3640 3720 3730 3736 3740 3750 3810 3820 3900 4010 4020 4120 4290 4300 4310 4320 4330 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4800 4810 4820 4900 4910 5010 5020 5030 5050 5060 5070 5080 5090 5190 5310 5316 5320 5326 5327 5350 5410 5416 5600 5610 5620 5630 5700 5710 5800 5810 5820 5830 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6910 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 8940 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 21180 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81650 82300 82500  }
	inventions = { 3000027  }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 5
		freedom = 3
		free_market = 5
		professional_army = 3
		defense_lobby = 3
		interventionism = 1
	}
	
	dormant_ministers = { 380005 380001 380012 380002 380015 380003 380018 380004 380024 380033 380006 }
	
	headofstate = { type = 9 id = 380011 }
	headofgovernment = { type = 9 id = 380100 }
	foreignminister = { type = 9 id = 380017 }
	armamentminister = { type = 9 id = 380023 }
	ministerofsecurity = { type = 9 id = 380031 }
	ministerofintelligence = { type = 9 id = 380037 }
	chiefofstaff = { type = 9 id = 380007 }
	chiefofarmy = { type = 9 id = 380008 }
	chiefofnavy = { type = 9 id = 380009 }
	chiefofair = { type = 9 id = 380010 }
	
	landunit = {
		location = 969
		id = { type = 11040 id = 1 }
		name = "Liberian Army"
		division = {
			id = { type = 11040 id = 2 }
			name = "1st Republican Guards"
			type = infantry
			strength = 100
			organisation = 50
			model = 10
		}
		division = {
			id = { type = 11040 id = 3 }
			name = "2nd Republican guards"
			type = infantry
			strength = 100
			organisation = 50
			model = 10
		}
	}
	navalunit = {
		id = { type = 11040 id = 4 }
		name = "Liberian Navy"
		location = 969
		base = 969
		division = {
			id = { type = 11040 id = 5 }
			name = "1st Destroyer Flotille"
			type = destroyer
			model = 5
		}
	}
}
