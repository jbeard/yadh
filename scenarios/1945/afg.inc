# #############################
# Afghanistan 
# #############################


country = {
	tag = AFG
	
	energy = 5000
	metal = 5000
	rare_materials = 2000
	oil = 2000
	supplies = 2000
	
	manpower = 20
	
	capital = 2171
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		free_market = 8
		freedom = 4
		professional_army = 5
		defense_lobby = 4
		interventionism = 1
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
	
	nationalprovinces = { 2168 2169 2170 2171 2172 2173 1537 }
	ownedprovinces = { 2168 2169 2170 2171 2172 2173 }
	controlledprovinces = { 2168 2169 2170 2171 2172 2173 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1310 1320 1330 1340 1350 1360 1370 1396 1560 1570 1580 1830 1840 1850 1860 1910 1920 1930 1940 1950 1960 1970 1980 2010 2290 2300 2310 2450 2620 2630 2640 2800 2810 2820 2860 2870 2880 2900 2910 2920 3010 3020 3030 3040 3050 3110 3120 3130 3140 3210 3220 3230 3240 3310 3320 3330 3410 3420 3430 3440 3450 3456 3460 3510 3610 3620 3630 3640 3720 3730 3736 3740 3810 3900 4010 4120 4290 4300 4310 4320 4330 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4800 4810 4900 5010 5020 5050 5060 5070 5080 5090 5190 5310 5316 5326 5327 5600 5610 5620 5630 5700 5710 5800 5810 5820 5830 6030 6120 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8200 8210 8500 8510 8520 8550 8560 8600 8900 8910 8920 8930 9020 9030 12100 12110 12120 13060 13070 13080 14000 14010 14020 14030 21180 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 82300 82500  }
	inventions = { 3000027  }
	
	diplomacy = {
		relation = { tag = ENG value = -75 }
		relation = { tag = PER value = 25 }
		relation = { tag = SAU value = 50 }
		relation = { tag = TUR value = 50 }
	}
	
	dormant_ministers      = {  155003 155006 155050 155001 155002 155004 155005 155007 155008 155009 155010 155016 155023 155024 155029
                               155036 155044 155045 155054 155066
                            } 
	
	headofstate = { type = 9 id = 155011 }
	headofgovernment = { type = 9 id = 155013 }
	foreignminister = { type = 9 id = 155020 }
	armamentminister = { type = 9 id = 155032 }
	ministerofsecurity = { type = 9 id = 155039 }
	ministerofintelligence = { type = 9 id = 155048 }
	chiefofstaff = { type = 9 id = 155053 }
	chiefofarmy = { type = 9 id = 155057 }
	chiefofnavy = { type = 9 id = 155061 }
	chiefofair = { type = 9 id = 155067 }
	
	landunit = {
		id = { type = 11437 id = 1 }
		location = 2171
		name = "Central Army"
		division = {
			id = { type = 11437 id = 2 }
			name = "Royal Afghan Household"
			strength = 90
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11437 id = 3 }
			name = "1st Infantry Division"
			strength = 50
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11437 id = 4 }
			name = "2nd Infantry Division"
			strength = 50
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11437 id = 5 }
			name = "4th Infantry Division"
			strength = 50
			type = infantry
			model = 10
		}
	}
	landunit = {
		id = { type = 11437 id = 6 }
		location = 2171
		name = "Southern Army"
		division = {
			id = { type = 11437 id = 7 }
			name = "5th Infantry Division"
			strength = 50
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11437 id = 8 }
			name = "6th Infantry Division"
			strength = 50
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11437 id = 9 }
			name = "7th Infantry Division"
			strength = 50
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11437 id = 10 }
			name = "Farah Cavalry"
			strength = 50
			type = cavalry
			model = 10
		}
	}
	landunit = {
		id = { type = 11437 id = 11 }
		location = 2171
		name = "Mixed Army"
		division = {
			id = { type = 11437 id = 12 }
			name = "1st Mixed Infantry"
			strength = 50
			type = infantry
			model = 10
		}
		division = {
			id = { type = 11437 id = 13 }
			name = "2nd Mixed Infantry"
			strength = 50
			type = infantry
			model = 10
		}
	}
}
