# #############################
# Poland
# #############################


country = {
	tag = U32
	
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 5000
	money = 100
	
	manpower = 140
	
	capital = 232
	puppet = SOV
	control = SOV
	dissent = 15

	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
			MOB5 = 1
		}
	}
	
	nationalprovinces = { 155 158 159 161 164 165 166 167 168 181 183 185 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 239 243 246 250 252 254 }
	ownedprovinces = { 155 158 159 161 164 165 166 167 168 181 183 185 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 239 243 246 250 252 254 }
	controlledprovinces = { 155 158 159 161 164 165 166 167 168 181 183 185 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 239 243 246 250 252 254 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1470 1530 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2080 2100 2110 2150 2160 2170 2180 2220 2230 2290 2300 2310 2320 2330 2340 2370 2400 2410 2420 2450 2460 2470 2480 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4030 4040 4050 4060 4070 4080 4120 4130 4140 4150 4170 4190 4200 4220 4230 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5410 5416 5417 5420 5426 5430 5470 5480 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6300 6310 6320 6330 6340 6350 6360 6370 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7560 7570 7580 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9350 9360 9370 9390 9400 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 22920 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81650 81700 81710 81720 81850 81860 81870 81880 82300 82310 82320 82500 82510 199100 199130 199140  }
	inventions = { 3000011 3000012 3000015 3000018 3000027 3000028 3000031  }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 10
		freedom = 2
		free_market = 2
		professional_army = 5
		defense_lobby = 5
		interventionism = 5
	}
	
	headofstate = { type = 9 id = 975001 }
	headofgovernment = { type = 9 id = 975006 }
	foreignminister = { type = 9 id = 975104 }
	armamentminister = { type = 9 id = 975022 }
	ministerofsecurity = { type = 9 id = 975009 }
	ministerofintelligence = { type = 9 id = 975100 }
	chiefofstaff = { type = 9 id = 975027 }
	chiefofarmy = { type = 9 id = 975105 }
	chiefofnavy = { type = 9 id = 975102 }
	chiefofair = { type = 9 id = 975103 }
	
	################################################################
	# Polish Army OOB - by omega20
	# ref: http://pl.wikipedia.org/wiki/Warszawski_Okr%C4%99g_Wojskowy
	# ref: http://pl.wikipedia.org/wiki/Pomorski_Okr%C4%99g_Wojskowy
	# ref: http://pl.wikipedia.org/wiki/Pozna%C5%84ski_Okr%C4%99g_Wojskowy
	# ref: http://pl.wikipedia.org/wiki/%C5%9Al%C4%85ski_Okr%C4%99g_Wojskowy
	# ref: http://pl.wikipedia.org/wiki/Krakowski_Okr%C4%99g_Wojskowy
	# ref: http://pl.wikipedia.org/wiki/Lubelski_Okr%C4%99g_Wojskowy
	# ref: http://pl.wikipedia.org/wiki/%C5%81%C3%B3dzki_Okr%C4%99g_Wojskowy
	################################################################

	landunit = {
		id = { type = 18600 id = 1 }
		location = 232
		name = "Warszawski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 2 }
			name = "1 Warszawska Dyw. Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 3 }
			name = "15 Dywizja Piechoty"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 18600 id = 4 }
		location = 222
		name = "Pomorski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 5 }
			name = "12 Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 6 }
			name = "16 Kaszubska Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 7 }
			name = "1 Dywizja Kawalerii"
			type = cavalry
			model = 11
		}
	}
	landunit = {
		id = { type = 18600 id = 8 }
		location = 224
		name = "Poznanski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 9 }
			name = "4 Pomorska Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 10 }
			name = "5 Saska Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 11 }
			name = "8 Drezdenska Dywizja Piechoty"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 18600 id = 12 }
		location = 221
		name = "Slaski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 13 }
			name = "7 Luzycka Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 14 }
			name = "10 Sudecka Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 15 }
			name = "11 Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 16 }
			name = "13 Dywizja Piechoty"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 18600 id = 17 }
		location = 235
		name = "Krakowski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 18 }
			name = "6 Pomorska Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 19 }
			name = "9 Drezdenska Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 20 }
			name = "17 Dywizja Piechoty"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 18600 id = 21 }
		location = 243
		name = "Lubelski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 22 }
			name = "2 Warszawska Dyw. Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 23 }
			name = "3 Pomorska Dywizja Piechoty"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 18600 id = 24 }
			name = "14 Dywizja Piechoty"
			type = infantry
			model = 11
		}
	}
	landunit = {
		id = { type = 18600 id = 25 }
		location = 223
		name = "Lodzki Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 26 }
			name = "18 Dywizja Piechoty"
			type = infantry
			model = 11
		}
	}

	navalunit = {
		id = { type = 30013 id = 114 }
		name = "Polska Flota Wojenna"
		location = 181 # Danzig
		base = 181
		division = {
			id = { type = 30013 id = 115 }
			name = "1 Flotylla Niszczycieli"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 30013 id = 117 }
			name = "1 Flotylla Okretow Podwodnych"
			type = submarine
			model = 5
		}
	}

	################################################################
	# Polish Air Force OOB - by omega20
	# ref: http://pl.wikipedia.org/wiki/Si%C5%82y_Powietrzne#1943.E2.80.931989
	################################################################

	airunit = {
		id = { type = 18600 id = 60 }
		name = "1 Mieszany Korpus Lotniczy"
		location = 232
		base = 232
		division = {
			id = { type = 18600 id = 61 }
			name = "1 Dywizja Lotnictwa Bombowego"
			type = tactical_bomber
			model = 7
		}
		division = {
			id = { type = 18600 id = 62 }
			name = "2 Dywizja Lotnictwa Szturmowego"
			type = cas
			model = 2
		}
		division = {
			id = { type = 18600 id = 63 }
			name = "3 Dywizja Lotnictwa Mysliwskiego"
			type = interceptor
			model = 9
		}
	}
	airunit = {
		id = { type = 18600 id = 64 }
		name = "4 Mieszana Dywizja Lotnicza"
		location = 224
		base = 224
		division = {
			id = { type = 18600 id = 65 }
			name = "4 Mieszana Dywizja Lotnicza"
			type = multi_role
			model = 6
		}
	}
}
