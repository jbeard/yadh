##############################
# Country definition for CHI #
##############################

 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CHI 
	ai = "chi_1936.ai"
	ai_settings	= { flags = { RES = yes MOB1 = yes MOB2 = yes } }
	capital                = 1337 # Nanjing 
	# Resource Reserves 
	energy                 = 2100
	metal                  = 1050
	rare_materials         = 525
	oil                    = 1000 
	supplies               = 1000 
	money                  = 10 
	manpower               = 855 
	dissent                = 25 
	transports             = 150 
	escorts                = 2 
    
   
   diplomacy = 
   {  relation = {  tag = CHC value = -200  }
     relation = {  tag = CGX value = 100  } 
     relation = {  tag = CSX value = 100 access = yes  } 
     relation = {  tag = CXB value = 200 access = yes  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = JAP value = -100  } 
     relation = {  tag = MAN value = -100  } 
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
 1241 1242 1243 1244 1247 1261 1267 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360     
                             } 
   # Fujian   
   controlledprovinces    = {   
 #Nationalist China at start 
 1241 1242 1243 1244 1247 1261 1267 1296 1297 1298 1299 1300 1301 1302 1303 1304 1305 1306 1307 1308 1309 1310 1311 1312 1313 1314 1315 1316 1317 1318 1319 1320 1321 1322 1323 1324 1325 1326 1327 1328 1329 1330 1331 1332 1333 1334 1335 1336 1337 1338 1339 1340 1341 1342 1343 1344 1345 1346 1347 1348 1349 1350 1351 1352 1353 1354 1355 1356 1357 1358 1359 1360     
                             } 
	claimedprovinces = { 
	1455 1458 #Arunachal Pradesh
	1119 #Tannu Tuva
	1414 #Kachin 
	}
						
	# NatChi 1933 techs 
	# ######################  
	techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1923
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Armoured Car  
	2860 2870
	# Field Artillery 
	2290 2300 2310 2900 2910

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810
	#Early Torpedoes
	3720
	#Early Battleship
	3410
	

	# Naval Doctrines
	8010 8020 8050 8060 8070 8080

	# Interceptor Fighter  
	4500 4510 4520 4530 4540  
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 
	# Strategic Bomber
	4800 4810 
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	# Infantry (from GER/SOV)
	1080 1090
	
	# Engineers
	1840 1850

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Supply
	1970

	# Tank 
	7600 7610 2620 2010
	
	# Armored Car
	2880

	# Artillery (from GER/SOV)
	2920 2930

	#Mobility Focus
	6210

	#Manpower Focus
	6570
	
	#Interwar Bomber
	4120
}
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     free_market       = 9 
     freedom           = 4 
     professional_army = 2 
     defense_lobby     = 8 
     interventionism   = 4 
    } 
	
   headofstate            = {  type = 9 id = 55001  } 
   headofgovernment       = {  type = 9 id = 55002  } 
   foreignminister        = {  type = 9 id = 55003  } 
   armamentminister       = {  type = 9 id = 55004  } 
   ministerofsecurity     = {  type = 9 id = 55005  } 
   ministerofintelligence = {  type = 9 id = 55006  } 
   chiefofstaff           = {  type = 9 id = 55007  } 
   chiefofarmy            = {  type = 9 id = 55008  } 
   chiefofnavy            = {  type = 9 id = 55009  } 
   chiefofair             = {  type = 9 id = 55010  } 
   dormant_leaders        = {  55368 55375  } 
   # CHINA 1904 Land OOB 
   landunit = 
   {  location = 1337 # Lanzhou 
     name     = "1. Jun" 
     # ## leader = # Chen Jicheng 
     id       = {  type = 22000 id = 1  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 2  } 
       name       = "1. Jun" 
       type       = infantry 
	   strength  = 60
       model     = 6
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1257 # near Xi'an 
     name     = "7. Jun" 
     leader = 55083 # Zeng Wanzhong 
     id       = {  type = 22000 id = 18  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 19  } 
       name       = "7. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1358 # Fuzhou 
     name     = "14. Jun" 
     leader = 55329 # Wei Lihuang 
     id       = {  type = 22000 id = 30  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 31  } 
       name       = "14. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 5 
      } 
    } 
   landunit = 
   {  location = 1355 # Pingxiang 
     name     = "22. Jun" 
     # ## leader = # Tan Taoyuan 
     id       = {  type = 22000 id = 54  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 55  } 
       name       = "22. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1355 # Pingxiang 
     name     = "27. Jun" 
     leader = 55209 # Liu Xing 
     id       = {  type = 22000 id = 65  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 66  } 
       name       = "27. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1322 # Luoyang 
     name     = "30. Jun" 
     leader = 55266 # Sun Lianzhong 
     id       = {  type = 22000 id = 72  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 73  } 
       name       = "30. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 5 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1257 # Xi'an 
     name     = "37. Jun" 
     leader = 55242 # Mao Pingwen 
     id       = {  type = 22000 id = 90  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 91  } 
       name       = "37. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1337 # Baoji 
     name     = "38. Jun" 
     leader = 55270 # Sun Weiru 
     id       = {  type = 22000 id = 93  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 94  } 
       name       = "38. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1347 # Wenzhou 
     name     = "39. Jun" 
     leader = 55207 # Liu Heding 
     id       = {  type = 22000 id = 95  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 96  } 
       name       = "39. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1347 # Anyang 
     name     = "40. Jun" 
     leader = 55250 # Pang Bingxun 
     id       = {  type = 22000 id = 97  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 98  } 
       name       = "40. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1257 # near Xi'an 
     name     = "46. Jun" 
     # ## leader = # Fan Songfu 
     id       = {  type = 22000 id = 119  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 120  } 
       name       = "46. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1258 # Xi'an 
     name     = "51. Jun" 
     leader = 55011 # Yu Xuezhong (Zhang Xuezhong substituted) 
     id       = {  type = 22000 id = 124  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 125  } 
       name       = "51. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 5 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1257 # near Xi'an 
     name     = "57. Jun" 
     # ## leader = # Dong Yingbin 
     id       = {  type = 22000 id = 133  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 134  } 
       name       = "57. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1258 # Xi'an 
     name     = "67. Jun" 
     leader = 55319 # Wang Yizhe 
     id       = {  type = 22000 id = 138  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 139  } 
       name       = "67. Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1337 # Lanzhou 
     name     = "1. Xin Jun" 
     leader = 55285 # Deng Baoshan 
     id       = {  type = 22000 id = 142  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 143  } 
       name       = "1. Xin Jun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1348 # Quzhou 
     name     = "4. Lujun" 
     # ## leader = # 
     id       = {  type = 22000 id = 151  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 152  } 
       name       = "4. Lujun" 
       type       = infantry 
	   strength  = 60 
       model      = 5 
      } 
    } 
   landunit = 
   {  location = 1258 # Xi'an 
     name     = "4. Lujun" 
     leader = 55340 # Yang Hucheng 
     id       = {  type = 22000 id = 163  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 164  } 
       name       = "4. Lujun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1352 # Nanchang 
     name     = "20. Lujun" 
     leader = 55008 # Zhang Fang 
     id       = {  type = 22000 id = 165  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 166  } 
       name       = "20. Lujun" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1336 # Yangzhou 
     name     = "26. Lujun" 
     # ## leader = # 
     id       = {  type = 22000 id = 168  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 169  } 
       name       = "26. Lujun" 
       type       = infantry 
	   strength  = 60 
       model      = 5 
      } 
    } 
   landunit = 
   {  location = 1337 # Nanjing 
     name     = "2. Bubing Shi" 
     leader = 55044 # Zheng Dongguo 
     id       = {  type = 22000 id = 170  } 
     Division = 
     {  experience   = 20 
       id           = {  type = 22000 id = 171  } 
       name         = "2. Bubing Shi" 
       type         = infantry 
       max_strength = 80 
       strength     = 80 
       model        = 6 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1345 # Hangzhou 
     name     = "21. Bubing Shi" 
     leader = 55177 # Li Xianzhou 
     id       = {  type = 22000 id = 172  } 
     Division = 
     {  experience   = 20 
       id           = {  type = 22000 id = 173  } 
       name         = "21. Bubing Shi" 
       type         = infantry 
       max_strength = 50 
       strength     = 50 
       model        = 6 
      } 
    } 
   landunit = 
   {  location = 1334 # Xiangfan 
     name     = "51. Bubing Shi" 
     leader = 55326 # Wang Yaoyu 
     id       = {  type = 22000 id = 176  } 
     Division = 
     {  experience   = 20 
       id           = {  type = 22000 id = 177  } 
       name         = "51. Bubing Shi" 
       type         = infantry 
       max_strength = 50 
       strength     = 50 
       model        = 6 
      } 
    } 
   landunit = 
   {  location = 1316 # Xiangfan 
     name     = "Jiangxi Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 178  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 179  } 
       name       = "Jiangxi Silingbu" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1358 # Fuzhou 
     name     = "Fujian Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 194  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 195  } 
       name       = "Fujian Silingbu" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1341 # Fuyang 
     name     = "Anhui Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 208  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 209  } 
       name       = "Anhui Silingbu" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1319 # Kaifeng 
     name     = "Henan Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 211  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 212  } 
       name       = "Henan Silingbu" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1317 # Hankou 
     name     = "Hubei Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 224  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 225  } 
       name       = "Hubei Silingbu" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1317 # Hankou 
     name     = "Xibei Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 232  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 233  } 
       name       = "Xibei Silingbu" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1337 # Nanjing 
     name     = "Jiaodao Zongdui" 
     leader = 55157 # Gui Yongqing 
     id       = {  type = 22000 id = 242  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 243  } 
       name       = "Jiaodao Zongdui" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1333 # Lianyungang 
     name     = "Suijing Zongtuan" 
     leader = 55126 # Huang Jie 
     id       = {  type = 22000 id = 244  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 245  } 
       name       = "Customs Police 1st Detachment" 
       type       = infantry 
	   strength  = 60 
       model      = 5 
      } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 246  } 
       name       = "Customs Police 2nd Detachment" 
       type       = infantry 
	   strength  = 60 
       model      = 6 
      } 
    } 
   landunit = 
   {  location = 1338 # Shanghai 
     name     = "Shanghai Jingbei" 
     leader = 55339 # Yang Hu 
     id       = {  type = 22000 id = 247  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 248  } 
       name       = "Shanghai Jingbei" 
       type       = infantry 
	   strength  = 60 
       model      = 5 
      } 
    } 
   landunit = 
   {  location = 1338 # Ningbo 
     name     = "Marine Brigade" 
     # ## leader = # 
     id       = {  type = 22000 id = 251  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 252  } 
       name       = "Marine Brigade" 
       type       = garrison 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1337 # Nanjing 
     name     = "Jiangsu Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 254  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 255  } 
       name       = "Jiangsu Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1344 # Anqing 
     name     = "Anhui Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 256  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 257  } 
       name       = "Anhui Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1345 # Hangzhou 
     name     = "Zhejiang Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 258  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 259  } 
       name       = "Zhejiang Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1309 # Changsha 
     name     = "Hunan Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 260  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 261  } 
       name       = "Hunan Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1318 # Wuchang 
     name     = "Hubei Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 262  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 263  } 
       name       = "Hubei Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1319 # Kaifeng 
     name     = "Henan Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 264  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 265  } 
       name       = "Henan Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1337 # Lanzhou 
     name     = "Gansu Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 268  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 269  } 
       name       = "Gansu Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1352 # Nanchang 
     name     = "Jiangxi Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 274  } 
     Division = 
     {  experience = 20 
       id         = {  type = 22000 id = 275  } 
       name       = "Jiangxi Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1358 # Fuzhou 
     name     = "Fujian Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 276  } 
     Division = 
     {  id         = {  type = 22000 id = 278  } 
       experience = 20 
       name       = "Fujian Baoantui" 
       type       = militia 
	   strength  = 60 
       model      = 3
      } 
    } 
# zone semi-demilitarized per Japanese demands (no infantry divisions)
# However they cannot stop formation of volunteer armies
# The exact number of divisions can be adjusted for game balance as needed.
   landunit = 
   {  location = 1247 # Beiping
     name     = "3. Lujun" 
     id       = {  type = 22301 id = 1  } 
     Division = 
     {  id       = {  type = 22301 id = 2  } 
       name     = "22. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model = 5
      } 
     Division = 
     {  id       = {  type = 22301 id = 3  } 
       name     = "23. Bubing Shi" 
       type     = militia 
       strength  = 40 
       model = 5
      } 
    } 
   landunit = 
   {  location = 1241 # Tianjin 
     name     = "Hebei Jingbei" 
     id       = {  type = 22301 id = 4 } 
     Division = 
     {  id       = {  type = 22301 id = 5  } 
       name     = "Hebei Baoantui" 
       type     = militia 
       strength  = 40 
       model = 5
      } 
    } 
   landunit = 
   {  location = 1242 # Baoding 
     name     = "53. Jun" 
     id       = {  type = 22001 id = 6  } 
     Division = 
     {  id    = {  type = 22001 id = 7  } 
       name  = "53. Jun" 
       type     = militia 
	   strength  = 40 
       model = 5 
      } 
    } 	
	
   # China 1904 Naval OOB 
   navalunit = 
   {  location = 1338 # Shanghai 
     base     = 1338 
     name     = "1st Fleet" 
     id       = {  type = 22000 id = 300  } 
     Division = 
     {  id    = {  type = 22000 id = 301  } 
       name  = "Ning-Hai" 
       type  = light_cruiser 
       model = 4
	extra1 = floatplane
	brigade_model1 = 3
      } 
     Division = 
     {  id    = {  type = 22000 id = 303  } 
       name  = "Chao-Ho" 
       type  = light_cruiser 
       model = 1
      } 
     Division = 
     {  id    = {  type = 22000 id = 302  } 
       name  = "Ying-Swei" 
       type  = light_cruiser 
       model = 1
      } 
     Division = 
     {  id    = {  type = 22000 id = 304  } 
       name  = "Hai-Chi" 
       type  = light_cruiser 
       model = 0
      } 
     Division = 
     {  id    = {  type = 22000 id = 305  } 
       name  = "Hai-Yung" 
       type  = light_cruiser 
       model = 0
      } 
     Division = 
     {  id    = {  type = 22000 id = 306  } 
       name  = "Hai-Chou" 
       type  = light_cruiser 
       model = 0
      } 
     Division = 
     {  id    = {  type = 22000 id = 310  } 
       name  = "Hai-Chen" 
       type  = light_cruiser 
       model = 0
      } 
     Division = 
     {  id    = {  type = 22000 id = 307  } 
       name  = "1. Quzujian Dadui" 
       type  = destroyer 
       model = 0
	strength = 80
      } 
     Division = 
     {  id    = {  type = 22000 id = 308  } 
       name  = "2. Quzujian Dadui" 
       type  = destroyer 
       model = 1
	strength = 40
      } 
     Division = 
     {  id    = {  type = 22000 id = 311  } 
       name  = "3. Quzujian Dadui" 
       type  = destroyer 
       model = 0
	strength = 80
      } 
     Division = 
     {  id    = {  type = 22000 id = 312  } 
       name  = "4. Quzujian Dadui" 
       type  = destroyer 
       model = 2
	strength = 40
      } 
     Division = 
     {  id    = {  type = 22000 id = 309  } 
       name  = "1. Yunshujian Dadui" 
       type  = transport 
       model = 1
      } 
    } 

   # China 1904 Airforce OOB 
   airunit = 
   {  location = 1345 # Nanjing 
     id       = {  type = 22000 id = 400  } 
     name     = "1. Kongjun" 
     base     = 1345 # Nanjing 
     Division = 
     {  id           = {  type = 22000 id = 401  } 
       name         = "1. Kongjun" 
       strength     = 20 
       type         = tactical_bomber 
       model        = 3 
      } 
     Division = 
     {  id           = {  type = 22000 id = 408  } 
       name         = "2. Kongjun" 
       strength     = 20
       type         = multi_role
       model        = 3 
      } 
    } 
  } 
 