# #############################
# Mexico
# #############################


country = {
	tag = MEX
	energy = 1000
	metal = 500
	rare_materials = 200
	oil = 500
	supplies = 500
	manpower = 70
	capital = 1974
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
		}
	}
	
	diplomacy = {
		relation = { tag = ENG value = 50 }
		relation = { tag = HOL value = 25 }
		relation = { tag = USA value = 125 }
	}
	
	nationalprovinces = { 1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 }
	ownedprovinces = { 1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 }
	controlledprovinces = { 1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1470 1530 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2100 2150 2170 2220 2290 2300 2310 2320 2330 2400 2410 2420 2450 2460 2470 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4030 4050 4120 4130 4170 4220 4250 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4900 4910 4920 4930 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5180 5190 5200 5210 5310 5316 5320 5326 5327 5330 5350 5360 5370 5410 5416 5417 5420 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 9010 9020 9030 9040 9050 9090 9140 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 81700 81710 81720 81850 81860 81870 81880 82300 82310 82320 82500 82510 199100 199130 199140  }
	inventions = { 3000027 3000028 3000031  }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 9
		political_left = 9
		freedom = 6
		free_market = 7
		professional_army = 4
		defense_lobby = 4
		interventionism = 2
	}
	
	dormant_ministers = { 170006 170007 170001 170002 170003 170004 170038 170005 170050 170063 170008 170035 170072 170079 170009 170010 }
	
	headofstate = { type = 9 id = 170011 }
	headofgovernment = { type = 9 id = 170019 }
	foreignminister = { type = 9 id = 170028 }
	armamentminister = { type = 9 id = 170040 }
	ministerofsecurity = { type = 9 id = 170054 }
	ministerofintelligence = { type = 9 id = 170064 }
	chiefofstaff = { type = 9 id = 170073 }
	chiefofarmy = { type = 9 id = 170080 }
	chiefofnavy = { type = 9 id = 170086 }
	chiefofair = { type = 9 id = 170091 }
	

	landunit = {
		id = { type = 10244 id = 1 }
		name = "1st Army"
		location = 1974
		division = {
			id = { type = 10244 id = 2 }
			name = "Presidential Guard"
			strength = 100
			type = infantry
			model = 11
		}
		division = {
			id = { type = 10244 id = 3 }
			name = "1a Divisi�n de Infanter�a"
			strength = 100
			type = infantry
			model = 11
		}
		division = {
			id = { type = 10244 id = 4 }
			name = "2a Divisi�n de Infanter�a"
			strength = 100
			type = infantry
			model = 11
		}
		division = {
			id = { type = 10244 id = 5 }
			name = "3a Divisi�n de Infanter�a"
			strength = 100
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 10244 id = 6 }
		name = "2nd Army"
		location = 1967
		division = {
			id = { type = 10244 id = 7 }
			name = "4a Divisi�n de Infanter�a"
			strength = 100
			type = infantry
			model = 11
		}
		division = {
			id = { type = 10244 id = 8 }
			name = "5a Divisi�n de Infanter�a"
			strength = 100
			type = infantry
			model = 11
		}
		division = {
			id = { type = 10244 id = 9 }
			name = "6a Divisi�n de Infanter�a"
			strength = 100
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 10244 id = 10 }
		name = "1st Cavalry Corps"
		location = 1978
		division = {
			id = { type = 10244 id = 11 }
			name = "1a Divisi�n de Caballer�a"
			strength = 100
			type = cavalry
			model = 11
		}
		division = {
			id = { type = 10244 id = 12 }
			name = "2a Divisi�n de Caballer�a"
			strength = 100
			type = cavalry
			model = 11
		}
	}
	navalunit = {
		id = { type = 10244 id = 13 }
		name = "Mexican Navy"
		location = 1967
		base = 1967
		division = {
			id = { type = 10244 id = 18 }
			name = "1a Flotilla Naval � Ejercito"
			type = transport
			model = 2
		}
		division = {
			id = { type = 10244 id = 19 }
			name = "2a Flotilla Naval � Ejercito"
			type = transport
			model = 2
		}
		division = {
			id = { type = 10244 id = 20 }
			name = "3a Flotilla Naval � Ejercito"
			type = transport
			model = 2
		}
	}
}
