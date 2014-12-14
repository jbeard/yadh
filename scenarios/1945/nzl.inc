# #############################
# New Zealand
# #############################


country = {
	tag = NZL
	energy = 1000
	metal = 1500
	rare_materials = 1000
	oil = 500
	supplies = 1000
	
	manpower = 10
	
	capital = 1721
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
		}
	}
	
	diplomacy = {
		relation = { tag = SAF access = yes value = 200 }
		relation = { tag = CAN access = yes value = 200 }
		relation = { tag = AST access = yes value = 200 }
		relation = { tag = ENG access = yes value = 200 }
		relation = { tag = USA value = 125 }
	}
	
	nationalprovinces = { 1718 1719 1720 1721 1722 1723 1741 1742 1748 }
	ownedprovinces = { 1718 1719 1720 1721 1722 1723 1741 1742 1748 }
	controlledprovinces = { 1718 1719 1720 1721 1722 1723 1741 1742 1748 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1470 1530 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2080 2100 2110 2150 2170 2220 2290 2300 2310 2320 2330 2400 2410 2420 2450 2460 2470 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3720 3730 3736 3740 3750 3760 3810 3820 3830 3840 3900 3910 3920 4010 4020 4030 4040 4050 4060 4070 4080 4120 4130 4140 4150 4170 4190 4200 4220 4230 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5410 5416 5417 5420 5426 5430 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7550 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 12000 12010 12020 12100 12110 12120 12130 12140 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 81700 81710 81720 81730 81850 81860 81870 81880 81890 82300 82310 82320 82500 82510 199100 199130 199140  }
	inventions = { 3000018 3000027 3000028 3000031 }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 10
		political_left = 10
		freedom = 10
		free_market = 8
		professional_army = 2
		defense_lobby = 2
		interventionism = 2
	}
	
	dormant_ministers = { 215027 215007 215010 215001 215011 215002 215003 215022 215023 215004 215032 215033 215034 215048 215054 215059 215060 215069 215016 215019 215024 215028 215035 215042 215044 215045 215050 215051 215064 }
	
	headofstate = { type = 9 id = 215012 }
	headofgovernment = { type = 9 id = 215017 }
	foreignminister = { type = 9 id = 215021 }
	armamentminister = { type = 9 id = 215030 }
	ministerofsecurity = { type = 9 id = 215040 }
	ministerofintelligence = { type = 9 id = 215006 }
	chiefofstaff = { type = 9 id = 215056 }
	chiefofarmy = { type = 9 id = 215008 }
	chiefofnavy = { type = 9 id = 215067 }
	chiefofair = { type = 9 id = 215073 }
	
	################################################################
	# NZ Army OOB - by omega20
	# ref: http://en.wikipedia.org/wiki/Category:New_Zealand_World_War_II_Divisions
	################################################################

	landunit = {
		id = { type = 12140 id = 17 }
		name = "1st NZ Expeditionary Force"
		location = 404
		division = {
			experience = 60
			id = { type = 12140 id = 18 }
			name = "2nd NZ Motorized Division"
			type = motorized
			model = 2
			extra = artillery
			brigade_model = 10
			strength = 100
		}
	}
	landunit = {
		id = { type = 12140 id = 9 }
		name = "New Zealand Military Forces"
		location = 1721
		division = {
			experience = 60
			id = { type = 12140 id = 11 }
			name = "New Zealand Division"
			strength = 100
			type = infantry
			model = 11
		}
	} ##########################################################
	

	navalunit = {
		id = { type = 12140 id = 12 }
		name = "New Zealand Squadron"
		location = 1721
		division = {
			experience = 60
			id = { type = 12140 id = 13 }
			name = "HMNZS Gambia"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 60
			id = { type = 12140 id = 14 }
			name = "HMNZS Achilles"
			type = light_cruiser
			model = 4
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		base = 1721
	}
	navalunit = {
		id = { type = 12140 id = 15 }
		name = "Transport Flotilla"
		location = 1721
		base = 1721
		division = {
			experience = 60
			id = { type = 12140 id = 16 }
			name = "1st Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 60
			id = { type = 12140 id = 25 }
			name = "2nd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 60
			id = { type = 12140 id = 26 }
			name = "3rd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 60
			id = { type = 12140 id = 27 }
			name = "4th Transport Flotilla"
			type = transport
			model = 3
		}
	} ##########################################################
	

	airunit = {
		id = { type = 12140 id = 20 }
		name = "No.3 RNZAF Tactical Bomb Group"
		location = 1721 # North Solomon Islands
		base = 1721
		division = {
			experience = 60
			id = { type = 12140 id = 21 }
			name = "No.3 RNZAF Tactical Bomb Group"
			type = tactical_bomber
			model = 7
		}
	}
}
