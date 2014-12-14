# #############################
# Nationalist China
# #############################


country = {
	tag = CHI
	
	energy = 5000
	metal = 5000
	rare_materials = 500
	oil = 500
	supplies = 500
	
	manpower = 1050
	
	transports = 50
	
	capital = 1299
	
	dissent = 20
	belligerence = 20
	
	policy = {
		date = { year = 0 month = january day = 0 }
		democratic = 3
		political_left = 4
		free_market = 9
		freedom = 4
		professional_army = 7
		defense_lobby = 7
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
	
	SpyInfo = { country = "SOV" NumberOfSpies = 2 }
	SpyInfo = { country = "CHC" NumberOfSpies = 2 }
	SpyInfo = { country = "CHI" NumberOfSpies = 2 }
	
	nationalprovinces = { 1120 1121 1122 1123 1124 1125 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 1238 1239 1240 1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1255 1256 1257 1258 1259 1260 1261 1262 1263 1264 1265 1266 1267 1268 1269 1270 1271 1272 1273 1274 1275 1276 1277 1278 1279 1280 1281 1282 1283 1284 1285 1286 1287 1288 1289 1290 1291 1292 1293 1294 1295 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1361 1362 1363 1364 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1384 1385 1386 1387 1388 1389 1390 1414 1458 1455 1119 }
	ownedprovinces = { 1241 1243 1245 1247 1250 1257 1258 1267 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1322 1324 1325 1326 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1361 1362 1363 1364 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1291 1384 1385 1386 1387 1388 1389 1390 1256 1261 1262 1263 1264 1265 1266 1268 1270 1271 1272 1283 1284 1285 1329 1244 1330 1328 1274 1275 1277 1279 1281 1282 }
	controlledprovinces = { 1241 1243 1245 1247 1250 1257 1258 1267 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1322 1324 1325 1326 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360 1361 1362 1363 1364 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383 1291 1384 1385 1386 1387 1388 1389 1390 1256 1261 1262 1263 1264 1265 1266 1268 1270 1271 1272 1283 1284 1285 1329 1244 1330 1328 1274 1275 1277 1279 1281 1282 }
	
	techapps = { 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1310 1320 1330 1340 1350 1360 1370 1380 1390 1396 1400 1560 1570 1580 1590 1600 1670 1680 1830 1840 1850 1860 1870 1910 1920 1930 1940 1950 1960 1970 1980 1990 2010 2020 2030 2150 2290 2300 2310 2400 2450 2510 2520 2620 2630 2640 2646 2650 2800 2810 2820 2860 2870 2880 2900 2910 2920 2930 2940 3010 3020 3030 3040 3050 3060 3110 3120 3130 3140 3150 3160 3210 3220 3230 3240 3250 3260 3310 3320 3330 3340 3410 3420 3430 3440 3450 3456 3460 3470 3510 3520 3530 3610 3620 3630 3640 3650 3720 3730 3736 3740 3750 3760 3810 3820 3900 3910 4010 4020 4030 4040 4050 4120 4130 4140 4170 4190 4220 4230 4250 4260 4290 4300 4310 4320 4330 4340 4400 4500 4510 4520 4530 4540 4550 4600 4610 4620 4630 4700 4710 4740 4750 4760 4770 4780 4790 4800 4810 4820 4850 4900 4910 4920 4930 5010 5020 5030 5050 5060 5070 5080 5090 5190 5200 5310 5316 5320 5326 5327 5350 5360 5410 5416 5417 5560 5600 5610 5620 5630 5640 5700 5710 5800 5810 5820 5830 5920 5940 5960 5980 6300 6310 6320 6330 6340 6350 6500 6510 6530 6550 6570 6590 6600 6610 6620 6650 6670 6680 6690 6700 6710 6900 6910 7550 7600 7610 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8500 8510 8520 8550 8560 8570 8600 9010 9020 9030 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 12100 12110 12120 12130 13060 13070 13080 14000 14010 14020 14030 21180 21190 21200 27460 27470 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 54010 54020 54030 81300 81310 81320 81330 81340 81350 81650 81850 82300 82310 82500 199100 199130  }
	inventions = { 3000027 3000028  }
	
	diplomacy = {
		relation = { tag = CHC value = -150 }
	}
	
	dormant_ministers = { 55003 55029 55049 55018 55021 55001 55012 55026 55014 55020 55028 55030 55045 55046 55047 55059 55060 55061 55062 55070 55071 55078 55084 55091 55096 }
		
	dormant_leaders        = {  55012 55303 55338 55370 55377 55003 55029 55018 55020  }
	dormant_teams          = {  55005  }
   
	headofstate = { type = 9 id = 55011 }
	headofgovernment = { type = 9 id = 55017 }
	foreignminister = { type = 9 id = 55025 }
	armamentminister = { type = 9 id = 55041 }
	ministerofsecurity = { type = 9 id = 55058 }
	ministerofintelligence = { type = 9 id = 55066 }
	chiefofstaff = { type = 9 id = 55076 }
	chiefofarmy = { type = 9 id = 55082 }
	chiefofnavy = { type = 9 id = 55089 }
	chiefofair = { type = 9 id = 55094 }
	
	landunit = {
		location = 1258
		name = "2. Lujun"
		id = { type = 11616 id = 1 }
		division = {
			experience = 30
			id = { type = 11616 id = 2 }
			name = "30. Jun"
			type = infantry
			model = 11
			organisation = 3
		}
		division = {
			experience = 30
			id = { type = 11616 id = 3 }
			name = "42. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 81
		}
		division = {
			experience = 30
			id = { type = 11616 id = 4 }
			name = "58. Jun"
			type = infantry
			model = 11
			organisation = 3
		}
		division = {
			experience = 30
			id = { type = 11616 id = 6 }
			name = "40. Jun"
			type = militia
			model = 5
			organisation = 3
			strength = 82
		}
		division = {
			experience = 30
			id = { type = 11616 id = 7 }
			name = "76. Jun"
			type = militia
			model = 5
			organisation = 3
			strength = 81
		}
		division = {
			experience = 30
			id = { type = 11616 id = 8 }
			name = "12. Jun"
			type = militia
			model = 5
			organisation = 3
		}
	}
	landunit = {
		location = 1369
		name = "4. Lujun"
		id = { type = 11616 id = 12 }
		division = {
			experience = 15
			id = { type = 11616 id = 13 }
			name = "38. Jun"
			type = infantry
			model = 11
		}
		division = {
			experience = 15
			id = { type = 11616 id = 14 }
			name = "47. Jun"
			type = infantry
			model = 11
			strength = 65
		}
		division = {
			experience = 15
			id = { type = 11616 id = 15 }
			name = "96. Jun"
			type = infantry
			model = 11
			strength = 86
		}
		division = {
			experience = 15
			id = { type = 11616 id = 17 }
			name = "3. Jun"
			type = infantry
			model = 11
			strength = 76
		}
		division = {
			experience = 15
			id = { type = 11616 id = 18 }
			name = "15. Jun"
			type = militia
			model = 5
		}
		division = {
			experience = 15
			id = { type = 11616 id = 19 }
			name = "17. Jun"
			type = militia
			model = 5
			strength = 81
		}
	}
	landunit = {
		location = 1356
		name = "6. Lujun"
		id = { type = 11616 id = 20 }
		division = {
			experience = 30
			id = { type = 11616 id = 21 }
			name = "19. Jun"
			type = infantry
			model = 11
			organisation = 3
		}
		division = {
			experience = 30
			id = { type = 11616 id = 22 }
			name = "61. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 76
		}
		division = {
			experience = 30
			id = { type = 11616 id = 23 }
			name = "1 Qui-Jun"
			type = cavalry
			model = 11
			organisation = 3
			strength = 80
		}
		division = {
			experience = 30
			id = { type = 11616 id = 103 }
			name = "51. Jun"
			type = militia
			model = 5
			organisation = 3
		}
	}
	landunit = {
		location = 1362
		name = "7. Lujun"
		id = { type = 11616 id = 24 }
		division = {
			experience = 15
			id = { type = 11616 id = 25 }
			name = "Xin 1. Jun"
			type = infantry
			model = 11
			strength = 55
		}
		division = {
			experience = 15
			id = { type = 11616 id = 26 }
			name = "22. Jun"
			type = infantry
			model = 11
		}
		division = {
			experience = 15
			id = { type = 11616 id = 79 }
			name = "74. Jun"
			type = infantry
			model = 11
			strength = 75
		}
	}
	landunit = {
		location = 1322
		name = "15. Lujun"
		id = { type = 11616 id = 110 }
		division = {
			experience = 15
			id = { type = 11616 id = 27 }
			name = "35. Jun"
			type = militia
			model = 5
			strength = 83
		}
		division = {
			experience = 15
			id = { type = 11616 id = 28 }
			name = "Manchuria Advanced Corps"
			type = infantry
			model = 11
			strength = 65
		}
		division = {
			experience = 15
			id = { type = 11616 id = 81 }
			name = "73. Jun"
			type = militia
			model = 5
			strength = 75
		}
	}
	landunit = {
		location = 1324
		name = "10. Lujun"
		id = { type = 11616 id = 33 }
		division = {
			experience = 15
			id = { type = 11616 id = 34 }
			name = "28. Jun"
			type = infantry
			model = 11
			strength = 81
		}
		division = {
			experience = 15
			id = { type = 11616 id = 35 }
			name = "91. Jun"
			type = infantry
			model = 11
			strength = 70
		}
		division = {
			experience = 15
			id = { type = 11616 id = 36 }
			name = "4. New Corps"
			type = infantry
			model = 11
			strength = 50
		}
		division = {
			experience = 15
			id = { type = 11616 id = 30 }
			name = "14. Jun"
			type = infantry
			model = 11
			strength = 55
		}
		division = {
			experience = 15
			id = { type = 11616 id = 31 }
			name = "93. Jun"
			type = militia
			model = 5
			strength = 94
		}
		division = {
			experience = 15
			id = { type = 11616 id = 32 }
			name = "98. Jun"
			type = militia
			model = 5
		}
	}
	landunit = {
		location = 1357
		name = "23. Lujun"
		id = { type = 11616 id = 37 }
		division = {
			experience = 30
			id = { type = 11616 id = 38 }
			name = "21. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 82
		}
		division = {
			experience = 30
			id = { type = 11616 id = 39 }
			name = "50. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 76
		}
		division = {
			experience = 30
			id = { type = 11616 id = 40 }
			name = "100. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 81
		}
		division = {
			experience = 30
			id = { type = 11616 id = 42 }
			name = "25. Jun"
			type = militia
			model = 5
			organisation = 3
			strength = 76
		}
		division = {
			experience = 30
			id = { type = 11616 id = 43 }
			name = "29. Jun"
			type = militia
			model = 5
			organisation = 3
		}
		division = {
			experience = 30
			id = { type = 11616 id = 44 }
			name = "Xin 28. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 55
		}
		division = {
			experience = 30
			id = { type = 11616 id = 113 }
			name = "Xin 2. Jun"
			type = motorized
			model = 2
			strength = 33
			organisation = 3
		}
	}
	landunit = {
		location = 1322
		name = "9. Lujun"
		id = { type = 11616 id = 45 }
		division = {
			experience = 15
			id = { type = 11616 id = 46 }
			name = "4. Jun"
			type = infantry
			model = 11
			strength = 50
		}
		division = {
			experience = 15
			id = { type = 11616 id = 47 }
			name = "65. Jun"
			type = infantry
			model = 11
			strength = 49
		}
		division = {
			experience = 15
			id = { type = 11616 id = 48 }
			name = "83. Jun"
			type = infantry
			model = 11
			strength = 70
		}
		division = {
			experience = 15
			id = { type = 11616 id = 50 }
			name = "62. Jun"
			type = infantry
			model = 11
			strength = 94
		}
		division = {
			experience = 15
			id = { type = 11616 id = 51 }
			name = "63. Jun"
			type = militia
			model = 5
			strength = 86
		}
		division = {
			experience = 15
			id = { type = 11616 id = 52 }
			name = "66. Jun"
			type = militia
			model = 5
			strength = 82
		}
	}
	landunit = {
		location = 1247 # Yinchuan 		containing the communist
		name = "11. Lujun"
		id = { type = 11616 id = 56 }
		division = {
			experience = 15
			id = { type = 11616 id = 57 }
			name = "84. Jun"
			type = infantry
			model = 11
			strength = 82
		}
		division = {
			experience = 15
			id = { type = 11616 id = 58 }
			name = "39. Jun"
			type = infantry
			model = 11
			strength = 90
		}
		division = {
			experience = 15
			id = { type = 11616 id = 59 }
			name = "7. Jun"
			type = militia
			model = 5
			strength = 95
		}
	}
	landunit = {
		location = 1338 # Nanning	4. War Area, Kwangtung-Kwangsi
		name = "22. Lujun"
		id = { type = 11616 id = 60 }
		division = {
			experience = 15
			id = { type = 11616 id = 61 }
			name = "44. Jun"
			type = infantry
			model = 11
			strength = 76
		}
		division = {
			experience = 15
			id = { type = 11616 id = 62 }
			name = "48. Jun"
			type = infantry
			model = 11
		}
		division = {
			experience = 15
			id = { type = 11616 id = 63 }
			name = "45. Jun"
			type = infantry
			model = 11
			strength = 65
		}
		division = {
			experience = 15
			id = { type = 11616 id = 54 }
			name = "46. Jun"
			type = infantry
			model = 11
		}
		division = {
			experience = 15
			id = { type = 11616 id = 55 }
			name = "64. Jun"
			type = militia
			model = 5
			strength = 81
		}
		division = {
			experience = 15
			id = { type = 11616 id = 10 }
			name = "9. Jun"
			type = militia
			model = 5
		}
	}
	landunit = {
		location = 1319
		name = "33. Lujun"
		id = { type = 11616 id = 64 }
		division = {
			experience = 15
			id = { type = 11616 id = 65 }
			name = "55. Jun"
			type = infantry
			model = 11
			strength = 76
		}
		division = {
			experience = 15
			id = { type = 11616 id = 11 }
			name = "1. Jun (Temporary)"
			type = infantry
			model = 11
			strength = 84
		}
		division = {
			experience = 15
			id = { type = 11616 id = 66 }
			name = "59. Jun"
			type = infantry
			model = 11
			strength = 75
		}
		division = {
			experience = 15
			id = { type = 11616 id = 67 }
			name = "77. Jun"
			type = militia
			model = 5
			strength = 78
		}
	}
	landunit = {
		location = 1299 # Mojiang
		name = "29. Lujun"
		id = { type = 11616 id = 68 }
		division = {
			experience = 15
			id = { type = 11616 id = 69 }
			name = "Xin 2. Jun"
			type = infantry
			model = 11
			strength = 70
		}
		division = {
			experience = 15
			id = { type = 11616 id = 77 }
			name = "83. Jun"
			type = infantry
			model = 11
			strength = 86
		}
		division = {
			experience = 15
			id = { type = 11616 id = 70 }
			name = "80. Jun"
			type = militia
			model = 5
		}
		division = {
			experience = 15
			id = { type = 11616 id = 71 }
			name = "82. Jun"
			type = militia
			model = 5
		}
	}
	landunit = {
		location = 1331
		name = "Qibing Lujun"
		id = { type = 11616 id = 72 }
		division = {
			experience = 30
			id = { type = 11616 id = 73 }
			name = "2. Qibing Jun"
			type = cavalry
			model = 11
			organisation = 3
			strength = 80
		}
		division = {
			experience = 30
			id = { type = 11616 id = 74 }
			name = "5 Qibing Jun"
			type = cavalry
			model = 11
			organisation = 3
			strength = 80
		}
		division = {
			experience = 30
			id = { type = 11616 id = 75 }
			name = "6 Qibing Jun"
			type = cavalry
			model = 11
			organisation = 3
			strength = 80
		}
		division = {
			experience = 30
			id = { type = 11616 id = 80 }
			name = "8. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 65
		}
		division = {
			experience = 30
			id = { type = 11616 id = 104 }
			name = "57. Jun"
			type = militia
			model = 5
			organisation = 3
			strength = 76
		}
		division = {
			experience = 30
			id = { type = 11616 id = 105 }
			name = "89. Jun"
			type = militia
			model = 5
			organisation = 3
			strength = 85
		}
	}
	landunit = {
		location = 1241 # Baoshan	Hunan province 1706;Changsha
		name = "1. Lujun"
		id = { type = 11616 id = 82 }
		division = {
			experience = 15
			id = { type = 11616 id = 83 }
			name = "58. Jun"
			type = infantry
			model = 11
			strength = 81
		}
		division = {
			experience = 15
			id = { type = 11616 id = 118 }
			name = "81. Jun"
			type = infantry
			model = 11
		}
		division = {
			experience = 15
			id = { type = 11616 id = 84 }
			name = "3. New Corps"
			type = infantry
			model = 11
			strength = 60
		}
		division = {
			experience = 15
			id = { type = 11616 id = 85 }
			name = "60. Jun"
			type = militia
			model = 5
			strength = 82
		}
	}
	landunit = {
		location = 1241
		name = "19. Lujun"
		id = { type = 11616 id = 86 }
		division = {
			experience = 30
			id = { type = 11616 id = 87 }
			name = "79. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 75
		}
		division = {
			experience = 30
			id = { type = 11616 id = 88 }
			name = "49. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 60
		}
		division = {
			experience = 30
			id = { type = 11616 id = 89 }
			name = "70. Jun"
			type = infantry
			model = 11
			organisation = 3
			strength = 57
		}
		division = {
			experience = 30
			id = { type = 11616 id = 91 }
			name = "53. Jun"
			type = militia
			model = 5
			organisation = 3
			strength = 49
		}
		division = {
			experience = 30
			id = { type = 11616 id = 92 }
			name = "54. Jun"
			type = militia
			model = 5
			organisation = 3
		}
		division = {
			experience = 30
			id = { type = 11616 id = 93 }
			name = "87. Jun"
			type = militia
			model = 5
			organisation = 3
			strength = 73
		}
	}
	landunit = {
		location = 1332
		name = "27. Lujun"
		id = { type = 11616 id = 94 }
		division = {
			experience = 15
			id = { type = 11616 id = 95 }
			name = "78. Jun"
			type = infantry
			model = 11
			strength = 65
		}
		division = {
			experience = 15
			id = { type = 11616 id = 96 }
			name = "20. Jun"
			type = militia
			model = 5
			strength = 73
		}
		division = {
			experience = 15
			id = { type = 11616 id = 97 }
			name = "72. Jun"
			type = militia
			model = 5
			strength = 81
		}
		division = {
			experience = 15
			id = { type = 11616 id = 99 }
			name = "16. Jun"
			type = infantry
			model = 11
			strength = 70
		}
		division = {
			experience = 15
			id = { type = 11616 id = 100 }
			name = "27. Jun"
			type = militia
			model = 5
			strength = 73
		}
		division = {
			experience = 15
			id = { type = 11616 id = 101 }
			name = "90. Jun"
			type = militia
			model = 5
			strength = 73
		}
	}
	landunit = {
		location = 1247
		name = "31. Lujun"
		id = { type = 11616 id = 106 }
		division = {
			experience = 15
			id = { type = 11616 id = 107 }
			name = "Xin 5. Jun"
			type = infantry
			model = 11
			strength = 55
		}
		division = {
			experience = 15
			id = { type = 11616 id = 108 }
			name = "69. Jun"
			type = infantry
			model = 11
		}
		division = {
			experience = 15
			id = { type = 11616 id = 109 }
			name = "99. Jun"
			type = militia
			model = 5
		}
	}
	landunit = {
		location = 1336 # Urumqi
		name = "Xinjiang Jun"
		id = { type = 11616 id = 129 }
		division = {
			experience = 15
			id = { type = 11616 id = 119 }
			name = "1. Bubing Shi"
			type = militia
			model = 5
			strength = 82
		}
		division = {
			experience = 15
			id = { type = 11616 id = 120 }
			name = "2. Bubing Shi"
			type = militia
			model = 5
			strength = 84
		}
		division = {
			experience = 15
			id = { type = 11616 id = 121 }
			name = "3. Bubing Shi"
			type = militia
			model = 5
			strength = 83
		}
		division = {
			experience = 15
			id = { type = 11616 id = 122 }
			name = "4. Bubing Shi"
			type = militia
			model = 5
			strength = 65
		}
	}
	airunit = {
		location = 1297 # Urumqi
		base = 1297
		name = "Xinjiang Kongjun"
		id = { type = 11616 id = 127 }
		division = {
			experience = 15
			id = { type = 11616 id = 128 }
			name = "Zhandouji Zhongdui"
			type = interceptor
			strength = 20
			model = 10
		}
	}
	airunit = {
		location = 1247 # Baoshan
		base = 1247
		name = "The Flying Tigers" # leader = 	#Chennault
		id = { type = 11616 id = 111 }
		division = {
			experience = 15
			id = { type = 11616 id = 112 }
			name = "2. Zhandouji"
			type = interceptor
			model = 10
		}
	}
	airunit = {
		location = 1297 # Shaoyang
		base = 1297
		name = "Zhongguo Kongjun"
		id = { type = 11616 id = 114 }
		division = {
			experience = 15
			id = { type = 11616 id = 115 }
			name = "1. Zhandouji"
			type = interceptor
			model = 10
		}
		division = {
			experience = 15
			id = { type = 11616 id = 116 }
			name = "1. Hongzhaji"
			type = tactical_bomber
			strength = 50
			model = 8
		}
		division = {
			experience = 15
			id = { type = 11616 id = 117 }
			name = "1. Kongyunji"
			type = transport_plane
			strength = 30
			model = 3
		}
	}
	
	# ## Yunnan reinforcements
	landunit = {
		location = 1387 # Changsha
		name = "1. Juntuan"
		id = { type = 22001 id = 1 }
		division = {
			id = { type = 22001 id = 2 }
			name = "Xin 3. Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22001 id = 3 }
			name = "58. Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22001 id = 4 }
			name = "60. Jun"
			type = militia
			model = 5
		}
	}
	landunit = {
		location = 1390 # Kunming
		name = "Yunnan Jingbei"
		id = { type = 22001 id = 5 }
		division = {
			id = { type = 22001 id = 6 }
			name = "Yunnan Daiji Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22001 id = 7 }
			name = "Yunnan Baoantui"
			type = militia
			model = 5
		}
	}
	landunit = {
		location = 1390 # Wutunghliao (Ya'an)
		name = "Xikang Jingbei"
		id = { type = 22001 id = 8 }
		division = {
			id = { type = 22001 id = 9 }
			name = "24. Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22001 id = 10 }
			name = "Xikang Baoantui"
			type = militia
			model = 5
		}
	}
	
	# ## Xibei Sai Ma reinforcements
	landunit = {
		location = 1266 # Anxi (Dunhuang)
		name = "5. Qibing Jun"
		id = { type = 22003 id = 1 }
		division = {
			id = { type = 22003 id = 2 }
			name = "5. Qibing Shi"
			type = cavalry
			model = 11
		}
	}
	landunit = {
		location = 1272 # Jinchang
		name = "17. Juntuan"
		id = { type = 22003 id = 3 }
		division = {
			id = { type = 22003 id = 4 }
			name = "1. Ningxia Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22003 id = 5 }
			name = "2. Ningxia Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22003 id = 6 }
			name = "3. Ningxia Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22003 id = 7 }
			name = "11. Jun"
			type = cavalry
			model = 11
		}
		division = {
			id = { type = 22003 id = 8 }
			name = "81. Jun"
			type = militia
			model = 5
		}
	}
	landunit = {
		location = 1284 # Xining
		name = "Qinghai Jun"
		id = { type = 22003 id = 9 }
		division = {
			id = { type = 22003 id = 10 }
			name = "82. Jun"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22003 id = 11 }
			name = "Qinghai Baoantui"
			type = militia
			model = 5
		}
		division = {
			id = { type = 22003 id = 12 }
			name = "Qinghai Qibing"
			type = cavalry
			model = 11
		}
	}
}
