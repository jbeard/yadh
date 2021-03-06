##############################
# Country definition for CHI #
##############################

 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHI 
	ai = "chi_1940.ai"
	ai_settings	= { flags = { RES = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes } }
	capital                = 1299 # Chongqing 
	# Resource Reserves 
	energy                 = 2000
	metal                  = 2000
	rare_materials         = 1000
	oil                    = 1000 
	supplies               = 1000 
	money                  = 20 
	manpower               = 7000 
    
   
   diplomacy = 
   {  relation = {  tag = CHC value = 100  }
     relation = {  tag = ENG value = 100  }
     relation = {  tag = JAP value = -200  } 
     relation = {  tag = MAN value = -200  }
     relation = {  tag = MEN value = -200  } 
     relation = {  tag = SIK value = -125  }
    } 
   SpyInfo                = {  country = "CHI" NumberOfSpies = 5  } 
   # Fujian   
   nationalprovinces      = {   
 #Nationalist China at Start 
 1257 1258 1261 1262 1267 1291 1292 1293 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360      
  
 #Yunnan          
 1384 1385 1386 1387 1388 1389 1390
  
 #Guanxi Clique  
  510 1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  
  
 #Shanxi       
  1241 1242 1243 1244 1245 1246 1247 1248 1249 1250 1251 1252 1253 1254 1327 1328 1329 1330 1331 1332   
  
 #Manchoukou 
 1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1220 1235 1236 1237 2750   
  
 #Xibei san ma            
 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285   
  
 #Tibet       
 1286 1287 1288 1289 1290 1294 1295 
  
 #Sinkiang        
 1273 1274 1275 1277 1279 1280 1281 1282 
  
 #India        
 1276 1278  
  
 #Communist China      
 1255 1256 1259 1260 
  
 #Japan In China     
 1219 1238 1239 1240 
  
 #European Possessions     
  1371 1372  
   
 #Taiwan     
  1361 1362 1363 1364   
  
 #Mongolia 
 1120 1121 1122 1123 1124 1125 
  
                             } 
	ownedprovinces         = {    
 #Nationalist China at start 
 1333 1261 1303 1339 1334 1336 1340 1341 1319 1322 1324 1325 1326 1316 1317 1344 1342 1337 1338 1345 1346 1347 1348 1357 1358 1359 1360 1354 1353 1318 1355 1309 1311 1312 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1308 1356 1349 1335 1314 1315 1267 1320 1299 1343 1300 1301 1350 1351 1352        
 1327 1328 1329 1330 1331 1332 1321 1323 1241 1247 1242 1243 1244 1365 1367 1368 1369 1370 1373 1374 1375 1377 1251 1252 1248 1249 1250 1257 1258 1268 1256 1271 1264 1263 1262 1272 1265 1266 1283 1284 1285 1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 1378 1376 1253 1380 1381 1382 1383 1379 
 1254
                             } 
   # Fujian   
	controlledprovinces    = {   
 #Nationalist China at start 
 1261 1303 1341 1319 1324 1325 1326 1316 1347 1357 1359 1354 1355 1309 1311 1312 1310 1304 1302 1296 1297 1298 1305 1306 1313 1307 1308 1356 1349 1314 1315 1267 1320 1299 1300 1301 1351 1368 1373 1374 1377 1257 1258 1268 1256 1271 1264 1263 1262 1272 1265 1266 1283 1284 1285 1389 1390 1384 1385 
 1387 1386 1388 1291 1292 1293 1378 1376 1380 1381 1382 1383 1379 1375 1352 1317 1360
                             } 
	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
	1119 #Tannu Tuva
	1414 #Kachin 
	}							 

techapps = { 
	
	# Manufacturing
	5810 5820 5050 5830
	# Construction Engineering
	5800 5080

	# Synthetic Oil
	5190

	# Computers
	5310 54010 54030 5320

	# Crypto - Up to 1923
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 1240
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	# Engineers
	1830 1840 1850
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990

	# Armoured Car  
	2860 2870 2880
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940

	# Tank
	7600

	# Anti-Air
	2800

	# Medicine
	5600 5610 5620

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Manpower Focus
	6570 6300 6310

	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120 3130 3140
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810 3820
	#Early Torpedoes
	3720 3730
	#Early Battleship
	3410 3420
	

	# Naval Doctrines
	8010 8020 8050 8060 8070 8080

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber
	4700 
	# Air Transport
	4290

	# Seaplane
	4740 4750 4760 4770

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470

	# TAC Doctrines
	9090
	
	# FTR Doctrines
	9010 9190 9200 9210 9220
	} 

