# #############################
# Soviet Union
# #############################


country = {
	tag = SOV
	regular_id = RUS
	intrinsic_gov_type = leninist
	
	energy = 50000
	metal = 50000
	rare_materials = 5000
	oil = 15000
	supplies = 15000
	
	manpower = 1100
	
	nuke = 45
	
	transports = 150
	escorts = 50
	capital = 572
	
	industrial_modifier = 1.07
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 2
		political_left = 8
		freedom = 1
		free_market = 1
		professional_army = 5
		defense_lobby = 8
		interventionism = 7
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
	
	SpyInfo = { country = "POR" NumberOfSpies = 3 }
	SpyInfo = { country = "USA" NumberOfSpies = 3 }
	SpyInfo = { country = "SPA" NumberOfSpies = 5 }
	SpyInfo = { country = "ARG" NumberOfSpies = 1 }
	SpyInfo = { country = "TUR" NumberOfSpies = 3 }
	SpyInfo = { country = "SWE" NumberOfSpies = 3 }
	SpyInfo = { country = "CHI" NumberOfSpies = 3 }
	SpyInfo = { country = "CHC" NumberOfSpies = 5 }
	SpyInfo = { country = "ENG" NumberOfSpies = 2 }
	SpyInfo = { country = "CAN" NumberOfSpies = 1 }
	SpyInfo = { country = "BEL" NumberOfSpies = 2 }
	SpyInfo = { country = "HOL" NumberOfSpies = 2 }
	SpyInfo = { country = "FRA" NumberOfSpies = 4 }
	SpyInfo = { country = "NOR" NumberOfSpies = 2 }
	SpyInfo = { country = "FIN" NumberOfSpies = 5 }
	SpyInfo = { country = "ITA" NumberOfSpies = 5 }
	SpyInfo = { country = "LUX" NumberOfSpies = 1 }
	SpyInfo = { country = "GRE" NumberOfSpies = 2 }
	SpyInfo = { country = "DEN" NumberOfSpies = 2 }
	SpyInfo = { country = "SOV" NumberOfSpies = 5 }
	
	nationalprovinces = { 182 184 213 215 238 240 241 242 244 245 247 248 249 251 253 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 300 302 303 304 305 306 498 499 500 501 502 503 504 505 506 507 517 519 530 531 532 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1119 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 1543 }
	ownedprovinces = { 182 184 213 215 238 240 241 242 244 245 247 248 249 251 253 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 300 302 303 304 305 306 498 499 500 501 502 503 504 505 506 507 517 519 530 531 532 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1119 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 1543 }
	controlledprovinces = { 182 184 213 215 238 240 241 242 244 245 247 248 249 251 253 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 300 302 303 304 305 306 498 499 500 501 502 503 504 505 506 507 517 519 530 531 532 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1119 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1541 1542 1543 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1420 1430 1470 1480 1490 1530 1540 1560 1570 1580 1590 1600 1610 1620 1630 1670 1680 1690 1700 1710 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2126 2130 2140 2150 2160 2170 2180 2190 2200 2220 2230 2240 2250 2260 2270 2280 2290 2300 2310 2320 2330 2340 2360 2370 2380 2390 2400 2410 2420 2430 2450 2460 2470 2480 2490 2500 2510 2520 2530 2540 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2890 2900 2910 2920 2930 2940 2950 2970 2980 3010 3020 3030 3040 3050 3060 3070 3080 3110 3120 3130 3140 3150 3160 3170 3210 3220 3230 3240 3250 3260 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3560 3610 3620 3630 3640 3650 3660 3670 3680 3710 3720 3730 3736 3740 3750 3760 3770 3810 3820 3830 3840 3900 3910 3920 3930 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4116 4120 4130 4140 4150 4160 4170 4180 4190 4200 4210 4220 4230 4240 4246 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4350 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 4960 5010 5020 5030 5040 5050 5060 5070 5080 5090 5100 5110 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5240 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5390 5400 5410 5416 5417 5420 5426 5430 5440 5450 5466 5470 5480 5490 5500 5510 5520 5530 5540 5560 5600 5610 5620 5630 5640 5650 5660 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6300 6310 6320 6330 6340 6350 6360 6370 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6730 6770 6900 6910 7010 7020 7100 7110 7120 7140 7150 7170 7180 7190 7270 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8500 8510 8520 8550 8560 8570 8600 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 11000 11030 12000 12010 12020 12040 12050 12060 12100 12110 12120 12130 12140 12150 13060 13070 13080 14000 14010 14020 14030 14040 14060 15000 15010 15030 15060 15100 15110 15120 15140 15150 15160 15180 15500 16000 21180 21190 21200 22910 22920 22930 22940 27000 27010 27020 27070 27080 27140 27150 27210 27220 27410 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 53020 53040 53060 54010 54020 54030 81050 81300 81310 81320 81330 81340 81350 81360 81370 81380 81650 81700 81710 81720 81730 81740 81750 81760 81850 81860 81870 81880 81890 81900 81910 82100 82300 82310 82320 82330 82500 82510 82520 199100 199110 199120 199130 199140 199150 199160 
	
	13390 13400 13410 3890 4440
	
	}
	
	inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000019 3000020 3000026 3000027 3000028 3000031 }
	
	diplomacy = {
		relation = { tag = BRA value = -50 }
		relation = { tag = FIN value = 50 }
		relation = {
			tag = MON
			value = 150
			guaranteed = { day = 8 month = april year = 1943 }
			access = yes
		}
		relation = { tag = PER value = -20 }
		relation = { tag = TUR value = 70 }
		
		relation = {
			tag = U13
			value = 150
			guaranteed = { day = 9 month = may year = 1945 }
			access = yes
		}
		
		relation = {
			tag = U28
			value = 150
			guaranteed = { day = 9 month = may year = 1945 }
			access = yes
		}
		
		relation = {
			tag = U29
			value = 150
			guaranteed = { day = 9 month = may year = 1945 }
			access = yes
		}
		
		relation = {
			tag = U30
			value = 150
			guaranteed = { day = 9 month = may year = 1945 }
			access = yes
		}
		
		relation = {
			tag = U31
			value = 150
			guaranteed = { day = 9 month = may year = 1945 }
			access = yes
		}
		
		relation = {
			tag = U32
			value = 150
			guaranteed = { day = 9 month = may year = 1945 }
			access = yes
		}
	}
	
	dormant_ministers = { 30001 30202 30002 30011 30046 30076 30104 30105 30109 30003 30017 30022 30028 30054 30081 30200 30052 30074 30023 30031 30030 30029 }
	dormant_leaders = {  30050 30040 30042 30044 30085 30095 30097 30101 30108 30111 30127 30131 30135 30152 30156 30170 30175 30192 30194 30207
                               30217 30220 30229 30232 30243 30255 30267 30272 30315 30316 30338 30339 30403 30409 30416 30454 30472 30477 30484 30487
                               30498 30523 30543 30547 30550 30570 30571 30572 30602 30618 30654 30664 30673 30678 30701 30715 30716 30717 30718 30719
                               30721 30722 30723 30650 30437 30512 30007 30374 30238 30276 30681 30353 30687 30407 30697 30499 30004 30008 30028
                               30057 30059 30063 30081 30084 30090 30098 30100 30107 30120 30136 30172 30174 30186 30190 30191 30198 30199 30214 30215
                               30226 30242 30258 30263 30269 30275 30277 30296 30302 30324 30326 30345 30381 30391 30399 30401 30411 30419 30442 30445
                               30447 30491 30494 30509 30521 30548 30552 30576 30614 30658 30660 30720 30473 30778 30076 30216 30744 30266 30322 30463
                               30479 30538 30789 30313 30765 30767 30515 30776 30528 30758 30373 30564
                            }
	dormant_teams = { 30007 30017 30030 }
	
	headofstate = { type = 9 id = 30201 }
	headofgovernment = { type = 9 id = 30078 }
	foreignminister = { type = 9 id = 30088 }
	armamentminister = { type = 9 id = 30090 }
	ministerofsecurity = { type = 9 id = 30080 }
	ministerofintelligence = { type = 9 id = 30092 }
	chiefofstaff = { type = 9 id = 30212 }
	chiefofarmy = { type = 9 id = 30047 }
	chiefofnavy = { type = 9 id = 30215 }
	chiefofair = { type = 9 id = 30143 }

	landunit = {
		id = { type = 30151 id = 1 }
		name = "Zabaikalskyi Voennyi Okrug"
		location = 1162
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 1 }
			name = "Zabaikalskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 2 }
		name = "Dalnevostochnyi Voennyi Okrug"
		location = 1191
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 2 }
			name = "Dalnevostochnyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 4 }
		name = "6-ya Gvardyeiskaya Armiya"
		location = 1191
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 4 }
			name = "20-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 5 }
			name = "7-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 7 }
			name = "12-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 7 }
		name = "39-ya Armiya"
		location = 1191
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 28 }
			name = "3-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 29 }
			name = "4-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 30 }
			name = "21-ya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 8 }
		name = "53-ya Armiya"
		location = 1187
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 37 }
			name = "1-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
		}
	}
	landunit = {
		id = { type = 30151 id = 9 }
		name = "Mekhanizirovannaya Armiya"
		location = 1195
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 38 }
			name = "3-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = heavy_armor
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 70 }
			name = "12-ya Motostrelkovaya Divizyia"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 14 }
		name = "2-ya Krasnaya Znameni Armiya"
		location = 1191
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 69 }
			name = "3-ya Motostrelkovaya Divizyia"
		}
		division = {
			type = bergsjaeger
			model = 13
			id = { type = 30154 id = 72 }
			name = "369-ya Gornostrelkovaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 23 }
		name = "Tsentralnaya Gruppa Voisk"
		location = 242
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 97 }
			name = "Tsentralnaya Gruppa Voisk"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 24 }
		name = "Odesskyi Osobyi Voennyi Okrug"
		location = 626
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 98 }
			name = "Odesskyi Osobyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 26 }
		name = "Belomorskyi Voennyi Okrug"
		location = 542
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 100 }
			name = "Belomorskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 108 }
		name = "Prikarpatskyi Voennyi Okrug"
		location = 213
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 470 }
			name = "Prikarpatskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 3 }
		name = "Leningradskyi Voennyi Okrug"
		location = 553
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 3 }
			name = "Leningradskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 109 }
		name = "Tbilisyi Voennyi Okrug"
		location = 709
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 471 }
			name = "Tbilisyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 111 }
		name = "Sibirskyi Voennyi Okrug"
		location = 1142
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 473 }
			name = "Sibirskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 113 }
		name = "Kievskyi Voennyi Okrug"
		location = 617
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 475 }
			name = "Kievskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 115 }
		name = "Belorusskyi Voennyi Okrug"
		location = 599
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 477 }
			name = "Belorusskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 27 }
		name = "Raboche-Krest'yanskaya Krasnaya Armyia"
		location = 572
		division = {
			type = hq
			model = 5
			id = { type = 30154 id = 101 }
			name = "Generalnyi Shtab RKKA"
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 29 }
		name = "31-ya Armiya"
		location = 162
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 113 }
			name = "9-ya Motostrelkovaya Divizyia"
			strength = 75
			extra = anti_air
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 114 }
			name = "5-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 115 }
			name = "9-ya Tankovaya Divizyia"
			strength = 75
			extra = heavy_armor
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 30 }
		name = "2-ya Gvardyeiskaya Armiya"
		location = 153
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 120 }
			name = "55-ya Motostrelkovaya Divizyia"
			strength = 60
			extra = anti_air
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 121 }
			name = "21-ya Motostrelkovaya Divizyia"
			strength = 60
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 122 }
			name = "16-ya Tankovaya Divizyia"
			strength = 60
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 31 }
		name = "2-ya Udarnaya Armiya"
		location = 163
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 123 }
			name = "18-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 90
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 124 }
			name = "22-ya Tankovaya Divizyia"
			extra = tank_destroyer
			brigade_model = 4
			strength = 90
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 125 }
			name = "10-ya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 90
		}
	}
	landunit = {
		id = { type = 30151 id = 33 }
		name = "5-ya Udarnaya Armiya"
		location = 170
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 143 }
			name = "94-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 80
			extra = tank_destroyer
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 144 }
			name = "89-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 80
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 34 }
		name = "8-ya Gvardyeiskaya Armiya"
		location = 1097
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 145 }
			name = "7-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 80
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 146 }
			name = "27-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = tank_destroyer
			brigade_model = 4
			strength = 80
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 147 }
			name = "74-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 80
		}
	}
	landunit = {
		id = { type = 30151 id = 35 }
		name = "3-ya Armiya"
		location = 169
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 161 }
			name = "32-ya Motostrelkovaya Divizyia"
			strength = 60
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 162 }
			name = "13-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 60
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 163 }
			name = "4-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 60
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 36 }
		name = "2-ya Gvardyeiskaya Tankovaya Armiya"
		location = 172
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 164 }
			name = "9-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 4
			strength = 90
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 165 }
			name = "12-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 90
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 166 }
			name = "9-ya Mekhanizirovannaya Divizyia"
			strength = 90
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 38 }
		name = "3-ya Udarnaya Armiya"
		location = 173
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 179 }
			name = "23-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			extra = anti_air
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 181 }
			name = "52-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			extra = anti_air
			brigade_model = 5
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 182 }
			name = "8-ya Tankovaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 39 }
		name = "1-ya Gvardyeiskaya Tankovaya Armiya"
		location = 169
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 183 }
			name = "11-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 4
			strength = 85
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 184 }
			name = "12-ya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 85
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 185 }
			name = "8-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = tank_destroyer
			brigade_model = 4
			strength = 85
		}
	}
	landunit = {
		id = { type = 30151 id = 40 }
		name = "33-ya Armiya"
		location = 172
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 190 }
			name = "20-ya Tankovaya Divizyia"
			strength = 80
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 191 }
			name = "2-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 80
			extra = light_armor_brigade
			brigade_model = 8
		}
	}
	landunit = {
		id = { type = 30151 id = 41 }
		name = "3-ya Gvardyeiskaya Armiya"
		location = 713
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 193 }
			name = "2-ya Motostrelkovaya Divizyia"
			strength = 85
			extra = artillery
			brigade_model = 12
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 194 }
			name = "16-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 85
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 43 }
		name = "60-ya Armiya"
		location = 713
		division = {
			type = bergsjaeger
			model = 13
			id = { type = 30154 id = 205 }
			name = "9-ya Gornostrelkovaya Divizyia"
			strength = 90
		}
		division = {
			type = bergsjaeger
			model = 13
			id = { type = 30154 id = 206 }
			name = "3-ya Gornostrelkovaya Divizyia"
			strength = 90
		}
		division = {
			type = bergsjaeger
			model = 13
			id = { type = 30154 id = 207 }
			name = "13-ya Gornostrelkovaya Divizyia"
			strength = 90
		}
	}
	landunit = {
		id = { type = 30151 id = 44 }
		name = "1-ya Gvardyeiskaya Armiya"
		location = 204
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 214 }
			name = "2-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			strength = 75
		}
	}
	landunit = {
		id = { type = 30151 id = 45 }
		name = "3-ya Gvardyeiskaya Tankovaya Armiya"
		location = 1193
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 215 }
			name = "6-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 4
			strength = 80
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 216 }
			name = "8-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = tank_destroyer
			brigade_model = 4
			strength = 80
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 217 }
			name = "14-ya Mekhanizirovannaya Divizyia"
			extra = tank_destroyer
			brigade_model = 4
			strength = 80
		}
	}
	landunit = {
		id = { type = 30151 id = 46 }
		name = "13-ya Armiya"
		location = 242
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 224 }
			name = "9-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			strength = 85
		}
	}
	landunit = {
		id = { type = 30151 id = 47 }
		name = "18-ya Armiya"
		location = 306
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 225 }
			name = "14-ya Tankovaya Divizyia"
			strength = 80
			extra = tank_destroyer
			brigade_model = 4
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 226 }
			name = "16-ya Mekhanizirovannaya Divizyia"
			strength = 75
		}
	}
	landunit = {
		id = { type = 30151 id = 48 }
		name = "5-ya Gvardyeiskaya Armiya"
		location = 1190
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 232 }
			name = "20-ya Motostrelkovaya Divizyia"
			strength = 65
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 235 }
			name = "10-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 65
			extra = tank_destroyer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 49 }
		name = "4-ya Gvardyeiskaya Tankovaya Armiya"
		location = 242
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 236 }
			name = "2-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 4
			strength = 90
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 238 }
			name = "6-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 90
		}
	}
	landunit = {
		id = { type = 30151 id = 50 }
		name = "52-ya Armiya"
		location = 170
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 239 }
			name = "17-ya Tankovaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 240 }
			name = "10-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 51 }
		name = "40-ya Armiya"
		location = 242
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 250 }
			name = "7-ya Tankovaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 53 }
		name = "6-ya Tankovaya Armiya"
		location = 182
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 255 }
			name = "15-ya Mekhanizirovannaya Divizyia"
			strength = 70
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 256 }
			name = "17-ya Mekhanizirovannaya Divizyia"
			strength = 70
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 261 }
			name = "14-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 80
			extra = heavy_armor
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 262 }
			name = "19-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 80
			extra = tank_destroyer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 56 }
		name = "7-ya Gvardyeiskaya Armiya"
		location = 205
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 278 }
			name = "53-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			extra = artillery
			brigade_model = 12
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 279 }
			name = "409-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = infantry
			model = 13
			id = { type = 30154 id = 283 }
			name = "303-ya Strelkovaya Divizyia"
			strength = 90
			extra = anti_air
			brigade_model = 5
		}
	}
	landunit = {
		id = { type = 30151 id = 57 }
		name = "56-ya Armiya"
		location = 1192
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 291 }
			name = "1-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 80
			extra = tank_destroyer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 59 }
		name = "4-ya Gvardyeiskaya Armiya"
		location = 617
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 311 }
			name = "40-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 60 }
		name = "6-ya Gvardyeiskaya Tankovaya Armiya"
		location = 1193
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 312 }
			name = "5-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 4
			strength = 90
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 313 }
			name = "9-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 314 }
			name = "7-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 61 }
		name = "9-ya Gvardyeiskaya Armiya"
		location = 1193
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 317 }
			name = "6-ya Motostrelkovaya Divizyia"
			strength = 75
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 318 }
			name = "5-ya Motostrelkovaya Divizyia"
			strength = 75
			extra = artillery
			brigade_model = 12
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 319 }
			name = "15-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 75
			extra = anti_air
			brigade_model = 5
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 320 }
			name = "22-ya Tankovaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 64 }
		name = "37-ya Armiya"
		location = 182
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 343 }
			name = "7-ya Motostrelkovaya Divizyia"
			strength = 70
			extra = anti_air
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 345 }
			name = "4-ya Motostrelkovaya Divizyia"
			strength = 70
			extra = engineer
			brigade_model = 5
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 346 }
			name = "11-ya Tankovaya Divizyia"
			strength = 70
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 347 }
			name = "4-ya Tankovaya Divizyia"
			strength = 70
			extra = light_armor_brigade
			brigade_model = 8
		}
	}
	landunit = {
		id = { type = 30151 id = 65 }
		name = "11-ya Gvardyeiskaya Armiya"
		location = 553
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 348 }
			name = "1-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 90
			extra = armored_car
			brigade_model = 6
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 349 }
			name = "8-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 72 }
		name = "51-ya Armiya"
		location = 1097
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 399 }
			name = "15-ya Tankovaya Divizyia"
			strength = 80
			extra = tank_destroyer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 74 }
		name = "4-ya Udarnaya Armiya"
		location = 182
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 417 }
			name = "24-ya Tankovaya Divizyia"
			strength = 60
			extra = light_armor_brigade
			brigade_model = 8
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 418 }
			name = "5-ya Tankovaya Divizyia"
			strength = 60
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 419 }
			name = "18-ya Tankovaya Divizyia"
			strength = 60
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 75 }
		name = "43-ya Armiya"
		location = 182
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 421 }
			name = "13-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			extra = sp_artillery
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 76 }
		name = "10-ya Gvardyeiskaya Armiya"
		location = 708
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 432 }
			name = "2-ya Tankovaya Divizyia"
			strength = 80
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 433 }
			name = "13-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 90
			extra = sp_artillery
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 434 }
			name = "1-ya Motostrelkovaya Divizyia"
			strength = 90
		}
		division = {
			type = motorized
			model = 4
			id = { type = 30154 id = 435 }
			name = "8-ya Motostrelkovaya Divizyia"
			strength = 90
			extra = artillery
			brigade_model = 12
		}
	}
	landunit = {
		id = { type = 30151 id = 77 }
		name = "5-ya Gvardyeiskaya Tankovaya Armiya"
		location = 182
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 436 }
			name = "3-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 4
			strength = 85
		}
		division = {
			type = armor
			model = 4
			id = { type = 30154 id = 437 }
			name = "10-ya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 4
			strength = 85
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 438 }
			name = "4-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = tank_destroyer
			brigade_model = 4
			strength = 85
		}
		division = {
			type = mechanized
			model = 2
			id = { type = 30154 id = 439 }
			name = "13-ya Mekhanizirovannaya Divizyia"
			extra = engineer
			brigade_model = 5
			strength = 85
		}
	}

	# #######################################################
	# ########## Naval OOB 1945 #############################
	# #######################################################
	

	navalunit = {
		id = { type = 30152 id = 1 }
		name = "Chernomorskiy Flot"
		location = 641
		base = 641
		division = {
			id = { type = 30155 id = 1 }
			name = "Parishskaya Kommuna"
			type = battleship
			model = 9
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 1
			brigade_model2 = 2
			brigade_model3 = 0
			brigade_model4 = 5
			brigade_model5 = 0
		}
		division = {
			id = { type = 30155 id = 2 }
			name = "Voroshilov"
			type = heavy_cruiser
			model = 7
		}
		division = {
			id = { type = 30155 id = 3 }
			name = "Molotov"
			type = heavy_cruiser
			model = 7
		}
		division = {
			id = { type = 30155 id = 4 }
			name = "Kaganovich"
			type = heavy_cruiser
			model = 7
		}
		division = {
			id = { type = 30155 id = 5 }
			name = "Krasnyi Kavkaz"
			type = heavy_cruiser
			model = 7
		}
		division = {
			id = { type = 30155 id = 6 }
			name = "Profintern"
			type = light_cruiser
			model = 7
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 2
			brigade_model2 = 5
		}
		division = {
			id = { type = 30155 id = 7 }
			name = "1 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			id = { type = 30155 id = 8 }
			name = "2 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_fire_controll_s
			brigade_model1 = 2
		}
		division = {
			id = { type = 30155 id = 9 }
			name = "3 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			id = { type = 30155 id = 10 }
			name = "4 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			id = { type = 30155 id = 11 }
			name = "17 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			id = { type = 30155 id = 12 }
			name = "18 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			id = { type = 30155 id = 13 }
			name = "19 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_asw
			brigade_model1 = 3
		}
		division = {
			id = { type = 30155 id = 14 }
			name = "1 Transportnaya Flotiliya"
			type = transport
			model = 4
		}
		division = {
			id = { type = 30155 id = 15 }
			name = "2 Transportnaya Flotiliya"
			type = transport
			model = 4
		}
	}
	navalunit = {
		id = { type = 30152 id = 2 }
		name = "Severnaya Voennaya Flotiliya"
		location = 535
		base = 535
		division = {
			id = { type = 30155 id = 16 }
			name = "Murmansk"
			type = light_cruiser
			model = 7
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 2
			brigade_model2 = 5
		}
		division = {
			id = { type = 30155 id = 17 }
			name = "13 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_fire_controll_s
			brigade_model1 = 2
		}
		division = {
			id = { type = 30155 id = 18 }
			name = "20 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_asw
			brigade_model1 = 3
		}
		division = {
			id = { type = 30155 id = 19 }
			name = "21 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
	}
	navalunit = {
		id = { type = 30152 id = 3 }
		name = "Tikhookeanskiy Flot"
		location = 1191
		base = 1191 # Vladivostok
		division = {
			id = { type = 30155 id = 20 }
			name = "16 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			id = { type = 30155 id = 21 }
			name = "23 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_asw
			brigade_model1 = 3
		}
		division = {
			id = { type = 30155 id = 22 }
			name = "25 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
	}
	navalunit = {
		id = { type = 30152 id = 4 }
		name = "Krasnoznamenny Baltijsky Flot"
		location = 553
		base = 553 # Leningrad
		division = {
			id = { type = 30155 id = 23 }
			name = "Oktyabrskaya Revolutsia"
			type = battleship
			model = 9
			extra1 = none
			extra2 = naval_fire_controll_l
			extra3 = none
			extra4 = naval_anti_air_l
			extra5 = none
			brigade_model1 = 1
			brigade_model2 = 2
			brigade_model3 = 0
			brigade_model4 = 5
			brigade_model5 = 0
		}
		division = {
			id = { type = 30155 id = 24 }
			name = "Kirov"
			type = heavy_cruiser
			model = 7
		}
		division = {
			id = { type = 30155 id = 25 }
			name = "Maxim Gor'kiy"
			type = heavy_cruiser
			model = 7
		}
		division = {
			id = { type = 30155 id = 26 }
			name = "Kalinin"
			type = heavy_cruiser
			model = 7
		}
		division = {
			id = { type = 30155 id = 27 }
			name = "9 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_asw
			brigade_model1 = 3
		}
		division = {
			id = { type = 30155 id = 28 }
			name = "28 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
		division = {
			id = { type = 30155 id = 29 }
			name = "27 Flotiliya Esmintsev"
			type = destroyer
			model = 8
			extra1 = naval_anti_air_s
			brigade_model1 = 5
		}
	}
	navalunit = {
		id = { type = 30152 id = 5 }
		name = "2. Flote Podlodok"
		location = 553
		base = 553 # Leningrad
		division = {
			id = { type = 30155 id = 30 }
			name = "9. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 6 }
		name = "3. Flote Podlodok"
		location = 553
		base = 553 # Leningrad
		division = {
			id = { type = 30155 id = 31 }
			name = "12. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 32 }
			name = "13. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 33 }
			name = "14. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 34 }
			name = "15. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 35 }
			name = "16. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 7 }
		name = "4. Flote Podlodok"
		location = 641
		base = 641 # Sevastopol
		division = {
			id = { type = 30155 id = 36 }
			name = "17. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 37 }
			name = "18. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 38 }
			name = "19. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 39 }
			name = "20. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 40 }
			name = "21. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 41 }
			name = "22. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 8 }
		name = "5. Flote Podlodok"
		location = 641
		base = 641 # Sevastopol
		division = {
			id = { type = 30155 id = 42 }
			name = "23. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 43 }
			name = "24. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 44 }
			name = "25. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 45 }
			name = "26. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 46 }
			name = "27. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 47 }
			name = "28. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 9 }
		name = "6. Flote Podlodok"
		location = 1191
		base = 1191 # Vladivostok
		division = {
			id = { type = 30155 id = 48 }
			name = "29. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 49 }
			name = "30. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 50 }
			name = "31. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 51 }
			name = "32. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 52 }
			name = "33. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 53 }
			name = "34. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 10 }
		name = "1. Flote Podlodok"
		location = 535
		base = 535 # ##murmansk
		division = {
			id = { type = 30155 id = 54 }
			name = "1. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 55 }
			name = "2. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 56 }
			name = "3. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 57 }
			name = "4. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 58 }
			name = "5. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 59 }
			name = "6. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 11 }
		name = "7. Flote Podlodok"
		location = 553
		base = 553 # Leningrad
		division = {
			id = { type = 30155 id = 60 }
			name = "35. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 61 }
			name = "36. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 62 }
			name = "37. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 63 }
			name = "38. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 64 }
			name = "39. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 65 }
			name = "40. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 12 }
		name = "8. Flote Podlodok"
		location = 641
		base = 641 # Sevastopol
		division = {
			id = { type = 30155 id = 66 }
			name = "41. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 67 }
			name = "42. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 68 }
			name = "43. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 69 }
			name = "44. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 70 }
			name = "45. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 71 }
			name = "46. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 13 }
		name = "9-ya Brigada Podlodok"
		location = 535
		base = 535 # ##murmansk
		division = {
			id = { type = 30155 id = 72 }
			name = "47. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 73 }
			name = "48. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 74 }
			name = "49. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 75 }
			name = "50. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 76 }
			name = "51. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 77 }
			name = "52. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	navalunit = {
		id = { type = 30152 id = 14 }
		name = "10. Flote Podlodok"
		location = 1191
		base = 1191 # Vladivostok
		division = {
			id = { type = 30155 id = 78 }
			name = "53. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 79 }
			name = "54. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 80 }
			name = "55. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 81 }
			name = "56. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 82 }
			name = "57. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
		division = {
			id = { type = 30155 id = 83 }
			name = "58. Flotiliya Podlodok"
			type = submarine
			model = 9
		}
	}
	airunit = {
		location = 641
		base = 641
		id = { type = 30153 id = 1 }
		name = "4-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 1 }
			name = "202.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 2 }
			name = "219.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
	}
	airunit = {
		location = 242
		base = 242
		id = { type = 30153 id = 2 }
		name = "5-y Shturmovoy Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 3 }
			name = "4.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 4 }
			name = "264.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 5 }
			name = "2.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
	airunit = {
		location = 163
		base = 163
		id = { type = 30153 id = 3 }
		name = "8i Napadenie Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 6 }
			name = "224.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 7 }
			name = "226.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 8 }
			name = "299.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
	airunit = {
		location = 240
		base = 240
		id = { type = 30153 id = 4 }
		name = "5-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 9 }
			name = "5.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 10 }
			name = "256.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 153
		base = 153
		id = { type = 30153 id = 5 }
		name = "10-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 11 }
			name = "10.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 12 }
			name = "235.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 184
		base = 184
		id = { type = 30153 id = 6 }
		name = "2-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 13 }
			name = "208.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 14 }
			name = "326.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
	}
	airunit = {
		location = 517
		base = 517
		id = { type = 30153 id = 7 }
		name = "2-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 15 }
			name = "1.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 16 }
			name = "8.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
	}
	airunit = {
		location = 626
		base = 626
		id = { type = 30153 id = 8 }
		name = "1-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 17 }
			name = "8.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 18 }
			name = "9.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 19 }
			name = "12.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 20 }
			name = "312.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
	}
	airunit = {
		location = 626
		base = 626
		id = { type = 30153 id = 9 }
		name = "2-y Shturmovoy Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 21 }
			name = "7.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 22 }
			name = "231.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
	airunit = {
		location = 626
		base = 626
		id = { type = 30153 id = 10 }
		name = "4-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 23 }
			name = "294.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 24 }
			name = "302.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 663
		base = 663
		id = { type = 30153 id = 11 }
		name = "7-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 25 }
			name = "9.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 26 }
			name = "205.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 27 }
			name = "304.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 617
		base = 617
		id = { type = 30153 id = 12 }
		name = "1-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 28 }
			name = "5.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 29 }
			name = "6.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 30 }
			name = "11.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 617
		base = 617
		id = { type = 30153 id = 13 }
		name = "9-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 31 }
			name = "305.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 32 }
			name = "306.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 33 }
			name = "295.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 617
		base = 617
		id = { type = 30153 id = 14 }
		name = "17-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 34 }
			name = "236.LBABR"
			strength = 100
			type = multi_role
			model = 10
		}
		division = {
			id = { type = 30156 id = 35 }
			name = "238.LBABR"
			strength = 100
			type = multi_role
			model = 10
		}
		division = {
			id = { type = 30156 id = 36 }
			name = "262.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 37 }
			name = "218.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
	}
	airunit = {
		location = 589
		base = 589
		id = { type = 30153 id = 15 }
		name = "11-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 38 }
			name = "4., 148. & 293.LBABR"
			strength = 100
			type = multi_role
			model = 10
		}
		division = {
			id = { type = 30156 id = 39 }
			name = "658. & 724.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 40 }
			name = "284.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 41 }
			name = "313.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
	}
	airunit = {
		location = 589
		base = 589
		id = { type = 30153 id = 16 }
		name = "14-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 42 }
			name = "281.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 43 }
			name = "269.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 44 }
			name = "225.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
	airunit = {
		location = 163
		base = 163
		id = { type = 30153 id = 17 }
		name = "13-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 45 }
			name = "276.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 46 }
			name = "277.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 47 }
			name = "275.LBABR"
			strength = 100
			type = multi_role
			model = 10
		}
		division = {
			id = { type = 30156 id = 48 }
			name = "246.LBABR"
			strength = 100
			type = multi_role
			model = 10
		}
	}
	airunit = {
		location = 1191
		base = 1191
		id = { type = 30153 id = 18 }
		name = "12-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 49 }
			name = "30.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 50 }
			name = "247.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 51 }
			name = "248.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 52 }
			name = "246.LBABR"
			strength = 100
			type = multi_role
			model = 10
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 19 }
		name = "11-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 53 }
			name = "5.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 54 }
			name = "190.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 20 }
		name = "1-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 55 }
			name = "4.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 56 }
			name = "5.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
	}
	airunit = {
		location = 553
		base = 553
		id = { type = 30153 id = 21 }
		name = "1-i Morskoi Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 57 }
			name = "1.TBABR"
			strength = 100
			type = naval_bomber
			model = 6
		}
		division = {
			id = { type = 30156 id = 58 }
			name = "2.TBABR"
			strength = 100
			type = naval_bomber
			model = 6
		}
		division = {
			id = { type = 30156 id = 59 }
			name = "3.TBABR"
			strength = 100
			type = naval_bomber
			model = 6
		}
	}
	airunit = {
		location = 242
		base = 242
		id = { type = 30153 id = 22 }
		name = "3-i Napadenie Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 60 }
			name = "307.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 61 }
			name = "308.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
	airunit = {
		location = 242
		base = 242
		id = { type = 30153 id = 23 }
		name = "3-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 62 }
			name = "113.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 63 }
			name = "311.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 64 }
			name = "303.LBABR"
			strength = 100
			type = multi_role
			model = 10
		}
		division = {
			id = { type = 30156 id = 65 }
			name = "213.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 24 }
		name = "1-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 66 }
			name = "3.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 67 }
			name = "4.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 25 }
		name = "2-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 68 }
			name = "240.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 69 }
			name = "303.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 663
		base = 663
		id = { type = 30153 id = 26 }
		name = "3-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 70 }
			name = "265.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 71 }
			name = "278.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 72 }
			name = "240.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 153
		base = 153
		id = { type = 30153 id = 27 }
		name = "1-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 73 }
			name = "6.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 74 }
			name = "1.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 75 }
			name = "334.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 76 }
			name = "311.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
	airunit = {
		location = 1191
		base = 1191
		id = { type = 30153 id = 28 }
		name = "9-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 77 }
			name = "229.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 78 }
			name = "325.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 79 }
			name = "233.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 80 }
			name = "309.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 597
		base = 597
		id = { type = 30153 id = 29 }
		name = "6-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 81 }
			name = "3.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 82 }
			name = "336.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 83 }
			name = "242.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 84 }
			name = "230.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
	airunit = {
		location = 597
		base = 597
		id = { type = 30153 id = 30 }
		name = "3-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 85 }
			name = "241.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 86 }
			name = "301.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 31 }
		name = "6-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			id = { type = 30156 id = 87 }
			name = "132.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 88 }
			name = "221.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
		division = {
			id = { type = 30156 id = 89 }
			name = "283.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	
	airunit = {
		location = 262
		base = 262
		id = { type = 30153 id = 32 }
		name = "6-y Aviatsionnyi Korpus PVO"
		division = {
			id = { type = 30156 id = 90 }
			name = "279.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
	}
	airunit = {
		location = 262
		base = 262
		id = { type = 30153 id = 33 }
		name = "16-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 91 }
			name = "1.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 92 }
			name = "234.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 93 }
			name = "286.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 94 }
			name = "271.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
	}
	airunit = {
		location = 1191
		base = 1191
		id = { type = 30153 id = 34 }
		name = "10-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 95 }
			name = "115.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 96 }
			name = "107.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 97 }
			name = "100.IABR"
			strength = 100
			type = interceptor
			model = 13
		}
		division = {
			id = { type = 30156 id = 98 }
			name = "95.TBABR"
			strength = 100
			type = tactical_bomber
			model = 10
		}
	}
	airunit = {
		location = 153
		base = 153
		id = { type = 30153 id = 35 }
		name = "3-ya Vozdushnaya Armiya"
		division = {
			id = { type = 30156 id = 99 }
			name = "211.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		division = {
			id = { type = 30156 id = 100 }
			name = "335.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
		
		division = {
			id = { type = 30156 id = 101 }
			name = "314.TBABR"
			strength = 100
			type = strategic_bomber
			model = 7
		}
		division = {
			id = { type = 30156 id = 102 }
			name = "316.LSHABR"
			strength = 100
			type = cas
			model = 5
		}
	}
}
