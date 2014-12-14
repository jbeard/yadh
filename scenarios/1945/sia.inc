# #############################
# Thailand
# #############################


country = {
	tag = SIA
	
	energy = 500
	metal = 500
	rare_materials = 500
	oil = 200
	supplies = 200
	
	manpower = 55
	
	capital = 1423
	belligerence = 3
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 5
		freedom = 3
		free_market = 5
		professional_army = 4
		defense_lobby = 5
		interventionism = 3
	}
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
		}
	}
	
	nationalprovinces = { 1422 1423 1424 1426 1427 1428 1429 1430 1431 1433 1434 1435 }
	ownedprovinces = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 }
	controlledprovinces = { 1422 1423 1424 1425 1426 1427 1428 1429 1430 1431 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2290 2300 2310 2400 2450 2510 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4030 4050 4120 4130 4170 4220 4250 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4900 4910 4920 4930 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5180 5190 5200 5210 5220 5310 5316 5320 5326 5327 5330 5350 5360 5370 5380 5410 5416 5417 5420 5426 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6390 6400 6410 6420 6430 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8610 8900 8910 8920 8930 8940 8950 8960 8970 9010 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81650 81700 81710 81720 81850 81860 81870 81880 82300 82310 82320 82500 82510 199100 199130  }
	inventions = { 3000027 3000028  }
	
	diplomacy = {
		relation = { tag = ENG value = 70 }
		relation = { tag = FRA value = -100 }
	}
	
	headofstate = { type = 9 id = 290012 }
	headofgovernment = { type = 9 id = 290016 }
	foreignminister = { type = 9 id = 290027 }
	armamentminister = { type = 9 id = 290042 }
	ministerofsecurity = { type = 9 id = 290055 }
	ministerofintelligence = { type = 9 id = 290064 }
	chiefofstaff = { type = 9 id = 290068 }
	chiefofarmy = { type = 9 id = 290074 }
	chiefofnavy = { type = 9 id = 290079 }
	chiefofair = { type = 9 id = 290084 }
	
	dormant_leaders = { }
	
	landunit = {
		location = 1423
		name = "Royal Thai Army"
		id = { type = 11744 id = 1 }
		Division = {
			id = { type = 11744 id = 2 }
			name = "1st Infantry Division"
			type = infantry
			model = 11
			extra = tank_destroyer
			brigade_model = 0
			strength = 90
		}
		Division = {
			id = { type = 11744 id = 3 }
			name = "2nd Infantry Division"
			type = infantry
			model = 11
			strength = 80
		}
		Division = {
			id = { type = 11744 id = 4 }
			name = "3rd Infantry Division"
			type = militia
			model = 5
			strength = 80
		}
		Division = {
			id = { type = 11744 id = 5 }
			name = "4th Infantry Division"
			type = infantry
			model = 11
			strength = 80
		}
		Division = {
			id = { type = 11744 id = 6 }
			name = "5th Infantry Division"
			type = infantry
			model = 11
			strength = 80
		}
	} #########################
	# ## SIAM NAVY OOB 1944 ###
	# #########################
	

	navalunit = {
		id = { type = 11744 id = 15 }
		name = "Royal Thai Navy"
		location = 1423
		base = 1423
		division = {
			id = { type = 11744 id = 16 }
			name = "HTMS Sri Ayuthia"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			brigade_model1 = 1
		}
		division = {
			id = { type = 11744 id = 18 }
			name = "Phra Ruang Flotille"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 1
		}
		division = {
			id = { type = 11744 id = 17 }
			name = "Sinsamudar Flotille"
			type = submarine
			model = 6
		}
	}
}
