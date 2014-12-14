 
 ############################## 
 # Country definition for CYN # 
 ############################## 
  
 country = 
 {  tag                    = CYN 
	ai = "cyn_1936.ai"
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	dissent = 30
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 4 
	# Resource Reserves 
	energy                 = 300
	metal                  = 150
	rare_materials         = 75
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1390 # Kunming 
	manpower               = 0 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 2 
     interventionism   = 1 
    } 
   nationalprovinces      = {  1291 1292 1293 1296 1297 1298 1299 1300 1302 1304 1384 1385 1386 1387 1388 1389 1390 1413  } 
   ownedprovinces         = {  1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 } 
   controlledprovinces    = {  1291 1292 1293 1384 1385 1386 1387 1388 1389 1390 } 
   #Yunnan
 	techapps = { 
	
	# Manufacturing - Up to 1915
	5810 5820
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220
	# Cavalry Division  
	13060 13070 13080 1310
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950

	# Field Artillery 
	2290 2300 2310 2900 2910

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910

	# Interceptor Fighter  
	4500 4510 4520 4530 4540  
	# Multirole Fighter
	4300 4310 4320 
	# Tactical Bomber 
	4600 4610 4620 4630 
	# Strategic Bomber
	4800 4810 

	# Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 
	} 

blueprints = {
	
	# Infantry
	1070

	# Mountain
	1230

	# Cavalry
	1320 1330 1340 1350

	# Manufacturing
	5050
	
	# Crypto
	5327

	# Supply
	1960

	# Tank
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870 2880

	#Manpower Focus
	6570
	
	# Naval Doctrines
	8010 8020 8050 8060 8070 8080
	
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
	
	# Naval Bomber
	4700 
	# Seaplane
	4740 4750 4760

}
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 200  } 
     relation = {  tag = CSX value = 200  } 
     relation = {  tag = CXB value = 200  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = U67 value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -200  } 
    } 
   SpyInfo                = {  country = "CYN" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 615001  } 
   headofgovernment       = {  type = 9 id = 615002  } 
   foreignminister        = {  type = 9 id = 615003  } 
   armamentminister       = {  type = 9 id = 615004  } 
   ministerofsecurity     = {  type = 9 id = 615005  } 
   ministerofintelligence = {  type = 9 id = 615006  } 
   chiefofstaff           = {  type = 9 id = 615007  } 
   chiefofarmy            = {  type = 9 id = 615008  } 
   chiefofnavy            = {  type = 9 id = 615009  } 
   chiefofair             = {  type = 9 id = 615010  } 
   # ###### 
   # CHINA 1904 OOB 
   # ###### 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "Yunnan Jingbei" 
     leader = 615007 # Long Yun 
     id       = {  type = 22100 id = 1  } 
     Division = 
     {  id       = {  type = 22100 id = 2  } 
       name     = "21. Duli Lü" 
       type     = garrison 
       strength = 50 
       model    = 2 
      } 
     Division = 
     {  id       = {  type = 22100 id = 3  } 
       name     = "22. Duli Lü" 
       type     = garrison 
       strength = 50 
       model    = 2 
      } 
     Division = 
     {  id       = {  type = 22100 id = 4  } 
       name     = "23. Duli Lü" 
       type     = garrison 
       strength = 50 
       model    = 2 
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "24. Jun" 
     leader = 615005 # Liu Wenhui 
     id       = {  type = 22100 id = 11  } 
     Division = 
     {  id       = {  type = 22100 id = 12  } 
       name     = "136. Bubing Shi" 
       type     = militia 
       strength = 50 
       model    = 3 
      } 
     Division = 
     {  id       = {  type = 22100 id = 13  } 
       name     = "137. Bubing Shi" 
       type     = militia 
       strength = 50 
       model    = 3 
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "Sichuan Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 270  } 
     Division = 
     {  id    = {  type = 22000 id = 271  } 
       name  = "Sichuan Baoantui" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "47. Jun" 
     # ## leader = 50171 # Li Jiayu 
     id       = {  type = 22000 id = 122  } 
     Division = 
     {  id    = {  type = 22000 id = 123  } 
       name  = "47. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kangding 
     name     = "21. Jun" 
     # ## leader = 50207 # Liu Xiang 
     id       = {  type = 22000 id = 49  } 
     Division = 
     {  id    = {  type = 22000 id = 50  } 
       name  = "21. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Qujing 
     name     = "23. Jun" 
     # ## leader = 50248 # Pan Wenhua 
     id       = {  type = 22000 id = 57  } 
     Division = 
     {  id    = {  type = 22000 id = 58  } 
       name  = "23. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Qujing 
     name     = "44. Jun" 
     # ## leader = 50323 # Wang Zuanxu 
     id       = {  type = 22000 id = 109  } 
     Division = 
     {  id    = {  type = 22000 id = 110  } 
       name  = "44. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Qujing 
     name     = "45. Jun" 
     # ## leader = 50284 # Deng Xihou 
     id       = {  type = 22000 id = 113  } 
     Division = 
     {  id    = {  type = 22000 id = 114  } 
       name  = "45. Jun" 
	   strength = 50
       type  = militia 
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Wenshan 
     name     = "7. Lujun" 
     # ## leader = # 
     id       = {  type = 22000 id = 156  } 
     Division = 
     {  id    = {  type = 22000 id = 157  } 
       name  = "7. Lujun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Wenshan 
     name     = "4. Jun" 
     # ## leader = 50332 # Wu Qiwei 
     id       = {  type = 22000 id = 12  } 
     Division = 
     {  id    = {  type = 22000 id = 13  } 
       name  = "4. Jun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Wenshan 
     name     = "5. Jun" 
     # ## leader = 50115 # Xue Yue 
     id       = {  type = 22000 id = 15  } 
     Division = 
     {  id    = {  type = 22000 id = 16  } 
       name  = "5. Jun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "20. Jun" 
     # ## leader = 50343 # Yang Sen 
     id       = {  type = 22000 id = 45  } 
     Division = 
     {  id    = {  type = 22000 id = 46  } 
       name  = "20. Jun" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "Guizhou Silingbu" 
     # ## leader = # 
     id       = {  type = 22000 id = 218  } 
     Division = 
     {  id    = {  type = 22000 id = 219  } 
       name  = "Guizhou Silingbu" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
   landunit = 
   {  location = 1390 # Kunming 
     name     = "Guizhou Baoantui" 
     # ## leader = # 
     id       = {  type = 22000 id = 272  } 
     Division = 
     {  id    = {  type = 22000 id = 273  } 
       name  = "Guizhou Baoantui" 
       type  = militia 
	   strength = 50
       model = 3
      } 
    } 
  }  
 