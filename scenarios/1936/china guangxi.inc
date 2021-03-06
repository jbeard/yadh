 
 ############################## 
 # Country definition for CGX # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CGX 
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 10 
	puppet                 = CHI 
	# Resource Reserves 
	energy                 = 600
	metal                  = 300
	rare_materials         = 150
	transports = 100
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1378 # Guilin 
	manpower               = 32 
	dissent                = 40 
   diplomacy = 
   {  relation = {  tag = CHC value = -200  } 
     relation = {  tag = CHI value = 100  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = U67 value = 150  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
    } 
   SpyInfo                = {  country = "CGX" NumberOfSpies = 2  } 
   nationalprovinces      = {   1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  } 
   ownedprovinces         = {   1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  } 
   controlledprovinces    = {   1365 1367 1368 1369 1370 1373 1374 1375 1376 1377 1378 1379 1380 1381 1382 1383  } 
   # Guangxi 
 	techapps = { 
	
	# Manufacturing
	5810 5820 5050
	# Construction Engineering
	5800 5080

	# Crypto - Up to 1923
	5316 5326 5327

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070 1080 
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Armoured Car  
	2860 2870
	# Field Artillery 
	2290 2300 2310 2900 2910

	# Manpower Focus
	6570
	
	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Destroyers
	3010 
	# Light Cruiser 
	3110 3120 3130 3140
	# Heavy Cruiser 
	3210 3220
	# Troopships
	3810
	#Early Torpedoes
	3720 3730
	#Early Battleship
	3410 3420
	

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
	1090
	
	# Marines
	1560

	# Mountain
	1230

	# Cavalry
	1350 1360

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

	# Anti-Air (from HK)
	2800

	#Mobility Focus
	6210

	#Interwar Bomber
	4120
}
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 1 
     interventionism   = 2 
    } 
   headofstate            = {  type = 9 id = 585001  } 
   headofgovernment       = {  type = 9 id = 585002  } 
   foreignminister        = {  type = 9 id = 585003  } 
   armamentminister       = {  type = 9 id = 585004  } 
   ministerofsecurity     = {  type = 9 id = 585005  } 
   ministerofintelligence = {  type = 9 id = 585006  } 
   chiefofstaff           = {  type = 9 id = 585007  } 
   chiefofarmy            = {  type = 9 id = 585008  } 
   chiefofnavy            = {  type = 9 id = 585009  } 
   chiefofair             = {  type = 9 id = 585010  } 
   # ###### 
   # GUANGXI OOB 
   # ###### 
   landunit = 
   {  location = 1369 # Guangzhou 
     name     = "1. Juntuan" 
     # ## leader = # Chen Jitang 
     id       = {  type = 22400 id = 1  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 2  } 
       name       = "Xunlian Bubing Shi" 
       type     = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 3  } 
       name       = "1. Duli Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 4  } 
       name       = "Jingbei L�" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Shaoguan 
     name     = "1. Jun" 
     # ## leader = # Yu Hanmou 
     id       = {  type = 22400 id = 5  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 6  } 
       name       = "1. Bubing Shi" 
       type     = garrison 
       strength   = 40 
       model      = 2
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 7  } 
       name       = "2. Bubing Shi" 
       type     = garrison 
       strength   = 40 
       model      = 2
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 8  } 
       name       = "3. Bubing Shi" 
       type       = garrison 
       strength   = 40 
       model      = 2
      } 
    } 
   landunit = 
   {  location = 1375 # Shantou 
     name     = "2. Jun" 
     # ## leader = # Chang Ta 
     id       = {  type = 22400 id = 9  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 10  } 
       name       = "4. Bubing Shi" 
       type     = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 11  } 
       name       = "5. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 12  } 
       name       = "6. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Maoming 
     name     = "3. Jun" 
     # ## leader = # Yu Hanmou 
     id       = {  type = 22400 id = 13  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 14  } 
       name       = "7. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 15  } 
       name       = "8. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 16  } 
       name       = "9. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "4. Juntuan" 
     # ## leader = # Li Zongren 
     id       = {  type = 22400 id = 17  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 18  } 
       name       = "19. Lujun" 
       type       = infantry 
       strength   = 30 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1382 # Liuzhou 
     name     = "7. Jun" 
     # ## leader = # Liao Lei 
     id       = {  type = 22400 id = 19  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 20  } 
       name       = "19. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 21  } 
       name       = "21. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 22  } 
       name       = "22. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 23  } 
       name       = "24. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1379 # Nanning 
     name     = "15. Jun" 
     # ## leader = # Xia Wei 
     id       = {  type = 22400 id = 24  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 25  } 
       name       = "42. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 26  } 
       name       = "43. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 27  } 
       name       = "44. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 28  } 
       name       = "45. Bubing Shi" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1369 # Guangzhou 
     name     = "Guangdong Xianbing" 
     id       = {  type = 22400 id = 29  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 30  } 
       name       = "Guangdong Xianbing" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "Guangxi Xianbing" 
     id       = {  type = 22400 id = 31  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 32  } 
       name       = "Guangxi Xianbing" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 33  } 
       name       = "Guangdong Bubing Jun" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1365 # Hainan 
     name     = "Hainan Xianbing" 
     id       = {  type = 22400 id = 34  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22400 id = 35  } 
       name       = "9. Duli L�" 
       type       = infantry 
       strength   = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1381 # Bose 
     name     = "9. Jun" 
     # ## leader = 50089 # Hao Menglin 
     id       = {  type = 22000 id = 20  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 21  } 
       name       = "9. Jun" 
       type       = infantry 
	   strength  = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1382 # Liuzhou 
     name     = "28. Jun" 
     # leader = X # ? 
     id       = {  type = 22000 id = 67  } 
     Division = 
     {  experience = 30 
       id         = {  type = 22000 id = 68  } 
       name       = "28. Jun" 
       type       = infantry 
	   strength  = 40 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "Hunan Xi Jingbei" 
     # ## leader = # 
     id       = {  type = 22000 id = 192  } 
     Division = 
     {  experience   = 30 
       id           = {  type = 22000 id = 193  } 
       name         = "34. Xin Bubing Shi" 
       type         = infantry 
       max_strength = 50 
       strength     = 50 
       model        = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Wuzhou 
     name     = "Ningbo Jingbei" 
     # ## leader = # 
     id       = {  type = 22000 id = 215  } 
     Division = 
     {  id           = {  type = 22000 id = 216  } 
       name         = "37. Duli Bubing L�" 
       type         = infantry 
       max_strength = 25 
       strength     = 25 
       model        = 3
      } 
    } 
   landunit = 
   {  location = 1383 # Shaoguan 
     name     = "20. Jun" 
     # ## leader = 50162 # Guo Rudong 
     id       = {  type = 22000 id = 106  } 
     Division = 
     {  id    = {  type = 22000 id = 107  } 
       name  = "20. Jun" 
       type  = infantry 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1369 # Guangzhou 
     name     = "2. Jun" 
     # ## leader = 50050 # Jiang Dingwen 
     id       = {  type = 22000 id = 6  } 
     Division = 
     {  id    = {  type = 22000 id = 7  } 
       name  = "2. Jun" 
       type  = infantry 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1375 # Chao'an 
     name     = "16. Jun" 
     # ## leader = # Li Yunyan 
     id       = {  type = 22000 id = 36  } 
     Division = 
     {  id    = {  type = 22000 id = 37  } 
       name  = "16. Jun" 
       type  = infantry 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1375 # Shantou 
     name     = "36. Jun" 
     # ## leader = # Chou Hunyuan 
     id       = {  type = 22000 id = 87  } 
     Division = 
     {  id    = {  type = 22000 id = 88  } 
       name  = "36. Jun" 
       type  = infantry 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1381 # Bose 
     name     = "14. Lujun" 
     # ## leader = # 
     id       = {  type = 22000 id = 161  } 
     Division = 
     {  id    = {  type = 22000 id = 162  } 
       name  = "14. Lujun" 
       type  = infantry 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1382 # Liuzhou 
     name     = "18. Jun" 
     # ## leader = 50219 # Luo Zhuoying 
     id       = {  type = 22000 id = 38  } 
     Division = 
     {  id    = {  type = 22000 id = 39  } 
       name  = "18. Jun" 
       type  = infantry 
	   strength  = 40 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1380 # Guilin 
     name     = "26. Jun" 
     # ## leader = 50104 # Xiao Zhichu 
     id       = {  type = 22000 id = 62  } 
     Division = 
     {  id    = {  type = 22000 id = 63  } 
       name  = "26. Jun" 
       type  = infantry 
	   strength  = 40 
       model = 3
      } 
    } 
   # ##### NAVY OOB ###### 
   navalunit = 
   {  location = 1369 # Guangzhou 
     name     = "Guangdong Haijun" 
     id       = {  type = 22400 id = 40  } 
     base     = 1369 
     Division = 
     {  id    = {  type = 22400 id = 43  } 
       name  = "1. Yunshuji Dadui" 
       type  = transport 
       model = 0 
      } 
    } 
   # ##### AIR FORCE OOB ###### 
   airunit = 
   {  location = 1369 # Guangzhou 
     name     = "Guangxi Kongjun" 
     base     = 1369 # Guangzhou 
     id       = {  type = 22400 id = 38  } 
     Division = 
     {  id           = {  type = 22400 id = 39  } 
       name         = "Guangxi Hang Kong Dui" 
       type         = interceptor 
       model        = 5
       max_strength = 40 
       strength     = 20 
      } 
    } 
  } 
 