# #############################
# Ecuador
# #############################


country = {
	tag = ECU
	energy = 500
	metal = 500
	rare_materials = 200
	oil = 500
	supplies = 200
	
	manpower = 20
	
	capital = 2042
	
	diplomacy = {
		relation = { tag = ARG value = 10 }
		relation = { tag = BOL value = -20 }
		relation = { tag = BRA value = 10 }
		relation = { tag = CHL value = 20 }
		relation = { tag = COL value = 20 }
		relation = { tag = PAR value = 25 }
		relation = { tag = URU value = 10 }
		relation = { tag = USA value = 75 }
		relation = { tag = VEN value = 20 }
	}
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
			MOB5 = 1
		}
	}
	
	nationalprovinces = { 2007 2008 2010 2040 2041 2042 2033 }
	ownedprovinces = { 2007 2040 2041 2042 }
	controlledprovinces = { 2007 2040 2041 2042 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2100 2150 2290 2300 2310 2320 2400 2410 2450 2460 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4030 4050 4120 4130 4170 4220 4250 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4900 4910 4920 4930 5010 5020 5030 5050 5060 5070 5080 5090 5190 5200 5310 5316 5320 5326 5327 5350 5360 5410 5416 5417 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5940 5960 5980 6030 6110 6120 6130 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 9010 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 81700 81710 81720 81850 81860 81870 81880 82300 82310 82320 82500 82510 199100 199130  }
	inventions = { 3000027 3000028  }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 6
		political_left = 6
		free_market = 8
		freedom = 5
		professional_army = 5
		defense_lobby = 8
		interventionism = 3
	}
	
	dormant_ministers = { 190001 190023 190024 190002 190041 190042 190003 190130 190059 190004 190065 190005 190087 190006 190007 190105 190008 190010 190015 190128 190016 190025 190011 190019 190033 190129 190034 190043 190029 190037 190052 190131 190009 190020 190026 190038 190044 190132 190055 190056 190057 }
	
	headofstate = { type = 9 id = 190027 }
	headofgovernment = { type = 9 id = 190045 }
	foreignminister = { type = 9 id = 190049 }
	armamentminister = { type = 9 id = 190076 }
	ministerofsecurity = { type = 9 id = 190078 }
	ministerofintelligence = { type = 9 id = 190101 }
	chiefofstaff = { type = 9 id = 190110 }
	chiefofarmy = { type = 9 id = 190116 }
	chiefofnavy = { type = 9 id = 190123 }
	chiefofair = { type = 9 id = 190125 }
	landunit = {
		id = { type = 29000 id = 50 }
		name = "Ejercito de Ecuador"
		location = 2042
		division = {
			id = { type = 29000 id = 5000 }
			name = "1a Brigada de Infantería"
			strength = 35
			max_strength = 35
			type = infantry
			extra = anti_air
			model = 11
			brigade_model = 3
		}
	}
	landunit = {
		id = { type = 10292 id = 1 }
		name = "Ejercito de Ecuador"
		location = 2042
		division = {
			id = { type = 10292 id = 2 }
			name = "1st Infantry"
			strength = 70
			type = infantry
			model = 11
		}
	}
}
