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
	
	industrial_modifier = 1.10
							
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
			MOB5 = 1
		}
	}
	
	diplomacy = { }
	
	nationalprovinces = { 155 158 159 161 164 165 166 167 168 181 183 185 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 239 243 246 250 252 254 }
	ownedprovinces = { 155 158 159 161 164 165 166 167 168 181 183 185 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 239 243 246 250 252 254 }
	controlledprovinces = { 155 158 159 161 164 165 166 167 168 181 183 185 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 239 243 246 250 252 254 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1430 1470 1480 1490 1530 1540 1560 1570 1580 1590 1600 1610 1620 1670 1680 1690 1700 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2220 2230 2240 2250 2260 2270 2280 2290 2300 2310 2320 2330 2340 2360 2370 2380 2390 2400 2410 2420 2430 2450 2460 2470 2480 2490 2500 2510 2520 2530 2540 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2890 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 4960 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5450 5466 5470 5480 5490 5500 5510 5520 5530 5560 5600 5610 5620 5630 5640 5650 5660 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6300 6310 6320 6330 6340 6350 6360 6370 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6770 6900 6910 7010 7020 7100 7110 7120 7140 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8500 8510 8520 8550 8560 8570 8600 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 11000 12000 12010 12020 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 14040 14060 15000 15010 15060 15100 15140 15180 15500 21180 21190 21200 22910 22920 22930 22940 27000 27010 27070 27140 27210 27410 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 53060 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81380 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82100 82300 82310 82320 82330 82500 82510 82520 199100 199110 199120 199130 199140 199150 }
	
	inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000026 3000027 3000028 3000031 }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 7
		freedom = 2
		free_market = 2
		professional_army = 5
		defense_lobby = 5
		interventionism = 5
	}
	
	headofstate = { type = 9 id = 975004 }
	headofgovernment = { type = 9 id = 975014 }
	foreignminister = { type = 9 id = 975032 }
	armamentminister = { type = 9 id = 975117 }
	ministerofsecurity = { type = 9 id = 975131 }
	ministerofintelligence = { type = 9 id = 975127 }
	chiefofstaff = { type = 9 id = 975128 }
	chiefofarmy = { type = 9 id = 975122 }
	chiefofnavy = { type = 9 id = 975129 }
	chiefofair = { type = 9 id = 975130 }
	
	landunit = {
		id = { type = 18600 id = 18 }
		location = 232
		name = "Warszawski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 43 }
			name = "Sztab Glowny LWP"
			type = hq
			model = 4
		}
		division = {
			id = { type = 18600 id = 19 }
			name = "3 Dywizja Piechoty"
			type = mechanized
			model = 3
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			id = { type = 18600 id = 20 }
			name = "9 Dywizja Piechoty"
			type = motorized
			model = 3
		}
		division = {
			id = { type = 18600 id = 21 }
			name = "8 Dywizja Artylerii"
			type = motorized
			model = 3
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			id = { type = 18600 id = 27 }
			name = "15 Dywizja Zmechanizowana"
			type = mechanized
			model = 3
		}
		
	}
	landunit = {
		id = { type = 18600 id = 24 }
		location = 235
		name = "Poznanski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 25 }
			name = "8 Drezdeñska Dywizja Zmechanizowana"
			type = motorized
			model = 3
			extra = sp_artillery
			brigade_model = 3
		}
		division = {
			id = { type = 18600 id = 26 }
			name = "12 Dywizja Zmechanizowana"
			type = mechanized
			model = 3
		}
		
		division = {
			id = { type = 18600 id = 28 }
			name = "23 Dywizja Piechoty"
			type = motorized
			model = 4
		}
		division = {
			id = { type = 18600 id = 42 }
			name = "16 Kaszubska Dywizja Pancerna"
			type = armor
			model = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 29 }
		location = 181
		name = "Slaski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 30 }
			name = "2 Warszawska Dywizja Zmechanizowana"
			type = motorized
			model = 4
			extra = artillery
			brigade_model = 11
		}
		division = {
			id = { type = 18600 id = 31 }
			name = "11 Dywizja Zmechanizowana"
			type = motorized
			model = 4
		}
		division = {
			id = { type = 18600 id = 32 }
			name = "11 Dywizja Artylerii Przeciwlotniczej"
			type = motorized
			model = 4
			extra = sp_anti_air
			brigade_model = 3
		}
		division = {
			id = { type = 18600 id = 33 }
			name = "9 Drezdenska Dywizja Piechoty"
			type = motorized
			model = 4
		}
	}
	landunit = {
		id = { type = 18600 id = 34 }
		location = 161
		name = "Krakowski Okreg Wojskowy"
		division = {
			id = { type = 18600 id = 35 }
			name = "2 Warszawska Dywizja Piechoty"
			type = motorized
			model = 4
			extra = artillery
			brigade_model = 11
		}
		division = {
			id = { type = 18600 id = 36 }
			name = "16 Dywizja Artylerii Przeciwlotniczej"
			type = motorized
			model = 3
			extra = sp_anti_air
			brigade_model = 3
		}
		division = {
			id = { type = 18600 id = 37 }
			name = "14 Dywizja Zmotoryzowana"
			type = motorized
			model = 3
		}
		division = {
			id = { type = 18600 id = 38 }
			name = "15 Dywizja Zmotoryzowana"
			type = motorized
			model = 3
		}
	}
	landunit = {
		id = { type = 18600 id = 39 }
		location = 224
		name = "Korpus Pancerny"
		division = {
			id = { type = 18600 id = 40 }
			name = "5 Dywizja Pancerna"
			type = armor
			model = 3
		}
		division = {
			id = { type = 18600 id = 41 }
			name = "20 Dywizja Pancerna"
			type = armor
			model = 3
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
			model = 7
		}
		division = {
			id = { type = 30013 id = 117 }
			name = "1 Flotylla Okretow Podwodnych"
			type = submarine
			model = 8
		}
	}
	airunit = {
		id = { type = 18600 id = 59 }
		name = "Wojsko Lotnicze"
		location = 232
		base = 232
		division = {
			id = { type = 18600 id = 60 }
			name = "1 Dywizja Lotnictwa Mysliwskiego OPL"
			type = interceptor
			model = 12
		}
		division = {
			id = { type = 18600 id = 62 }
			name = "2 Dywizja Lotnictwa Mysliwskiego OPL"
			type = interceptor
			model = 12
		}
	}
}
