# #############################
# Italy
# #############################


country = {
	tag = ITA
	flag_ext = _democratic
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 100
	transports = 280
	escorts = 35
	
	manpower = 125
	capital = 419
	
	dissent = 15
	
	industrial_modifier = 1.05
	# Marshall Plan: 5%
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
		}
	}
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 9
		political_left = 4
		freedom = 7
		free_market = 7
		professional_army = 3
		defense_lobby = 3
		interventionism = 3
	}
	
	SpyInfo = { country = "YUG" NumberOfSpies = 4 }
	SpyInfo = { country = "ALB" NumberOfSpies = 2 }
	SpyInfo = { country = "TUR" NumberOfSpies = 1 }
	SpyInfo = { country = "SPA" NumberOfSpies = 2 }
	SpyInfo = { country = "POR" NumberOfSpies = 1 }
	SpyInfo = { country = "ITA" NumberOfSpies = 1 }
	
	nationalprovinces = { 393 394 395 396 398 399 400 401 402 404 405 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 }
	ownedprovinces = { 393 394 395 396 398 399 400 401 402 405 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 }
	controlledprovinces = { 393 394 395 396 398 399 400 401 402 405 407 408 410 411 412 413 414 415 416 417 418 419 420 421 422 423 424 425 426 427 428 430 431 432 433 434 435 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1470 1480 1530 1540 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2290 2300 2310 2320 2330 2340 2360 2370 2380 2400 2410 2420 2430 2450 2460 2470 2480 2490 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5466 5470 5480 5490 5500 5510 5520 5560 5600 5610 5620 5630 5640 5650 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6150 6180 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7010 7020 7100 7110 7120 7140 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 12000 12010 12020 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 14040 14070 15000 15100 15140 15180 15500 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 54010 54020 54030 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82100 82300 82310 82320 82330 82500 82510 82520 199100 199110 199130 199140 199150 }
	inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000027 3000028 3000031 }
	
	diplomacy = {
		relation = { tag = ENG value = 100 access = yes }
		relation = { tag = FRA value = 100 }
		relation = { tag = GRE value = 100 }
		relation = {
			tag = SCH
			guaranteed = { day = 16 month = may year = 1935 }
		}
		relation = {
			tag = SPA
			guaranteed = { day = 18 month = november year = 1936 }
		}
		relation = { tag = USA access = yes }
	}
	
	headofstate = { type = 9 id = 25132 }
	headofgovernment = { type = 9 id = 25028 }
	foreignminister = { type = 9 id = 25040 }
	armamentminister = { type = 9 id = 25061 }
	ministerofsecurity = { type = 9 id = 25078 }
	ministerofintelligence = { type = 9 id = 25091 }
	chiefofstaff = { type = 9 id = 25310 }
	chiefofarmy = { type = 9 id = 25315 }
	chiefofnavy = { type = 9 id = 25121 }
	chiefofair = { type = 9 id = 25130 }
	
	dormant_ministers = { 25001 25002 25003 25004 25005 25006 25007 25008 25009 25010 25014 25015 25016 25017 25024 25025 25032 25033 25044 25045 25046 25047 25048 25049 25069 25070 25071 25085 25086 25087 25088 25097 25099 25100 25101 25111 25112 25118 25119 25125 25126 }
	dormant_leaders = { 25030 25154 25022 25103 }

	landunit = {
		id = { type = 30651 id = 1 }
		location = 398
		name = "1a Armata"
		division = {
			id = { type = 30654 id = 1 }
			name = "22a Division"
			type = infantry
			strength = 100
			model = 12
		}
		division = {
			id = { type = 30654 id = 2 }
			name = "4a Divisione"
			type = infantry
			strength = 100
			model = 12
		}
		division = {
			id = { type = 30654 id = 3 }
			name = "25a Divisione"
			type = infantry
			strength = 100
			model = 12
		}
		division = {
			id = { type = 30654 id = 4 }
			name = "5a Divisione"
			type = motorized
			strength = 100
			model = 3
		}
		division = {
			id = { type = 30654 id = 5 }
			name = "3a Divisione"
			type = motorized
			strength = 100
			model = 3
		}
	}
	landunit = {
		id = { type = 30651 id = 2 }
		location = 419
		name = "2a Armata"
		division = {
			id = { type = 30654 id = 6 }
			name = "13a Divisione"
			type = armor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 30654 id = 7 }
			name = "12a Divisione"
			type = armor
			strength = 100
			model = 3
		}
		division = {
			id = { type = 30654 id = 8 }
			name = "15a Divisione"
			type = motorized
			strength = 100
			model = 3
		}
		division = {
			id = { type = 30654 id = 9 }
			name = "9a Divisione"
			type = motorized
			strength = 100
			model = 3
		}
		division = {
			id = { type = 30654 id = 10 }
			name = "10a Divisione"
			type = motorized
			strength = 100
			model = 3
		}
	} #####################################################
	

	navalunit = {
		id = { type = 30652 id = 1 }
		name = "Regia Marina"
		location = 422
		base = 422
		division = {
			name = "RN Italia"
			id = { type = 30655 id = 1 }
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 0
		}
		division = {
			name = "RN Vittorio Veneto"
			id = { type = 30655 id = 2 }
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 0
		}
		division = {
			name = "RN Andrea Doria"
			id = { type = 30655 id = 3 }
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 0
		}
		division = {
			name = "RN Caio Duilio"
			id = { type = 30655 id = 4 }
			type = battleship
			model = 8
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 0
		}
		division = {
			name = "RN Duca d' Aosta"
			id = { type = 30655 id = 5 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = none
			brigade_model1 = 1
			brigade_model2 = 0
		}
		division = {
			name = "RN Scipione Africano"
			id = { type = 30655 id = 6 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			name = "RN Giulio Germanico"
			id = { type = 30655 id = 7 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			name = "RN Attilio Regolo"
			id = { type = 30655 id = 8 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			name = "RN Pompeo Magno"
			id = { type = 30655 id = 9 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			name = "RN Eugenio di Savoia"
			id = { type = 30655 id = 10 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = none
			brigade_model1 = 1
			brigade_model2 = 0
		}
		division = {
			name = "RN Guiseppe Garibaldi"
			id = { type = 30655 id = 11 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = none
			brigade_model1 = 1
			brigade_model2 = 0
		}
		division = {
			name = "RN Duca degli Abruzzi"
			id = { type = 30655 id = 12 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = none
			brigade_model1 = 1
			brigade_model2 = 0
		}
		division = {
			name = "RN Raimondo Montecuccoli"
			id = { type = 30655 id = 13 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = none
			brigade_model1 = 1
			brigade_model2 = 0
		}
		division = {
			name = "RN Luigi Cadorna"
			id = { type = 30655 id = 21 }
			type = light_cruiser
			model = 6
			extra1 = naval_fire_controll_s
			extra2 = none
			brigade_model1 = 1
			brigade_model2 = 0
		}
		division = {
			name = "1a Flottiglia Torpediniere"
			id = { type = 30655 id = 14 }
			type = destroyer
			model = 7
			extra1 = naval_fire_controll_s
			brigade_model1 = 1
		}
		division = {
			name = "2a Flottiglia Torpediniere"
			id = { type = 30655 id = 15 }
			type = destroyer
			model = 7
			extra1 = naval_fire_controll_s
			brigade_model1 = 1
		}
		division = {
			type = submarine
			model = 7
			id = { type = 30655 id = 16 }
			name = "2a Flottiglia Sommergibili"
		}
		division = {
			type = submarine
			model = 7
			id = { type = 30655 id = 17 }
			name = "1a Flottiglia Sommergibili"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30655 id = 18 }
			name = "Squadrone Vallelunga"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30655 id = 19 }
			name = "Squadrone Sagittario"
		}
		division = {
			type = transport
			model = 3
			id = { type = 30655 id = 20 }
			name = "Squadrone Aventino"
		}
	} #####################################################
	

	airunit = {
		location = 419
		base = 419
		id = { type = 30653 id = 1 }
		name = "1st Squadra Aerea"
		division = {
			id = { type = 30656 id = 1 }
			name = "1a Divisione Caccia"
			strength = 100
			type = interceptor
			model = 11
		}
	}
	airunit = {
		location = 398
		base = 398
		id = { type = 30653 id = 2 }
		name = "1a Comando Bombardieri Tattici"
		division = {
			id = { type = 30656 id = 2 }
			name = "1a Divisione Bombardieri"
			strength = 100
			type = tactical_bomber
			model = 9
		}
	}
	airunit = {
		location = 398
		base = 398
		id = { type = 30653 id = 3 }
		name = "2nd Squadra Aerea"
		division = {
			id = { type = 30656 id = 3 }
			name = "1a Divisione Caccia"
			strength = 50
			type = interceptor
			model = 11
		}
	}
	airunit = {
		location = 419
		base = 419
		id = { type = 30653 id = 4 }
		name = "2a Comando Bombardieri Tattici"
		division = {
			id = { type = 30656 id = 4 }
			name = "2a Divisione Bombardieri"
			strength = 100
			type = tactical_bomber
			model = 9
		}
	}
}
