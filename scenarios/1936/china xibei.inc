 
 ############################## 
 # Country definition for CXB # 
 ############################## 
  
 country = 
 {  tag                    = CXB
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } } 
	regular_id             = CHI 
	intrinsic_gov_type     = paternal_autocrat 
	extra_tc               = 2 
	puppet                 = CHI 
	# Resource Reserves 
	energy                 = 360
	metal                  = 180
	rare_materials         = 90
	oil                    = 100 
	supplies               = 100 
	money                  = 50 
	capital                = 1283 # Golmud 
	manpower               = 31 
	dissent                = 40 
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 10 
     interventionism   = 3 
    } 
	
   nationalprovinces      = {  1256 1262 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285  } 
   ownedprovinces         = {  1256 1262 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285  } 
   controlledprovinces    = {  1256 1262 1263 1264 1265 1266 1268 1269 1270 1271 1272 1283 1284 1285  } 
    #Xibei
	techapps = { 
	
	# Manufacturing - Up to 1910
	5810
	# Construction Engineering - Up to 1910
	5800 5080

	# Crypto - Up to 1922
	5316 5326

	# Infantry Division
	1010 1020 1030 1040 1050 1060 1070
	# Mountain Division
	1160 1170 1180 1190 1200 1210 1220 1230 
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370
	# Engineers
	1830
	# Supply 
	1910 1920 1930 1940 1950 1960

	# Field Artillery 
	2290 2300 2310

	# Hospital System
	14000 14010 14020
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910


	} 

blueprints = {
	
	# Manufacturing
	5050 5820
	
	# Crypto
	5327

	# Agriculture
	5700
	
	# Medicine (most were still imported)
	5600
	
	# Tank 
	7600 7610 2620 2010
	
	# Armoured Car  
	2860 2870

	# Artillery
	2920 2900 2910

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
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = CHI value = 200 access = yes  } 
     relation = {  tag = CSX value = 200 access = yes  } 
     relation = {  tag = U67 value = 150  } 
     relation = {  tag = CGX value = 200  } 
     relation = {  tag = CYN value = 200  } 
     relation = {  tag = JAP value = -75  } 
     relation = {  tag = MAN value = -75  } 
     relation = {  tag = CHC value = -100  } 
    } 
   SpyInfo                = {  country = "CXB" NumberOfSpies = 2  } 
   headofstate            = {  type = 9 id = 610001  } 
   headofgovernment       = {  type = 9 id = 610002  } 
   foreignminister        = {  type = 9 id = 610003  } 
   armamentminister       = {  type = 9 id = 610004  } 
   ministerofsecurity     = {  type = 9 id = 610005  } 
   ministerofintelligence = {  type = 9 id = 610006  } 
   chiefofstaff           = {  type = 9 id = 610007  } 
   chiefofarmy            = {  type = 9 id = 610008  } 
   chiefofnavy            = {  type = 9 id = 610009  } 
   chiefofair             = {  type = 9 id = 610010  } 
   # ###### 
   # XIBEI SAN MA OOB 
   # ###### 
   landunit = 
   {  location = 1283 # Yinchuan 
     name     = "15. Lujun" 
     # ## leader = 504004 # Ma Hongkui 
     id       = {  type = 22200 id = 1  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 2  } 
       name       = "35. Bubing Shi" 
       type       = garrison 
       strength   = 40 
       model      = 2
      } 
    } 
   landunit = 
   {  location = 1283 # Yinchuan 
     name     = "11. Jun" 
     # ## leader = 504005 # Ma Hongbin 
     id       = {  type = 22200 id = 3  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 4  } 
       name       = "Xin 7. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience   = 40 
       id           = {  type = 22200 id = 5  } 
       name         = "Xin 7. Qibing Shi" 
       type         = cavalry 
       max_strength  = 60
       strength     = 100 
       model        = 6 
      } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 6  } 
       name       = "10. Duli Lü" 
       type       = militia 
       strength   = 50 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1284 # Xining 
     name     = "Xin 2. Jun" 
     # ## leader = 504006 # Ma Hongbin 
     id       = {  type = 22200 id = 7  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 8  } 
       name       = "Xin 9. Bubing Shi" 
       type       = militia 
       strength   = 40 
       model      = 3
      } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 9  } 
       name       = "1. Qibing Lü" 
       type       = cavalry 
       strength   = 40 
       model      = 5 
      } 
    } 
   landunit = 
   {  location = 1284 # Xotan 
     name     = "Tunganistan Jun" 
     # ## leader = # Ma Hushan 
     id       = {  type = 22200 id = 11  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22200 id = 12  } 
       name       = "Tungan Shi" 
       type       = militia 
       strength   = 50 
       model      = 3
      } 
    } 
   landunit = 
   {  location = 1284 # Xining 
     name     = "3. Jun" 
     # ## leader = # Zeng Wanzhong 
     id       = {  type = 22000 id = 9  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22000 id = 10  } 
       name       = "3. Jun" 
       type       = militia 
	   strength  = 60
       model      = 3 
      } 
    } 
   landunit = 
   {  location = 1265 # Jinchang 
     name     = "10. Jun" 
     # ## leader = 50112 # Xu Yuanquan 
     id       = {  type = 22000 id = 23  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22000 id = 24  } 
       name       = "10. Jun" 
       type       = militia 
	   strength  = 60
       model      = 3 
      } 
    } 
   landunit = 
   {  location = 1283 # Yinchuan 
     name     = "15. Jun" 
     # ## leader = 50214 # Liu Mao'en 
     id       = {  type = 22000 id = 33  } 
     Division = 
     {  id    = {  type = 22000 id = 34  } 
       name  = "15. Jun" 
       type  = garrison 
	   strength  = 60
       model = 2
      } 
    } 
   landunit = 
   {  location = 1271 # Guyuan 
     name     = "25. Jun" 
     # ## leader = 50307 # Wan Yaohuang 
     id       = {  type = 22000 id = 60  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22000 id = 61  } 
       name       = "25. Jun" 
       type       = militia 
	   strength  = 60
       model      = 3 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1264 # Lanzhou 
     name     = "31. Jun" 
     # ## leader = # Liang Guanying 
     id       = {  type = 22000 id = 75  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22000 id = 76  } 
       name       = "31. Jun" 
       type       = militia 
	   strength  = 60
       model      = 3 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1263 # Tianshui 
     name     = "41. Jun" 
     # ## leader = 50263 # Sun Zhen 
     id       = {  type = 22000 id = 99  } 
     Division = 
     {  experience = 40 
       id         = {  type = 22000 id = 100  } 
       name       = "41. Jun" 
       type       = militia 
	   strength  = 60
       model      = 3 
      } 
     dig_in   = 20.000 
    } 
   landunit = 
   {  location = 1263 # Tianshui 
     name     = "25. Bubing Shi" 
     # ## leader = 50154 # Guan Linzheng 
     id       = {  type = 22000 id = 174  } 
     Division = 
     {  experience   = 40 
       id           = {  type = 22000 id = 175  } 
       name         = "25. Bubing Shi" 
       type         = militia 
       max_strength = 50 
       strength     = 50 
       model        = 3
      } 
     dig_in   = 20.000 
    } 
  } 
 