blueprints = {

	# Infantry - From UK/USA
	1110

	# Engineers
	1860

	# Motorized - From UK/USA
	1396

	# Cavalry
	1380

	# Industry
	5060

	# Oil
	5200

	# Computers
	
	# Crypto
	5350 5360

	# Agriculture
	5700
	
	# Medicine
	
	# Supply
	199130

	# Tank 
	7610 2620 2010
	
	# Armored Car
	2020

	# Anti-air
	2450 21180

	#Mobility Focus
	6210
	
	#Firepower Focus
	6010 6020

	#Multi-role Fighter
	4040

	#Tactical Bomber
	4140

	#Strategic Bomber
	4830

	#Naval Bomber
	4710

	#Close Air Support
	4400
	
	# Light Cruiser
	3150
	
	# Destroyer
	3020

	# Torpedo
	3736 3740

	# FTR doctrine

	# TAC doctrine
	9100
}

inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 9 
     freedom           = 4 
     professional_army = 8 
     defense_lobby     = 10 
     interventionism   = 8 
    } 
	
   headofstate            = {  type = 9 id = 55001  } 
   headofgovernment       = {  type = 9 id = 55002  } 
   foreignminister        = {  type = 9 id = 55022  } 
   armamentminister       = {  type = 9 id = 55033  } 
   ministerofsecurity     = {  type = 9 id = 55051  } 
   ministerofintelligence = {  type = 9 id = 55064  } 
   chiefofstaff           = {  type = 9 id = 55073  } 
   chiefofarmy            = {  type = 9 id = 55081  } 
   chiefofnavy            = {  type = 9 id = 55086  } 
   chiefofair             = {  type = 9 id = 55092  } 
   dormant_leaders        = {  55012 55303 55338 55370 55377  }
   dormant_teams          = {  55005  }
   landunit = 
   {  location = 1257
     name     = "2. Juntuan" 
     id       = {  type = 22000 id = 1  } 
     Division = 
     { id         = {  type = 22000 id = 2  } 
       name       = "30. Jun" 
       type       = bergsjaeger 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 3  } 
       name       = "42. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 4  } 
       name       = "68. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 5  } 
       name       = "40. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1324
     name     = "3. Juntuan" 
     id       = {  type = 22000 id = 6  } 
     Division = 
     { id         = {  type = 22000 id = 7  } 
       name       = "3. Juntuan" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     dig_in   = 20.000 
    }  
   landunit = 
   {  location = 1319
     name     = "Bei Henan Tifang Juntuan" 
     id       = {  type = 22000 id = 8  } 
     Division = 
     { id         = {  type = 22000 id = 9  } 
       name       = "97. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 10  } 
       name       = "Xin 5. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 11  } 
       name       = "76. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1258
     name     = "14. Juntuan" 
     id       = {  type = 22000 id = 12  }
     Division = 
     { id         = {  type = 22000 id = 13  } 
       name       = "14. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     Division = 
     { id         = {  type = 22000 id = 14  } 
       name       = "93. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 15  } 
       name       = "98. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1341
     name     = "4. Juntuan" 
     id       = {  type = 22000 id = 16  }
     Division = 
     { id         = {  type = 22000 id = 17  } 
       name       = "38. Jun" 
       type       = bergsjaeger 
	   strength  = 60
       model     = 8
      } 
     Division = 
     { id         = {  type = 22000 id = 18  } 
       name       = "47. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 19  } 
       name       = "96. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1359
     name     = "5. Juntuan" 
     id       = {  type = 22000 id = 20  }
     Division = 
     { id         = {  type = 22000 id = 21  } 
       name       = "3. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1356
     name     = "5. Juntuan" 
     id       = {  type = 22000 id = 22  }
     Division = 
     { id         = {  type = 22000 id = 23  } 
       name       = "15. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     Division = 
     { id         = {  type = 22000 id = 24  } 
       name       = "17. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1271
     name     = "Shanxi-Shaanxi-Suiyuan Bianqu" 
     id       = {  type = 22000 id = 25  }
     Division = 
     { id         = {  type = 22000 id = 26  } 
       name       = "Xin 1. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     Division = 
     { id         = {  type = 22000 id = 27  } 
       name       = "22. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1347
     name     = "10. Juntuan" 
     id       = {  type = 22000 id = 28  }
     Division = 
     { id         = {  type = 22000 id = 29  } 
       name       = "28. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     Division = 
     { id         = {  type = 22000 id = 30  } 
       name       = "91. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1354
     name     = "23. Juntuan" 
     id       = {  type = 22000 id = 31  }
     Division = 
     { id         = {  type = 22000 id = 32  } 
       name       = "21. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      } 
     Division = 
     { id         = {  type = 22000 id = 33  } 
       name       = "50. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1360
     name     = "25. Juntuan" 
     id       = {  type = 22000 id = 34  }
     Division = 
     { id         = {  type = 22000 id = 35  } 
       name       = "100. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     Division = 
     { id         = {  type = 22000 id = 36  } 
       name       = "Xin 28. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1351
     name     = "32. Juntuan" 
     id       = {  type = 22000 id = 37  }
     Division = 
     { id         = {  type = 22000 id = 38  } 
       name       = "25. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     Division = 
     { id         = {  type = 22000 id = 39  } 
       name       = "29. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 40  } 
       name       = "67. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1377
     name     = "9. Juntuan" 
     id       = {  type = 22000 id = 41  }
     Division = 
     { id         = {  type = 22000 id = 42  } 
       name       = "4. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 43  } 
       name       = "49. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1373
     name     = "9. Juntuan" 
     id       = {  type = 22000 id = 44  }
     Division = 
     { id         = {  type = 22000 id = 45  } 
       name       = "65. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1383
     name     = "12. Juntuan" 
     id       = {  type = 22000 id = 46  }
     Division = 
     { id         = {  type = 22000 id = 47  } 
       name       = "66. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1368
     name     = "12. Juntuan" 
     id       = {  type = 22000 id = 48  }
     Division = 
     { id         = {  type = 22000 id = 49  } 
       name       = "62. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1375
     name     = "12. Juntuan" 
     id       = {  type = 22000 id = 50  }
     Division = 
     { id         = {  type = 22000 id = 51  } 
       name       = "63. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1325
     name     = "11. Juntuan" 
     id       = {  type = 22000 id = 52  }
     Division = 
     { id         = {  type = 22000 id = 53  } 
       name       = "84. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 54  } 
       name       = "39. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1320
     name     = "11. Juntuan" 
     id       = {  type = 22000 id = 55  }
     Division = 
     { id         = {  type = 22000 id = 56  } 
       name       = "92. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1326
     name     = "33. Juntuan" 
     id       = {  type = 22000 id = 57  }
     Division = 
     { id         = {  type = 22000 id = 58  } 
       name       = "55. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 59  } 
       name       = "59. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1317
     name     = "33. Juntuan" 
     id       = {  type = 22000 id = 60  }
     Division = 
     { id         = {  type = 22000 id = 61  } 
       name       = "26. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 62  } 
       name       = "77. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1351
     name     = "22. Juntuan" 
     id       = {  type = 22000 id = 63  }
     Division = 
     { id         = {  type = 22000 id = 64  } 
       name       = "41. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 65  } 
       name       = "45. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1313
     name     = "29. Juntuan" 
     id       = {  type = 22000 id = 66  }
     Division = 
     { id         = {  type = 22000 id = 67  } 
       name       = "44. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 68  } 
       name       = "67. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1261
     name     = "8. Zhanqu Budui" 
     id       = {  type = 22000 id = 69  }
     Division = 
     { id         = {  type = 22000 id = 70  } 
       name       = "8. Zhanqu Budui" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1352
     name     = "19. Juntuan" 
     id       = {  type = 22000 id = 71  }
     Division = 
     { id         = {  type = 22000 id = 72  } 
       name       = "74. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 73  } 
       name       = "79. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 74  } 
       name       = "6. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1374
     name     = "27. Juntuan" 
     id       = {  type = 22000 id = 75  }
     Division = 
     { id         = {  type = 22000 id = 76  } 
       name       = "20. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      } 
     Division = 
     { id         = {  type = 22000 id = 77  } 
       name       = "70. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1352
     name     = "Hunan-Hubei-Jiangxi Bianqu" 
     id       = {  type = 22000 id = 78  }
     Division = 
     { id         = {  type = 22000 id = 79  } 
       name       = "73. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 80  } 
       name       = "8. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1355
     name     = "31. Juntuan" 
     id       = {  type = 22000 id = 81  }
     Division = 
     { id         = {  type = 22000 id = 82  } 
       name       = "18. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 83  } 
       name       = "52. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 84  } 
       name       = "78. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 85  } 
       name       = "37. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1308
     name     = "20. Juntuan" 
     id       = {  type = 22000 id = 86  }
     Division = 
     { id         = {  type = 22000 id = 87  } 
       name       = "2. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 88  } 
       name       = "54. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 89  } 
       name       = "53. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 90  } 
       name       = "87. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1259
     name     = "34. Juntuan" 
     id       = {  type = 22000 id = 91  }
     Division = 
     { id         = {  type = 22000 id = 92  } 
       name       = "16. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 93  } 
       name       = "27. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 94  } 
       name       = "90. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 95  } 
       name       = "Shaanxi Minbing" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 96  } 
       name       = "Guo Qibing Juntuan" 
       type       = cavalry 
	   strength  = 40
       model     = 6
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1313
     name     = "Jiangsu-Shandong Zhanqu" 
     id       = {  type = 22000 id = 97  }
     Division = 
     { id         = {  type = 22000 id = 98  } 
       name       = "51. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 99  } 
       name       = "57. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1310
     name     = "Jiangsu-Shandong Zhanqu" 
     id       = {  type = 22000 id = 100  }
     Division = 
     { id         = {  type = 22000 id = 101  } 
       name       = "89. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 102  } 
       name       = "Shandong Youjidui" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1299
     name     = "Zhong Daiji Budui" 
     id       = {  type = 22000 id = 103  }
     Division = 
     { id         = {  type = 22000 id = 104  } 
       name       = "5. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 105  } 
       name       = "36. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 106  } 
       name       = "Haiguan Jingcha Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 107  } 
       name       = "1. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 108  } 
       name       = "31. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 109  } 
       name       = "71. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 110  } 
       name       = "99. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1304
     name     = "Shang Chang Jiang Zhujun" 
     id       = {  type = 22000 id = 111  }
     Division = 
     { id         = {  type = 22000 id = 112  } 
       name       = "75. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 113  } 
       name       = "85. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 8
      }
     Division = 
     { id         = {  type = 22000 id = 114  } 
       name       = "13. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 115  } 
       name       = "94. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1256
     name     = "Sichuan-Shaanxi-Hubei Bianqu" 
     id       = {  type = 22000 id = 116  }
     Division = 
     { id         = {  type = 22000 id = 117  } 
       name       = "56. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 118  } 
       name       = "95. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 119  } 
       name       = "Xin 6. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1347
     name     = "Zhejiang Zhujun" 
     id       = {  type = 22000 id = 120  }
     Division = 
     { id         = {  type = 22000 id = 121  } 
       name       = "Zhejiang Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1357
     name     = "Fujian Zhujun" 
     id       = {  type = 22000 id = 122  }
     Division = 
     { id         = {  type = 22000 id = 123  } 
       name       = "Fujian Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1374
     name     = "Guangdong Zhujun" 
     id       = {  type = 22000 id = 124  }
     Division = 
     { id         = {  type = 22000 id = 125  } 
       name       = "Guangdong Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1305
     name     = "Guizhou Zhujun" 
     id       = {  type = 22000 id = 126  }
     Division = 
     { id         = {  type = 22000 id = 127  } 
       name       = "Guizhou Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1297
     name     = "Sichuan Zhujun" 
     id       = {  type = 22000 id = 128  }
     Division = 
     { id         = {  type = 22000 id = 129  } 
       name       = "Sichuan Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1314
     name     = "Hubei Zhujun" 
     id       = {  type = 22000 id = 130  }
     Division = 
     { id         = {  type = 22000 id = 131  } 
       name       = "Hubei Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1308
     name     = "Hunan Zhujun" 
     id       = {  type = 22000 id = 132  }
     Division = 
     { id         = {  type = 22000 id = 133  } 
       name       = "Hunan Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1311
     name     = "Jiangxi Zhujun" 
     id       = {  type = 22000 id = 134  }
     Division = 
     { id         = {  type = 22000 id = 135  } 
       name       = "Jiangxi Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1257
     name     = "Henan Zhujun" 
     id       = {  type = 22000 id = 136  }
     Division = 
     { id         = {  type = 22000 id = 137  } 
       name       = "Henan Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1261
     name     = "Gansu Zhujun" 
     id       = {  type = 22000 id = 138  }
     Division = 
     { id         = {  type = 22000 id = 139  } 
       name       = "Gansu Zhujun" 
       type       = militia 
	   strength  = 40
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1299
     name     = "Chongqing Zhujun" 
     id       = {  type = 22000 id = 140  }
     Division = 
     { id         = {  type = 22000 id = 141  } 
       name       = "Chongqing Zhujun" 
       type       = infantry
	   strength  = 40
       model     = 8
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1347
     name     = "Zhongcheng Zhengjiu Jun" 
     id       = {  type = 22000 id = 142  }
     Division = 
     { id         = {  type = 22000 id = 143  } 
       name       = "Zhongcheng Zhengjiu Jun" 
       type       = bergsjaeger
	   strength  = 40
       model     = 8
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1292
     name     = "1. Juntuan" 
     id       = {  type = 22000 id = 144  }
     Division = 
     { id         = {  type = 22000 id = 145  } 
       name       = "Xin 3. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 146  } 
       name       = "58. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 147  } 
       name       = "60. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 148  } 
       name       = "32. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1390
     name     = "Yunnan Zhujun" 
     id       = {  type = 22000 id = 149  }
     Division = 
     { id         = {  type = 22000 id = 150  } 
       name       = "Yunnan Daiji Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 151  } 
       name       = "Yunnan Minbing" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1291
     name     = "5. Juntuan" 
     id       = {  type = 22000 id = 152  }
     Division = 
     { id         = {  type = 22000 id = 153  } 
       name       = "24. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 154  } 
       name       = "Xikang Minbing" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1378
     name     = "Guangxi Zhujun" 
     id       = {  type = 22000 id = 155  }
     Division = 
     { id         = {  type = 22000 id = 156  } 
       name       = "Guangxi Minbing" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 157  } 
       name       = "Guangxi Minshi Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1283
     name     = "5. Guo Qibing Jun" 
     id       = {  type = 22000 id = 158  }
     Division = 
     { id         = {  type = 22000 id = 159  } 
       name       = "5. Guo Qibing Jun" 
       type       = cavalry 
	   strength  = 40
       model     = 6
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1264
     name     = "17. Juntuan" 
     id       = {  type = 22000 id = 160  }
     Division = 
     { id         = {  type = 22000 id = 161  } 
       name       = "1. Ningxia Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 162  } 
       name       = "2. Ningxia Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 163  } 
       name       = "3. Ningxia Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 164  } 
       name       = "81. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     dig_in   = 20.000 
    }
   landunit = 
   {  location = 1264
     name     = "Qinghai Jun" 
     id       = {  type = 22000 id = 165  }
     Division = 
     { id         = {  type = 22000 id = 166  } 
       name       = "82. Jun" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 167  } 
       name       = "Qinghai Minbing" 
       type       = militia 
	   strength  = 60
       model     = 4
      }
     Division = 
     { id         = {  type = 22000 id = 168  } 
       name       = "Qinghai Qibing" 
       type       = cavalry 
	   strength  = 40
       model     = 6
      }
     dig_in   = 20.000 
    }
  airunit =
  { location = 1297
    id       = { type = 22000 id = 300 }
    name     = "Russian Volunteer Group"
    base     = 1297
    division =
    { id    = { type = 22000 id = 301 }
      name  = "Qianjiji Hang Kong Dui"
      type  = interceptor
      model = 4
    }
    division =
    { id    = { type = 22000 id = 302 }
      name  = "Hongzhaji Hang Kong Dui"
      type  = tactical_bomber
      model = 4
    }
  }
} 
 