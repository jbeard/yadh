 
 ############################## 
 # Country definition for ROM # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = ROM
	control                = GER
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	belligerence           = 5 
	capital                = 316 
	manpower               = 1000 
	# Resource Reserves 
	energy                 = 5000
	metal                  = 5000
	rare_materials         = 2000
	transports = 100
	oil                    = 3500 
	supplies               = 3000 
	money                  = 15 
  diplomacy =
  { relation = { tag = BUL value = 125 }
    relation = { tag = SLO value = 20 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 100 }
    relation = { tag = U01 value = -200 }
    relation =
    { tag        = GER
      value      = 200
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = HUN
      value      = 125
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = RSI value = 150 }
    relation =
    { tag        = JAP
      value      = 125
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = SOV value = -200 }
    relation = { tag = TUR value = 100 }
  }
   SpyInfo                = {  country = "ROM" NumberOfSpies = 8  } 
   nationalprovinces      = {  285 286 287 288 289 291 292 293 295 296 297 298 299 300 301 302 303 304 305 306 307 308 309 310 311 312 313 314 315 316 621 
    } 
   ownedprovinces         = {  316 308 311 315 285 286 289 299 291 309 310 297 
        312 314 313 298 287 301 295 300 302 303 304 305 306
    } 
   controlledprovinces    = {  316 308 311 315 285 286 289 299 291 309 310 297 
        312 314 313 298 287 301 295 304 305 306
    } 
   claimedprovinces    = { 619 620 621 625 626 } 

	# Romania 1944.06 techs 
	# ###################### 
	techapps = {
	
	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Agriculture 
	5700 5710 5010 5020 5030
	# Computers & Cryptography
	5310 54010 54020 54030 5316 5326 5327 5350 5320
	# Oil Refining 
	5190 5200
	# Medicine
	5600 5610 5620 5630

	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Mountain Division 
	1160 1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990

	# Tanks
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	# Anti-Tank Artillery 
	2400

	# Hospital System
	14000 14010 14020 14030
	#Land Doctrines WWI - Entente Line
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Land Doctrines WWII - Defensive Focus
	6560 6030 6120 6110

	# Destroyer 
	3010 3020 3030 3040 3050 3060
	# Submarine 
	3610 3620 3630 3640 3650
	# Torpedo & ASW 18
	3720 3730 3736 3740 3900
	# Troopships
	3810 3820
	
	# Naval Doctrines
	8010 8020 8040 8050 8060 8070 8080 8500 8900 8100 8110 8120 82500

	# Interceptor Fighter  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Multirole Fighter
	4300 4310 4320 4330 4340
	# Tactical Bomber 
	4600 4610 4620 4630 4120 4130
	# Strategic Bomber
	4800 4810 4820
	# Naval Bomber
	4700 4710
	# Seaplanes
	4740 4750 4760
	
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	9040 9050 9060 9070 9090 9190 9230
	}
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 3 
     political_left    = 3 
     freedom           = 4 
     free_market       = 4 
     professional_army = 8 
     defense_lobby     = 5 
     interventionism   = 6 
    } 
   headofstate            = {  type = 9 id = 110014  } 
   headofgovernment       = {  type = 9 id = 110025  } 
   foreignminister        = {  type = 9 id = 110041  } 
   armamentminister       = {  type = 9 id = 110057  } 
   ministerofsecurity     = {  type = 9 id = 110069  } 
   ministerofintelligence = {  type = 9 id = 110082  } 
   chiefofstaff           = {  type = 9 id = 110091  } 
   chiefofarmy            = {  type = 9 id = 110102  } 
   chiefofnavy            = {  type = 9 id = 110107  } 
   chiefofair             = {  type = 9 id = 110113  } 
   dormant_ministers      = {  110155 110016 110011 110019 110020 110021 110022 110023 110063  } 
   dormant_leaders        = {  110013 110020 110028 110036 110070 110074  } 
   landunit = 
   {  location = 316 # Bucharest
     name     = "Armata Regala" 
     id       = {  type = 20600 id = 1  } 
     Division = 
     {  id       = {  type = 20600 id = 2  } 
       name     = "Cartier General"
       type     = hq
	   model = 2
       strength = 50 
      } 
    } 
   landunit = 
   {  location = 297
     name     = "Corp I Armata" 
     id       = {  type = 20600 id = 1013  } 
     Division = 
     {  id       = {  type = 20600 id = 28  } 
       name     = "Divizie 6 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 65 
       extra    = engineer 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 20600 id = 33  } 
       name     = "Divizie 20 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 60 
       extra    = engineer 
	   brigade_model = 2
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  location = 299
     name     = "IV Armata" 
     id       = {  type = 20600 id = 1010  } 
     Division = 
     {  id       = {  type = 20600 id = 47  } 
       name     = "Divizie 1 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 11
      } 
     Division = 
     {  id       = {  type = 20600 id = 23  } 
       name     = "Divizie 8 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 65 
       extra    = engineer 
	   brigade_model = 3
      } 
    } 
   landunit = 
   {  location = 297
     name     = "XXXXIX. Gebirgskorps" 
     id       = {  type = 20600 id = 71  } 
     Division = 
     {  id       = {  type = 20600 id = 1004  } 
       name     = "Divizie 8 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 10
      } 
     Division = 
     {  id       = {  type = 20600 id = 1005  } 
       name     = "Divizie 1 Armura" 
       type     = armor 
       strength = 60 
	   model = 1
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  location = 306 
     name     = "III Armata" 
     id       = {  type = 20600 id = 63  } 
     Division = 
     {  id       = {  type = 20600 id = 13  } 
       name     = "Divizie 9 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 65 
       extra    = artillery
	   brigade_model = 8
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  location = 306 
     name     = "Corp III Armata" 
     id       = {  type = 20600 id = 1006  } 
     Division = 
     {  id       = {  type = 20600 id = 7  } 
       name     = "Divizie 2 Infanterie" 
       type     = infantry 
	   model = 10
       extra    = artillery 
	   brigade_model = 8
       strength = 65 
      } 
     Division = 
     {  id       = {  type = 20600 id = 17  } 
       name     = "Divizie 15 Infanterie" 
       type     = infantry 
	   model = 10
       extra    = light_armor_brigade
	   brigade_model = 1
       strength = 65 
      }  
      dig_in = 20.000
    } 
   landunit = 
   {  location = 297
     name     = "Corp V Armata" 
     id       = {  type = 20600 id = 64  } 
     Division = 
     {  id       = {  type = 20600 id = 3  } 
       name     = "Divizie Garda Regala"
       type     = infantry 
	   model = 10
       strength = 65 
      }  
     Division = 
     {  id       = {  type = 20600 id = 12  } 
       name     = "Divizie 4 Infanterie" 
       type     = infantry 
	   model = 10
       extra    = engineer 
	   brigade_model = 3
       strength = 65 
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  location = 297 
     name     = "IV. Armeekorps" 
     id       = {  type = 20600 id = 6  } 
     Division = 
     {  id       = {  type = 20600 id = 8  } 
       name     = "Divizie 3 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 65 
       extra    = engineer 
	   brigade_model = 3
      }
     Division = 
     {  id       = {  type = 20600 id = 9  } 
       name     = "Divizie 11 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 60 
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  location = 301
     name     = "Corp VI Armata" 
     id       = {  type = 20600 id = 67  } 
     Division = 
     {  id       = {  type = 20600 id = 36  } 
       name     = "Divizie 1 Infanterie" 
       type     = infantry 
	   model = 10
       extra    = artillery 
	   brigade_model = 8
       strength = 65 
      } 
     Division = 
     {  id       = {  type = 20600 id = 27  } 
       name     = "Divizie 5 Infanterie" 
       type     = infantry 
	   model = 10
       extra    = artillery 
	   brigade_model = 8
       strength = 65 
      } 
     Division = 
     {  id       = {  type = 20600 id = 1011  } 
       name     = "Divizie 7 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 60 
       extra    = engineer 
	   brigade_model = 3
      } 
     Division = 
     {  id       = {  type = 20600 id = 1008  } 
       name     = "Divizie 18 Munte" 
       type     = bergsjaeger 
	   model = 10
       strength = 80 
      } 
     Division = 
     {  id       = {  type = 20600 id = 1012  } 
       name     = "Divizie 13 Infanterie" 
       type     = infantry 
	   model = 10
       strength = 60 
       extra    = engineer 
	   brigade_model = 3
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  location = 306 
     name     = "Corp IV Armata" 
     id       = {  type = 20600 id = 21  } 
     Division = 
     {  id       = {  type = 20600 id = 1009  } 
       name     = "Divizie 5 Cavalerie" 
       type     = cavalry 
       strength = 60 
	   model = 10
      } 
      dig_in = 20.000
    } 
   landunit = 
   {  location = 306
     name     = "XXIX. Armeekorps" 
     id       = {  type = 20600 id = 26  } 
     Division = 
     {  id       = {  type = 20600 id = 19  } 
       name     = "Divizie 21 Infanterie" 
       type     = infantry 
	   model = 10
       extra    = engineer 
	   brigade_model = 3
       strength = 80 
      } 
     Division = 
     {  id       = {  type = 20600 id = 1002  } 
       name     = "Divizie 4 Munte" 
       type     = bergsjaeger 
	   model = 10
       strength = 100 
      }
      dig_in = 20.000
    } 
   landunit = 
   {  location = 304 
     name     = "VII. Armeekorps" 
     id       = {  type = 20600 id = 16  } 
     Division = 
     {  id       = {  type = 20600 id = 32  } 
       name     = "Divizie 14 Infanterie" 
       type     = infantry 
	   model = 10
       extra    = artillery 
	   brigade_model = 8
       strength = 80 
      } 
      dig_in = 20.000
    } 
   navalunit = 
   {  location = 310 # Constanta 
     base     = 310 
     name     = "Flota Romania de Mare" 
     id       = {  type = 20600 id = 100  } 
     Division = 
     {  id    = {  type = 20600 id = 101  } 
       name  = "'NMS Regele Ferdinand' Flotila" 
       type  = destroyer 
       model = 2
      } 
     Division = 
     {  id    = {  type = 20600 id = 102  } 
       name  = "'NMS Delfinul' Flotila" 
       type  = submarine 
       model = 1
      } 
    } 
   airunit = 
   {  location = 316 # Bucuresti 
     base     = 316 
     name     = "Gruparea Aeriana de Lupta" 
     id       = {  type = 20600 id = 103  } 
     Division = 
     {  id       = {  type = 20600 id = 104  } 
       name     = "Grup 1 Avion de Vanatoare" 
       type     = interceptor 
       model    = 4
       strength = 100 
      }
     Division = 
     {  id       = {  type = 20600 id = 105  } 
       name     = "Grup 2 Avion de Vanatoare" 
       type     = interceptor 
       model    = 4
       strength = 100 
      } 
     Division = 
     {  id       = {  type = 20600 id = 106  } 
       name     = "Grup 1 Tactic Bombardier" 
       type     = tactical_bomber 
       model    = 3
       strength = 100 
      }
     Division = 
     {  id       = {  type = 20600 id = 107  } 
       name     = "Grup 2 Tactic Bombardier" 
       type     = tactical_bomber 
       model    = 3
       strength = 42 
      } 
     Division = 
     {  id       = {  type = 20600 id = 108  } 
       name     = "Grup 1 Hidroavioane" 
       type     = naval_bomber 
       model    = 1
       strength = 34 
      } 
    } 
  } 
 
