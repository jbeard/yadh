# #############################
# United Kingdom
# #############################


country = {
	tag = ENG
	
	energy = 5000
	metal = 5000
	rare_materials = 2500
	oil = 500
	supplies = 10000
	money = 500
	manpower = 135
	
	transports = 1600
	escorts = 150
	
	capital = 29
	
	dissent = 4
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 10
		political_left = 8
		freedom = 10
		free_market = 8
		professional_army = 3
		defense_lobby = 6
		interventionism = 4
	}
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
		}
	}
	
	SpyInfo = { country = "POR" NumberOfSpies = 3 }
	SpyInfo = { country = "SOV" NumberOfSpies = 5 }
	SpyInfo = { country = "SPA" NumberOfSpies = 5 }
	SpyInfo = { country = "ARG" NumberOfSpies = 2 }
	SpyInfo = { country = "TUR" NumberOfSpies = 2 }
	SpyInfo = { country = "SWE" NumberOfSpies = 2 }
	SpyInfo = { country = "CHI" NumberOfSpies = 4 }
	SpyInfo = { country = "ENG" NumberOfSpies = 5 }
	
	nationalprovinces = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 348 429 1509 1510 1511 }
	ownedprovinces = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 126 131 141 142 144 145 146 147 149 150 151 152 154 190 191 348 378 379 387 388 429 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 803 804 805 806 807 808 809 810 811 812 813 814 815 816 817 832 834 835 836 837 838 839 840 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 896 900 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 993 997 998 1008 1009 1010 1011 1013 1022 1023 1024 1025 1026 1039 1041 1051 1053 1172 1371 1432 1433 1434 1435 1436 1437 1438 1509 1510 1511 1588 1589 1590 1591 1592 1593 1611 1624 1626 1678 1679 1680 1682 1687 1728 1729 1730 1746 1749 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 1997 1998 2045 2086 2136 2137 2138 1038 874 877 }
	controlledprovinces = { 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 35 36 126 131 141 142 144 145 146 147 149 150 151 152 154 190 191 348 378 379 387 388 429 750 751 752 753 754 755 756 757 758 759 760 761 762 763 764 765 766 767 768 769 770 771 772 773 774 775 776 777 803 804 805 806 807 808 809 810 811 812 813 814 815 816 817 832 834 835 836 837 838 839 840 841 842 843 844 845 848 849 850 851 852 859 860 861 862 863 864 865 866 867 868 869 870 871 896 900 929 930 931 932 933 934 935 936 937 938 939 940 941 952 953 954 955 956 964 979 993 997 998 1008 1009 1010 1011 1013 1022 1023 1024 1025 1026 1039 1041 1051 1053 1172 1371 1432 1433 1434 1435 1436 1437 1438 1509 1510 1511 1588 1589 1590 1591 1592 1593 1611 1624 1626 1678 1679 1680 1682 1687 1728 1729 1730 1746 1749 1753 1754 1755 1757 1758 1759 1760 1763 1764 1766 1769 1770 1771 1772 1773 1774 1782 1997 1998 2045 2086 2136 2137 2138 1038 874 877 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1470 1530 1560 1570 1580 1590 1600 1610 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2080 2090 2100 2110 2120 2150 2160 2170 2180 2220 2230 2240 2260 2290 2300 2310 2320 2330 2340 2370 2400 2410 2420 2430 2450 2460 2470 2480 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4120 4130 4140 4150 4160 4170 4190 4200 4210 4220 4230 4240 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5470 5480 5490 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6140 6170 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7010 7100 7140 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 8970 8980 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 12000 12010 12020 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 22920 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82300 82310 82320 82330 82500 82510 82520 199100 199130 199140 6200 15000 
	
	
	
	}
	
	inventions = { 3000011 3000012 3000015 3000016 3000018 3000027 3000028 3000031 }
	
	diplomacy = {
		relation = { tag = AFG value = -75 }
		relation = { tag = ARG value = 75 }
		relation = { 
			tag = AST 
			value = 200 
			access = yes 
			guaranteed = { day = 8 month = may year = 1945 }
		}
		relation = { tag = BEL value = 150 access = yes }
		relation = { tag = BHU value = 200 access = yes }
		relation = { tag = BUL value = 20 }
		relation = { tag = CAN value = 200 access = yes }
		relation = {
			tag = DEN
			value = 100
			guaranteed = { day = 19 month = april year = 1939 }
		}
		relation = { 
			tag = EGY
			value = 125
			access = yes 
			guaranteed = { day = 8 month = may year = 1945 }
		}
		relation = { tag = FRA value = 150 access = yes }
		relation = {
			tag = GRE
			value = 50
			guaranteed = { day = 13 month = april year = 1939 }
		}
		relation = {
			tag = HOL
			value = 125
			guaranteed = { day = 19 month = april year = 1939 }
			access = yes
		}
		relation = { tag = HUN value = -50 }
		relation = { tag = IRE value = 50 }
		relation = { tag = IRQ value = 100 access = yes }
		relation = { tag = ITA value = 100 access = yes }
		relation = { tag = MEX value = 50 }
		relation = { tag = NEP value = 200 access = yes }
		relation = { tag = NOR value = 90 }
		relation = { tag = NZL value = 200 access = yes }
		relation = { tag = OMN value = 150 access = yes }
		relation = { 
			tag = PER
			value = 100 
			access = yes 
			guaranteed = { day = 8 month = may year = 1945 }
		}
		relation = {
			tag = POR
			value = 100
			guaranteed = { day = 22 month = may year = 1939 }
		}
		relation = {
			tag = ROM
			value = 50
			guaranteed = { day = 13 month = april year = 1939 }
		}
		relation = { tag = SAF value = 200 access = yes }
		relation = {
			tag = SAU
			value = 100
			guaranteed = { day = 11 month = february year = 1934 }
		}
		relation = {
			tag = SCH
			value = 50
			guaranteed = { day = 19 month = april year = 1939 }
		}
		relation = { tag = SIA value = 70 }
		relation = { tag = SWE value = 80 }
		relation = {
			tag = TUR
			value = 75
			guaranteed = { day = 17 month = may year = 1938 }
		}
		relation = { tag = USA value = 150 }
		relation = { tag = VEN value = -10 }
		relation = {
			tag = YEM
			value = 150
			access = yes
			guaranteed = { day = 11 month = february year = 1934 }
		}
		relation = { tag = ICL value = 150 access = yes }
		relation = { tag = BRU access = yes value = 200 }
		relation = { tag = U02 value = 100 access = yes }
	}
	
	headofstate = { type = 9 id = 10014 }
	headofgovernment = { type = 9 id = 10019 }
	foreignminister = { type = 9 id = 10024 }
	armamentminister = { type = 9 id = 10044 }
	ministerofsecurity = { type = 9 id = 10065 }
	ministerofintelligence = { type = 9 id = 10080 }
	chiefofstaff = { type = 9 id = 10097 }
	chiefofarmy = { type = 9 id = 10106 }
	chiefofnavy = { type = 9 id = 10111 }
	chiefofair = { type = 9 id = 10118 }
	
	dormant_ministers = { 10001 10002 10004 10005 10006 10007 10008 10009 10010 10011 10017 10020 10022 10026 10029 10030 10031 10045 10050 10058 10059 10066 10081 10093 10098 10101 10102 10107 10112 10114 10128 10130 10039 10091 10103 10105 10109 10119 10131 10141 10142 }
	
	dormant_leaders        = {  10083 10313  }
	
	################################################################
	# British Army OOB - by omega20
	# ref: http://en.wikipedia.org/wiki/List_of_British_divisions_in_World_War_II
	# ref: http://www.cgsc.edu/CARL/nafziger/939BXIA.pdf
	# ref: http://www.britishmilitaryhistory.co.uk/documents.php?nid=3
	# ref: http://www.ordersofbattle.com/Units/UnitOrderofBattle?UniX=6961&OobDate=31%2F08%2F1945
	# ref: http://www.britishmilitaryhistory.co.uk/webeasycms/hold/uploads/bmh_document_pdf/British-Corps-Formations-1939-1945.pdf
	################################################################

	landunit = {
		id = { type = 30251 id = 1 }
		name = "Home Forces"
		location = 29 # UK
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 1 }
			name = "British Army HQ"
			extra = anti_air
			brigade_model = 4
			experience = 80
		}
		division = {
			type = paratrooper
			model = 1
			id = { type = 30254 id = 2 }
			name = "1st Airborne Division"
			strength = 25
			experience = 90
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 3 }
			name = "45th Division"
			experience = 75
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 4 }
			name = "50th (Northumbrian) Division"
			experience = 75
		}
	}
	landunit = {
		id = { type = 30251 id = 2 }
		name = "Western Command"
		location = 17 # UK
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 5 }
			name = "38th Infantry (Reserve) Division"
			experience = 75
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 6 }
			name = "55th (West Lancashire) Division"
			experience = 75
		}
	}
	landunit = {
		id = { type = 30251 id = 3 }
		name = "Southern Command"
		location = 19 # UK
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 7 }
			name = "47th Infantry (Reserve) Division"
			experience = 75
		}
	}
	landunit = {
		id = { type = 30251 id = 4 }
		name = "Eastern Command"
		location = 25 # UK
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 8 }
			name = "61st (South Midland) Division"
			experience = 75
		}
	}
	landunit = {
		id = { type = 30251 id = 5 }
		name = "Northern & Scottish Command"
		location = 13 # UK
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 9 }
			name = "48th Infantry (Reserve) Division"
			experience = 75
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 10 }
			name = "4 Dywizja Piechoty"
			experience = 75
			extra = artillery
			brigade_model = 10
		}
	}
	landunit = {
		id = { type = 30251 id = 6 }
		name = "I Corps"
		location = 154 # Germany
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 11 }
			name = "Guards Infantry Division"
			extra = light_armor_brigade
			brigade_model = 7
			experience = 80
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 12 }
			name = "3rd Infantry Division"
			extra = engineer
			brigade_model = 4
			experience = 80
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 13 }
			name = "49th (West Riding) Division"
			experience = 80
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 14 }
			name = "52nd (Lowland) Division"
			extra = anti_air
			brigade_model = 4
			experience = 80
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 15 }
			name = "53rd (Welsh) Division"
			extra = artillery
			brigade_model = 10
			experience = 80
		}
	}
	landunit = {
		id = { type = 30251 id = 7 }
		name = "VIII Corps"
		location = 149 # Germany
		division = {
			type = armor
			model = 2
			id = { type = 30254 id = 16 }
			name = "7th Armoured Division"
			extra = heavy_armor
			brigade_model = 3
			experience = 90
		}
		division = {
			type = armor
			model = 2
			id = { type = 30254 id = 17 }
			name = "11th Armoured Division"
			extra = tank_destroyer
			brigade_model = 2
			experience = 90
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 18 }
			name = "15th (Scottish) Division"
			experience = 90
			extra = engineer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30251 id = 8 }
		name = "XXX Corps"
		location = 151 # Germany
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 19 }
			name = "5th Infantry Division"
			experience = 85
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 20 }
			name = "43rd (Wessex) Division"
			experience = 85
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 21 }
			name = "51st (Highland) Division"
			experience = 85
			extra = engineer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30251 id = 9 }
		name = "Army of the Rhine HQ"
		location = 149 # Germany
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 22 }
			name = "Army of the Rhine"
			extra = anti_air
			brigade_model = 4
			experience = 90
		}
	}
	landunit = {
		id = { type = 30251 id = 10 }
		name = "8th Army HQ"
		location = 190 # Austria
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 23 }
			name = "8th Army"
			experience = 75
		}
	}
	landunit = {
		id = { type = 30251 id = 11 }
		name = "V Corps"
		location = 190 # Austria
		division = {
			type = armor
			model = 2
			id = { type = 30254 id = 24 }
			name = "6th Armoured Division"
			experience = 75
			extra = heavy_armor
			brigade_model = 3
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 25 }
			name = "46th (West Riding) Division"
			experience = 90
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 26 }
			name = "78th Infantry Division"
			experience = 75
			extra = light_armor_brigade
			brigade_model = 7
		}
	}
	landunit = {
		id = { type = 30251 id = 12 }
		name = "XIII Corps"
		location = 404 # Italy
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 27 }
			name = "56th (London) Division"
			extra = light_armor_brigade
			brigade_model = 7
			experience = 75
		}
	}
	landunit = {
		id = { type = 30251 id = 13 }
		name = "I Korpus Pancerno-Motorowy"
		location = 146 # Germany
		division = {
			type = armor
			model = 2
			id = { type = 30254 id = 28 }
			name = "1 Dywizja Pancerna"
			experience = 75
			extra = tank_destroyer
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30251 id = 14 }
		name = "II Korpus Polski"
		location = 400 # Italy
		division = {
			type = armor
			model = 2
			id = { type = 30254 id = 29 }
			name = "2 Warszawska Pancerna"
			experience = 75
			extra = heavy_armor
			brigade_model = 3
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 30 }
			name = "3 Dywizja Strzelców Karpackich"
			experience = 75
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 31 }
			name = "5 Kresowa Dywizja Piechoty"
			experience = 75
			extra = engineer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30251 id = 15 }
		name = "X Corps"
		location = 789 # Egypt
		division = {
			type = motorized
			model = 2
			id = { type = 30254 id = 32 }
			name = "1st Infantry Division"
			experience = 70
			extra = artillery
			brigade_model = 11
		}
	}
	landunit = {
		id = { type = 30251 id = 16 }
		name = "14th Army HQ"
		location = 1432 # Malaya
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 33 }
			name = "14th Army"
			extra = engineer
			brigade_model = 4
			experience = 50
		}
	}
	landunit = {
		id = { type = 30251 id = 17 }
		name = "XV Corps"
		location = 1172 # Palestine
		division = {
			type = paratrooper
			model = 1
			id = { type = 30254 id = 34 }
			name = "6th Airborne Division"
			strength = 25
			experience = 90
		}
	}
	landunit = {
		id = { type = 30251 id = 18 }
		name = "Land Forces Greece"
		location = 379 # Greece; placed in Rodos for gameplay reasons
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 35 }
			name = "4th Infantry Division"
			extra = engineer
			brigade_model = 4
			experience = 80
		}
	}
	landunit = {
		id = { type = 30251 id = 19 }
		name = "ALFSEA"
		location = 1432 # Malaya
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 36 }
			name = "HQ ALFSEA"
			extra = anti_air
			brigade_model = 4
			experience = 90
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 37 }
			name = "2nd Infantry Division"
			experience = 45
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 38 }
			name = "11th (East African) Division"
			experience = 50
		}
	}
	landunit = {
		id = { type = 30251 id = 20 }
		name = "12th Army HQ"
		location = 1415 # Burma
		division = {
			type = hq
			model = 4
			id = { type = 30254 id = 39 }
			name = "12th Army"
			extra = engineer
			brigade_model = 4
			experience = 50
		}
	}
	landunit = {
		id = { type = 30251 id = 21 }
		name = "IV Corps"
		location = 1415 # Burma
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 40 }
			name = "82nd (West African) Division"
			experience = 50
		}
	}
	landunit = {
		id = { type = 30251 id = 22 }
		name = "Southern Army"
		location = 1516 # India
		division = {
			type = infantry
			model = 11
			id = { type = 30254 id = 41 }
			name = "81st (West African) Division"
			experience = 50
		}
	}
	landunit = {
		id = { type = 30251 id = 23 }
		name = "Gibraltar Command"
		location = 348 # Gibraltar
		division = {
			experience = 30
			id = { type = 30254 id = 42 }
			name = "Gibraltar Defence Force"
			type = infantry
			model = 11
			strength = 100
			extra = anti_air
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30251 id = 24 }
		name = "Malta Command"
		location = 429 # Malta
		division = {
			experience = 30
			id = { type = 30254 id = 43 }
			name = "Malta Defence Force"
			type = infantry
			model = 11
			strength = 100
			extra = anti_air
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30251 id = 25 }
		name = "Cyprus Command"
		location = 388 # Cyprus
		division = {
			experience = 30
			id = { type = 30254 id = 44 }
			name = "Cyprus Defence Force"
			type = garrison
			model = 5
			strength = 100
		}
	} #######################################################
	# ############# Active Fleets ###########################
	# #######################################################

	################################################################
	# Royal Navy OOB - by omega20
	# ref: http://en.wikipedia.org/wiki/List_of_ship_names_of_the_Royal_Navy#By_types_of_ship
	################################################################

	# ~ 210 operative destroyers by 1945
	# ~ 130 operative submarines by 1945

	# Home Fleet #
	

	navalunit = {
		name = "Home Fleet"
		id = { type = 30252 id = 1 }
		location = 5 # Scapa Flow
		base = 5 # Scapa Flow
		division = {
			experience = 30
			id = { type = 30255 id = 1 }
			name = "HMS Illustrious"
			type = carrier
			model = 3
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 0
			id = { type = 30255 id = 2 }
			name = "HMS Ocean"
			type = light_carrier
			model = 1
			extra1 = light_cag
			brigade_model1 = 5
		}
		division = {
			experience = 0
			id = { type = 30255 id = 3 }
			name = "HMS Pioneer"
			type = escort_carrier
			model = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 4 }
			name = "HMS Queen Elizabeth"
			type = battleship
			model = 4
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 5 }
			name = "HMS Swiftsure"
			type = light_cruiser
			model = 6
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 6 }
			name = "HMS Birmingham"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 7 }
			name = "HMS Bellona"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 8 }
			name = "HMS Black Prince"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 9 }
			name = "HMS Diadem"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 10 }
			name = "HMS Danae"
			type = light_cruiser
			model = 2
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 11 }
			name = "1st Destroyer Flotilla"
			type = destroyer
			model = 8
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 12 }
			name = "2nd Destroyer Flotilla"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 13 }
			name = "3rd Destroyer Flotilla"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 14 }
			name = "4th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 15 }
			name = "5th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} #######################################################
	# Reserve Fleet - Clyde#
	

	navalunit = {
		name = "Reserve Fleet"
		id = { type = 30252 id = 2 }
		location = 36 # Glasgow
		base = 36
		division = {
			experience = 30
			id = { type = 30255 id = 16 }
			name = "HMS Kent"
			type = heavy_cruiser
			model = 3
			extra1 = none
			extra2 = none
			extra3 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 17 }
			name = "HMS Hawkins"
			type = heavy_cruiser
			model = 2
			extra1 = none
			extra2 = none
			extra3 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 18 }
			name = "HMS Cardiff"
			type = light_cruiser
			model = 2
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 19 }
			name = "6th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 20 }
			name = "7th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 21 }
			name = "37th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 22 }
			name = "38th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 23 }
			name = "39th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 24 }
			name = "40th Destroyer Flotilla"
			type = destroyer
			model = 4
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 25 }
			name = "41st Destroyer Flotilla"
			type = destroyer
			model = 3
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 26 }
			name = "42nd Destroyer Flotilla"
			type = destroyer
			model = 3
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
	} #######################################################
	# Devonport #
	

	navalunit = {
		name = "Devonport Yards"
		id = { type = 30252 id = 3 }
		location = 27 # Portsmouth
		base = 27
		division = {
			experience = 30
			id = { type = 30255 id = 27 }
			name = "HMS Furious"
			type = carrier
			model = 0
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 28 }
			name = "HMS Argus"
			type = escort_carrier
			model = 1
			extra1 = none
			brigade_model1 = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 29 }
			name = "HMS Valiant"
			type = battleship
			model = 4
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 0
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 30 }
			name = "HMS Norfolk"
			type = heavy_cruiser
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 31 }
			name = "HMS Mauritius"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 32 }
			name = "HMS Ajax"
			type = light_cruiser
			model = 4
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 33 }
			name = "HMS Despatch"
			type = light_cruiser
			model = 2
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} #######################################################
	# Chatham #
	

	navalunit = {
		name = "Chatham Naval Yard"
		id = { type = 30252 id = 4 }
		location = 26 # Dover
		base = 26
		division = {
			experience = 30
			id = { type = 30255 id = 34 }
			name = "HMS Frobisher"
			type = heavy_cruiser
			model = 2
			extra1 = none
			extra2 = none
			extra3 = none
			brigade_model1 = 0
			brigade_model2 = 0
			brigade_model3 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 35 }
			name = "HMS Kenya"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 36 }
			name = "HMS Arethusa"
			type = light_cruiser
			model = 4
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 37 }
			name = "HMS Dido"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 38 }
			name = "HMS Phoebe"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 39 }
			name = "HMS Scylla"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 40 }
			name = "HMS Delhi"
			type = light_cruiser
			model = 2
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
	} #######################################################
	# Plymouth Reserve #
	

	navalunit = {
		name = "Plymouth Reserve"
		id = { type = 30252 id = 5 }
		location = 20 # Plymouth
		base = 20
		division = {
			experience = 30
			id = { type = 30255 id = 41 }
			name = "HMS Caledon"
			type = light_cruiser
			model = 2
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 42 }
			name = "HMS Capetown"
			type = light_cruiser
			model = 2
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 43 }
			name = "HMS Ceres"
			type = light_cruiser
			model = 2
			extra1 = none
			extra2 = none
			brigade_model1 = 0
			brigade_model2 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 44 }
			name = "HMS Colombo"
			type = light_cruiser
			model = 2
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		} #######################################################
		# Mediterrean Fleet #
	}
	navalunit = {
		name = "Mediterranean Squadron"
		id = { type = 30252 id = 6 }
		location = 388 # Cyprus
		base = 388
		division = {
			experience = 30
			id = { type = 30255 id = 45 }
			name = "HMS Orion"
			type = light_cruiser
			model = 4
			extra1 = none
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 46 }
			name = "HMS Sirius"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 47 }
			name = "8th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 48 }
			name = "9th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 49 }
			name = "10th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 50 }
			name = "11th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 51 }
			name = "12th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 52 }
			name = "13th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 53 }
			name = "14th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} #######################################################
	

	navalunit = {
		name = "Force A"
		id = { type = 30252 id = 7 }
		location = 27 # Portsmouth/Southampton
		base = 27
		division = {
			experience = 30
			id = { type = 30255 id = 54 }
			name = "HMS Warspite"
			type = battleship
			model = 4
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 55 }
			name = "HMS Rodney"
			type = battleship
			model = 6
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 0
			brigade_model2 = 1
			brigade_model3 = 2
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 56 }
			name = "HMS Suffolk"
			type = heavy_cruiser
			model = 3
		}
	} #######################################################
	

	navalunit = {
		name = "Egypt Squadron"
		id = { type = 30252 id = 8 }
		location = 789 # Alexandria
		base = 789
		division = {
			experience = 30
			id = { type = 30255 id = 57 }
			name = "HMS Liverpool"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 58 }
			name = "HMS Aurora"
			type = light_cruiser
			model = 4
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 59 }
			name = "15th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 60 }
			name = "16th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 61 }
			name = "17th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 62 }
			name = "18th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 63 }
			name = "19th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 64 }
			name = "20th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 65 }
			name = "21st Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 66 }
			name = "22nd Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 67 }
			name = "23rd Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 68 }
			name = "24th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 69 }
			name = "25th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 70 }
			name = "26th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_fire_controll_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 71 }
			name = "27th Destroyer Flotilla"
			type = destroyer
			model = 5
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 72 }
			name = "34th Destroyer Flotilla"
			type = destroyer
			model = 4
			extra1 = none
			brigade_model1 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 73 }
			name = "35th Destroyer Flotilla"
			type = destroyer
			model = 3
			extra1 = none
			brigade_model1 = 0
		}
		division = {
			experience = 30
			id = { type = 30255 id = 74 }
			name = "36th Destroyer Flotilla"
			type = destroyer
			model = 3
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
	} #######################################################
	# East Indies Taskforce #
	

	navalunit = {
		name = "East Indies Force"
		id = { type = 30252 id = 9 }
		location = 1511 # Colombo
		base = 1511
		division = {
			experience = 30
			id = { type = 30255 id = 75 }
			name = "HMS Ceylon"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 76 }
			name = "HMS Nigeria"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 77 }
			name = "28th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 78 }
			name = "29th Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_radar_s
			brigade_model1 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 79 }
			name = "30th Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
	} #######################################################
	# Eastern Fleet#
	

	navalunit = {
		name = "Eastern Fleet"
		id = { type = 30252 id = 10 }
		location = 1511 # Colombo
		base = 1511
		division = {
			experience = 30
			id = { type = 30255 id = 80 }
			name = "HMS Anson"
			type = battleship
			model = 7
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 81 }
			name = "HMS Howe"
			type = battleship
			model = 7
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 82 }
			name = "HMS Caradoc"
			type = light_cruiser
			model = 2
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 83 }
			name = "33rd Destroyer Flotilla"
			type = destroyer
			model = 5
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} #######################################################
	# Hong Kong Taskforce #
	

	navalunit = {
		name = "China Fleet"
		id = { type = 30252 id = 11 }
		location = 1371 # Hong Kong
		base = 1371
		division = {
			experience = 30
			id = { type = 30255 id = 84 }
			name = "HMS Implacable"
			type = carrier
			model = 4
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 85 }
			name = "HMS Indomitable"
			type = carrier
			model = 3
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 0
			id = { type = 30255 id = 86 }
			name = "HMS Colossus"
			type = light_carrier
			model = 1
			extra1 = light_cag
			brigade_model1 = 5
		}
		division = {
			experience = 0
			id = { type = 30255 id = 87 }
			name = "HMS Glory"
			type = light_carrier
			model = 1
			extra1 = light_cag
			brigade_model1 = 5
		}
		division = {
			experience = 0
			id = { type = 30255 id = 88 }
			name = "HMS Vengeance"
			type = light_carrier
			model = 1
			extra1 = light_cag
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 89 }
			name = "HMS Belfast"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 90 }
			name = "HMS Bermuda"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 91 }
			name = "HMS Argonaut"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 92 }
			name = "HMS Euryalus"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 93 }
			name = "31st Destroyer Flotilla"
			type = destroyer
			model = 6
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} #######################################################
	# Indian Ocean Fleet#
	

	navalunit = {
		name = "Indian Ocean Squadron"
		id = { type = 30252 id = 12 }
		location = 1509 # Trincomalee
		base = 1509
		division = {
			experience = 30
			id = { type = 30255 id = 94 }
			name = "HMS London"
			type = heavy_cruiser
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 95 }
			name = "HMS Cleopatra"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} #######################################################
	# Far East Fleet#
	

	navalunit = {
		name = "Far East Fleet"
		id = { type = 30252 id = 13 }
		location = 1729 # Vanua Levu
		base = 1729
		division = {
			experience = 30
			id = { type = 30255 id = 96 }
			name = "HMS Indefatigable"
			type = carrier
			extra1 = cag
			model = 4
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 97 }
			name = "HMS Formidable"
			type = carrier
			model = 3
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 98 }
			name = "HMS Victorious"
			type = carrier
			model = 3
			extra1 = cag
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 99 }
			name = "HMS Unicorn"
			type = light_carrier
			model = 0
			extra1 = light_cag
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 100 }
			name = "HMS Duke of York"
			type = battleship
			model = 7
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 101 }
			name = "HMS King George V"
			type = battleship
			model = 7
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 102 }
			name = "HMS Roberts"
			type = heavy_cruiser # Roberts-class monitor
			model = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 103 }
			name = "HMS Abercrombie"
			type = heavy_cruiser # Roberts-class monitor
			model = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 104 }
			name = "HMS Erebus"
			type = heavy_cruiser # Erebus-class monitor
			model = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 105 }
			name = "HMS Berwick"
			type = heavy_cruiser
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 106 }
			name = "HMS Devonshire"
			type = heavy_cruiser
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 107 }
			name = "HMS Newfoundland"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 108 }
			name = "32nd Destroyer Flotilla"
			type = destroyer
			model = 7
			extra1 = naval_asw
			brigade_model1 = 2
		}
	} #######################################################
	

	navalunit = {
		name = "Malaya Force"
		id = { type = 30252 id = 14 }
		location = 1432 # Singapore
		base = 1432
		division = {
			experience = 0
			id = { type = 30255 id = 109 }
			name = "HMS Venerable"
			type = light_carrier
			model = 1
			extra1 = light_cag
			brigade_model1 = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 110 }
			name = "HMS Nelson"
			type = battleship
			model = 6
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = naval_radar_l
			brigade_model1 = 0
			brigade_model2 = 1
			brigade_model3 = 0
			brigade_model4 = 2
			brigade_model5 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 111 }
			name = "HMS Cumberland"
			type = heavy_cruiser
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 112 }
			name = "HMS Sussex"
			type = heavy_cruiser
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 113 }
			name = "HMS Jamaica"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 114 }
			name = "HMS Royalist"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} #######################################################
	

	navalunit = {
		name = "Rosyth Navy Yard"
		id = { type = 30252 id = 15 }
		location = 5 # Rosyth/Dunfermline
		base = 5
		division = {
			experience = 30
			id = { type = 30255 id = 115 }
			name = "HMS Renown"
			type = battlecruiser
			model = 1
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = naval_anti_air_l
			extra4 = naval_radar_l
			brigade_model1 = 1
			brigade_model2 = 1
			brigade_model3 = 2
			brigade_model4 = 2
		}
		division = {
			experience = 30
			id = { type = 30255 id = 116 }
			name = "HMS Newcastle"
			type = light_cruiser
			model = 5
			extra1 = naval_fire_controll_s
			extra2 = naval_radar_s
			brigade_model1 = 1
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 117 }
			name = "HMS Sheffield"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 118 }
			name = "HMS Emerald"
			type = light_cruiser
			model = 3
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 119 }
			name = "HMS Dauntless"
			type = light_cruiser
			model = 2
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 120 }
			name = "HMS Diomede"
			type = light_cruiser
			model = 2
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} #######################################################
	

	navalunit = {
		name = "Tynemouth Yards"
		id = { type = 30252 id = 16 }
		location = 25 # Norwich
		base = 25
		division = {
			experience = 30
			id = { type = 30255 id = 121 }
			name = "HMS Glasgow"
			type = light_cruiser
			model = 5
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
		division = {
			experience = 30
			id = { type = 30255 id = 122 }
			name = "HMS Leander"
			type = light_cruiser
			model = 4
			extra1 = naval_anti_air_s
			extra2 = naval_radar_s
			brigade_model1 = 2
			brigade_model2 = 1
		}
	} #######################################################
	# 1st Submarine Squadron#
	

	navalunit = {
		name = "1st Submarine Squadron"
		id = { type = 30252 id = 17 }
		location = 23 # Plymouth
		base = 23
		division = {
			experience = 30
			id = { type = 30255 id = 123 }
			name = "1st Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 124 }
			name = "2nd Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 125 }
			name = "24st Submarine Flotilla"
			type = submarine
			model = 4
		}
		division = {
			experience = 30
			id = { type = 30255 id = 126 }
			name = "25th Submarine Flotilla"
			type = submarine
			model = 4
		}
		division = {
			experience = 30
			id = { type = 30255 id = 127 }
			name = "26th Submarine Flotilla"
			type = submarine
			model = 3
		}
	} #######################################################
	# 3rd Submarine Squadron - Holy Loch #
	

	navalunit = {
		name = "3rd Submarine Squadron"
		id = { type = 30252 id = 18 }
		location = 36 # Belfast
		base = 36
		division = {
			experience = 30
			id = { type = 30255 id = 128 }
			name = "3rd Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 129 }
			name = "4th Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 130 }
			name = "5th Submarine Flotilla"
			type = submarine
			model = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 131 }
			name = "6th Submarine Flotilla"
			type = submarine
			model = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 132 }
			name = "7th Submarine Flotilla"
			type = submarine
			model = 5
		}
	} #######################################################
	# 4th Submarine Squadron - Trincomalee #
	

	navalunit = {
		name = "4th Submarine Squadron"
		id = { type = 30252 id = 19 }
		location = 1509 # Trincomalee
		base = 1509
		division = {
			experience = 30
			id = { type = 30255 id = 133 }
			name = "8th Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 134 }
			name = "9th Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 135 }
			name = "10th Submarine Flotilla"
			type = submarine
			model = 6
		}
	} #######################################################
	# 5th Submarine Squadron#
	

	navalunit = {
		name = "5th Submarine Squadron"
		id = { type = 30252 id = 20 }
		location = 27 # Portsmouth
		base = 27
		division = {
			experience = 30
			id = { type = 30255 id = 136 }
			name = "11th Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 137 }
			name = "12th Submarine Flotilla"
			type = submarine
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30255 id = 138 }
			name = "13th Submarine Flotilla"
			type = submarine
			model = 4
		}
	} #######################################################
	# 6th Submarine Squadron - Blyth #
	

	navalunit = {
		name = "6th Submarine Squadron"
		id = { type = 30252 id = 21 }
		location = 23 # Plymouth
		base = 23
		division = {
			experience = 30
			id = { type = 30255 id = 139 }
			name = "14th Submarine Flotilla"
			type = submarine
			model = 5
		}
	} #######################################################
	# 7th Submarine Squadron - Rothesay#
	

	navalunit = {
		name = "7th Submarine Squadron"
		id = { type = 30252 id = 22 }
		location = 36 # Belfast
		base = 36
		division = {
			experience = 30
			id = { type = 30255 id = 140 }
			name = "15th Submarine Flotilla"
			type = submarine
			model = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 141 }
			name = "16th Submarine Flotilla"
			type = submarine
			model = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 142 }
			name = "17th Submarine Flotilla"
			type = submarine
			model = 4
		}
		division = {
			experience = 30
			id = { type = 30255 id = 143 }
			name = "18th Submarine Flotilla"
			type = submarine
			model = 4
		}
	} #######################################################
	# 8th Submarine Squadron - Trincomalee#
	

	navalunit = {
		name = "8th Submarine Squadron"
		id = { type = 30252 id = 23 }
		location = 1511 # Colombo
		base = 1511
		division = {
			experience = 30
			id = { type = 30255 id = 144 }
			name = "19th Submarine Flotilla"
			type = submarine
			model = 5
		}
		division = {
			experience = 30
			id = { type = 30255 id = 145 }
			name = "20th Submarine Flotilla"
			type = submarine
			model = 4
		}
	} #######################################################
	# 9th Submarine Squadron - Dundee#
	

	navalunit = {
		name = "9th Submarine Squadron"
		id = { type = 30252 id = 24 }
		location = 7 # Aberdeen
		base = 7
		division = {
			experience = 30
			id = { type = 30255 id = 146 }
			name = "21th Submarine Flotilla"
			type = submarine
			model = 4
		}
		division = {
			experience = 30
			id = { type = 30255 id = 147 }
			name = "22th Submarine Flotilla"
			type = submarine
			model = 4
		}
	} #######################################################
	# 10th Submarine Squadron - Maddalena#
	

	navalunit = {
		name = "10th Submarine Squadron"
		id = { type = 30252 id = 25 }
		location = 5
		base = 5
		division = {
			experience = 30
			id = { type = 30255 id = 148 }
			name = "23th Submarine Flotilla"
			type = submarine
			model = 4
		}
	} #######################################################
	

	navalunit = {
		name = "1st Transport Squadron"
		id = { type = 30252 id = 26 }
		location = 5 # Scapa Flow
		base = 5
		division = {
			experience = 30
			id = { type = 30255 id = 149 }
			name = "Suffolk Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 150 }
			name = "Trojan Star Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 151 }
			name = "Queen Mary Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 152 }
			name = "Nieuw Amsterdam Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 153 }
			name = "Strathenden Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 154 }
			name = "Fort Edmonton Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 155 }
			name = "Lars Bay Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 156 }
			name = "Fort Langley Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 157 }
			name = "King Ethelred Flotilla"
			type = transport
			model = 3
		}
	} #######################################################
	

	navalunit = {
		name = "2nd Transport Squadron"
		id = { type = 30252 id = 27 }
		location = 5 # Scapa Flow
		base = 5
		division = {
			experience = 30
			id = { type = 30255 id = 158 }
			name = "Dominion Monarch Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 159 }
			name = "Empire Arquebus Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 160 }
			name = "Hororata Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 161 }
			name = "Henry the VIII Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 162 }
			name = "The Bishops Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 163 }
			name = "Empire of India Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 164 }
			name = "Empire of Africa Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 165 }
			name = "Royal Caledonian Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 166 }
			name = "Royal Sovereign Flotilla"
			type = transport
			model = 3
		}
	} #######################################################
	

	navalunit = {
		name = "3rd Transport Squadron"
		id = { type = 30252 id = 28 }
		location = 27 # Portsmouth
		base = 27
		division = {
			experience = 30
			id = { type = 30255 id = 167 }
			name = "Queen Elizabeth Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 168 }
			name = "Empress of Canada Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 169 }
			name = "Clan Macauley Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 170 }
			name = "Samfleet Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 171 }
			name = "Samfreedom Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 172 }
			name = "Samfoyle Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 173 }
			name = "Samconstant Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 174 }
			name = "Samleyte Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 175 }
			name = "Samfaithful Flotilla"
			type = transport
			model = 3
		}
	} #######################################################
	

	navalunit = {
		name = "4th Transport Squadron"
		id = { type = 30252 id = 29 }
		location = 388 # Cyprus
		base = 388
		division = {
			experience = 30
			id = { type = 30255 id = 176 }
			name = "Empire Captain Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 177 }
			name = "Andes Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 178 }
			name = "Empire Charmain Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 179 }
			name = "Samoresby Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 180 }
			name = "1st Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 181 }
			name = "2nd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 182 }
			name = "3rd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 183 }
			name = "4th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 184 }
			name = "5th Transport Flotilla"
			type = transport
			model = 3
		}
	} #######################################################
	

	navalunit = {
		name = "5th Transport Squadron"
		id = { type = 30252 id = 30 }
		location = 388 # Cyprus
		base = 388
		division = {
			experience = 30
			id = { type = 30255 id = 185 }
			name = "Essex Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 186 }
			name = "Maloja Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 187 }
			name = "Empire Chieftain Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 188 }
			name = "6th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 189 }
			name = "7th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 190 }
			name = "8th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 191 }
			name = "9th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 192 }
			name = "10th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 193 }
			name = "11th Transport Flotilla"
			type = transport
			model = 3
		}
	} #######################################################
	

	navalunit = {
		name = "6th Transport Squadron"
		id = { type = 30252 id = 31 }
		location = 1432 # Singapore
		base = 1432
		division = {
			experience = 30
			id = { type = 30255 id = 194 }
			name = "Stirling Castle Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 195 }
			name = "Empire Splendour Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 196 }
			name = "Sam Torch Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 197 }
			name = "12th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 198 }
			name = "13th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 199 }
			name = "14th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 200 }
			name = "15th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 201 }
			name = "16th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 202 }
			name = "17th Transport Flotilla"
			type = transport
			model = 3
		}
	} #######################################################
	

	navalunit = {
		name = "7th Transport Squadron"
		id = { type = 30252 id = 32 }
		location = 1415 # Rangoon
		base = 1415
		division = {
			experience = 30
			id = { type = 30255 id = 203 }
			name = "Resolution Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 204 }
			name = "Fort Dunvegan Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 205 }
			name = "Durham Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 206 }
			name = "18th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 207 }
			name = "19th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 208 }
			name = "20th Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 209 }
			name = "21st Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 210 }
			name = "22nd Transport Flotilla"
			type = transport
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30255 id = 211 }
			name = "23rd Transport Flotilla"
			type = transport
			model = 3
		}
	} #########################################################
	# ############# ROYAL AIR FORCE 1944 OOB###################
	# #########################################################
	

	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 1 }
		name = "10th Group"
		division = {
			experience = 40
			id = { type = 30256 id = 1 }
			name = "No.126 Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 40
			id = { type = 30256 id = 2 }
			name = "No.165 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 50
			id = { type = 30256 id = 3 }
			name = "No.406 Squadron RCAF"
			strength = 100
			type = tactical_bomber
			model = 7
		}
		division = {
			experience = 50
			id = { type = 30256 id = 4 }
			name = "No.464 Squadron RAAF"
			strength = 100
			type = tactical_bomber
			model = 7
		}
	}
	airunit = {
		location = 147
		base = 147
		id = { type = 30253 id = 2 }
		name = "11th Group"
		division = {
			experience = 40
			id = { type = 30256 id = 5 }
			name = "No.1 Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 30
			id = { type = 30256 id = 6 }
			name = "No.501 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 45
			id = { type = 30256 id = 7 }
			name = "No.219 Squadron"
			strength = 100
			type = tactical_bomber
			model = 7
		}
		division = {
			experience = 54
			id = { type = 30256 id = 8 }
			name = "No.29 Squadron"
			strength = 100
			type = tactical_bomber
			model = 8
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 3 }
		name = "2nd TAF/1"
		division = {
			experience = 50
			id = { type = 30256 id = 9 }
			name = "No.3 Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 30
			id = { type = 30256 id = 10 }
			name = "No.33 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 40
			id = { type = 30256 id = 11 }
			name = "No.245 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 50
			id = { type = 30256 id = 12 }
			name = "No.694 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
	}
	airunit = {
		location = 27
		base = 27
		id = { type = 30253 id = 4 }
		name = "2nd TAF/2"
		division = {
			experience = 42
			id = { type = 30256 id = 13 }
			name = "No.65 Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 42
			id = { type = 30256 id = 14 }
			name = "No.181 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 40
			id = { type = 30256 id = 15 }
			name = "No.401 Squadron RCAF"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 50
			id = { type = 30256 id = 16 }
			name = "No.610 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 5 }
		name = "12th Group"
		division = {
			experience = 45
			id = { type = 30256 id = 17 }
			name = "No.168 Squadron"
			strength = 75
			type = multi_role
			model = 7
		}
		division = {
			experience = 50
			id = { type = 30256 id = 18 }
			name = "No.25 Squadron"
			strength = 75
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 45
			id = { type = 30256 id = 19 }
			name = "No.264 Squadron"
			strength = 100
			type = tactical_bomber
			model = 7
		}
		division = {
			experience = 55
			id = { type = 30256 id = 20 }
			name = "No.303 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 6 }
		name = "13th Group"
		division = {
			experience = 30
			id = { type = 30256 id = 21 }
			name = "No.504 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 30
			id = { type = 30256 id = 22 }
			name = "No.412 Squadron RCAF"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 10
			id = { type = 30256 id = 23 }
			name = "No.308 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 7 }
		name = "14th Group"
		division = {
			experience = 30
			id = { type = 30256 id = 24 }
			name = "No.118 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 30
			id = { type = 30256 id = 25 }
			name = "No.441 Squadron RCAF"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 10
			id = { type = 30256 id = 26 }
			name = "No.331 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 5
		base = 5
		id = { type = 30253 id = 8 }
		name = "38th Group"
		division = {
			experience = 30
			id = { type = 30256 id = 27 }
			name = "No.190 Squadron"
			strength = 100
			type = naval_bomber
			model = 4
		}
		division = {
			experience = 30
			id = { type = 30256 id = 28 }
			name = "No.297 Squadron"
			strength = 100
			type = naval_bomber
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30256 id = 29 }
			name = "No.570 Squadron"
			strength = 100
			type = naval_bomber
			model = 3
		}
	}
	airunit = {
		location = 145
		base = 145
		id = { type = 30253 id = 9 }
		name = "No.603 Squadron"
		division = {
			experience = 50
			id = { type = 30256 id = 30 }
			name = "No.603 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 348
		base = 348
		id = { type = 30253 id = 10 }
		name = "No.43 Squadron"
		division = {
			experience = 50
			id = { type = 30256 id = 31 }
			name = "No.43 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	

	airunit = {
		location = 1447
		base = 1447
		id = { type = 30253 id = 11 }
		name = "1/SEAC Air Forces"
		division = {
			experience = 50
			id = { type = 30256 id = 32 }
			name = "17/.67./81. Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 50
			id = { type = 30256 id = 33 }
			name = "136./155. Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 50
			id = { type = 30256 id = 34 }
			name = "607./615. Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 45
			id = { type = 30256 id = 35 }
			name = "28./30. Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
	}
	airunit = {
		location = 1008
		base = 1008
		id = { type = 30253 id = 12 }
		name = "2/SEAC Air Forces"
		division = {
			experience = 30
			id = { type = 30256 id = 36 }
			name = "5./11./20. Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 40
			id = { type = 30256 id = 37 }
			name = "42./34./42. Squadron"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 65
			id = { type = 30256 id = 38 }
			name = "60./79. Squadron"
			strength = 100
			type = cas
			model = 2
		}
		division = {
			experience = 30
			id = { type = 30256 id = 39 }
			name = "No.183 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
	}
	airunit = {
		location = 1459
		base = 1459
		id = { type = 30253 id = 13 }
		name = "3/SEAC Air Forces"
		division = {
			experience = 50
			id = { type = 30256 id = 40 }
			name = "200./203./215. Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 70
			id = { type = 30256 id = 41 }
			name = "99./159. Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 42 }
			name = "292./355./356. Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 50
			id = { type = 30256 id = 43 }
			name = "No.429 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
	}
	airunit = {
		location = 1459
		base = 1459
		id = { type = 30253 id = 14 }
		name = "4/SEAC Air Forces"
		division = {
			experience = 30
			id = { type = 30256 id = 44 }
			name = "27./47./88. Squadron"
			strength = 100
			type = naval_bomber
			model = 4
		}
		division = {
			experience = 30
			id = { type = 30256 id = 45 }
			name = "176./177./211. Squadron"
			strength = 100
			type = naval_bomber
			model = 3
		}
	}
	airunit = {
		location = 789
		base = 789
		id = { type = 30253 id = 15 }
		name = "5/SEAC Air Forces"
		division = {
			experience = 30
			id = { type = 30256 id = 46 }
			name = "31./62./117. Squadron"
			strength = 100
			type = transport_plane
			model = 3
		}
		division = {
			experience = 30
			id = { type = 30256 id = 47 }
			name = "194./435./436. Squadron"
			strength = 100
			type = transport_plane
			model = 3
		}
		division = {
			experience = 50
			id = { type = 30256 id = 48 }
			name = "45. Squadron"
			strength = 40
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 40
			id = { type = 30256 id = 49 }
			name = "No.692 Squadron"
			strength = 100
			type = tactical_bomber
			model = 7
		}
	}
	

	airunit = {
		location = 20
		base = 20
		id = { type = 30253 id = 16 }
		name = "1st Group"
		division = {
			experience = 60
			id = { type = 30256 id = 50 }
			name = "No.12 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 51 }
			name = "No.103 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 52 }
			name = "No.300 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 53 }
			name = "No.576 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
	}
	airunit = {
		location = 18
		base = 18
		id = { type = 30253 id = 17 }
		name = "3rd Group"
		division = {
			experience = 30
			id = { type = 30256 id = 54 }
			name = "No.15 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 55 }
			name = "No.115 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 56 }
			name = "No.218 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 40
			id = { type = 30256 id = 57 }
			name = "No.106 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
	}
	airunit = {
		location = 25
		base = 25
		id = { type = 30253 id = 18 }
		name = "4th Group"
		division = {
			experience = 60
			id = { type = 30256 id = 58 }
			name = "No.10 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 59 }
			name = "No.76 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 60 }
			name = "No.78 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 61 }
			name = "No.640 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
	}
	airunit = {
		location = 18
		base = 18
		id = { type = 30253 id = 19 }
		name = "5th Group"
		division = {
			experience = 30
			id = { type = 30256 id = 62 }
			name = "No.9 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 63 }
			name = "No.49 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 30
			id = { type = 30256 id = 64 }
			name = "No.467 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 50
			id = { type = 30256 id = 65 }
			name = "No.619 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 20 }
		name = "6th Group"
		division = {
			experience = 30
			id = { type = 30256 id = 66 }
			name = "No.408 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 40
			id = { type = 30256 id = 67 }
			name = "No.424 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 50
			id = { type = 30256 id = 68 }
			name = "No.427 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 40
			id = { type = 30256 id = 69 }
			name = "No.432 Squadron RCAF"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
	}
	airunit = {
		location = 26
		base = 26
		id = { type = 30253 id = 21 }
		name = "8th Group"
		division = {
			experience = 60
			id = { type = 30256 id = 70 }
			name = "No.7 Squadron"
			strength = 75
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 71 }
			name = "No.156 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 72 }
			name = "No.582 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 73 }
			name = "No.346 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
	}
	airunit = {
		id = { type = 30253 id = 22 }
		name = "16th Group"
		location = 26
		base = 26
		division = {
			experience = 50
			id = { type = 30256 id = 74 }
			name = "No.313 Squadron"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 50
			id = { type = 30256 id = 75 }
			name = "No.64 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 50
			id = { type = 30256 id = 76 }
			name = "No.332 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 30
			id = { type = 30256 id = 77 }
			name = "No.132 Squadron"
			strength = 100
			type = multi_role
			model = 6
		}
	}
	airunit = {
		id = { type = 30253 id = 23 }
		name = "18th Group"
		location = 26
		base = 26
		division = {
			experience = 40
			id = { type = 30256 id = 78 }
			name = "No.184 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 30
			id = { type = 30256 id = 79 }
			name = "No.80 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 40
			id = { type = 30256 id = 80 }
			name = "No.137 Squadron"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 45
			id = { type = 30256 id = 81 }
			name = "No.416 Squadron RCAF"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		id = { type = 30253 id = 523 }
		name = "Meteor Mk III"
		location = 26
		base = 26
		division = {
			experience = 40
			id = { type = 30256 id = 578 }
			name = "Meteor Mk I Group"
			type = interceptor
			model = 11
		}
	}
	airunit = {
		id = { type = 30253 id = 24 }
		name = "9th Group"
		location = 145
		base = 145
		division = {
			experience = 55
			id = { type = 30256 id = 82 }
			name = "82./84./110. Squadron"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 55
			id = { type = 30256 id = 83 }
			name = "258./261./273. Squadron"
			strength = 100
			type = cas
			model = 2
		}
		division = {
			experience = 45
			id = { type = 30256 id = 84 }
			name = "135./146./152. Squadron"
			strength = 100
			type = cas
			model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 85 }
			name = "113./123./134. Squadron"
			strength = 100
			type = cas
			model = 2
		}
	}
	airunit = {
		id = { type = 30253 id = 25 }
		name = "7th Group"
		location = 10
		base = 10
		division = {
			experience = 50
			id = { type = 30256 id = 86 }
			name = "No.61 Squadron"
			strength = 100
			type = strategic_bomber
			model = 5
			extra = escort
			brigade_model = 2
		}
		division = {
			experience = 60
			id = { type = 30256 id = 87 }
			name = "No.625 Squadron"
			strength = 100
			type = strategic_bomber
			model = 4
			extra = escort
			brigade_model = 2
		}
	} #########################################################
	# ############## Build Queue 1945 #########################
	# #########################################################
	

	division_development = {
		name = "HMS Vanguard"
		type = battleship
		model = 8
		extra1 = none
		extra2 = naval_fire_controll_l
		extra3 = naval_anti_air_l
		extra4 = naval_radar_l
		brigade_model1 = 2
		brigade_model2 = 1
		brigade_model3 = 2
		brigade_model4 = 2
		date = { day = 9 month = august year = 1946 }
		cost = 4.0
		id = { type = 30255 id = 212 }
	}
	division_development = {
		name = "HMS Hercules"
		type = light_carrier
		model = 2
		extra = light_cag
		brigade_model = 5
		date = { day = 12 month = january year = 1947 }
		cost = 2.5
		id = { type = 30255 id = 213 }
	}
	division_development = {
		name = "HMS Leviathan"
		type = light_carrier
		model = 2
		extra = light_cag
		brigade_model = 5
		date = { day = 6 month = january year = 1947 }
		cost = 2.5
		id = { type = 30255 id = 214 }
	}
	division_development = {
		name = "HMS Magnificent"
		type = light_carrier
		model = 2
		extra = light_cag
		brigade_model = 5
		date = { day = 15 month = november year = 1946 }
		cost = 2.5
		id = { type = 30255 id = 215 }
	}
	division_development = {
		name = "HMS Majestic"
		type = light_carrier
		model = 2
		extra = light_cag
		brigade_model = 5
		date = { day = 25 month = november year = 1946 }
		cost = 2.5
		id = { type = 30255 id = 216 }
	}
	division_development = {
		name = "HMS Powerful"
		type = light_carrier
		model = 2
		extra = light_cag
		brigade_model = 5
		date = { day = 15 month = january year = 1947 }
		cost = 2.5
		id = { type = 30255 id = 217 }
	}
	division_development = {
		name = "HMS Perseus"
		type = light_carrier
		model = 1
		extra = light_cag
		brigade_model = 5
		date = { day = 14 month = october year = 1945 }
		cost = 2.5
		id = { type = 30255 id = 218 }
	}
	division_development = {
		name = "HMS Terrible"
		type = light_carrier
		model = 2
		extra = light_cag
		brigade_model = 5
		date = { day = 24 month = november year = 1946 }
		cost = 2.5
		id = { type = 30255 id = 219 }
	}
	division_development = {
		name = "HMS Theseus"
		type = light_carrier
		model = 1
		extra = light_cag
		brigade_model = 5
		date = { day = 9 month = february year = 1946 }
		cost = 2.5
		id = { type = 30255 id = 220 }
	}
	division_development = {
		name = "HMS Triumph"
		type = light_carrier
		model = 1
		extra = light_cag
		brigade_model = 5
		date = { day = 9 month = may year = 1946 }
		cost = 2.5
		id = { type = 30255 id = 221 }
	}
	division_development = {
		name = "HMS Warrior"
		type = light_carrier
		model = 1
		extra = light_cag
		brigade_model = 5
		date = { day = 14 month = march year = 1946 }
		cost = 2.5
		id = { type = 30255 id = 222 }
	}
	division_development = {
		name = "HMS Superb"
		type = light_cruiser
		model = 6
		extra1 = naval_anti_air_s
		extra2 = naval_radar_s
		brigade_model1 = 2
		brigade_model2 = 1
		date = { day = 16 month = november year = 1945 }
		cost = 1.0
		id = { type = 30255 id = 223 }
	}
	division_development = {
		name = "43rd Destroyer Flotilla"
		type = destroyer
		model = 7
		date = { day = 0 month = november year = 1945 }
		cost = 1.0
		id = { type = 30255 id = 224 }
	}
	division_development = {
		name = "44th Destroyer Flotilla"
		type = destroyer
		model = 7
		date = { day = 0 month = november year = 1945 }
		cost = 1.0
		id = { type = 30255 id = 225 }
	}
	division_development = {
		name = "45th Destroyer Flotilla"
		type = destroyer
		model = 8
		date = { day = 0 month = december year = 1945 }
		cost = 1.0
		id = { type = 30255 id = 226 }
	}
	division_development = {
		name = "46th Destroyer Flotilla"
		type = destroyer
		model = 8
		date = { day = 0 month = december year = 1945 }
		cost = 1.0
		id = { type = 30255 id = 227 }
	}
	division_development = {
		name = "47th Destroyer Flotilla"
		type = destroyer
		model = 8
		date = { day = 0 month = january year = 1946 }
		cost = 1.0
		id = { type = 30255 id = 228 }
	}
	division_development = {
		name = "48th Destroyer Flotilla"
		type = destroyer
		model = 8
		date = { day = 0 month = january year = 1946 }
		cost = 1.0
		id = { type = 30255 id = 229 }
	}
	division_development = {
		name = "49th Destroyer Flotilla"
		type = destroyer
		model = 8
		date = { day = 0 month = february year = 1946 }
		cost = 1.0
		id = { type = 30255 id = 230 }
	}
	division_development = {
		name = "27th Submarine Flotilla"
		type = submarine
		model = 5
		date = { day = 0 month = december year = 1945 }
		cost = 1.0
		id = { type = 30255 id = 231 }
	}
	division_development = {
		name = "28th Submarine Flotilla"
		type = submarine
		model = 5
		date = { day = 0 month = december year = 1945 }
		cost = 1.0
		id = { type = 30255 id = 232 }
	}
	division_development = {
		name = "29th Submarine Flotilla"
		type = submarine
		model = 6
		date = { day = 0 month = march year = 1946 }
		cost = 1.0
		id = { type = 30255 id = 233 }
	}
	division_development = {
		name = "30th Submarine Flotilla"
		type = submarine
		model = 6
		date = { day = 0 month = march year = 1946 }
		cost = 1.0
		id = { type = 30255 id = 234 }
	}
	division_development = {
		name = "31st Submarine Flotilla"
		type = submarine
		model = 6
		date = { day = 0 month = march year = 1946 }
		cost = 1.0
		id = { type = 30255 id = 235 }
	}
}
