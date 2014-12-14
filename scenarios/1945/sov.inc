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
	transports = 150
	escorts = 50
	capital = 572
	
	dissent = 0
	belligerence = 50
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 1
		political_left = 10
		freedom = 1
		free_market = 1
		professional_army = 6
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
			MOB6 = 1
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
	ownedprovinces = { 153 156 157 160 162 163 169 170 171 172 173 182 184 186 188 193 194 195 213 215 238 240 241 242 244 245 247 248 249 251 253 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 300 302 303 304 305 306 498 499 500 501 502 503 504 505 506 507 517 519 530 531 532 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1080 1081 1082 1083 1092 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1119 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1221 1222 1223 1224 1225 1226 1227 1541 1542 1543 }
	controlledprovinces = { 153 156 157 160 162 163 169 170 171 172 173 182 184 186 188 193 194 195 213 215 238 240 241 242 244 245 247 248 249 251 253 255 256 257 258 259 260 261 262 263 264 265 266 267 268 269 270 271 272 273 274 275 300 302 303 304 305 306 498 499 500 501 502 503 504 505 506 507 517 519 530 531 532 534 535 536 537 538 539 540 541 542 543 544 545 546 547 548 549 550 551 552 553 554 555 556 557 558 559 560 561 562 563 564 565 566 567 568 569 570 571 572 573 574 575 576 577 578 579 580 581 582 583 584 585 586 587 588 589 590 591 592 593 594 595 596 597 598 599 600 601 602 603 604 605 606 607 608 609 610 611 612 613 614 615 616 617 618 619 620 621 622 623 624 625 626 627 628 629 630 631 632 633 634 635 636 637 638 639 640 641 642 643 644 645 646 647 648 649 650 651 652 653 654 655 656 657 658 659 660 661 662 663 664 665 666 667 668 669 670 671 672 673 674 675 676 677 678 679 680 681 682 683 684 685 686 687 688 689 690 691 692 693 694 695 696 697 698 699 700 701 702 703 704 705 706 707 708 709 710 711 712 713 714 1069 1070 1080 1081 1082 1083 1092 1097 1098 1099 1100 1101 1102 1103 1104 1105 1106 1107 1108 1109 1110 1111 1112 1113 1114 1115 1116 1117 1118 1119 1126 1127 1128 1129 1130 1131 1132 1133 1134 1135 1136 1137 1138 1139 1140 1141 1142 1143 1144 1145 1146 1147 1148 1149 1150 1151 1152 1153 1154 1155 1156 1157 1158 1161 1162 1163 1164 1165 1166 1167 1168 1169 1170 1171 1174 1175 1176 1177 1178 1179 1180 1181 1182 1183 1184 1185 1186 1187 1188 1189 1190 1191 1192 1193 1194 1195 1196 1221 1222 1223 1224 1225 1226 1227 1541 1542 1543 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1410 1470 1530 1560 1570 1580 1590 1600 1610 1670 1680 1690 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2060 2070 2080 2090 2100 2110 2120 2130 2150 2160 2170 2180 2220 2230 2240 2260 2290 2300 2310 2320 2330 2340 2370 2400 2410 2420 2430 2450 2460 2470 2480 2510 2520 2530 2620 2630 2640 2646 2650 2800 2810 2820 2850 2860 2870 2880 2900 2910 2920 2930 2940 2970 2980 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3550 3610 3620 3630 3640 3650 3660 3670 3720 3730 3736 3740 3750 3760 3810 3820 3830 3840 3900 3910 4010 4020 4030 4040 4050 4060 4070 4080 4090 4100 4110 4120 4130 4140 4150 4160 4170 4190 4200 4210 4220 4230 4240 4250 4260 4270 4280 4290 4300 4310 4320 4330 4340 4400 4450 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4860 4900 4910 4920 4930 4940 4950 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5170 5180 5190 5200 5210 5220 5230 5310 5316 5320 5326 5327 5330 5340 5350 5360 5370 5380 5410 5416 5417 5420 5426 5430 5470 5480 5490 5500 5510 5520 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6300 6310 6320 6330 6340 6350 6360 6370 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7010 7020 7100 7110 7120 7140 7550 7560 7570 7580 7590 7600 7610 7620 7630 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8500 8510 8520 8550 8560 8570 8600 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 12000 12010 12020 12100 12110 12120 12130 12140 13060 13070 13080 14000 14010 14020 14030 14040 15500 21180 21190 21200 22910 22920 22930 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81360 81370 81380 81650 81700 81710 81720 81730 81740 81850 81860 81870 81880 81890 82300 82310 82320 82500 82510 199100 199110 199130 199140 
	
	13390
	
	}
	
	inventions = { 3000011 3000012 3000015 3000016 3000017 3000018 3000027 3000028 3000031 }
	
	diplomacy = {
		relation = { tag = BRA value = -50 }
		relation = { tag = FIN access = yes value = 50 }
		relation = {
			tag = MON
			value = 150
			guaranteed = { day = 8 month = april year = 1943 }
			access = yes
		}
		relation = { tag = PER value = -20 }
		relation = {
			tag = SIK
			guaranteed = { day = 30 month = december year = 1942 }
			access = yes
		}
		relation = { tag = TUR value = 70 }
		relation = { tag = SPA value = -100 }

		relation = {
			tag = U13
			value = 150
			guaranteed = { day = 9 month = may year = 1945 }
			access = yes
		}

		relation = {
			tag = U27
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

		relation = {
			tag = U33
			value = 150
			access = yes
		}
	}
	
	dormant_ministers = { 30005 30006 30007 30009 30010 30015 30019 30023 30026 30027 30029 30030 30031 30032 30033 30035 30038 30048 30051 30052 30053 30057 30058 30061 30062 30063 30064 30065 30066 30068 30074 30320 }
	dormant_leaders = {  30050 30040 30042 30044 30085 30095 30097 30101 30108 30111 30127 30131 30135 30152 30156 30170 30175 30192 30194 30207
                               30217 30220 30229 30232 30243 30255 30267 30272 30315 30316 30338 30339 30403 30409 30416 30454 30472 30477 30484 30487
                               30498 30523 30543 30547 30550 30570 30571 30572 30602 30618 30654 30664 30673 30678 30701 30715 30716 30717 30718 30719
                               30721 30722 30723 30650 30512 30007 30374 30238 30276 30681 30353 30687 30407 30697 30499 30004 30008 30028
                               30057 30059 30063 30081 30084 30090 30098 30100 30107 30120 30136 30172 30174 30186 30190 30191 30198 30199 30214 30215
                               30226 30242 30258 30263 30269 30275 30277 30296 30302 30324 30326 30345 30381 30391 30399 30401 30411 30419 30442 30445
                               30447 30491 30494 30509 30521 30548 30552 30576 30614 30658 30660 30720 30473 30778 30076 30216 30744 30266 30322 30463
                               30479 30538 30789 30313 30765 30767 30515 30776 30528 30758 30373 30564
                            }
	dormant_teams = { 30004 30006 30007 30017 30026 30027 30028 30030 }
	
	headofstate = { type = 9 id = 30011 }
	headofgovernment = { type = 9 id = 30144 }
	foreignminister = { type = 9 id = 30021 }
	armamentminister = { type = 9 id = 30025 }
	ministerofsecurity = { type = 9 id = 30028 }
	ministerofintelligence = { type = 9 id = 30037 }
	chiefofstaff = { type = 9 id = 30043 }
	chiefofarmy = { type = 9 id = 30046 }
	chiefofnavy = { type = 9 id = 30049 }
	chiefofair = { type = 9 id = 30055 }

	################################################################
	# Soviet Army OOB - by omega20
	# ref: http://en.wikipedia.org/wiki/Template:Armies_of_the_Soviet_Army
	# ref: http://en.wikipedia.org/wiki/Group_of_Soviet_Forces_in_Germany
	# ref: http://en.wikipedia.org/wiki/Northern_Group_of_Forces
	################################################################

	landunit = {
		id = { type = 30151 id = 1 }
		name = "Zabaikalskyi Voennyi Okrug"
		location = 1169
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 1 }
			name = "Zabaikalskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 20
		}
	}
	landunit = {
		id = { type = 30151 id = 2 }
		name = "Dalnevostochnyi Voennyi Okrug"
		location = 1191
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 2 }
			name = "Dalnevostochnyi Voennyi Okrug"
			experience = 25
			extra = anti_air
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 4 }
		name = "6-ya Gvardyeiskaya Armiya"
		location = 264
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 4 }
			name = "20-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			experience = 80
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 5 }
			name = "7-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			experience = 60
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 6 }
			name = "61-ya Strelkovaya Divizyia"
			experience = 33
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 7 }
			name = "12-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			experience = 70
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 8 }
			name = "143-ya Strelkovaya Divizyia"
			extra = artillery
			brigade_model = 10
			experience = 44
		}
	}
	landunit = {
		id = { type = 30151 id = 5 }
		name = "17-ya Armiya"
		location = 1226
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 9 }
			name = "209-ya Strelkovaya Divizyia"
			experience = 33
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 10 }
			name = "278-ya Strelkovaya Divizyia"
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 11 }
			name = "284-ya Strelkovaya Divizyia"
			experience = 33
			extra = anti_air
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 6 }
		name = "36-ya Armiya"
		location = 1168
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 12 }
			name = "102-ya Strelkovaya Divizyia"
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 13 }
			name = "94-ya Strelkovaya Divizyia"
			experience = 33
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 14 }
			name = "210-ya Strelkovaya Divizyia"
			experience = 44
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 15 }
			name = "292-ya Strelkovaya Divizyia"
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 16 }
			name = "293-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 17 }
			name = "275-ya Strelkovaya Divizyia"
			experience = 33
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 18 }
			name = "298-ya Strelkovaya Divizyia"
			experience = 33
		}
	}
	landunit = {
		id = { type = 30151 id = 7 }
		name = "39-ya Armiya"
		location = 1226
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 19 }
			name = "17-ya Gvardyeiskaya Strelkovaya Divizyia"
			experience = 60
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 20 }
			name = "19-ya Gvardyeiskaya Strelkovaya Divizyia"
			experience = 60
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 21 }
			name = "91-ya Gvardyeiskaya Strelkovaya Divizyia"
			experience = 70
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 22 }
			name = "124-ya Strelkovaya Divizyia"
			experience = 33
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 23 }
			name = "221-ya Strelkovaya Divizyia"
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 24 }
			name = "358-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 25 }
			name = "192-ya Strelkovaya Divizyia"
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 26 }
			name = "262-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 27 }
			name = "228-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 28 }
			name = "3-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			experience = 60
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 29 }
			name = "4-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			experience = 70
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 30 }
			name = "21-ya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			experience = 34
		}
	}
	landunit = {
		id = { type = 30151 id = 8 }
		name = "53-ya Armiya"
		location = 1187
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 31 }
			name = "109-ya Gvardyeiskaya Strelkovaya Divizyia"
			experience = 77
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 32 }
			name = "110-ya Gvardyeiskaya Strelkovaya Divizyia"
			experience = 73
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 33 }
			name = "6-ya Strelkovaya Divizyia"
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 34 }
			name = "242-ya Strelkovaya Divizyia"
			experience = 44
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 35 }
			name = "56-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 36 }
			name = "203-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 37 }
			name = "1-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			experience = 75
		}
	}
	landunit = {
		id = { type = 30151 id = 9 }
		name = "Cav-Mech Army"
		location = 1195
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 38 }
			name = "3-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = heavy_armor
			brigade_model = 2
			experience = 80
		}
		division = {
			type = cavalry
			model = 11
			id = { type = 30154 id = 39 }
			name = "59-ya Kavaleriyskaya Divizyia"
			experience = 50
			extra = light_armor_brigade
			brigade_model = 7
		}
		division = {
			type = cavalry
			model = 11
			id = { type = 30154 id = 40 }
			name = "5-ya Mongolskaya Kavaleriyskaya Divizyia"
			experience = 30
		}
		division = {
			type = cavalry
			model = 11
			id = { type = 30154 id = 41 }
			name = "6-ya Mongolskaya Kavaleriyskaya Divizyia"
			experience = 30
		}
		division = {
			type = cavalry
			model = 11
			id = { type = 30154 id = 42 }
			name = "7-ya Mongolskaya Kavaleriyskaya Divizyia"
			experience = 30
		}
		division = {
			type = cavalry
			model = 11
			id = { type = 30154 id = 43 }
			name = "8-ya Mongolskaya Kavaleriyskaya Divizyia"
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 10 }
		name = "1-ya Krasnoznamennaya Armiya"
		location = 1191
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 44 }
			name = "22-ya Strelkovaya Divizyia"
			experience = 44
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 45 }
			name = "39-ya Strelkovaya Divizyia"
			experience = 44
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 46 }
			name = "58-ya Strelkovaya Divizyia"
			experience = 33
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 47 }
			name = "365-ya Strelkovaya Divizyia"
			experience = 44
			extra = light_armor_brigade
			brigade_model = 7
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 48 }
			name = "231-ya Strelkovaya Divizyia"
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 49 }
			name = "300-ya Strelkovaya Divizyia"
			experience = 33
		}
	}
	landunit = {
		id = { type = 30151 id = 11 }
		name = "5-ya Armiya"
		location = 1191
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 50 }
			name = "187-ya Strelkovaya Divizyia"
			experience = 33
			extra = light_armor_brigade
			brigade_model = 7
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 51 }
			name = "366-ya Strelkovaya Divizyia"
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 52 }
			name = "157-ya Strelkovaya Divizyia"
			experience = 44
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 53 }
			name = "159-ya Strelkovaya Divizyia"
			experience = 44
			extra = light_armor_brigade
			brigade_model = 7
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 54 }
			name = "184-ya Strelkovaya Divizyia"
			experience = 33
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 55 }
			name = "197-ya Strelkovaya Divizyia"
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 56 }
			name = "144-ya Strelkovaya Divizyia"
			experience = 3
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 57 }
			name = "190-ya Strelkovaya Divizyia"
			experience = 44
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 58 }
			name = "371-ya Strelkovaya Divizyia"
			experience = 33
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 59 }
			name = "63-ya Strelkovaya Divizyia"
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 60 }
			name = "215-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 61 }
			name = "277-ya Strelkovaya Divizyia"
			experience = 33
			extra = anti_air
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 12 }
		name = "25-ya Armiya"
		location = 1221
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 62 }
			name = "145-ya Strelkovaya Divizyia"
			experience = 40
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 63 }
			name = "384-ya Strelkovaya Divizyia"
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 64 }
			name = "393-ya Strelkovaya Divizyia"
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 65 }
			name = "386-ya Strelkovaya Divizyia"
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 13 }
		name = "9-ya Mekhanizirovannaya Armiya"
		location = 1176
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 66 }
			name = "66-ya Strelkovaya Divizyia"
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 67 }
			name = "264-ya Strelkovaya Divizyia"
			experience = 33
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 68 }
			name = "363-ya Strelkovaya Divizyia"
			experience = 44
		}
	}
	landunit = {
		id = { type = 30151 id = 14 }
		name = "2-ya Krasnaya Znameni Armiya"
		location = 1191
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 69 }
			name = "3-ya Motostrelkovaya Divizyia"
			experience = 40
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 70 }
			name = "12-ya Motostrelkovaya Divizyia"
			experience = 40
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 71 }
			name = "396-ya Strelkovaya Divizyia"
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = bergsjaeger
			model = 11
			id = { type = 30154 id = 72 }
			name = "369-ya Gornostrelkovaya Divizyia"
			experience = 40
		}
	}
	landunit = {
		id = { type = 30151 id = 15 }
		name = "15-ya Armiya"
		location = 1174
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 73 }
			name = "34-ya Strelkovaya Divizyia"
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 74 }
			name = "388-ya Strelkovaya Divizyia"
			experience = 45
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 75 }
			name = "255-ya Strelkovaya Divizyia"
			experience = 45
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 76 }
			name = "361-ya Strelkovaya Divizyia"
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 77 }
			name = "361-ya Strelkovaya Divizyia"
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 78 }
			name = "390-ya Strelkovaya Divizyia"
			experience = 45
		}
	}
	landunit = {
		id = { type = 30151 id = 16 }
		name = "16-ya Armiya"
		location = 1193
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 79 }
			name = "101-ya Motostrelkovaya Divizyia"
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 80 }
			name = "78-ya Strelkovaya Divizyia"
			experience = 50
			extra = tank_destroyer
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 17 }
		name = "Karelskyi Front"
		location = 517
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 81 }
			name = "Karelskyi Front"
			extra = anti_air
			brigade_model = 4
			experience = 20
		}
	}
	landunit = {
		id = { type = 30151 id = 18 }
		name = "14-ya Armiya"
		location = 517
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 82 }
			name = "122-ya Strelkovaya Divizyia"
			strength = 80
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 83 }
			name = "140-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 84 }
			name = "123-ya Strelkovaya Divizyia"
			strength = 80
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 85 }
			name = "130-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 86 }
			name = "142-ya Strelkovaya Divizyia"
			strength = 80
			experience = 33
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 87 }
			name = "132-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
		}
	}
	landunit = {
		id = { type = 30151 id = 19 }
		name = "19-ya Armiya"
		location = 226
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 88 }
			name = "108-ya Strelkovaya Divizyia"
			strength = 80
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 89 }
			name = "131-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 90 }
			name = "114-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 91 }
			name = "137-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 92 }
			name = "148-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 93 }
			name = "149-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 20 }
		name = "Gruppa Sovetskih Voisk v Germanii"
		location = 163
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 94 }
			name = "Gruppa Sovetskih Voisk v Germanii"
			extra = anti_air
			brigade_model = 4
			experience = 70
		}
	}
	landunit = {
		id = { type = 30151 id = 21 }
		name = "Severnaya Gruppa Voisk"
		location = 232
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 95 }
			name = "Severnaya Gruppa Voisk"
			extra = anti_air
			brigade_model = 4
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 23 }
		name = "Tsentralnaya Gruppa Voisk"
		location = 195
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 97 }
			name = "Tsentralnaya Gruppa Voisk"
			extra = anti_air
			brigade_model = 4
			experience = 70
		}
	}
	landunit = {
		id = { type = 30151 id = 24 }
		name = "Odesskyi Osobyi Voennyi Okrug"
		location = 626
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 98 }
			name = "Odesskyi Osobyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 25 }
		name = "Yuzhnaya Gruppa Voisk"
		location = 316
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 99 }
			name = "Yuzhnaya Gruppa Voisk"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 26 }
		name = "Belomorskyi Voennyi Okrug"
		location = 542
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 100 }
			name = "Belomorskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 108 }
		name = "Prikarpatskyi Voennyi Okrug"
		location = 213
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 470 }
			name = "Prikarpatskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 3 }
		name = "Leningradskyi Voennyi Okrug"
		location = 553
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 3 }
			name = "Leningradskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 109 }
		name = "Tbilisyi Voennyi Okrug"
		location = 709
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 471 }
			name = "Tbilisyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 110 }
		name = "Uralskyi Voennyi Okrug"
		location = 1151
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 472 }
			name = "Uralskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 111 }
		name = "Zapadno-Sibirskyi Voennyi Okrug"
		location = 1142
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 473 }
			name = "Zapadno-Sibirskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 112 }
		name = "Vostochno-Sibirskyi Voennyi Okrug"
		location = 1162
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 474 }
			name = "Vostochno-Sibirskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 113 }
		name = "Kievskyi Voennyi Okrug"
		location = 617
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 475 }
			name = "Kievskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 114 }
		name = "Privolzhskyi Voennyi Okrug"
		location = 663
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 476 }
			name = "Privolzhskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 115 }
		name = "Belorusskyi Voennyi Okrug"
		location = 599
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 477 }
			name = "Belorusskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 116 }
		name = "Pribaltiskyi Voennyi Okrug"
		location = 264
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 478 }
			name = "Pribaltiskyi Voennyi Okrug"
			extra = anti_air
			brigade_model = 4
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 27 }
		name = "Raboche-Krest'yanskaya Krasnaya Armyia"
		location = 572
		division = {
			type = hq
			model = 4
			id = { type = 30154 id = 101 }
			name = "Generalnyi Shtab RKKA"
			extra = anti_air
			brigade_model = 4
			experience = 100
		}
	}
	landunit = {
		id = { type = 30151 id = 28 }
		name = "28-ya Armiya"
		location = 251
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 102 }
			name = "32-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 66
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 103 }
			name = "64-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 104 }
			name = "127-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 105 }
			name = "46-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 106 }
			name = "20-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 107 }
			name = "72-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
		}
	}
	landunit = {
		id = { type = 30151 id = 29 }
		name = "31-ya Armiya"
		location = 162
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 108 }
			name = "352-ya Strelkovaya Divizyia"
			strength = 75
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 109 }
			name = "91-ya Strelkovaya Divizyia"
			strength = 75
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 110 }
			name = "113-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 111 }
			name = "230-ya Strelkovaya Divizyia"
			strength = 75
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 112 }
			name = "25-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 75
			experience = 60
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 113 }
			name = "9-ya Motostrelkovaya Divizyia"
			strength = 75
			experience = 50
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 114 }
			name = "5-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			experience = 80
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 115 }
			name = "9-ya Tankovaya Divizyia"
			strength = 75
			experience = 35
			extra = heavy_armor
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 30 }
		name = "2-ya Gvardyeiskaya Armiya"
		location = 572
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 116 }
			name = "87-ya Strelkovaya Divizyia"
			strength = 60
			experience = 47
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 117 }
			name = "54-ya Strelkovaya Divizyia"
			strength = 60
			experience = 47
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 118 }
			name = "126-ya Strelkovaya Divizyia"
			strength = 60
			experience = 48
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 119 }
			name = "214-ya Strelkovaya Divizyia"
			strength = 60
			experience = 48
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 120 }
			name = "55-ya Motostrelkovaya Divizyia"
			strength = 60
			experience = 50
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 121 }
			name = "21-ya Motostrelkovaya Divizyia"
			strength = 60
			experience = 30
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 122 }
			name = "16-ya Tankovaya Divizyia"
			strength = 60
			experience = 50
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 31 }
		name = "2-ya Udarnaya Armiya"
		location = 153
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 123 }
			name = "18-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 90
			experience = 70
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 124 }
			name = "22-ya Tankovaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			strength = 90
			experience = 50
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 125 }
			name = "10-ya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 90
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 126 }
			name = "57-ya Strelkovaya Divizyia"
			extra = anti_air
			brigade_model = 4
			strength = 90
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 127 }
			name = "58-ya Strelkovaya Divizyia"
			strength = 90
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 128 }
			name = "55-ya Strelkovaya Divizyia"
			strength = 90
			experience = 33
		}
	}
	landunit = {
		id = { type = 30151 id = 32 }
		name = "61-ya Armiya"
		location = 169
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 129 }
			name = "80-ya Strelkovaya Divizyia"
			strength = 70
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 130 }
			name = "9-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 70
			experience = 66
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 131 }
			name = "89-ya Strelkovaya Divizyia"
			strength = 70
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 132 }
			name = "98-ya Strelkovaya Divizyia"
			strength = 70
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 133 }
			name = "205-ya Strelkovaya Divizyia"
			strength = 70
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 134 }
			name = "18-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 70
			experience = 66
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 135 }
			name = "116-ya Strelkovaya Divizyia"
			strength = 70
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 33 }
		name = "5-ya Udarnaya Armiya"
		location = 170
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 136 }
			name = "235-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 137 }
			name = "266-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 138 }
			name = "416-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 139 }
			name = "295-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 140 }
			name = "301-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 141 }
			name = "248-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 142 }
			name = "60-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 80
			experience = 80
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 143 }
			name = "94-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 80
			experience = 70
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 144 }
			name = "89-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 80
			experience = 80
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 34 }
		name = "8-ya Gvardyeiskaya Armiya"
		location = 171
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 145 }
			name = "7-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 80
			experience = 80
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 146 }
			name = "27-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			strength = 80
			experience = 70
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 147 }
			name = "74-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 80
			experience = 87
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 148 }
			name = "82-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			extra = anti_air
			brigade_model = 4
			strength = 80
			experience = 78
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 149 }
			name = "37-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 150 }
			name = "88-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 66
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 151 }
			name = "39-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 152 }
			name = "79-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 80
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 153 }
			name = "57-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 154 }
			name = "47-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 66
		}
	}
	landunit = {
		id = { type = 30151 id = 35 }
		name = "3-ya Armiya"
		location = 599
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 155 }
			name = "136-ya Strelkovaya Divizyia"
			strength = 60
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 156 }
			name = "40-ya Strelkovaya Divizyia"
			strength = 60
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 157 }
			name = "41-ya Strelkovaya Divizyia"
			strength = 60
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 158 }
			name = "70-ya Strelkovaya Divizyia"
			strength = 60
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 159 }
			name = "81-ya Strelkovaya Divizyia"
			strength = 60
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 160 }
			name = "27-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 60
			experience = 66
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 161 }
			name = "32-ya Motostrelkovaya Divizyia"
			strength = 60
			experience = 50
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 162 }
			name = "13-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 60
			experience = 60
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 163 }
			name = "4-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 60
			experience = 70
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 36 }
		name = "2-ya Gvardyeiskaya Tankovaya Armiya"
		location = 156
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 164 }
			name = "9-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 2
			strength = 90
			experience = 80
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 165 }
			name = "12-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 90
			experience = 80
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 166 }
			name = "9-ya Mekhanizirovannaya Divizyia"
			strength = 90
			experience = 40
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 37 }
		name = "47-ya Armiya"
		location = 157
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 167 }
			name = "85-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 168 }
			name = "125-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 169 }
			name = "129-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 170 }
			name = "42-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 171 }
			name = "337-ya Strelkovaya Divizyia"
			strength = 80
			experience = 30
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 172 }
			name = "180-ya Strelkovaya Divizyia"
			strength = 80
			experience = 30
		}
	}
	landunit = {
		id = { type = 30151 id = 38 }
		name = "3-ya Udarnaya Armiya"
		location = 173
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 173 }
			name = "146-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 174 }
			name = "265-ya Strelkovaya Divizyia"
			strength = 75
			experience = 59
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 175 }
			name = "364-ya Strelkovaya Divizyia"
			strength = 75
			experience = 59
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 176 }
			name = "150-ya Strelkovaya Divizyia"
			strength = 75
			experience = 59
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 177 }
			name = "207-ya Strelkovaya Divizyia"
			strength = 75
			experience = 39
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 178 }
			name = "171-ya Strelkovaya Divizyia"
			strength = 75
			experience = 49
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 179 }
			name = "23-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			experience = 80
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 180 }
			name = "32-ya Strelkovaya Divizyia"
			strength = 75
			experience = 59
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 181 }
			name = "52-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			experience = 70
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 182 }
			name = "8-ya Tankovaya Divizyia"
			strength = 75
			experience = 50
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 39 }
		name = "1-ya Gvardyeiskaya Tankovaya Armiya"
		location = 173
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 183 }
			name = "11-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 2
			experience = 70
			strength = 85
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 184 }
			name = "12-ya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			experience = 50
			strength = 85
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 185 }
			name = "8-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			experience = 60
			strength = 85
		}
	}
	landunit = {
		id = { type = 30151 id = 40 }
		name = "33-ya Armiya"
		location = 589
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 186 }
			name = "95-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 187 }
			name = "16-ya Strelkovaya Divizyia"
			strength = 80
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 188 }
			name = "250-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 189 }
			name = "62-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 190 }
			name = "20-ya Tankovaya Divizyia"
			strength = 80
			experience = 45
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 191 }
			name = "2-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 80
			experience = 70
			extra = light_armor_brigade
			brigade_model = 7
		}
	}
	landunit = {
		id = { type = 30151 id = 41 }
		name = "3-ya Gvardyeiskaya Armiya"
		location = 663
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 192 }
			name = "5-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 85
			experience = 73
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 193 }
			name = "2-ya Motostrelkovaya Divizyia"
			strength = 85
			experience = 40
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 194 }
			name = "16-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 85
			experience = 80
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 42 }
		name = "21-ya Armiya"
		location = 199
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 195 }
			name = "204-ya Strelkovaya Divizyia"
			strength = 80
			experience = 34
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 196 }
			name = "109-ya Strelkovaya Divizyia"
			strength = 80
			experience = 43
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 197 }
			name = "110-ya Strelkovaya Divizyia"
			strength = 80
			experience = 34
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 198 }
			name = "97-ya Strelkovaya Divizyia"
			strength = 80
			experience = 43
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 199 }
			name = "297-ya Strelkovaya Divizyia"
			strength = 80
			experience = 34
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 200 }
			name = "286-ya Strelkovaya Divizyia"
			strength = 80
			experience = 43
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 201 }
			name = "168-ya Strelkovaya Divizyia"
			strength = 80
			experience = 43
		}
	}
	landunit = {
		id = { type = 30151 id = 43 }
		name = "60-ya Armiya"
		location = 1083
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 202 }
			name = "106-ya Strelkovaya Divizyia"
			strength = 90
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 203 }
			name = "15-ya Strelkovaya Divizyia"
			strength = 90
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 204 }
			name = "28-ya Strelkovaya Divizyia"
			strength = 90
			experience = 40
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = bergsjaeger
			model = 11
			id = { type = 30154 id = 205 }
			name = "9-ya Gornostrelkovaya Divizyia"
			strength = 90
			experience = 40
		}
		division = {
			type = bergsjaeger
			model = 11
			id = { type = 30154 id = 206 }
			name = "3-ya Gornostrelkovaya Divizyia"
			strength = 90
			experience = 40
		}
		division = {
			type = bergsjaeger
			model = 11
			id = { type = 30154 id = 207 }
			name = "13-ya Gornostrelkovaya Divizyia"
			strength = 90
			experience = 40
		}
	}
	landunit = {
		id = { type = 30151 id = 44 }
		name = "1-ya Gvardyeiskaya Armiya"
		location = 607
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 208 }
			name = "194-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 209 }
			name = "17-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 210 }
			name = "107-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 211 }
			name = "237-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 212 }
			name = "351-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 213 }
			name = "11-ya Mekhanizirovannaya Divizyia"
			strength = 75
			experience = 50
			extra = light_armor_brigade
			brigade_model = 7
		}
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 214 }
			name = "2-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			strength = 75
			experience = 70
		}
	}
	landunit = {
		id = { type = 30151 id = 45 }
		name = "3-ya Gvardyeiskaya Tankovaya Armiya"
		location = 172
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 215 }
			name = "6-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 2
			experience = 80
			strength = 80
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 216 }
			name = "8-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			experience = 70
			strength = 80
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 217 }
			name = "14-ya Mekhanizirovannaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			experience = 30
			strength = 80
		}
	}
	landunit = {
		id = { type = 30151 id = 46 }
		name = "13-ya Armiya"
		location = 242
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 218 }
			name = "27-ya Strelkovaya Divizyia"
			strength = 85
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 219 }
			name = "104-ya Strelkovaya Divizyia"
			strength = 85
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 220 }
			name = "133-ya Strelkovaya Divizyia"
			strength = 85
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 221 }
			name = "112-ya Strelkovaya Divizyia"
			strength = 85
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 222 }
			name = "24-ya Strelkovaya Divizyia"
			strength = 85
			experience = 45
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 223 }
			name = "101-ya Strelkovaya Divizyia"
			strength = 85
			experience = 45
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 224 }
			name = "9-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			strength = 85
			experience = 75
		}
	}
	landunit = {
		id = { type = 30151 id = 47 }
		name = "18-ya Armiya"
		location = 213
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 225 }
			name = "14-ya Tankovaya Divizyia"
			strength = 80
			experience = 45
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 226 }
			name = "16-ya Mekhanizirovannaya Divizyia"
			strength = 75
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 227 }
			name = "21-ya Strelkovaya Divizyia"
			strength = 90
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 48 }
		name = "5-ya Gvardyeiskaya Armiya"
		location = 172
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 228 }
			name = "121-ya Strelkovaya Divizyia"
			strength = 65
			experience = 30
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 229 }
			name = "287-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 65
			experience = 80
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 230 }
			name = "140-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 65
			experience = 80
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 231 }
			name = "14-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 65
			experience = 80
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 232 }
			name = "20-ya Motostrelkovaya Divizyia"
			strength = 65
			experience = 50
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 233 }
			name = "299-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 234 }
			name = "252-ya Strelkovaya Divizyia"
			strength = 65
			experience = 44
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 235 }
			name = "10-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 65
			experience = 80
			extra = tank_destroyer
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 49 }
		name = "4-ya Gvardyeiskaya Tankovaya Armiya"
		location = 242
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 236 }
			name = "2-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 3
			strength = 90
			experience = 70
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 237 }
			name = "5-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			strength = 90
			experience = 70
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 238 }
			name = "6-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 90
			experience = 80
		}
	}
	landunit = {
		id = { type = 30151 id = 50 }
		name = "52-ya Armiya"
		location = 235
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 239 }
			name = "17-ya Tankovaya Divizyia"
			strength = 75
			experience = 45
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 240 }
			name = "10-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 75
			experience = 60
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 241 }
			name = "213-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 242 }
			name = "48-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 243 }
			name = "73-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 244 }
			name = "178-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 245 }
			name = "31-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 51 }
		name = "40-ya Armiya"
		location = 284
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 246 }
			name = "51-ya Strelkovaya Divizyia"
			strength = 75
			experience = 45
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 247 }
			name = "30-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 75
			experience = 77
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 248 }
			name = "43-ya Strelkovaya Divizyia"
			strength = 75
			experience = 45
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 249 }
			name = "67-ya Strelkovaya Divizyia"
			strength = 75
			experience = 45
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 250 }
			name = "7-ya Tankovaya Divizyia"
			strength = 75
			experience = 44
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 52 }
		name = "12-ya Gvardyeiskaya Armiya"
		location = 171
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 251 }
			name = "23-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 65
			experience = 77
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 252 }
			name = "52-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 253 }
			name = "134-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 254 }
			name = "84-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 53 }
		name = "6-ya Tankovaya Armiya"
		location = 182
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 255 }
			name = "15-ya Mekhanizirovannaya Divizyia"
			strength = 70
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 256 }
			name = "17-ya Mekhanizirovannaya Divizyia"
			strength = 70
			experience = 40
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 257 }
			name = "18-ya Mekhanizirovannaya Divizyia"
			strength = 70
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 258 }
			name = "22-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 259 }
			name = "12-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 260 }
			name = "39-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 261 }
			name = "14-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 80
			experience = 70
			extra = heavy_armor
			brigade_model = 2
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 262 }
			name = "19-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 80
			experience = 80
			extra = tank_destroyer
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 54 }
		name = "27-ya Armiya"
		location = 1223
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 263 }
			name = "33-ya Strelkovaya Divizyia"
			experience = 33
			strength = 70
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 264 }
			name = "35-ya Gvardyeiskaya Strelkovaya Divizyia"
			experience = 77
			strength = 70
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 265 }
			name = "15-ya Gvardyeiskaya Strelkovaya Divizyia"
			experience = 77
			strength = 70
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 266 }
			name = "193-ya Strelkovaya Divizyia"
			experience = 33
			strength = 70
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 267 }
			name = "135-ya Strelkovaya Divizyia"
			experience = 44
			strength = 70
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 268 }
			name = "38-ya Strelkovaya Divizyia"
			experience = 44
			strength = 70
		}
	}
	landunit = {
		id = { type = 30151 id = 55 }
		name = "18-ya Gvardyeiskaya Armiya"
		location = 171
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 269 }
			name = "271-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 270 }
			name = "9-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 271 }
			name = "71-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 272 }
			name = "138-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 273 }
			name = "24-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 85
			experience = 70
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 274 }
			name = "267-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 275 }
			name = "317-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 276 }
			name = "8-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 85
			experience = 70
			extra = engineer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 56 }
		name = "7-ya Gvardyeiskaya Armiya"
		location = 194
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 277 }
			name = "6-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			strength = 90
			experience = 40
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 278 }
			name = "53-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			experience = 80
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 279 }
			name = "409-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			experience = 70
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 280 }
			name = "36-ya Strelkovaya Divizyia"
			strength = 90
			experience = 35
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 281 }
			name = "141-ya Strelkovaya Divizyia"
			strength = 90
			experience = 35
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 282 }
			name = "243-ya Strelkovaya Divizyia"
			strength = 90
			experience = 35
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 283 }
			name = "303-ya Strelkovaya Divizyia"
			strength = 90
			experience = 35
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 284 }
			name = "25-ya Strelkovaya Divizyia"
			strength = 90
			experience = 35
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 285 }
			name = "151-ya Strelkovaya Divizyia"
			strength = 90
			experience = 35
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 286 }
			name = "153-ya Strelkovaya Divizyia"
			strength = 90
			experience = 35
		}
	}
	landunit = {
		id = { type = 30151 id = 57 }
		name = "56-ya Armiya"
		location = 1225
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 287 }
			name = "23-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 288 }
			name = "10-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 72
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 289 }
			name = "99-ya Strelkovaya Divizyia"
			strength = 80
			experience = 33
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 290 }
			name = "175-ya Strelkovaya Divizyia"
			strength = 80
			experience = 33
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 291 }
			name = "1-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			strength = 80
			experience = 70
			extra = tank_destroyer
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 58 }
		name = "46-ya Armiya"
		location = 626
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 292 }
			name = "49-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 293 }
			name = "316-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 294 }
			name = "96-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 295 }
			name = "320-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 296 }
			name = "86-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 297 }
			name = "59-ya Strelkovaya Divizyia"
			strength = 65
			experience = 30
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 298 }
			name = "185-ya Strelkovaya Divizyia"
			strength = 65
			experience = 30
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 299 }
			name = "206-ya Strelkovaya Divizyia"
			strength = 65
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 300 }
			name = "105-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
	}
	landunit = {
		id = { type = 30151 id = 59 }
		name = "4-ya Gvardyeiskaya Armiya"
		location = 193
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 301 }
			name = "5-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			strength = 80
			experience = 75
		}
		division = {
			type = paratrooper
			model = 4
			id = { type = 30154 id = 302 }
			name = "7-ya Gvardyeiskaya Vozdushno-Desantnaya Div."
			strength = 80
			experience = 75
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 303 }
			name = "62-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 304 }
			name = "69-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 305 }
			name = "4-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 306 }
			name = "34-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 307 }
			name = "80-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 77
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 308 }
			name = "152-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 309 }
			name = "93-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 310 }
			name = "223-ya Strelkovaya Divizyia"
			strength = 80
			experience = 44
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 311 }
			name = "40-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			experience = 80
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 60 }
		name = "6-ya Gvardyeiskaya Tankovaya Armiya"
		location = 1222
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 312 }
			name = "5-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 2
			strength = 90
			experience = 70
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 313 }
			name = "9-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			experience = 80
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 314 }
			name = "7-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			experience = 70
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 61 }
		name = "9-ya Gvardyeiskaya Armiya"
		location = 1222
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 315 }
			name = "13-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 75
			experience = 77
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 316 }
			name = "6-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 75
			experience = 77
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 317 }
			name = "6-ya Motostrelkovaya Divizyia"
			strength = 75
			experience = 30
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 318 }
			name = "5-ya Motostrelkovaya Divizyia"
			strength = 75
			experience = 30
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 319 }
			name = "15-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 75
			experience = 70
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 320 }
			name = "22-ya Tankovaya Divizyia"
			strength = 75
			experience = 34
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 321 }
			name = "3-ya Strelkovaya Divizyia"
			strength = 75
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 322 }
			name = "52-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 62 }
		name = "26-ya Armiya"
		location = 311
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 323 }
			name = "13-ya Strelkovaya Divizyia"
			strength = 90
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 324 }
			name = "19-ya Strelkovaya Divizyia"
			strength = 90
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 325 }
			name = "53-ya Strelkovaya Divizyia"
			strength = 90
			extra = engineer
			brigade_model = 4
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 326 }
			name = "69-ya Strelkovaya Divizyia"
			strength = 90
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 327 }
			name = "61-ya Strelkovaya Divizyia"
			strength = 90
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 328 }
			name = "2-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 90
			experience = 78
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 329 }
			name = "17-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 90
			extra = heavy_armor
			brigade_model = 2
			experience = 80
		}
	}
	landunit = {
		id = { type = 30151 id = 63 }
		name = "57-ya Armiya"
		location = 1223
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 330 }
			name = "236-ya Strelkovaya Divizyia"
			strength = 55
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 331 }
			name = "75-ya Strelkovaya Divizyia"
			strength = 55
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 332 }
			name = "119-ya Strelkovaya Divizyia"
			strength = 55
			experience = 40
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 333 }
			name = "68-ya Strelkovaya Divizyia"
			strength = 55
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 334 }
			name = "50-ya Strelkovaya Divizyia"
			strength = 55
			experience = 30
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 335 }
			name = "23-ya Tankovaya Divizyia"
			strength = 55
			experience = 43
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 64 }
		name = "37-ya Armiya"
		location = 321
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 336 }
			name = "333-ya Strelkovaya Divizyia"
			strength = 70
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 337 }
			name = "180-ya Strelkovaya Divizyia"
			strength = 70
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 338 }
			name = "195-ya Strelkovaya Divizyia"
			strength = 70
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 339 }
			name = "244-ya Strelkovaya Divizyia"
			strength = 70
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 340 }
			name = "20-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 70
			experience = 77
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 341 }
			name = "28-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 70
			experience = 77
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 342 }
			name = "61-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 70
			experience = 77
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 343 }
			name = "7-ya Motostrelkovaya Divizyia"
			strength = 70
			experience = 40
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 344 }
			name = "296-ya Strelkovaya Divizyia"
			strength = 70
			experience = 44
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 345 }
			name = "4-ya Motostrelkovaya Divizyia"
			strength = 70
			experience = 30
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 346 }
			name = "11-ya Tankovaya Divizyia"
			strength = 70
			experience = 45
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 347 }
			name = "4-ya Tankovaya Divizyia"
			strength = 70
			experience = 45
			extra = light_armor_brigade
			brigade_model = 7
		}
	}
	landunit = {
		id = { type = 30151 id = 65 }
		name = "11-ya Gvardyeiskaya Armiya"
		location = 182
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 348 }
			name = "1-ya Gvardyeiskaya Tankovaya Divizyia"
			strength = 90
			experience = 80
			extra = armored_car
			brigade_model = 5
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 349 }
			name = "8-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 90
			experience = 70
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 350 }
			name = "11-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 90
			experience = 74
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 351 }
			name = "36-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 90
			experience = 76
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 352 }
			name = "16-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 90
			experience = 66
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 353 }
			name = "65-ya Strelkovaya Divizyia"
			strength = 90
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 354 }
			name = "79-ya Strelkovaya Divizyia"
			strength = 90
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 355 }
			name = "7-ya Strelkovaya Divizyia"
			strength = 90
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 66 }
		name = "59-ya Armiya"
		location = 572
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 356 }
			name = "100-ya Strelkovaya Divizyia"
			strength = 55
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 357 }
			name = "90-ya Strelkovaya Divizyia"
			strength = 55
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 358 }
			name = "78-ya Strelkovaya Divizyia"
			strength = 55
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 359 }
			name = "18-ya Strelkovaya Divizyia"
			strength = 55
			experience = 33
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 360 }
			name = "2-ya Strelkovaya Divizyia"
			strength = 55
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 361 }
			name = "30-ya Strelkovaya Divizyia"
			strength = 55
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 362 }
			name = "47-ya Strelkovaya Divizyia"
			strength = 55
			experience = 3
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 363 }
			name = "3-ya Tankovaya Divizyia"
			strength = 55
			experience = 33
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 67 }
		name = "42-ya Armiya"
		location = 264
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 364 }
			name = "88-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 365 }
			name = "128-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 366 }
			name = "245-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 367 }
			name = "376-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 368 }
			name = "118-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 369 }
			name = "46-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 65
			experience = 63
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 370 }
			name = "45-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 65
			experience = 63
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 371 }
			name = "19-ya Tankovaya Divizyia"
			strength = 65
			experience = 34
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 68 }
		name = "22-ya Armiya"
		location = 641
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 372 }
			name = "319-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 373 }
			name = "163-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 374 }
			name = "28-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 375 }
			name = "21-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 85
			experience = 77
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 376 }
			name = "6-ya Tankovaya Divizyia"
			strength = 85
			experience = 44
			extra = sp_artillery
			brigade_model = 2
		}
	}
	landunit = {
		id = { type = 30151 id = 69 }
		name = "1-ya Udarnaya Armiya"
		location = 1103
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 377 }
			name = "321-ya Strelkovaya Divizyia"
			strength = 75
			experience = 49
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 378 }
			name = "208-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 379 }
			name = "147-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 380 }
			name = "33-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 75
			experience = 70
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 381 }
			name = "26-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 75
			experience = 60
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 382 }
			name = "11-ya Strelkovaya Divizyia"
			strength = 75
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 383 }
			name = "285-ya Strelkovaya Divizyia"
			strength = 75
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 384 }
			name = "282-ya Strelkovaya Divizyia"
			strength = 75
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 385 }
			name = "182-ya Strelkovaya Divizyia"
			strength = 75
			experience = 40
		}
	}
	landunit = {
		id = { type = 30151 id = 70 }
		name = "8-ya Armiya"
		location = 1142
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 386 }
			name = "4-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 387 }
			name = "26-ya Strelkovaya Divizyia"
			strength = 75
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 388 }
			name = "29-ya Strelkovaya Divizyia"
			strength = 75
			experience = 40
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 389 }
			name = "1-ya Tankovaya Divizyia"
			strength = 75
			experience = 35
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 390 }
			name = "37-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 391 }
			name = "66-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 75
			experience = 62
			extra = engineer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 71 }
		name = "67-ya Armiya"
		location = 1080
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 392 }
			name = "13-ya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 70
			experience = 35
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 393 }
			name = "14-ya Motostrelkovaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			strength = 70
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 394 }
			name = "198-ya Strelkovaya Divizyia"
			strength = 70
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 395 }
			name = "103-ya Strelkovaya Divizyia"
			strength = 70
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 396 }
			name = "8-ya Strelkovaya Divizyia"
			strength = 70
			experience = 44
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 397 }
			name = "76-ya Strelkovaya Divizyia"
			strength = 70
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 398 }
			name = "111-ya Strelkovaya Divizyia"
			strength = 70
			experience = 33
		}
	}
	landunit = {
		id = { type = 30151 id = 72 }
		name = "51-ya Armiya"
		location = 1092
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 399 }
			name = "15-ya Tankovaya Divizyia"
			strength = 80
			experience = 45
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 400 }
			name = "3-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 80
			experience = 74
			extra = artillery
			brigade_model = 10
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 401 }
			name = "83-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 402 }
			name = "1-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 403 }
			name = "5-ya Strelkovaya Divizyia"
			strength = 80
			experience = 30
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 404 }
			name = "10-ya Strelkovaya Divizyia"
			strength = 80
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 405 }
			name = "45-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 406 }
			name = "77-ya Strelkovaya Divizyia"
			strength = 80
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 73 }
		name = "54-ya Armiya"
		location = 572
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 407 }
			name = "225-ya Strelkovaya Divizyia"
			strength = 65
			experience = 30
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 408 }
			name = "196-ya Strelkovaya Divizyia"
			strength = 65
			experience = 30
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 409 }
			name = "44-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 410 }
			name = "229-ya Strelkovaya Divizyia"
			strength = 65
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 411 }
			name = "374-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 412 }
			name = "288-ya Strelkovaya Divizyia"
			strength = 65
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 74 }
		name = "4-ya Udarnaya Armiya"
		location = 500
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 413 }
			name = "14-ya Strelkovaya Divizyia"
			strength = 60
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 414 }
			name = "120-ya Strelkovaya Divizyia"
			strength = 60
			experience = 40
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 415 }
			name = "360-ya Strelkovaya Divizyia"
			strength = 60
			experience = 40
			extra = engineer
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 416 }
			name = "332-ya Strelkovaya Divizyia"
			strength = 60
			experience = 40
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 417 }
			name = "24-ya Tankovaya Divizyia"
			strength = 60
			experience = 50
			extra = light_armor_brigade
			brigade_model = 7
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 418 }
			name = "5-ya Tankovaya Divizyia"
			strength = 60
			experience = 50
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 419 }
			name = "18-ya Tankovaya Divizyia"
			strength = 60
			experience = 45
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 420 }
			name = "115-ya Strelkovaya Divizyia"
			strength = 60
			experience = 45
		}
	}
	landunit = {
		id = { type = 30151 id = 75 }
		name = "43-ya Armiya"
		location = 158
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 421 }
			name = "13-ya Gvardyeiskaya Motostrelkovaya Divizyia"
			strength = 75
			experience = 70
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 422 }
			name = "60-ya Strelkovaya Divizyia"
			strength = 75
			experience = 33
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 423 }
			name = "92-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 424 }
			name = "74-ya Strelkovaya Divizyia"
			strength = 75
			experience = 33
			extra = tank_destroyer
			brigade_model = 2
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 425 }
			name = "160-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 426 }
			name = "117-ya Strelkovaya Divizyia"
			strength = 75
			experience = 44
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 427 }
			name = "174-ya Strelkovaya Divizyia"
			strength = 75
			experience = 33
			extra = engineer
			brigade_model = 4
		}
	}
	landunit = {
		id = { type = 30151 id = 76 }
		name = "10-ya Gvardyeiskaya Armiya"
		location = 262
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 428 }
			name = "1-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 85
			experience = 73
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 429 }
			name = "12-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 85
			experience = 72
			extra = anti_air
			brigade_model = 4
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 430 }
			name = "7-ya Gvardyeiskaya Strelkovaya Divizyia"
			strength = 85
			experience = 79
		}
		division = {
			type = infantry
			model = 11
			id = { type = 30154 id = 431 }
			name = "82-ya Strelkovaya Divizyia"
			strength = 85
			experience = 40
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 432 }
			name = "2-ya Tankovaya Divizyia"
			strength = 80
			experience = 34
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 433 }
			name = "13-ya Gvardyeiskaya Tankovaya Divizyia"
			experience = 80
			strength = 90
			extra = sp_artillery
			brigade_model = 2
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 434 }
			name = "1-ya Motostrelkovaya Divizyia"
			strength = 90
			experience = 40
		}
		division = {
			type = motorized
			model = 2
			id = { type = 30154 id = 435 }
			name = "8-ya Motostrelkovaya Divizyia"
			strength = 90
			extra = artillery
			brigade_model = 10
			experience = 40
		}
	}
	landunit = {
		id = { type = 30151 id = 77 }
		name = "5-ya Gvardyeiskaya Tankovaya Armiya"
		location = 248
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 436 }
			name = "3-ya Gvardyeiskaya Tankovaya Divizyia"
			extra = heavy_armor
			brigade_model = 2
			strength = 85
			experience = 70
		}
		division = {
			type = armor
			model = 3
			id = { type = 30154 id = 437 }
			name = "10-ya Tankovaya Divizyia"
			extra = sp_artillery
			brigade_model = 2
			strength = 85
			experience = 50
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 438 }
			name = "4-ya Gvardyeiskaya Mekhanizirovannaya Divizyia"
			extra = tank_destroyer
			brigade_model = 2
			strength = 85
			experience = 60
		}
		division = {
			type = mechanized
			model = 0
			id = { type = 30154 id = 439 }
			name = "13-ya Mekhanizirovannaya Divizyia"
			extra = engineer
			brigade_model = 4
			strength = 85
			experience = 50
		}
	}
	landunit = {
		id = { type = 30151 id = 78 }
		name = "1-y Kurilskiy Garnizon"
		location = 1543
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 440 }
			name = "1-yy Kurilskiy Garnizon"
		}
	}
	landunit = {
		id = { type = 30151 id = 79 }
		name = "2-y Kurilskiy Garnizon"
		location = 1543
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 441 }
			name = "2-y Kurilskiy Garnizon"
		}
	}
	landunit = {
		id = { type = 30151 id = 80 }
		name = "1-y Sakhalinskiy Garnizon"
		location = 1541
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 442 }
			name = "1-y Sakhalinskiy Garnizon"
		}
	}
	landunit = {
		id = { type = 30151 id = 81 }
		name = "2-y Sakhalinskiy Garnizon"
		location = 1542
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 443 }
			name = "2-y Sakhalinskiy Garnizon"
		}
	}
	landunit = {
		id = { type = 30151 id = 87 }
		name = "1-y Gvardyeiskiy korpus Dalnevostochnogo Poberezhya"
		location = 1190
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 466 }
			name = "1-ya Dalnevostochnaya Gvard. Div. Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 88 }
		name = "2-y Gvardyeiskiy korpus Dalnevostochnogo Poberezhya"
		location = 1195
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 467 }
			name = "2-ya Dalnevostochnaya Gvard. Div. Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 89 }
		name = "3-y Gvardyeiskiy korpus Dalnevostochnogo Poberezhya"
		location = 1194
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 468 }
			name = "3-ya Dalnevostochnaya Gvard. Div. Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 90 }
		name = "1-ya Pogranichnaya"
		location = 1167
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 460 }
			name = "1-ya Pogranichnaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 91 }
		name = "2-ya Pogranichnaya"
		location = 504
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 461 }
			name = "2-ya Pogranichnaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 92 }
		name = "3-ya Pogranichnaya"
		location = 1105
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 462 }
			name = "3-ya Pogranichnaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 93 }
		name = "4-ya Pogranichnaya"
		location = 1099
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 463 }
			name = "4-ya Pogranichnaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 94 }
		name = "5-ya Pogranichnaya"
		location = 711
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 464 }
			name = "5-ya Pogranichnaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 95 }
		name = "6-ya Pogranichnaya"
		location = 709
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 465 }
			name = "6-ya Pogranichnaya Divizyia"
		}
	}
	landunit = {
		id = { type = 30151 id = 96 }
		name = "1-ya Obespecheniya"
		location = 169
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 456 }
			name = "1-ya Diviziya Obespecheniya"
		}
	}
	landunit = {
		id = { type = 30151 id = 97 }
		name = "2-ya Obespecheniya"
		location = 173
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 457 }
			name = "2-ya Diviziya Obespecheniya"
		}
	}
	landunit = {
		id = { type = 30151 id = 98 }
		name = "3-ya Obespecheniya"
		location = 195
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 458 }
			name = "3-ya Diviziya Obespecheniya"
		}
	}
	landunit = {
		id = { type = 30151 id = 99 }
		name = "4-ya Obespecheniya"
		location = 163
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 459 }
			name = "4-ya Diviziya Obespecheniya"
		}
	}
	landunit = {
		id = { type = 30151 id = 100 }
		name = "1-ya Beregovaya Okhrana"
		location = 535
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 449 }
			name = "1-ya Divizyia Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 101 }
		name = "2-ya Beregovaya Okhrana"
		location = 264
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 450 }
			name = "2-ya Divizyia Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 102 }
		name = "3-ya Beregovaya Okhrana"
		location = 641
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 451 }
			name = "3-ya Divizyia Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 103 }
		name = "4-ya Beregovaya Okhrana"
		location = 268
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 452 }
			name = "4-ya Divizyia Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 104 }
		name = "5-ya Beregovaya Okhrana"
		location = 184
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 453 }
			name = "5-ya Divizyia Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 105 }
		name = "6-ya Beregovaya Okhrana"
		location = 542
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 454 }
			name = "6-ya Divizyia Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 106 }
		name = "7-ya Beregovaya Okhrana"
		location = 270
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 455 }
			name = "7-ya Divizyia Beregovoy Oborony"
		}
	}
	landunit = {
		id = { type = 30151 id = 107 }
		name = "4-y Gvardyeiskiy korpus Dalnevostochnogo Poberezhya"
		location = 1189
		division = {
			type = garrison
			model = 5
			id = { type = 30154 id = 469 }
			name = "4-ya Dalnevostochnaya Gvard. Div. Beregovoy Oborony"
		}
	} ######################################################
	# ########## Naval OOB 1945 #############################
	# #######################################################
	
	# ~ 50 operative destroyers by 1945
	# ~ 210 operative submarines by 1945

	navalunit = {
		id = { type = 30152 id = 1 }
		name = "Chernomorskiy Flot"
		location = 641
		base = 641
		division = {
			experience = 25
			id = { type = 30155 id = 1 }
			name = "Parishskaya Kommuna"
			type = battleship
			model = 2
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
			experience = 25
			id = { type = 30155 id = 2 }
			name = "Voroshilov"
			type = heavy_cruiser
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 3 }
			name = "Molotov"
			type = heavy_cruiser
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 4 }
			name = "Kaganovich"
			type = heavy_cruiser
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 5 }
			name = "Krasnyi Kavkaz"
			type = heavy_cruiser
			model = 2
		}
		division = {
			experience = 25
			id = { type = 30155 id = 6 }
			name = "Profintern"
			type = light_cruiser
			model = 2
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 1
			brigade_model2 = 2
		}
		division = {
			experience = 25
			id = { type = 30155 id = 7 }
			name = "1 Flotiliya Esmintsev"
			type = destroyer
			model = 6
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 25
			id = { type = 30155 id = 8 }
			name = "2 Flotiliya Esmintsev"
			type = destroyer
			model = 5
			extra1 = naval_fire_controll_s
			brigade_model1 = 1
		}
		division = {
			experience = 25
			id = { type = 30155 id = 9 }
			name = "3 Flotiliya Esmintsev"
			type = destroyer
			model = 5
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 25
			id = { type = 30155 id = 10 }
			name = "4 Flotiliya Esmintsev"
			type = destroyer
			model = 5
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 25
			id = { type = 30155 id = 11 }
			name = "1 Transportnaya Flotiliya"
			type = transport
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 12 }
			name = "2 Transportnaya Flotiliya"
			type = transport
			model = 3
		}
	}
	navalunit = {
		id = { type = 30152 id = 2 }
		name = "Severnaya Voennaya Flotiliya"
		location = 535
		base = 535
		division = {
			experience = 25
			id = { type = 30155 id = 13 }
			name = "Arkhangelsk" # ex-HMS Royal Sovereign
			type = battleship
			model = 3
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
			experience = 25
			id = { type = 30155 id = 14 }
			name = "Murmansk"
			type = light_cruiser
			model = 3
			extra1 = naval_fire_controll_s
			extra2 = naval_anti_air_s
			brigade_model1 = 1
			brigade_model2 = 2
		}
		division = {
			experience = 25
			id = { type = 30155 id = 15 }
			name = "5 Flotiliya Esmintsev"
			type = destroyer
			model = 4
			extra1 = naval_fire_controll_s
			brigade_model1 = 1
		}
	}
	navalunit = {
		id = { type = 30152 id = 3 }
		name = "Tikhookeanskiy Flot"
		location = 1191
		base = 1191 # Vladivostok
		division = {
			experience = 25
			id = { type = 30155 id = 16 }
			name = "6 Flotiliya Esmintsev"
			type = destroyer
			model = 5
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
		division = {
			experience = 0
			id = { type = 30155 id = 17 }
			name = "7 Flotiliya Esmintsev"
			type = destroyer
			model = 2
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 0
			id = { type = 30155 id = 18 }
			name = "8 Flotiliya Esmintsev"
			type = destroyer
			model = 2
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
	}
	navalunit = {
		id = { type = 30152 id = 4 }
		name = "Krasnoznamenny Baltijsky Flot"
		location = 553
		base = 553 # Leningrad
		division = {
			experience = 25
			id = { type = 30155 id = 19 }
			name = "Oktyabrskaya Revolutsia"
			type = battleship
			model = 2
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
			experience = 25
			id = { type = 30155 id = 20 }
			name = "Kirov"
			type = heavy_cruiser
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 21 }
			name = "Maxim Gorkiy"
			type = heavy_cruiser
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 22 }
			name = "Kalinin"
			type = heavy_cruiser
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 23 }
			name = "9 Flotiliya Esmintsev"
			type = destroyer
			model = 5
			extra1 = naval_asw
			brigade_model1 = 2
		}
		division = {
			experience = 0
			id = { type = 30155 id = 24 }
			name = "10 Flotiliya Esmintsev"
			type = destroyer
			model = 2
			extra1 = naval_anti_air_s
			brigade_model1 = 2
		}
	}
	navalunit = {
		id = { type = 30152 id = 5 }
		name = "1. Flote Podlodok"
		location = 535
		base = 535 # ##murmansk
		division = {
			experience = 25
			id = { type = 30155 id = 25 }
			name = "1. Flotiliya Podlodok"
			type = submarine
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 26 }
			name = "2. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 27 }
			name = "3. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 28 }
			name = "4. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 29 }
			name = "5. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 30 }
			name = "6. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
	}
	navalunit = {
		id = { type = 30152 id = 6 }
		name = "2. Flote Podlodok"
		location = 553
		base = 553 # Leningrad
		division = {
			experience = 25
			id = { type = 30155 id = 31 }
			name = "7. Flotiliya Podlodok"
			type = submarine
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 32 }
			name = "8. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 33 }
			name = "9. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
	}
	navalunit = {
		id = { type = 30152 id = 7 }
		name = "3. Flote Podlodok"
		location = 553
		base = 553 # Leningrad
		division = {
			experience = 25
			id = { type = 30155 id = 34 }
			name = "10. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 35 }
			name = "11. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 36 }
			name = "12. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 37 }
			name = "13. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 38 }
			name = "14. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
	}
	navalunit = {
		id = { type = 30152 id = 8 }
		name = "4. Flote Podlodok"
		location = 641
		base = 641 # Sevastopol
		division = {
			experience = 25
			id = { type = 30155 id = 39 }
			name = "15. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 40 }
			name = "16. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 41 }
			name = "17. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 42 }
			name = "18. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30155 id = 43 }
			name = "19. Flotiliya Podlodok"
			type = submarine
			model = 2
		}
	}
	navalunit = {
		id = { type = 30152 id = 9 }
		name = "5. Flote Podlodok"
		location = 1191
		base = 1191 # Vladivostok
		division = {
			experience = 25
			id = { type = 30155 id = 44 }
			name = "20. Flotiliya Podlodok"
			type = submarine
			model = 6
		}
		division = {
			experience = 25
			id = { type = 30155 id = 45 }
			name = "21. Flotiliya Podlodok"
			type = submarine
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 46 }
			name = "22. Flotiliya Podlodok"
			type = submarine
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 47 }
			name = "23. Flotiliya Podlodok"
			type = submarine
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 48 }
			name = "24. Flotiliya Podlodok"
			type = submarine
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30155 id = 49 }
			name = "25. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 50 }
			name = "26. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 51 }
			name = "27. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 52 }
			name = "28. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
	}
	navalunit = {
		id = { type = 30152 id = 10 }
		name = "6. Flote Podlodok"
		location = 1191
		base = 1191 # Vladivostok
		division = {
			experience = 25
			id = { type = 30155 id = 53 }
			name = "29. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 54 }
			name = "30. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 55 }
			name = "31. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 56 }
			name = "32. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 57 }
			name = "33. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30155 id = 58 }
			name = "34. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
	}
	navalunit = {
		id = { type = 30152 id = 11 }
		name = "7. Flote Podlodok"
		location = 553
		base = 553 # Leningrad
		division = {
			experience = 0
			id = { type = 30155 id = 59 }
			name = "35. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 0
			id = { type = 30155 id = 60 }
			name = "36. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 0
			id = { type = 30155 id = 61 }
			name = "37. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 0
			id = { type = 30155 id = 62 }
			name = "38. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 0
			id = { type = 30155 id = 63 }
			name = "39. Flotiliya Podlodok"
			type = submarine
			model = 4
		}
		division = {
			experience = 0
			id = { type = 30155 id = 64 }
			name = "40. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
	}
	navalunit = {
		id = { type = 30152 id = 12 }
		name = "8. Flote Podlodok"
		location = 641
		base = 641 # Sevastopol
		division = {
			experience = 0
			id = { type = 30155 id = 65 }
			name = "41. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
		division = {
			experience = 0
			id = { type = 30155 id = 66 }
			name = "42. Flotiliya Podlodok"
			type = submarine
			model = 3
		}
	}
	airunit = {
		location = 641
		base = 641
		id = { type = 30153 id = 1 }
		name = "4-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 1 }
			name = "202.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 2 }
			name = "219.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
	}
	airunit = {
		location = 195
		base = 195
		id = { type = 30153 id = 2 }
		name = "5-y Shturmovoy Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 3 }
			name = "4.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 4 }
			name = "264.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 5 }
			name = "2.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	airunit = {
		location = 163
		base = 163
		id = { type = 30153 id = 3 }
		name = "8-y Shturmovoy Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 6 }
			name = "224.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 7 }
			name = "226.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 8 }
			name = "299.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	airunit = {
		location = 240
		base = 240
		id = { type = 30153 id = 4 }
		name = "5-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 9 }
			name = "5.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 10 }
			name = "256.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 153
		base = 153
		id = { type = 30153 id = 5 }
		name = "10-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 11 }
			name = "10.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 12 }
			name = "235.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 184
		base = 184
		id = { type = 30153 id = 6 }
		name = "2-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 13 }
			name = "208.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 14 }
			name = "326.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
	}
	airunit = {
		location = 517
		base = 517
		id = { type = 30153 id = 7 }
		name = "2-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 15 }
			name = "1.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 16 }
			name = "8.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
	}
	airunit = {
		location = 626
		base = 626
		id = { type = 30153 id = 8 }
		name = "1-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 17 }
			name = "8.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 18 }
			name = "9.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 19 }
			name = "12.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 20 }
			name = "312.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
	}
	airunit = {
		location = 626
		base = 626
		id = { type = 30153 id = 9 }
		name = "2-y Shturmovoy Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 21 }
			name = "7.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 22 }
			name = "231.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	airunit = {
		location = 626
		base = 626
		id = { type = 30153 id = 10 }
		name = "4-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 23 }
			name = "294.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 24 }
			name = "302.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 663
		base = 663
		id = { type = 30153 id = 11 }
		name = "7-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 25 }
			name = "9.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 26 }
			name = "205.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 27 }
			name = "304.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 617
		base = 617
		id = { type = 30153 id = 12 }
		name = "1-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 28 }
			name = "5.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 29 }
			name = "6.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 30 }
			name = "11.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 617
		base = 617
		id = { type = 30153 id = 13 }
		name = "9-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 31 }
			name = "305.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 32 }
			name = "306.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 33 }
			name = "295.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 617
		base = 617
		id = { type = 30153 id = 14 }
		name = "17-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 34 }
			name = "236.LBABR"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 25
			id = { type = 30156 id = 35 }
			name = "238.LBABR"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 25
			id = { type = 30156 id = 36 }
			name = "262.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 37 }
			name = "218.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
	}
	airunit = {
		location = 589
		base = 589
		id = { type = 30153 id = 15 }
		name = "11-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 38 }
			name = "4., 148. & 293.LBABR"
			strength = 100
			type = multi_role
			model = 7
		}
		division = {
			experience = 25
			id = { type = 30156 id = 39 }
			name = "658. & 724.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 40 }
			name = "284.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 41 }
			name = "313.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
	}
	airunit = {
		location = 589
		base = 589
		id = { type = 30153 id = 16 }
		name = "14-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 42 }
			name = "281.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 43 }
			name = "269.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 44 }
			name = "225.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	airunit = {
		location = 163
		base = 163
		id = { type = 30153 id = 17 }
		name = "13-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 45 }
			name = "276.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 46 }
			name = "277.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 47 }
			name = "275.LBABR"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 25
			id = { type = 30156 id = 48 }
			name = "246.LBABR"
			strength = 100
			type = multi_role
			model = 6
		}
	}
	airunit = {
		location = 1191
		base = 1191
		id = { type = 30153 id = 18 }
		name = "12-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 49 }
			name = "30.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 50 }
			name = "247.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 51 }
			name = "248.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 52 }
			name = "246.LBABR"
			strength = 100
			type = multi_role
			model = 6
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 19 }
		name = "11-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 53 }
			name = "5.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 54 }
			name = "190.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 20 }
		name = "1-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 55 }
			name = "4.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 56 }
			name = "5.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
	}
	airunit = {
		location = 553
		base = 553
		id = { type = 30153 id = 21 }
		name = "1-i Morskoi Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 57 }
			name = "1.TBABR"
			strength = 100
			type = naval_bomber
			model = 4
		}
		division = {
			experience = 25
			id = { type = 30156 id = 58 }
			name = "2.TBABR"
			strength = 100
			type = naval_bomber
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 59 }
			name = "3.TBABR"
			strength = 100
			type = naval_bomber
			model = 3
		}
	}
	airunit = {
		location = 195
		base = 195
		id = { type = 30153 id = 22 }
		name = "3-i Napadenie Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 60 }
			name = "307.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 61 }
			name = "308.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	airunit = {
		location = 195
		base = 195
		id = { type = 30153 id = 23 }
		name = "3-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 62 }
			name = "113.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 63 }
			name = "311.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 64 }
			name = "303.LBABR"
			strength = 100
			type = multi_role
			model = 6
		}
		division = {
			experience = 25
			id = { type = 30156 id = 65 }
			name = "213.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 24 }
		name = "1-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 66 }
			name = "3.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 67 }
			name = "4.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 25 }
		name = "2-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 68 }
			name = "240.IABR"
			strength = 100
			type = interceptor
			model = 10
		}
		division = {
			experience = 25
			id = { type = 30156 id = 69 }
			name = "303.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 663
		base = 663
		id = { type = 30153 id = 26 }
		name = "3-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 70 }
			name = "265.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 71 }
			name = "278.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 72 }
			name = "240.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 153
		base = 153
		id = { type = 30153 id = 27 }
		name = "1-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 73 }
			name = "6.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 74 }
			name = "1.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 75 }
			name = "334.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 76 }
			name = "311.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	airunit = {
		location = 1191
		base = 1191
		id = { type = 30153 id = 28 }
		name = "9-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 77 }
			name = "229.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 78 }
			name = "325.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 79 }
			name = "233.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 80 }
			name = "309.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 597
		base = 597
		id = { type = 30153 id = 29 }
		name = "6-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 81 }
			name = "3.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 82 }
			name = "336.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 83 }
			name = "242.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 84 }
			name = "230.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	airunit = {
		location = 597
		base = 597
		id = { type = 30153 id = 30 }
		name = "3-i Bombardirovochnyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 85 }
			name = "241.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 86 }
			name = "301.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
	}
	airunit = {
		location = 572
		base = 572
		id = { type = 30153 id = 31 }
		name = "6-i Smeshannyi Aviatsionnyi Korpus"
		division = {
			experience = 25
			id = { type = 30156 id = 87 }
			name = "132.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 88 }
			name = "221.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
		division = {
			experience = 25
			id = { type = 30156 id = 89 }
			name = "283.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	
	airunit = {
		location = 262
		base = 262
		id = { type = 30153 id = 32 }
		name = "6-y Aviatsionnyi Korpus PVO"
		division = {
			experience = 25
			id = { type = 30156 id = 90 }
			name = "279.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
	}
	airunit = {
		location = 262
		base = 262
		id = { type = 30153 id = 33 }
		name = "16-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 91 }
			name = "1.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 92 }
			name = "234.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 93 }
			name = "286.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 94 }
			name = "271.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
	}
	airunit = {
		location = 1191
		base = 1191
		id = { type = 30153 id = 34 }
		name = "10-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 95 }
			name = "115.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 96 }
			name = "107.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 97 }
			name = "100.IABR"
			strength = 100
			type = interceptor
			model = 9
		}
		division = {
			experience = 25
			id = { type = 30156 id = 98 }
			name = "95.TBABR"
			strength = 100
			type = tactical_bomber
			model = 8
		}
	}
	airunit = {
		location = 153
		base = 153
		id = { type = 30153 id = 35 }
		name = "3-ya Vozdushnaya Armiya"
		division = {
			experience = 25
			id = { type = 30156 id = 99 }
			name = "211.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		division = {
			experience = 25
			id = { type = 30156 id = 100 }
			name = "335.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
		
		division = {
			experience = 25
			id = { type = 30156 id = 101 }
			name = "314.TBABR"
			strength = 100
			type = strategic_bomber
			model = 5
		}
		division = {
			experience = 25
			id = { type = 30156 id = 102 }
			name = "316.LSHABR"
			strength = 100
			type = cas
			model = 3
		}
	}
	division_development = {
		name = "Chapayev"
		type = heavy_cruiser
		model = 6
		cost = 2.0
		id = { type = 30155 id = 67 }
		date = { year = 1947 month = may day = 16 }
	}
	division_development = {
		name = "Zheleznyakov"
		type = heavy_cruiser
		model = 6
		cost = 2.0
		id = { type = 30155 id = 68 }
		date = { year = 1947 month = april day = 19 }
	}
	division_development = {
		name = "Kuybyshev"
		type = heavy_cruiser
		model = 6
		cost = 2.0
		id = { type = 30155 id = 69 }
		date = { year = 1947 month = april day = 20 }
	}
	division_development = {
		name = "Chkalov"
		type = heavy_cruiser
		model = 6
		cost = 2.0
		id = { type = 30155 id = 70 }
		date = { year = 1947 month = november day = 1 }
	}
	division_development = {
		name = "Frunze"
		type = heavy_cruiser
		model = 6
		cost = 2.0
		id = { type = 30155 id = 71 }
		date = { year = 1947 month = december day = 15 }
	}
	division_development = {
		name = "11 Flotiliya Esmintsev"
		type = destroyer
		model = 6
		cost = 1
		id = { type = 30155 id = 72 }
		date = { year = 1947 month = february day = 0 }
	}
	division_development = {
		name = "12 Flotiliya Esmintsev"
		type = destroyer
		model = 6
		cost = 1
		id = { type = 30155 id = 73 }
		date = { year = 1947 month = april day = 0 }
	}
	division_development = {
		name = "43. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 74 }
		date = { year = 1945 month = december day = 0 }
	}
	division_development = {
		name = "44. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 75 }
		date = { year = 1945 month = december day = 0 }
	}
	division_development = {
		name = "45. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 76 }
		date = { year = 1946 month = february day = 0 }
	}
	division_development = {
		name = "46. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 77 }
		date = { year = 1946 month = february day = 0 }
	}
	division_development = {
		name = "47. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 78 }
		date = { year = 1946 month = april day = 0 }
	}
	division_development = {
		name = "48. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 79 }
		date = { year = 1946 month = april day = 0 }
	}
	division_development = {
		name = "49. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 80 }
		date = { year = 1946 month = june day = 0 }
	}
	division_development = {
		name = "50. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 81 }
		date = { year = 1946 month = june day = 0 }
	}
	division_development = {
		name = "51. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 82 }
		date = { year = 1946 month = august day = 0 }
	}
	division_development = {
		name = "52. Flotiliya Podlodok"
		type = submarine
		model = 6
		cost = 1.5
		id = { type = 30155 id = 83 }
		date = { year = 1946 month = august day = 0 }
	}
	division_development = {
		type = naval_bomber
		model = 3
		date = { day = 24 month = october year = 1945 }
		cost = 5
		days = 180 # days_of_first  = 180
		total_progress = 0 # series         = 1
		done = 0
		progress = 0
		id = { type = 30156 id = 103 }
		name = "4.TBABR"
	}
	division_development = {
		type = naval_bomber
		model = 3
		date = { day = 24 month = october year = 1945 }
		cost = 5
		days = 180 # days_of_first  = 180
		total_progress = 0 # series         = 1
		done = 0
		progress = 0
		id = { type = 30156 id = 104 }
		name = "5.TBABR"
	}
	division_development = {
		type = naval_bomber
		model = 3
		date = { day = 14 month = november year = 1945 }
		cost = 5
		days = 180 # days_of_first  = 180
		total_progress = 0 # series         = 1
		done = 0
		progress = 0
		id = { type = 30156 id = 105 }
		name = "6.TBABR"
	}
	division_development = {
		type = naval_bomber
		model = 3
		date = { day = 14 month = november year = 1945 }
		cost = 5
		days = 180 # days_of_first  = 180
		total_progress = 0 # series         = 1
		done = 0
		progress = 0
		id = { type = 30156 id = 106 }
		name = "7.TBABR"
	}
	division_development = {
		type = naval_bomber
		model = 4
		date = { day = 4 month = december year = 1945 }
		cost = 5
		days = 180 # days_of_first  = 180
		total_progress = 0 # series         = 1
		done = 0
		progress = 0
		id = { type = 30156 id = 107 }
		name = "8.TBABR"
	}
	division_development = {
		type = naval_bomber
		model = 4
		date = { day = 4 month = december year = 1945 }
		cost = 5
		days = 180 # days_of_first  = 180
		total_progress = 0 # series         = 1
		done = 0
		progress = 0
		id = { type = 30156 id = 108 }
		name = "9.TBABR"
	}
	division_development = {
		type = naval_bomber
		model = 4
		date = { day = 0 month = january year = 1946 }
		cost = 5
		days = 180 # days_of_first  = 180
		total_progress = 0 # series         = 1
		done = 0
		progress = 0
		id = { type = 30156 id = 109 }
		name = "10.TBABR"
	}
}
