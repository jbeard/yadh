# #############################
# Bhutan
# #############################


country = {
	tag = BHU
	energy = 200
	metal = 200
	rare_materials = 100
	oil = 200
	supplies = 200
	
	manpower = 10
	
	control = ENG
	puppet = ENG
	
	capital = 1456
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		free_market = 8
		freedom = 6
		professional_army = 2
		defense_lobby = 1
		interventionism = 1
	}
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
		}
	}
	
	nationalprovinces = { 1456 }
	ownedprovinces = { 1456 }
	controlledprovinces = { 1456 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1310 1320 1330 1340 1350 1360 1370 1396 1560 1570 1580 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 2010 2290 2300 2310 2450 2620 2630 2640 2800 2810 2820 2860 2870 2880 2900 2910 2920 3010 3020 3030 3040 3050 3110 3120 3130 3140 3210 3220 3230 3240 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3510 3610 3620 3630 3640 3720 3730 3736 3740 3810 3900 4010 4120 4290 4300 4310 4320 4330 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4800 4810 4900 5010 5020 5050 5060 5070 5080 5090 5190 5310 5316 5326 5327 5600 5610 5620 5630 5700 5710 5800 5810 5820 5830 6390 6400 6420 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8550 8560 8600 8610 8900 8910 8920 8930 9020 9030 12100 12110 12120 13060 13070 13080 14000 14010 14020 14030 21180 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 82300 82500  }
	inventions = { 3000027  }
	
	diplomacy = {
		relation = { tag = AST value = 200 }
		relation = { tag = CAN value = 200 }
		relation = { tag = ENG value = 200 }
		relation = { tag = FRA value = 150 }
		relation = { tag = NEP value = 200 }
		relation = { tag = NZL value = 200 }
		relation = { tag = OMN value = 150 }
		relation = { tag = SAF value = 200 }
		relation = { tag = YEM value = 150 }
	}
	
	headofstate = { type = 9 id = 330001 }
	headofgovernment = { type = 9 id = 330002 }
	foreignminister = { type = 9 id = 330015 }
	armamentminister = { type = 9 id = 330027 }
	ministerofsecurity = { type = 9 id = 330034 }
	ministerofintelligence = { type = 9 id = 330040 }
	chiefofstaff = { type = 9 id = 330046 }
	chiefofarmy = { type = 9 id = 330048 }
	chiefofnavy = { type = 9 id = 330051 }
	chiefofair = { type = 9 id = 330052 }
	
	landunit = {
		location = 1456
		id = { type = 11581 id = 1 }
		name = "Royal Army"
		division = {
			id = { type = 11581 id = 2 }
			name = "Household Division"
			type = infantry
			strength = 80
			model = 10
		}
		division = {
			id = { type = 11581 id = 3 }
			name = "Royal Division"
			type = infantry
			strength = 80
			model = 10
		}
	}
}
