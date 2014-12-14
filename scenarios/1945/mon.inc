# #############################
# Mongolia
# #############################


country = {
	tag = MON
	
	energy = 200
	metal = 200
	rare_materials = 100
	oil = 200
	supplies = 500
	
	manpower = 10
	
	capital = 1124
	
	puppet = SOV
	control = SOV
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
		}
	}
	
	diplomacy = {
		relation = { tag = SOV value = 150 }
	}
	
	nationalprovinces = { 1120 1121 1122 1123 1124 1125 1206 1209 1210 1213 1235 1236 1237 1239 1240 }
	ownedprovinces = { 1120 1121 1122 1123 1124 1125 }
	controlledprovinces = { 1120 1121 1122 1123 1124 1125 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1600 1670 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2150 2290 2300 2310 2400 2450 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 3010 3020 3030 3040 3050 3110 3120 3130 3140 3210 3220 3230 3240 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3510 3610 3620 3630 3640 3720 3730 3736 3740 3810 3900 4010 4020 4120 4290 4300 4310 4320 4330 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4800 4810 4820 4900 4910 5010 5020 5050 5060 5070 5080 5090 5190 5310 5316 5326 5327 5600 5610 5620 5630 5700 5710 5800 5810 5820 5830 6300 6310 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7600 7610 8010 8020 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8500 8510 8520 8550 8560 8600 9020 9030 12100 12110 12120 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 27460 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 82500 199100 199130  }
	inventions = { 3000027  }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 10
		freedom = 4
		free_market = 3
		professional_army = 3
		defense_lobby = 2
		interventionism = 1
	}
	
	dormant_ministers = { 300001 300002 300003 300024 300004 300031 300005 300040 300006 300049 300007 300009 300066 300010 300071 300013 300018 300019 300025 300026 300032 300033 300041 300042 300050 300051 300059 300008 300063 300067 300072 300020 300027 }
	
	headofstate = { type = 9 id = 300014 }
	headofgovernment = { type = 9 id = 300020 }
	foreignminister = { type = 9 id = 300028 }
	armamentminister = { type = 9 id = 300035 }
	ministerofsecurity = { type = 9 id = 300043 }
	ministerofintelligence = { type = 9 id = 300053 }
	chiefofstaff = { type = 9 id = 300058 }
	chiefofarmy = { type = 9 id = 300064 }
	chiefofnavy = { type = 9 id = 300069 }
	chiefofair = { type = 9 id = 300074 }
	
	landunit = {
		location = 1124
		id = { type = 11532 id = 1 }
		name = "People's Army"
		division = {
			id = { type = 11532 id = 2 }
			name = "People's Militia"
			type = militia
			model = 4
		}
		division = {
			id = { type = 11532 id = 3 }
			name = "People's Cavalry"
			type = cavalry
			model = 10
		}
	}
	landunit = {
		location = 1125 # Choybalsan
		name = "Mongolian Army"
		id = { type = 11532 id = 4 }
		division = {
			id = { type = 30034 id = 5 }
			name = "1st Division"
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11532 id = 6 }
			name = "2nd Division"
			type = cavalry
			model = 10
		}
		division = {
			id = { type = 11532 id = 7 }
			name = "3rd Division"
			type = militia
			model = 4
		}
		division = {
			id = { type = 11532 id = 8 }
			name = "4th Division"
			type = militia
			model = 4
		}
	}
}
