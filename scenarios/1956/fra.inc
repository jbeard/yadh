# #############################
# France
# #############################


country = {
	tag = FRA
	
	energy = 5000
	metal = 5000
	rare_materials = 2500
	oil = 500
	supplies = 10000
	money = 1000
	
	manpower = 170
	
	transports = 350
	escorts = 60
	
	capital = 55
	
	industrial_modifier = 1.07
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 9
		political_left = 7
		free_market = 8
		freedom = 10
		professional_army = 4
		defense_lobby = 4
		interventionism = 4
	}
				
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
		}
	}
	
	SpyInfo = { country = "POR" NumberOfSpies = 3 }
	SpyInfo = { country = "SOV" NumberOfSpies = 3 }
	SpyInfo = { country = "SPA" NumberOfSpies = 3 }
	SpyInfo = { country = "ARG" NumberOfSpies = 3 }
	SpyInfo = { country = "TUR" NumberOfSpies = 2 }
	SpyInfo = { country = "SWE" NumberOfSpies = 1 }
	SpyInfo = { country = "CHI" NumberOfSpies = 4 }
	SpyInfo = { country = "FIN" NumberOfSpies = 2 }
	SpyInfo = { country = "FRA" NumberOfSpies = 3 }
	
	nationalprovinces = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 }
	ownedprovinces = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 727 728 729 730 731 732 733 734 735 736 737 738 739 743 833 907 908 914 915 917 918 919 920 921 922 923 924 926 927 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1581 1582 1583 1584 1585 1586 1740 1743 1744 1752 1767 1768 2000 2135 }
	controlledprovinces = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 727 728 729 730 731 732 733 734 735 736 737 738 739 743 833 907 908 914 915 917 918 919 920 921 922 923 924 926 927 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1581 1582 1583 1584 1585 1586 1740 1743 1744 1752 1767 1768 2000 2135 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1430 1470 1480 1490 1530 1540 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2280 2290 2300 2310 2320 2330 2340 2360 2370 2380 2390 2400 2410 2420 2430 2450 2460 2470 2480 2490 2500 2510 2520 2530 2540 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2890 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3560 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 4960 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5450 5466 5470 5480 5490 5500 5510 5520 5530 5560 5600 5610 5620 5630 5640 5650 5660 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6150 6180 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6790 6900 6910 7010 7020 7100 7110 7120 7140 7150 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8260 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 11000 12000 12010 12020 12040 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 14040 14070 15000 15010 15030 15060 15100 15120 15140 15180 15500 21180 21190 21200 22910 22920 22930 22940 27000 27010 27020 27070 27080 27140 27210 27410 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 53060 54010 54020 54030 81050 81060 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82100 82110 82300 82310 82320 82330 82500 82510 82520 199100 199110 199120 199130 199140 199150 
	
	13390 13400 3890 3960 12190
	
	}
	
	inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000026 3000027 3000028 3000031 }
	
	diplomacy = {
		relation = { tag = AST value = 150 }
		relation = { tag = BEL value = 120 }
		relation = { tag = DEN value = 75 }
		relation = { tag = U23 value = 200 access = yes }
		relation = { tag = DFR value = 150 }
		relation = { tag = ENG value = 150 }
		relation = { tag = GRE value = 75 }
		relation = { tag = HOL value = 75 }
		relation = { tag = IRQ value = 100 }
		relation = { tag = ITA value = 100 }
		relation = { tag = LUX value = 120 }
		relation = { tag = NOR value = 100 }
		relation = { tag = NZL value = 150 }
		relation = { tag = SWE value = 80 }
	}
	
	headofstate = { type = 9 id = 5400 }
	headofgovernment = { type = 9 id = 5401 }
	foreignminister = { type = 9 id = 5033 }
	armamentminister = { type = 9 id = 5071 }
	ministerofsecurity = { type = 9 id = 5180 }
	ministerofintelligence = { type = 9 id = 5184 }
	chiefofstaff = { type = 9 id = 5128 }
	chiefofarmy = { type = 9 id = 5131 }
	chiefofnavy = { type = 9 id = 5141 }
	chiefofair = { type = 9 id = 5151 }
	
	dormant_ministers = { 5002 5016 5019 5003 5031 5035 5004 5072 5005 5098 5006 }
	
	landunit = {
		id = { type = 30101 id = 1 }
		name = "French Army HQ"
		location = 189
		division = {
			type = hq
			model = 5
			id = { type = 30104 id = 1 }
			name = "French Army HQ"
			extra = police
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30101 id = 2 }
		name = "1st Corps"
		location = 105
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 2 }
			name = "10th Infantry Division"
		}
		division = {
			type = armor
			model = 4
			id = { type = 30104 id = 3 }
			name = "1st Armoured Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 4 }
			name = "2nd Maroccan Infantry Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 5 }
			name = "9th Colonial Infantry Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 23 }
			name = "10th Colonial Infantry Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 24 }
			name = "11th Colonial Infantry Division"
		}
	}
	landunit = {
		id = { type = 30101 id = 3 }
		name = "2nd Corps"
		location = 107
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 7 }
			name = "1st Infantry Division"
		}
		division = {
			type = armor
			model = 4
			id = { type = 30104 id = 8 }
			name = "2nd Armoured Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 9 }
			name = "3rd Algerian Infantry Division"
		}
		division = {
			type = armor
			model = 4
			id = { type = 30104 id = 10 }
			name = "5th Armoured Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 11 }
			name = "14th Infantry Division"
		}
	}
	landunit = {
		id = { type = 30101 id = 5 }
		name = "3rd Corps"
		location = 89
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 14 }
			name = "19th Infantry Division"
		}
		
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 26 }
			name = "20th Infantry Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 27 }
			name = "21st Infantry Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 28 }
			name = "22nd Infantry Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 29 }
			name = "23rd Infantry Division"
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 30 }
			name = "24th Infantry Division"
		}
	}
	landunit = {
		id = { type = 30101 id = 6 }
		name = "4th Corps"
		location = 55
		division = {
			type = armor
			model = 4
			id = { type = 30104 id = 15 }
			name = "3rd Armoured Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 16 }
			name = "23rd Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 17 }
			name = "25th Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 18 }
			name = "36th Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 19 }
			name = "2nd Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 20 }
			name = "1st Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 25 }
			name = "3rd Mechanized Division"
		}
	}
	
	landunit = {
		id = { type = 30101 id = 50 }
		name = "5th Corps"
		location = 52
		division = {
			type = motorized
			model = 4
			id = { type = 30104 id = 52 }
			name = "24th Motorized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 53 }
			name = "25th Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 54 }
			name = "36th Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 55 }
			name = "2nd Mechanized Division"
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30104 id = 56 }
			name = "1st Mechanized Division"
		}
	}
	

	navalunit = {
		id = { type = 30102 id = 1 }
		location = 37
		base = 37
		name = "Force Naval 1"
		division = {
			
			id = { type = 30105 id = 1 }
			name = "Béarn"
			type = carrier
			model = 6
			extra = cag
			brigade_model = 6
		}
		division = {
			
			id = { type = 30105 id = 2 }
			name = "Richelieu"
			type = battleship
			model = 9
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 1
			brigade_model2 = 2
			brigade_model3 = 2
			brigade_model4 = 5
			brigade_model5 = 0
		}
		division = {
			
			id = { type = 30105 id = 3 }
			name = "Duquesne"
			type = heavy_cruiser
			model = 7
		}
		division = {
			
			id = { type = 30105 id = 4 }
			name = "Duguay Trouin"
			type = light_cruiser
			model = 7
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 5
			brigade_model2 = 3
		}
		division = {
			
			id = { type = 30105 id = 5 }
			name = "Jeanne D'Arc"
			type = light_cruiser
			model = 7
			extra1 = none
			extra2 = naval_anti_air_s
			brigade_model1 = 2
			brigade_model2 = 5
		}
		division = {
			
			id = { type = 30105 id = 6 }
			name = "Emile Bertin"
			type = light_cruiser
			model = 7
			extra1 = naval_fire_controll_s
			extra2 = none
			brigade_model1 = 2
			brigade_model2 = 2
		}
		division = {
			
			id = { type = 30105 id = 7 }
			name = "1ère Flottille de Contre-torpilleurs"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30105 id = 8 }
			name = "2e Flotille de Contre-torpilleurs"
			type = destroyer
			model = 8
			extra1 = naval_asw
			brigade_model1 = 3
		}
		division = {
			
			id = { type = 30105 id = 9 }
			name = "1ère Flotille de Sous-Marins"
			type = submarine
			model = 9
		}
		division = {
			
			id = { type = 30105 id = 10 }
			name = "2e Flotille de Sous-Marins"
			type = submarine
			model = 9
		}
		division = {
			
			id = { type = 30105 id = 11 }
			name = "1ère Flotille de Convois"
			type = transport
			strength = 100
			model = 4
		}
		division = {
			
			id = { type = 30105 id = 12 }
			name = "2e Flotille de Convois"
			type = transport
			strength = 100
			model = 4
		}
	}
	navalunit = {
		id = { type = 30102 id = 2 }
		location = 89
		base = 89
		name = "Force Naval 2"
		division = {
			
			id = { type = 30105 id = 14 }
			name = "Lorraine"
			type = battleship
			model = 9
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 2
			brigade_model3 = 2
			brigade_model4 = 5
			brigade_model5 = 3
		}
		division = {
			
			id = { type = 30105 id = 15 }
			name = "Suffren"
			type = heavy_cruiser
			model = 7
		}
		division = {
			
			id = { type = 30105 id = 16 }
			name = "Tourville"
			type = heavy_cruiser
			model = 7
		}
		division = {
			
			id = { type = 30105 id = 17 }
			name = "Georges Leygues"
			type = light_cruiser
			model = 7
			extra1 = none
			extra2 = naval_anti_air_s
			brigade_model1 = 2
			brigade_model2 = 5
		}
		division = {
			
			id = { type = 30105 id = 18 }
			name = "Gloire"
			type = light_cruiser
			model = 7
			extra1 = none
			extra2 = naval_anti_air_s
			brigade_model1 = 2
			brigade_model2 = 5
		}
		division = {
			
			id = { type = 30105 id = 19 }
			name = "Montcalm"
			type = light_cruiser
			model = 7
			extra1 = none
			extra2 = naval_anti_air_s
			brigade_model1 = 2
			brigade_model2 = 5
		}
		division = {
			
			id = { type = 30105 id = 20 }
			name = "3e Flotille de Contre-torpilleurs"
			type = destroyer
			model = 8
			extra1 = naval_asw
			brigade_model1 = 3
		}
		division = {
			
			id = { type = 30105 id = 21 }
			name = "4e Flotille de Contre-torpilleurs"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			
			id = { type = 30105 id = 22 }
			name = "3e Flotille de Sous-Marins"
			type = submarine
			model = 9
		}
		division = {
			
			id = { type = 30105 id = 23 }
			name = "4e Flotille de Sous-Marins"
			type = submarine
			model = 9
		}
		division = {
			
			id = { type = 30105 id = 24 }
			name = "5e Flotille de Sous-Marins"
			type = submarine
			model = 9
		}
		division = {
			
			id = { type = 30105 id = 25 }
			name = "3e Flotille de Convois"
			type = transport
			strength = 100
			model = 4
		}
		division = {
			
			id = { type = 30105 id = 26 }
			name = "4e Flotille de Convois"
			type = transport
			strength = 100
			model = 4
		}
		division = {
			
			id = { type = 30105 id = 27 }
			name = "5e Flotille de Convois"
			type = transport
			strength = 100
			model = 4
		}
	} ####################################################
	

	airunit = {
		location = 104
		base = 104
		id = { type = 30103 id = 1 }
		name = "Escadre du Moyen-Orient"
		division = {
			
			id = { type = 30106 id = 1 }
			name = "Groupe de Chasse 21"
			type = multi_role
			model = 10
			strength = 100
		}
		division = {
			
			id = { type = 30106 id = 2 }
			name = "Groupe de Bombardement Tactique 1"
			type = tactical_bomber
			model = 10
			strength = 100
		}
	}
	airunit = {
		location = 77
		base = 77
		id = { type = 30103 id = 2 }
		name = "Escadre du Caledonie Nouvelle"
		division = {
			
			id = { type = 30106 id = 3 }
			name = "Groupe de Bombardement Naval 1"
			type = naval_bomber
			model = 6
			strength = 100
		}
	}
	airunit = {
		location = 37
		base = 37
		id = { type = 30103 id = 3 }
		name = "Escadre d'Afrique Ouest"
		division = {
			
			id = { type = 30106 id = 4 }
			name = "Groupe de Bombardement Naval 2"
			type = naval_bomber
			model = 6
			strength = 100
		}
	}
	airunit = {
		id = { type = 30103 id = 4 }
		location = 55
		base = 55
		name = "Groupe Expéditionnaire Fran?ais"
		division = {
			
			id = { type = 30106 id = 5 }
			name = "Groupe de Chasse 'Lorraine'"
			type = multi_role
			model = 10
			strength = 100
		}
		division = {
			
			id = { type = 30106 id = 6 }
			name = "Groupe de Bomb. Tact. 'Alsace'"
			type = tactical_bomber
			model = 10
			strength = 100
		}
	}
}
