# #############################
# Indonesia
# #############################


country = {
	tag = INO
	
	energy = 2000
	metal = 1000
	rare_materials = 3000
	oil = 500
	supplies = 500
	
	manpower = 410
	
	capital = 1654 # Jogjakarta
	
	transports = 300
	escorts = 30
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 4
		political_left = 7
		freedom = 3
		free_market = 5
		professional_army = 7
		defense_lobby = 8
		interventionism = 6
	}
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
			MOB4 = 1
			MOB5 = 1
			MOB6 = 1
			MOB7 = 1
			block_demobilization = 1
		}
	}
	
	nationalprovinces = { 1594 1595 1596 1597 1598 1599 1600 1601 1604 1615 1616 1617 1618 1619 1620 1621 1622 1623 1627 1628 1629 1630 1631 1632 1633 1634 1635 1636 1637 1638 1639 1640 1641 1642 1643 1644 1645 1646 1647 1648 1649 1650 1651 1652 1653 1654 1655 1656 1657 1658 1659 1660 }
	ownedprovinces = { 1648 1650 1652 1653 1654 1655 1656 }
	controlledprovinces = { 1648 1650 1652 1653 1654 1655 1656 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2100 2150 2170 2220 2290 2300 2310 2320 2330 2400 2410 2420 2450 2460 2470 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4030 4040 4050 4060 4070 4080 4120 4130 4140 4150 4170 4190 4220 4230 4250 4260 4280 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4900 4910 4920 4930 4940 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5180 5190 5200 5210 5310 5316 5320 5326 5327 5330 5350 5360 5370 5410 5416 5417 5420 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6390 6400 6410 6420 6430 6500 6510 6530 6550 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8610 8900 8910 8920 8930 8940 8950 8960 9010 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81650 81700 81710 81850 81860 82300 82310 82500 199100 199130  }
	
	inventions = { 3000027 3000028 3000031  }
	
	diplomacy = {
		relation = { tag = HOL value = -100 }
		relation = { tag = U05 value = -200 }
	}
	
	headofstate = { type = 9 id = 270011 }
	headofgovernment = { type = 9 id = 270103 }
	foreignminister = { type = 9 id = 270020 }
	armamentminister = { type = 9 id = 270024 }
	ministerofsecurity = { type = 9 id = 270029 }
	ministerofintelligence = { type = 9 id = 270035 }
	chiefofstaff = { type = 9 id = 270041 }
	chiefofarmy = { type = 9 id = 270047 }
	chiefofnavy = { type = 9 id = 270051 }
	chiefofair = { type = 9 id = 270054 }
	

	dormant_leaders = { }
	
	landunit = {
		location = 1654
		name = "Indonesian Army"
		id = { type = 7391 id = 1 }
		division = {
			id = { type = 7392 id = 1 }
			name = "1st Division"
			type = infantry
			model = 11
		}
		division = {
			id = { type = 7392 id = 2 }
			name = "2nd Division"
			type = militia
			model = 5
		}
		division = {
			id = { type = 7392 id = 3 }
			name = "3rd Division"
			type = militia
			model = 5
		}
	}
	
	landunit = {
		location = 1655
		name = "1st Corps"
		id = { type = 7391 id = 2 }
		division = {
			id = { type = 7392 id = 4 }
			name = "4th Division"
			type = militia
			model = 5
		}
	}
	
	landunit = {
		location = 1650
		name = "2nd Corps"
		id = { type = 7391 id = 3 }
		division = {
			id = { type = 7392 id = 5 }
			name = "5th Division"
			type = militia
			model = 5
		}
	}
	
	landunit = {
		location = 1648
		name = "3rd Corps"
		id = { type = 7391 id = 4 }
		division = {
			id = { type = 7392 id = 6 }
			name = "6th Division"
			type = militia
			model = 5
		}
	}
	
	landunit = {
		location = 1653
		name = "Soerabaja Garrison"
		id = { type = 7391 id = 6 }
		division = {
			id = { type = 7392 id = 8 }
			name = "Soerabaja Garrison"
			type = garrison
			model = 5
		}
	}
	
	landunit = {
		location = 1654
		name = "Jogjakarta Garrison"
		id = { type = 7391 id = 7 }
		division = {
			id = { type = 7392 id = 9 }
			name = "Jogjakarta Garrison"
			type = garrison
			model = 5
		}
	}
	
	navalunit = {
		id = { type = 7393 id = 1 }
		name = "1st Transport Navy"
		location = 1596
		base = 1596
		division = {
			type = transport
			model = 2
			id = { type = 7394 id = 1 }
			name = "Transport"
		}
		division = {
			type = transport
			model = 2
			id = { type = 7394 id = 2 }
			name = "Transport"
		}
		division = {
			type = transport
			model = 2
			id = { type = 7394 id = 3 }
			name = "Transport"
		}
		division = {
			type = transport
			model = 2
			id = { type = 7394 id = 4 }
			name = "Transport"
		}
	}
}
