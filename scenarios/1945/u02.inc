# #############################
# British Raj
# #############################

country = {
	tag = U02
	
	energy = 4000
	metal = 2000
	rare_materials = 1000
	oil = 500
	supplies = 1000
	money = 100
	
	transports = 50
	
	manpower = 435
	
	capital = 1459
	
	control = ENG
	puppet = ENG
	
	ai_settings = {
		flags = { 
			MOB1 = 1
			MOB2 = 1
			MOB3 = 1
		}
	}
	
	diplomacy = {
		relation = { tag = ENG value = 100 access = yes }
	}
	
	nationalprovinces = { 1278 1439 1445 1442 1450 1411 1406 1407 1408 1409 1420 1419 1415 1410 1417 1416 1412 1418 1443 1421 1458 1455 1414 1440 1441 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1444 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1460 1461 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1449 1536 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1459 1540 1533 1534 1537 1538 1539 1529 1513 1413 1612 }
	ownedprovinces = { 1278 1439 1445 1442 1450 1411 1406 1407 1408 1409 1420 1419 1415 1410 1417 1416 1412 1418 1443 1421 1458 1455 1414 1440 1441 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1444 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1460 1461 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1449 1536 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1459 1540 1533 1534 1537 1538 1539 1529 1413 1612 }
	controlledprovinces = { 1278 1439 1445 1442 1450 1411 1406 1407 1408 1409 1420 1419 1415 1410 1417 1416 1412 1418 1443 1421 1458 1455 1414 1440 1441 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1444 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1460 1461 1462 1530 1531 1463 1527 1525 1532 1517 1512 1487 1493 1494 1501 1502 1503 1495 1504 1448 1449 1536 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1459 1540 1533 1534 1537 1538 1539 1529 1413 1612 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2040 2050 2070 2100 2150 2170 2220 2290 2300 2310 2320 2330 2400 2410 2420 2450 2460 2470 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 2970 3010 3020 3030 3040 3050 3060 3070 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3480 3490 3510 3520 3530 3540 3610 3620 3630 3640 3650 3660 3720 3730 3736 3740 3750 3760 3810 3820 3830 3900 3910 4010 4020 4030 4040 4050 4060 4070 4080 4120 4130 4140 4150 4170 4190 4220 4230 4250 4260 4280 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4900 4910 4920 4930 4940 5010 5020 5030 5050 5060 5070 5080 5090 5100 5130 5140 5150 5160 5180 5190 5200 5210 5310 5316 5320 5326 5327 5330 5350 5360 5370 5410 5416 5417 5420 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5930 5940 5950 5960 5970 5980 5990 6030 6110 6120 6130 6500 6510 6530 6540 6560 6580 6610 6620 6630 6640 6650 6660 6670 6680 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 8900 8910 8920 8930 8940 8950 8960 9010 9020 9030 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 22910 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81650 81700 81710 81850 81860 82300 82310 82500 199100 199130  }
	inventions = { 3000027 3000028 3000031  }
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 7
		political_left = 3
		freedom = 4
		free_market = 7
		professional_army = 3
		defense_lobby = 3
		interventionism = 1
	}
	
	headofstate = { type = 9 id = 825012 }
	headofgovernment = { type = 9 id = 825102 }
	foreignminister = { type = 9 id = 825003 }
	armamentminister = { type = 9 id = 825004 }
	ministerofsecurity = { type = 9 id = 825005 }
	ministerofintelligence = { type = 9 id = 825006 }
	chiefofstaff = { type = 9 id = 825007 }
	chiefofarmy = { type = 9 id = 825008 }
	chiefofnavy = { type = 9 id = 825009 }
	chiefofair = { type = 9 id = 825010 }
	
 ################################################################
 # Indian Army OOB - by omega20
 # ref: http://www.britishmilitaryhistory.co.uk/documents.php?nid=12&start=0
 # ref: http://en.wikipedia.org/wiki/List_of_Indian_divisions_in_World_War_II
 # ref: http://www.ordersofbattle.com/Units/UnitOrderofBattle?UniX=7161&OobDate=31%2F08%2F1945
 # ref: http://www.britishmilitaryhistory.co.uk/webeasycms/hold/uploads/bmh_document_pdf/British-Corps-Formations-1939-1945.pdf
 ################################################################

	landunit = {
		name = "North Western Army"
		location = 1534
		id = { type = 12700 id = 1001 }
		division = {
			id = { type = 12700 id = 1002 }
			name = "North Western Army"
			type = hq
			model = 4
		}
		division = {
			id = { type = 12700 id = 1003 }
			name = "7th Indian Division"
			type = infantry
			model = 11
			experience = 45
		}
		division = {
			id = { type = 12700 id = 1004 }
			name = "155th Indian Infantry Brigade"
			type = infantry
			model = 11
			strength = 40
		}
	}
	landunit = {
		name = "Baluchistan District"
		location = 1529
		id = { type = 12700 id = 1005 }
		division = {
			id = { type = 12700 id = 1006 }
			name = "Zhob Brigade"
			type = militia
			model = 5
			strength = 80
		}
	}
	landunit = {
		name = "Kohat District"
		location = 1537
		id = { type = 12700 id = 1007 }
		division = {
			id = { type = 12700 id = 1008 }
			name = "Kohat Brigade"
			type = militia
			model = 5
			strength = 80
		}
	}
	landunit = {
		name = "Peshawar District"
		location = 1537
		id = { type = 12700 id = 1009 }
		division = {
			id = { type = 12700 id = 1010 }
			name = "Landikotal Brigade"
			type = militia
			model = 5
			strength = 90
		}
		division = {
			id = { type = 12700 id = 1011 }
			name = "Peshawar Brigade"
			type = militia
			model = 5
			strength = 90
			extra = artillery
			brigade_model = 10
		}
		division = {
			id = { type = 12700 id = 1012 }
			name = "Nowshera Brigade"
			type = militia
			model = 5
			strength = 90
		}
	}
	landunit = {
		name = "Waziristan District"
		location = 1534
		id = { type = 12700 id = 1013 }
		division = {
			id = { type = 12700 id = 1014 }
			name = "Razmak Brigade"
			type = militia
			model = 5
			strength = 90
		}
		division = {
			id = { type = 12700 id = 1015 }
			name = "Bannu Brigade"
			type = militia
			model = 5
			strength = 90
		}
		division = {
			id = { type = 12700 id = 1016 }
			name = "Wana Brigade"
			type = militia
			model = 5
			strength = 90
		}
		division = {
			id = { type = 12700 id = 1017 }
			name = "Gardai Brigade"
			type = militia
			model = 5
			strength = 90
		}
	}
	landunit = {
		name = "Southern Army"
		location = 1516
		id = { type = 12700 id = 1018 }
		division = {
			id = { type = 12700 id = 1019 }
			name = "Southern Army"
			type = hq
			model = 4
		}
		division = {
			id = { type = 12700 id = 1020 }
			name = "150th Indian Infantry Brigade"
			type = infantry
			model = 11
			strength = 40
		}
	}
	landunit = {
		name = "Central Command"
		location = 1459
		id = { type = 12700 id = 1021 }
		division = {
			id = { type = 12700 id = 1022 }
			name = "HQ Central Command"
			type = hq
			model = 4
		}
		division = {
			id = { type = 12700 id = 1023 }
			name = "1st Indian Division"
			type = infantry
			model = 11
			strength = 100
			extra = artillery
			brigade_model = 10
		}
		division = {
			id = { type = 12700 id = 1024 }
			name = "8th Indian Division"
			type = infantry
			model = 11
			experience = 70
		}
		division = {
			id = { type = 12700 id = 1025 }
			name = "10th Indian Division"
			type = infantry
			model = 11
			experience = 70
			extra = engineer
			brigade_model = 4
		}
		division = {
			id = { type = 12700 id = 1026 }
			name = "44th Indian Airborne Division"
			type = infantry
			model = 11
			experience = 45
		}
		division = {
			id = { type = 12700 id = 1027 }
			name = "Sind Brigade"
			type = militia
			model = 5
			strength = 80
		}
	}
	landunit = {
		name = "Lucknow District"
		location = 1459
		id = { type = 12700 id = 1028 }
		division = {
			id = { type = 12700 id = 1029 }
			name = "16th Indian Infantry Brigade"
			type = infantry
			model = 11
			strength = 40
		}
	}
	landunit = {
		name = "IV Corps"
		location = 1415
		id = { type = 12700 id = 1030 }
		division = {
			id = { type = 12700 id = 1031 }
			name = "19th Indian Division"
			type = infantry
			model = 11
			experience = 45
		}
		division = {
			id = { type = 12700 id = 1032 }
			name = "255th Indian Tank Brigade"
			type = armor
			model = 2
			experience = 45
		}
	}
	landunit = {
		name = "Burma Corps"
		location = 1409
		id = { type = 12700 id = 1033 }
		division = {
			id = { type = 12700 id = 1034 }
			name = "17th Indian Division"
			type = infantry
			model = 11
			experience = 55
		}
	}
	landunit = {
		name = "XV Indian Corps"
		location = 1432
		id = { type = 12700 id = 1035 }
		division = {
			id = { type = 12700 id = 1036 }
			name = "5th Indian Division"
			type = infantry
			model = 11
			experience = 55
		}
		division = {
			id = { type = 12700 id = 1037 }
			name = "20th Indian Division"
			type = infantry
			model = 11
			experience = 55
		}
		division = {
			id = { type = 12700 id = 1038 }
			name = "23rd Indian Division"
			type = infantry
			model = 11
			experience = 45
		}
	}
	landunit = {
		name = "XXXIV Indian Corps"
		location = 1438
		id = { type = 12700 id = 1039 }
		division = {
			id = { type = 12700 id = 1040 }
			name = "20th Indian Division"
			type = infantry
			model = 11
			experience = 55
		}
		division = {
			id = { type = 12700 id = 1041 }
			name = "25th Indian Division"
			type = infantry
			model = 11
			experience = 45
		}
	}
	landunit = {
		name = "I Indian Corps"
		location = 379
		id = { type = 12700 id = 1042 }
		division = {
			id = { type = 12700 id = 1043 }
			name = "4th Indian Division"
			type = infantry
			model = 11
			experience = 70
			extra = tank_destroyer
			brigade_model = 2
		}
	}
	landunit = {
		name = "Jammu & Kashmir State Forces"
		location = 1540
		id = { type = 12700 id = 1044 }
		division = {
			id = { type = 12700 id = 1045 }
			name = "Jammu Brigade"
			type = militia
			model = 5
			strength = 100
		}
		division = {
			id = { type = 12700 id = 1046 }
			name = "Kashmir Brigade"
			type = militia
			model = 5
			strength = 100
		}
	}
	landunit = {
		name = "Gwalior State Forces"
		location = 1523
		id = { type = 12700 id = 1047 }
		division = {
			id = { type = 12700 id = 1048 }
			name = "Gwalior Cavalry Brigade"
			type = cavalry
			model = 11
			strength = 40
		}
		division = {
			id = { type = 12700 id = 1049 }
			name = "Gwalior Infantry Brigade"
			type = militia
			model = 5
			strength = 100
		}
	}
	landunit = {
		name = "Hyderabad State Forces"
		location = 1487
		id = { type = 12700 id = 1050 }
		division = {
			id = { type = 12700 id = 1051 }
			name = "Hyderabad State Forces"
			type = militia
			model = 5
			strength = 100
		}
	}
	landunit = {
		name = "Bikaner State Forces"
		location = 1527
		id = { type = 12700 id = 1052 }
		division = {
			id = { type = 12700 id = 1053 }
			name = "Bikaner State Forces"
			type = militia
			model = 5
			strength = 80
		}
	}
	landunit = {
		name = "Patiala State Forces"
		location = 1531
		id = { type = 12700 id = 1054 }
		division = {
			id = { type = 12700 id = 1055 }
			name = "Patiala State Forces"
			type = militia
			model = 5
			strength = 80
		}
	}
	landunit = {
		name = "Mysore State Forces"
		location = 1507
		id = { type = 12700 id = 1056 }
		division = {
			id = { type = 12700 id = 1057 }
			name = "Mysore State Forces"
			type = militia
			model = 5
			strength = 70
		}
	}
	
	navalunit = { id = { type = 12700 id = 288 } name = "Royal Indian Navy" location = 1517 base = 1517 division = { id = { type = 12700 id = 284 } name = "HMIS 2nd Transport Flotilla" type = transport } division = { id = { type = 12700 id = 286 } name = "HMIS 4th Transport Flotilla" type = transport } division = { id = { type = 12700 id = 2318 } name = "2nd DD. Division" type = destroyer } division = { id = { type = 12700 id = 2319 } name = "3rd DD. Division" type = destroyer } }
	navalunit = { id = { type = 12700 id = 2332 } name = "1st Squadron" location = 1517 base = 1517 division = { id = { type = 12700 id = 289 } name = "HMIS 1st Transport Flotilla" type = transport } division = { id = { type = 12700 id = 285 } name = "HMIS 3rd Transport Flotilla" type = transport } division = { id = { type = 12700 id = 287 } name = "HMIS Destroyer Flotilla" type = destroyer model = 6 } division = { id = { type = 12700 id = 2317 } name = "1st DD. Division" type = destroyer } }
	airunit = {
		location = 1517
		base = 1517
		id = { type = 12700 id = 80 }
		name = "Royal Indian Air Force"
		division = {
			id = { type = 12700 id = 81 }
			name = "Indian Group"
			type = tactical_bomber
			model = 8
			strength = 100
		}
	}
}
