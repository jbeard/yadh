 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
	ai = "ger_1941.ai"
	ai_settings	= { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
	capital                = 163 
	manpower               = 7200 # based on http://ww2total.com/WW2/History/Orders-of-Battle/Germany/Wehrmacht.htm 
	transports             = 450 
	escorts                = 23 

	# Resource Reserves 
	energy                 = 10000
	metal                  = 5000
	rare_materials         = 15000
	oil                    = 20000 
	supplies               = 10000 
	money                  = 100
	belligerence           = 40
 
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = -200 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation =
    { tag        = CRO
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation = { tag = SLO value = 200 }
    relation = { tag = ENG value = -200 }
    relation = { tag = FIN value = 125 access = yes }
    relation = { tag = U01 value = -200 }
    relation = { tag = HOL value = -200 }
    relation =
    { tag        = HUN
      value      = 200
      access     = yes
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = IRQ value = -200 }
    relation =
    { tag        = ITA
      value      = 200
      access     = yes
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation =
    { tag        = MTN
      value      = 200
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation =
    { tag        = JAP
      value      = 135
      guaranteed = { day = 27 month = september year = 1940 }
    }
    relation = { tag = MAN value = 20 }
    relation = { tag = MEN value = 20 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NIC value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POR value = 75 }
    relation =
    { tag        = ROM
      value      = 200
      access     = yes
      guaranteed = { day = 20 month = november year = 1940 }
    }
    relation = { tag = SAF value = -200 }
    relation = { tag = SCH value = 50 }
    relation =
    { tag        = SER
      value      = 200
      access     = yes
      guaranteed = { day = 1 month = may year = 1941 }
    }
    relation = { tag = SOV value = -200 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1940 }
    }
    relation = { tag = SWE value = 50 access = yes }
    relation = { tag = TUR value = 10 }
    relation = { tag = USA value = -125 }
    relation = { tag = FRA value = 75 guaranteed = { day = 1 month = january year = 1941 } }
    relation = { tag = YEM value = -200 }
    relation = { tag = U02 value = -200 }
    relation = { tag = U05 value = -200 }
  }
   SpyInfo                = {  country = "GER" NumberOfSpies = 7  } 
   
   nationalprovinces      = {  104 105 107 109 110 126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 181 182 183 184 185 216 221 224 225 261 389 392 
 # Austria 
 143 186 187 188 189 190 191 192 193 194 195
 # Czechoslovakia
 200 206 205 197 199 207 198 201 196 202 204 203
 # Poland 
 226 230 222
                             } 
   ownedprovinces         = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185
         186 187 188 189 190 191 192 193 194 195 346 
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497
         109 108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
         365 366 370 377 382 383
         37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
         100 101 102 103 104 105 106 107
                             } 
   controlledprovinces    = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 
         186 187 188 189 190 191 192 193 194 195 346 
         200 206 205 197 199 207 198 201 196 202 204 203
         181 221 222 223 224 225 226 227 228 229 230 231 232 233 234 235 236 237 243 246 261 252
         216 217 218 219 294 220 483 484 485 486 487 488 489 490 491 492 493 494 495 496 497
         109 108 110 111 112 113 114 115 116 117 125 122 123 118 119 124 120 121
         365 366 370 377 382 383
         37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63  64  65  66  67  68  69  70  95  96  97  98  99
         100 101 102 103 104 105 106 107
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
1328 # Qingdao
346 # Maribor
227 231 252 223 # Poland
377 382 383 # Greece
}
	# Germany 1941 techs 
	# ###################### 
	techapps = { 
	# Infantry Division  
	1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Cavalry 
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390
	# Motorized Infantry
	1396 1400
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250 1260
	# Engineers
	1830 1840 1850 1860 1870
	# Supply
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199130
	# Airborne Infantry
	1670 1680
	# Marine Division
	1560 1570 1580 1590

	# Armoured Car  
	2860 2870 2880 2020 2150
	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	# Medium Tank
	2070 2080
	# Heavy Tank
	2100
	# Tank Destroyer
	2170
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Anti-tank Artillery
	2400 2410 2420
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460 2470
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	# Self-Propelled Artillery
	2220
	# Rocket Artillery
	2970
	# SP Anti-Air Artillery Brigade
	22910

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070 12000
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 12020
	# Battlecruiser
	3310 3320 3330 3340 3350
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Submarine 
	3610 3620 3630 3640 3650 3660 3670
	# Aircraft Carrier 
	3510 3520 3530
	# Light Carrier 
	12100 12110 12120 12130
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3760 3900 3910
	# Troopships
	3810 3820 3830

	# Air Transport 
	4290 4250
	# Multirole fighter
	4300 4310 4320 4330 4340 4040 4070
	# CAS
	4400 4170 4280
	# Strategic bomber
	4800 4810 4820 4220
	# Navalbomber
	4700 4710 4190 4200
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850 4860
	# Escort Fighter
	4050 4080
	# CAG
	4900 4910 4920 4930

	# Manufacturing
	5810 5820 5050 5830 5060 5070 5130
	# Construction Engineering 
	5800 5080 5090 5100
	# Oil Refining
	5190 5200 5210
	# Computers & cryptography
	5310 54010 54020 54030 5320 5330 5316 5326 5327 5350 5360 5370
	# Atomic Research
	5470 5480 5490 5500
	# Exp. Rocket
	5560
	# Agriculture 
	5700 5710 5010 5020 5030
	# Medicine
	5600 5610 5620 5630 5640
	# Radar
	5410 5416 5417 5420
	# Assembly Line
	5140 5160 5180
	# Specialised Equipment
	5960 5970

	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6900 
	#Great War Hospital System 
	14000 14010 14020 14030

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9190 9200 9210 9220 9230 9240 9270
	9280

	#Naval Doctrines
	8010 8020 8030 8040 8050 8060 8070 8080
	# Amphib
	82300 82310 82320
	# Naval Logistics
	82500 82510
	# Naval Interdiction
	8500 8510 8520 8550 8560 8570 8600 
	# Trade Interdiction Submarine
	8610 8620
	# Indirect Approach
	81300 81310 81320 81330 81340 81350 81360 81370
	# Naval Supremacy
	8100 8110 8120 8150 8160 8170 8200 8210

	# Rocket Tech
	7550 7560 7570 7580 7100 7010
	} 
	
inventions = { 3000027 3000028 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 2 
     professional_army = 8 
     defense_lobby     = 10 
     interventionism   = 10 
    }
   headofstate            = {  type = 9 id = 1   } 
   headofgovernment       = {  type = 9 id = 23  } 
   foreignminister        = {  type = 9 id = 35  } 
   armamentminister       = {  type = 9 id = 70  } 
   ministerofsecurity     = {  type = 9 id = 86  } 
   ministerofintelligence = {  type = 9 id = 6   } 
   chiefofstaff           = {  type = 9 id = 132 } 
   chiefofarmy            = {  type = 9 id = 146 } 
   chiefofnavy            = {  type = 9 id = 9   } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  2 3 4 7 8 14 26 27 32 33 44 56 94 109 151 152 17 45 55 74 75 131 140 175 } 
   dormant_leaders        = {  576 604 608  } 

   # ARMY HIGH COMMAND
   landunit = 
   { location = 163 
     name     = "Oberkommando des Heeres" 
     leader   = 281 # von Brauchitsch
     id       = {  type = 14500 id = 1  } 
     division = 
     { id       = {  type = 14500 id = 2  } 
       name     = "Oberkommando des Heeres" 
       type     = hq 
       model    = 3 
       strength = 90 
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 325  } 
       name     = "93. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 326  } 
       name     = "94. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 327  } 
       name     = "98. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
     division = 
     { id       = {  type = 14500 id = 328  } 
       name     = "260. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
    }
   # ARMY NORWAY
   landunit = 
   { location = 483 
     name     = "Armee Norwegen" 
     leader   = 293 # von Falkenhorst
     id       = {  type = 14500 id = 3  } 
     division = 
     { id       = {  type = 14500 id = 4  } 
       name     = "A.O.K. 21" 
       type     = hq 
       model    = 3 
       strength = 50 
      }
     division = 
     { id       = {  type = 14500 id = 5  } 
       name     = "710. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60 
      }
    }
   landunit = 
   { location = 485 
     name     = "LXX. Hoh.Kdo." 
     id       = {  type = 14500 id = 6  } 
     division = 
     { id       = {  type = 14500 id = 7  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 491 
     name     = "LXX. Hoh.Kdo." 
     id       = {  type = 14500 id = 8  } 
     division = 
     { id       = {  type = 14500 id = 9  } 
       name     = "214. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 493 
     name     = "LXX. Hoh.Kdo." 
     id       = {  type = 14500 id = 10  } 
     division = 
     { id       = {  type = 14500 id = 11  } 
       name     = "163. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 495 
     name     = "XXXIII. Hoh.Kdo." 
     id       = {  type = 14500 id = 12  } 
     division = 
     { id       = {  type = 14500 id = 13  } 
       name     = "181. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
       extra    = police
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 14  } 
       name     = "196. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
      }
    }
   landunit = 
   { location = 517 
     name     = "Gebirgskorps Norwegen" 
     id       = {  type = 14500 id = 15  } 
     division = 
     { id       = {  type = 14500 id = 16  } 
       name     = "2. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
       offensive = { year = 1941 month = august day = 15 } 
      }
     division = 
     { id       = {  type = 14500 id = 17  } 
       name     = "3. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 } 
      }
     division = 
     { id       = {  type = 14500 id = 18  } 
       name     = "199. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 19  } 
       name     = "702. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 514 
     name     = "XXXVI. Hoh.Kdo." 
     id       = {  type = 14500 id = 20  } 
     division = 
     { id       = {  type = 14500 id = 21  } 
       name     = "169. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # ARMY GROUP NORTH
   landunit = 
   { location = 184 
     name     = "Heeresgruppe Nord Reserve" 
     leader   = 315 # von Leeb
     id       = {  type = 14500 id = 22  } 
     division = 
     { id       = {  type = 14500 id = 24  } 
       name     = "206. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 25  } 
       name     = "251. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 26  } 
       name     = "254. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 184 
     name     = "Befh.ruckw.Heeresgebiet 101" 
     id       = {  type = 14500 id = 27  } 
     division = 
     { id       = {  type = 14500 id = 28  } 
       name     = "207. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 29  } 
       name     = "281. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 30  } 
       name     = "285. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 18th Army
   landunit = 
   { location = 261 
     name     = "18. Armee" 
     leader   = 313 # von Küchler
     id       = {  type = 14500 id = 31  } 
     division = 
     { id       = {  type = 14500 id = 32  } 
       name     = "A.O.K. 18" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 33  } 
       name     = "291. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 261 
     name     = "I. Armeekorps" 
     id       = {  type = 14500 id = 36  } 
     division = 
     { id       = {  type = 14500 id = 37  } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 38  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 39  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 261 
     name     = "XXVI. Armeekorps" 
     id       = {  type = 14500 id = 40  } 
     division = 
     { id       = {  type = 14500 id = 41  } 
       name     = "61. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 42  } 
       name     = "217. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 4th Panzer Group
   landunit = 
   { location = 252 
     leader   = 139 # Höppner
     name     = "Panzergruppe 4" 
     id       = {  type = 14500 id = 43  } 
     division = 
     { id       = {  type = 14500 id = 44  } 
       name     = "Panzergruppe 4" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 45  } 
       name     = "3. Waffen SS-Division 'Totenkopf'" 
       type     = motorized 
       model    = 1 
       strength = 100 
       extra    = sp_artillery
       brigade_model = 0 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 252 
     name     = "XXXXI. Armeekorps (mot)" 
     id       = {  type = 14500 id = 46  } 
     division = 
     { id       = {  type = 14500 id = 47  } 
       name     = "1. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 48  } 
       name     = "6. Panzer-Division" 
       type     = light_armor 
       model    = 2 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 49  } 
       name     = "36. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 50  } 
       name     = "269. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 252 
     name     = "LVI. Armeekorps (mot)" 
     id       = {  type = 14500 id = 51  } 
     division = 
     { id       = {  type = 14500 id = 52  } 
       name     = "8. Panzer-Division" 
       type     = light_armor 
       model    = 2 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 53  } 
       name     = "3. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100 
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 54  } 
       name     = "290. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 16th Army
   landunit = 
   { location = 182 
     name     = "16. Armee" 
     leader   = 33 # Busch
     id       = {  type = 14500 id = 55  } 
     division = 
     { id       = {  type = 14500 id = 56  } 
       name     = "A.O.K. 16" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 57  } 
       name     = "253. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 182 
     name     = "II. Armeekorps" 
     id       = {  type = 14500 id = 58  } 
     division = 
     { id       = {  type = 14500 id = 59  } 
       name     = "12. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 60  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 61  } 
       name     = "121. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 182 
     name     = "X. Armeekorps" 
     id       = {  type = 14500 id = 62  } 
     division = 
     { id       = {  type = 14500 id = 63  } 
       name     = "30. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 64  } 
       name     = "126. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 182 
     name     = "XXVIII. Armeekorps" 
     id       = {  type = 14500 id = 65  } 
     division = 
     { id       = {  type = 14500 id = 66  } 
       name     = "122. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 67  } 
       name     = "123. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # ARMY GROUP CENTRE
   landunit = 
   { location = 232 
     name     = "Heeresgruppe Mitte Reserve" 
     leader   = 278 # von Bock
     id       = {  type = 14500 id = 68  } 
     division = 
     { id       = {  type = 14500 id = 70  } 
       name     = "293. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 232 
     name     = "Befh.ruckw.Heeresgebiet 102" 
     id       = {  type = 14500 id = 71  } 
     division = 
     { id       = {  type = 14500 id = 72  } 
       name     = "221. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 73  } 
       name     = "286. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 74  } 
       name     = "403. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 9th Army
   landunit = 
   { location = 185 
     name     = "9. Armee" 
     leader   = 257 # Strauss
     id       = {  type = 14500 id = 75  } 
     division = 
     { id       = {  type = 14500 id = 76  } 
       name     = "A.O.K. 9" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 77  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 78  } 
       name     = "102. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 79  } 
       name     = "129. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 185 
     name     = "V. Armeekorps" 
     id       = {  type = 14500 id = 80  } 
     division = 
     { id       = {  type = 14500 id = 81  } 
       name     = "5. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 82  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 185 
     name     = "VI. Armeekorps" 
     id       = {  type = 14500 id = 83  } 
     division = 
     { id       = {  type = 14500 id = 84  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 85  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 252 
     name     = "VIII. Armeekorps" 
     id       = {  type = 14500 id = 34  } 
     division = 
     { id       = {  type = 14500 id = 86  } 
       name     = "8. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 35  } 
       name     = "28. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 87  } 
       name     = "161. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 185 
     name     = "XX. Armeekorps" 
     id       = {  type = 14500 id = 88  } 
     division = 
     { id       = {  type = 14500 id = 89  } 
       name     = "162. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 90  } 
       name     = "256. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 230 
     name     = "XXXXII. Armeekorps" 
     id       = {  type = 14500 id = 91  } 
     division = 
     { id       = {  type = 14500 id = 92  } 
       name     = "106. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 93  } 
       name     = "110. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 3rd Panzer Group
   landunit = 
   { location = 230 
     name     = "Panzergruppe 3" 
     leader   = 142 # Hoth
     id       = {  type = 14500 id = 94  } 
     division = 
     { id       = {  type = 14500 id = 95  } 
       name     = "Panzergruppe 3" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 96  } 
       name     = "7. Panzer-Division" 
       type     = light_armor 
       model    = 2 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 97  } 
       name     = "20. Panzer-Division" 
       type     = light_armor 
       model    = 2 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 98  } 
       name     = "14. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 99  } 
       name     = "20. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 230 
     name     = "LVII. Armeekorps (mot)" 
     id       = {  type = 14500 id = 100  } 
     division = 
     { id       = {  type = 14500 id = 101  } 
       name     = "12. Panzer-Division" 
       type     = light_armor 
       model    = 2 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 102  } 
       name     = "19. Panzer-Division" 
       type     = light_armor 
       model    = 2 
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 103  } 
       name     = "18. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 2nd Panzer Group
   landunit = 
   { location = 229 
     name     = "Panzergruppe 2" 
     leader   = 94 # Guderian
     id       = {  type = 14500 id = 104  } 
     division = 
     { id       = {  type = 14500 id = 105  } 
       name     = "Panzergruppe 2" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 106  } 
       name     = "255. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 229 
     name     = "XII. Armeekorps" 
     id       = {  type = 14500 id = 107  } 
     division = 
     { id       = {  type = 14500 id = 108  } 
       name     = "31. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 109  } 
       name     = "34. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 110  } 
       name     = "45. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 228 
     name     = "XXIV. Armeekorps (mot)" 
     id       = {  type = 14500 id = 111  } 
     division = 
     { id       = {  type = 14500 id = 112  } 
       name     = "3. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 113  } 
       name     = "4. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 114  } 
       name     = "10. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 115  } 
       name     = "1. Kavallerie-Division" 
       type     = cavalry 
       model    = 11 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 116  } 
       name     = "267. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 228 
     name     = "XXXXVI. Armeekorps (mot)" 
     id       = {  type = 14500 id = 117  } 
     division = 
     { id       = {  type = 14500 id = 118  } 
       name     = "10. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 119  } 
       name     = "2. Waffen SS-Division 'Das Reich'" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "XXXXVII. Armeekorps (mot)" 
     id       = {  type = 14500 id = 120  } 
     division = 
     { id       = {  type = 14500 id = 121  } 
       name     = "17. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 122  } 
       name     = "18. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 123  } 
       name     = "29. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 124  } 
       name     = "167. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 4th Army
   landunit = 
   { location = 228 
     name     = "4. Armee" 
     leader   = 310 # von Kluge
     id       = {  type = 14500 id = 125  } 
     division = 
     { id       = {  type = 14500 id = 126  } 
       name     = "A.O.K. 4" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 127  } 
       name     = "131. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 128  } 
       name     = "134. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 129  } 
       name     = "252. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "VII. Armeekorps" 
     id       = {  type = 14500 id = 130  } 
     division = 
     { id       = {  type = 14500 id = 131  } 
       name     = "7. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 132  } 
       name     = "23. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 133  } 
       name     = "258. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 134  } 
       name     = "268. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "IX. Armeekorps" 
     id       = {  type = 14500 id = 135  } 
     division = 
     { id       = {  type = 14500 id = 136  } 
       name     = "137. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 137  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 138  } 
       name     = "292. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "XIII. Armeekorps" 
     id       = {  type = 14500 id = 139  } 
     division = 
     { id       = {  type = 14500 id = 140  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 141  } 
       name     = "78. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # ARMY GROUP SOUTH
   landunit = 
   { location = 235 
     name     = "Heeresgruppe Süd Reserve" 
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 142  } 
     division = 
     { id       = {  type = 14500 id = 144  } 
       name     = "99. Jäger-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 235 
     name     = "Befh.ruckw.Heeresgebiet 103" 
     id       = {  type = 14500 id = 145  } 
     division = 
     { id       = {  type = 14500 id = 146  } 
       name     = "213. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 147  } 
       name     = "444. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 148  } 
       name     = "454. Sicherungs-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = police
       brigade_model = 1
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 6th Army
   landunit = 
   { location = 246 
     name     = "6. Armee" 
     leader   = 333 # von Reichenau
     id       = {  type = 14500 id = 149  } 
     division = 
     { id       = {  type = 14500 id = 150  } 
       name     = "A.O.K. 6" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 151  } 
       name     = "298. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "LV. Armeekorps" 
     id       = {  type = 14500 id = 152  } 
     division = 
     { id       = {  type = 14500 id = 153  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 154  } 
       name     = "168. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "XVII. Armeekorps" 
     id       = {  type = 14500 id = 155  } 
     division = 
     { id       = {  type = 14500 id = 156  } 
       name     = "56. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "62. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "XXIX. Armeekorps" 
     id       = {  type = 14500 id = 158  } 
     division = 
     { id       = {  type = 14500 id = 159  } 
       name     = "44. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 160  } 
       name     = "111. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 161  } 
       name     = "299. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 246 
     name     = "XXXXIV. Armeekorps" 
     id       = {  type = 14500 id = 162  } 
     division = 
     { id       = {  type = 14500 id = 163  } 
       name     = "9. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 164  } 
       name     = "297. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 1st Panzer Group
   landunit = 
   { location = 243 
     leader   = 309 # von Kleist
     name     = "Panzergruppe 1" 
     id       = {  type = 14500 id = 165  } 
     division = 
     { id       = {  type = 14500 id = 166  } 
       name     = "Panzergruppe 1" 
       type     = hq 
       model    = 3 
       strength = 75 
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 167  } 
       name     = "9. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 168  } 
       name     = "16. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 169  } 
       name     = "16. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 170  } 
       name     = "25. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 171  } 
       name     = "1. SS 'Leibstandarte Adolf Hitler'" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = tank_destroyer
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 172  } 
       name     = "5. Waffen SS-Division 'Wiking'" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 237 
     name     = "XIV. Armeekorps (mot)" 
     id       = {  type = 14500 id = 173  } 
     division = 
     { id       = {  type = 14500 id = 174  } 
       name     = "13. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 237 
     name     = "III. Armeekorps (mot)" 
     id       = {  type = 14500 id = 175  } 
     division = 
     { id       = {  type = 14500 id = 176  } 
       name     = "14. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 237 
     name     = "XXXXVIII. Armeekorps (mot)" 
     id       = {  type = 14500 id = 177  } 
     division = 
     { id       = {  type = 14500 id = 178  } 
       name     = "11. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 100
       extra    = sp_artillery
       brigade_model = 0
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 179  } 
       name     = "57. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = cavalry_brigade
       brigade_model = 11
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 17th Army
   landunit = 
   { location = 236 
     name     = "17. Armee" 
     leader   = 343 # von Stülpnagel  C.H.
     id       = {  type = 14500 id = 180  } 
     division = 
     { id       = {  type = 14500 id = 181  } 
       name     = "A.O.K. 17" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 182  } 
       name     = "97. Jäger-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 183  } 
       name     = "100. Jäger-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 184  } 
       name     = "101. Jäger-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 236 
     name     = "IV. Armeekorps" 
     id       = {  type = 14500 id = 185  } 
     division = 
     { id       = {  type = 14500 id = 186  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 187  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 188  } 
       name     = "262. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 189  } 
       name     = "295. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 190  } 
       name     = "296. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 213 
     name     = "XXXXIX. Gebirgskorps" 
     id       = {  type = 14500 id = 191  } 
     division = 
     { id       = {  type = 14500 id = 192  } 
       name     = "1. Gebirgsjäger-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 193  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 194  } 
       name     = "257. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   # 11th Army
   landunit = 
   { location = 297 
     name     = "11. Armee" 
     leader   = 340 # von Schobert
     id       = {  type = 14500 id = 195  } 
     division = 
     { id       = {  type = 14500 id = 196  } 
       name     = "A.O.K. 11" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 197  } 
       name     = "22. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 198  } 
       name     = "72. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 301 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 199  } 
     division = 
     { id       = {  type = 14500 id = 200  } 
       name     = "76. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 201  } 
       name     = "239. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 292 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 202  } 
     division = 
     { id       = {  type = 14500 id = 203  } 
       name     = "198. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 297 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 204  } 
     division = 
     { id       = {  type = 14500 id = 205  } 
       name     = "50. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 206  } 
       name     = "170. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = medium_armor
       brigade_model = 2
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 183 
     name     = "L. Armeekorps" 
     id       = {  type = 14500 id = 207  } 
     division = 
     { id       = {  type = 14500 id = 208  } 
       name     = "86. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 209  } 
       name     = "4. Waffen SS-Division 'Polizei'" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = armored_car
       brigade_model = 4
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 243 
     name     = "LII. Armeekorps" 
     id       = {  type = 14500 id = 210  } 
     division = 
     { id       = {  type = 14500 id = 211  } 
       name     = "52. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      }
    }
   landunit = 
   { location = 234 
     name     = "XXXV. Hoh.Kdo." 
     id       = {  type = 14500 id = 212  } 
     division = 
     { id       = {  type = 14500 id = 213  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 214  } 
       name     = "112. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      } 
     division = 
     { id       = {  type = 14500 id = 215  } 
       name     = "197. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      } 
    }
   landunit = 
   { location = 213 
     name     = "XXXXII. Armeekorps" 
     id       = {  type = 14500 id = 216  } 
     division = 
     { id       = {  type = 14500 id = 217  } 
       name     = "4. Gebirgsjäger-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      }
     division = 
     { id       = {  type = 14500 id = 218  } 
       name     = "125. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      } 
    }
   landunit = 
   { location = 235 
     name     = "XXXIV. Hoh.Kdo." 
     id       = {  type = 14500 id = 219  } 
     division = 
     { id       = {  type = 14500 id = 220  } 
       name     = "132. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      } 
    }
   landunit = 
   { location = 235 
     name     = "LI. Armeekorps" 
     id       = {  type = 14500 id = 221  } 
     division = 
     { id       = {  type = 14500 id = 222  } 
       name     = "79. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       extra    = artillery
       brigade_model = 9
       offensive = { year = 1941 month = august day = 15 }
      } 
     division = 
     { id       = {  type = 14500 id = 223  } 
       name     = "95. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      } 
     division = 
     { id       = {  type = 14500 id = 224  } 
       name     = "113. Infanterie-Division" 
       type     = infantry 
       model    = 10
       strength = 100
       offensive = { year = 1941 month = august day = 15 }
      } 
    }
   # 12th Army
   landunit = 
   { location = 338 
     name     = "12. Armee" 
     leader   = 188 # List
     id       = {  type = 14500 id = 225  } 
     division = 
     { id       = {  type = 14500 id = 226  } 
       name     = "A.O.K. 12" 
       type     = hq 
       model    = 3 
       strength = 75 
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 227  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
      }
     division = 
     { id       = {  type = 14500 id = 228  } 
       name     = "73. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
      }
     division = 
     { id       = {  type = 14500 id = 229  } 
       name     = "183. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
      }
     division = 
     { id       = {  type = 14500 id = 230  } 
       name     = "294. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
      }
    }
   landunit = 
   { location = 377 
     name     = "LXV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 231  } 
     division = 
     { id       = {  type = 14500 id = 232  } 
       name     = "717. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
       extra    = police
       brigade_model = 1
      }
    }
   landunit = 
   { location = 365 
     name     = "LXV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 233  } 
     division = 
     { id       = {  type = 14500 id = 234  } 
       name     = "704. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
     division = 
     { id       = {  type = 14500 id = 235  } 
       name     = "714. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 366 
     name     = "LXV. Hoh.Kdo.z.b.V." 
     id       = {  type = 14500 id = 236  } 
     division = 
     { id       = {  type = 14500 id = 237  } 
       name     = "718. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 382 
     name     = "XVIII. Gebirgskorps" 
     id       = {  type = 14500 id = 238  } 
     division = 
     { id       = {  type = 14500 id = 239  } 
       name     = "5. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
      }
     division = 
     { id       = {  type = 14500 id = 240  } 
       name     = "6. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100
       extra    = artillery
       brigade_model = 9
      }
     division = 
     { id       = {  type = 14500 id = 1009  } 
       name     = "7. Flieger-Division" 
       type     = paratrooper 
       model    = 1 
       strength = 20
      }
    }
   landunit = 
   { location = 345 
     name     = "12. Armee Reserve" 
     id       = {  type = 14500 id = 241  } 
     division = 
     { id       = {  type = 14500 id = 242  } 
       name     = "164. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100
       extra    = police
       brigade_model = 1
      }
    }
   # GERMAN AFRICA CORPS
   landunit = 
   { location = 771 
     name     = "Deutsche Afrika-Korps" 
     leader   = 229 # Rommel
     id       = {  type = 14500 id = 243  } 
     division = 
     { id       = {  type = 14500 id = 244  } 
       name     = "15. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 50
       extra    = tank_destroyer
       brigade_model = 0
      }
     division = 
     { id       = {  type = 14500 id = 245  } 
       name     = "5. lei. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 100
       extra    = armored_car
       brigade_model = 4
      }
    }
   landunit = 
   { location = 772 
     name     = "XXI Corpo d'Armata" 
     id       = {  type = 14500 id = 246  } 
     division = 
     { id       = {  type = 14500 id = 247  } 
       name     = "90. lei. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
       extra    = artillery
       brigade_model = 9
      }
    }
   # DENMARK OCCUPATION FORCE
   landunit = 
   { location = 294 
     name     = "Befh. der Truppen Dänemark" 
     id       = {  type = 14500 id = 248  } 
     division = 
     { id       = {  type = 14500 id = 249  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
    }
   # NETHERLANDS OCCUPATION FORCE
   landunit = 
   { location = 122 
     name     = "Kdr.d.Tps. Niederlände" 
     id       = {  type = 14500 id = 250  } 
     division = 
     { id       = {  type = 14500 id = 251  } 
       name     = "82. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 252  } 
       name     = "719. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   # GERMAN ARMY COMMAND IN THE WEST
   landunit = 
   { location = 55 
     name     = "Oberbefehlshaber West Reserve" 
     leader   = 353 # von Witzleben
     id       = {  type = 14500 id = 253  } 
     division = 
     { id       = {  type = 14500 id = 254  } 
       name     = "96. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80
      }
    }
   # 7th Army
   landunit = 
   { location = 58 
     name     = "XXXI. Hoh.Kdo." 
     leader   = 52 # Dollmann
     id       = {  type = 14500 id = 258  }
     division = 
     { id       = {  type = 14500 id = 257  } 
       name     = "A.O.K. 7" 
       type     = hq 
       model    = 3 
       strength = 60 
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 259  } 
       name     = "88. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 260  } 
       name     = "212. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 261  } 
       name     = "223. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 262  } 
       name     = "333. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 263  } 
       name     = "708. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      } 
    }
   landunit = 
   { location = 37 
     name     = "LIX. Hoh.Kdo." 
     id       = {  type = 14500 id = 264  }
     division = 
     { id       = {  type = 14500 id = 265  } 
       name     = "81. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 266  } 
       name     = "246. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 39 
     name     = "LIX. Hoh.Kdo." 
     id       = {  type = 14500 id = 267  }
     division = 
     { id       = {  type = 14500 id = 268  } 
       name     = "305. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 40 
     name     = "LIX. Hoh.Kdo." 
     id       = {  type = 14500 id = 269  }
     division = 
     { id       = {  type = 14500 id = 270  } 
       name     = "715. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 43 
     name     = "XXV. Armeekorps" 
     id       = {  type = 14500 id = 271  }
     division = 
     { id       = {  type = 14500 id = 272  } 
       name     = "709. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 46 
     name     = "XXV. Armeekorps" 
     id       = {  type = 14500 id = 273  }
     division = 
     { id       = {  type = 14500 id = 274  } 
       name     = "205. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 275  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 44 
     name     = "XXV. Armeekorps" 
     id       = {  type = 14500 id = 276  }
     division = 
     { id       = {  type = 14500 id = 277  } 
       name     = "712. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   # 1st Army
   landunit = 
   { location = 68 
     name     = "XXXXV. Hoh.Kdo." 
     leader   = 20 # Blaskowitz
     id       = {  type = 14500 id = 280  }
     division = 
     { id       = {  type = 14500 id = 279  } 
       name     = "A.O.K. 1" 
       type     = hq 
       model    = 3 
       strength = 60 
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 281  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 282  } 
       name     = "339. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 67 
     name     = "XXXXV. Hoh.Kdo." 
     id       = {  type = 14500 id = 283  }
     division = 
     { id       = {  type = 14500 id = 284  } 
       name     = "342. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 69 
     name     = "XXVII. Hoh.Kdo." 
     id       = {  type = 14500 id = 285  }
     division = 
     { id       = {  type = 14500 id = 286  } 
       name     = "327. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 287  } 
       name     = "335. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 57 
     name     = "XXVII. Hoh.Kdo." 
     id       = {  type = 14500 id = 288  }
     division = 
     { id       = {  type = 14500 id = 289  } 
       name     = "337. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   # 15th Army
   landunit = 
   { location = 52 
     name     = "15. Armee" 
     leader   = 101 # Haase  C.
     id       = {  type = 14500 id = 290  } 
     division = 
     { id       = {  type = 14500 id = 291  } 
       name     = "A.O.K. 15" 
       type     = hq 
       model    = 3 
       strength = 60 
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 292  } 
       name     = "711. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 51 
     name     = "LX. Hoh.Kdo." 
     id       = {  type = 14500 id = 293  }
     division = 
     { id       = {  type = 14500 id = 294  } 
       name     = "83. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 295  } 
       name     = "319. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 114 
     name     = "LX. Hoh.Kdo." 
     id       = {  type = 14500 id = 296  }
     division = 
     { id       = {  type = 14500 id = 297  } 
       name     = "216. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 298  } 
       name     = "323. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 53 
     name     = "XXXII. Hoh.Kdo." 
     id       = {  type = 14500 id = 299  }
     division = 
     { id       = {  type = 14500 id = 300  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 301  } 
       name     = "302. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 49 
     name     = "XXXII. Hoh.Kdo." 
     id       = {  type = 14500 id = 302  }
     division = 
     { id       = {  type = 14500 id = 303  } 
       name     = "332. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 304  } 
       name     = "336. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 305  } 
       name     = "716. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 115 
     name     = "XXXVII. Hoh.Kdo." 
     id       = {  type = 14500 id = 306  }
     division = 
     { id       = {  type = 14500 id = 307  } 
       name     = "208. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 308  } 
       name     = "227. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 309  } 
       name     = "304. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 310  } 
       name     = "306. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   landunit = 
   { location = 125 
     name     = "XXXVII. Hoh.Kdo." 
     id       = {  type = 14500 id = 311  }
     division = 
     { id       = {  type = 14500 id = 312  } 
       name     = "320. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 313  } 
       name     = "321. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
     division = 
     { id       = {  type = 14500 id = 314  } 
       name     = "340. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 70
      }
    }
   # HOME ARMY
   landunit = 
   { location = 163 
     name     = "Wehrkreiskommando III" 
     id       = {  type = 14500 id = 315  }
     division = 
     { id       = {  type = 14500 id = 316  } 
       name     = "5. Panzer-Division" 
       type     = armor 
       model    = 1 
       strength = 60
      }
    }
   landunit = 
   { location = 179 
     name     = "Wehrkreiskommando VII" 
     id       = {  type = 14500 id = 317  }
     division = 
     { id       = {  type = 14500 id = 318  } 
       name     = "2. Panzer-Division" 
       type     = armor 
       model    = 0 
       strength = 60
      }
     division = 
     { id       = {  type = 14500 id = 319  } 
       name     = "707. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 177 
     name     = "Wehrkreiskommando XIII" 
     id       = {  type = 14500 id = 320  }
     division = 
     { id       = {  type = 14500 id = 321  } 
       name     = "713. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 60
      }
    }
   landunit = 
   { location = 195 
     name     = "Wehrkreiskommando XVII" 
     id       = {  type = 14500 id = 322  }
     division = 
     { id       = {  type = 14500 id = 323  } 
       name     = "60. Infanterie-Division (mot)" 
       type     = motorized 
       model    = 1 
       strength = 70
      }
    }
   ##########################################
   ## Kriegsmarine

   # ATLANTIC FLEET
   navalunit = 
   { name     = "Atlantische Flotte" 
     id       = {  type = 14500 id = 400  } 
     location = 37 
     base     = 37
     division = 
     { id    = {  type = 14500 id = 401  } 
       name  = "Gneisenau" 
       type  = battlecruiser 
       model = 3
      } 
     division = 
     { id    = {  type = 14500 id = 402  } 
       name  = "Scharnhorst" 
       type  = battlecruiser 
       model = 3
      }
     division = 
     { id    = {  type = 14500 id = 403  } 
       name  = "Prinz Eugen" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 404  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
     division = 
     { id    = {  type = 14500 id = 405  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
     division = 
     { id    = {  type = 14500 id = 406  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
      } 
    } 
   # BALTIC FLEET
   navalunit = 
   { name     = "Baltische Flotte" 
     id       = {  type = 14500 id = 407  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 408  } 
       name  = "Tirpitz" 
       type  = battleship 
       model = 7
      }
     division = 
     { id    = {  type = 14500 id = 409  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
      }
     division = 
     { id    = {  type = 14500 id = 410  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 411  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
     division = 
     { id    = {  type = 14500 id = 412  } 
       name  = "1. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 413  } 
       name  = "2. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 414  } 
       name  = "3. Truppentransporterflottille" 
       type  = transport 
       model = 2 
      }
    }
   # LÜTZOW SQUADRON
   navalunit = 
   { name     = "Lützow Geschwader" 
     id       = {  type = 14500 id = 415  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 416  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
      }
     division = 
     { id    = {  type = 14500 id = 417  } 
       name  = "Lützow" 
       type  = heavy_cruiser 
       model = 4
      }
    } 
   # 5TH DESTROYER SQUADRON
   navalunit = 
   { name     = "5. Zerstörergeschwader" 
     id       = {  type = 14500 id = 418  } 
     location = 491 
     base     = 491
     division = 
     { id    = {  type = 14500 id = 419  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # 8TH DESTROYER SQUADRON
   navalunit = 
   { name     = "8. Zerstörergeschwader" 
     id       = {  type = 14500 id = 420  } 
     location = 495 
     base     = 495
     division = 
     { id    = {  type = 14500 id = 421  } 
       name  = "8. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    }
   # KRIEGSMARINE RESERVE
   navalunit = 
   { name     = "Kriegsmarine Reserve" 
     id       = {  type = 14500 id = 422  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 423  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
      }
     division = 
     { id    = {  type = 14500 id = 424  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 425  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 426  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 427  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 428  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    } 
   # 1ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "I. Unterseebootsflottille" 
     id       = {  type = 14500 id = 429  } 
     location = 2657 
     base     = 69
     division = 
     { id    = {  type = 14500 id = 430  } 
       name  = "11. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 431  } 
       name  = "12. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 2ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "II. Unterseebootsflottille" 
     id       = {  type = 14500 id = 432  } 
     location = 2657 
     base     = 39
     division = 
     { id    = {  type = 14500 id = 433  } 
       name  = "21. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 434  } 
       name  = "22. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 3RD SUBMARINE FLOTILLA
   navalunit = 
   { name     = "III. Unterseebootsflottille" 
     id       = {  type = 14500 id = 435  } 
     location = 2659 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 436  } 
       name  = "31. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 437  } 
       name  = "32. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 4TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "IV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 438  } 
     location = 158 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 439  } 
       name  = "41. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 440  } 
       name  = "42. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 5TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "V. Unterseebootsflottille" 
     id       = {  type = 14500 id = 441  } 
     location = 2659 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 442  } 
       name  = "51. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 443  } 
       name  = "52. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 6TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 444  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 445  } 
       name  = "61. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 446  } 
       name  = "62. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 7TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "VII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 447  } 
     location = 2670 
     base     = 40
     division = 
     { id    = {  type = 14500 id = 448  } 
       name  = "71. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 449  } 
       name  = "72. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 21ST SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 450  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 451  } 
       name  = "211. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 452  } 
       name  = "212. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 22ND SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 453  } 
     location = 2721 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 454  } 
       name  = "221. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 455  } 
       name  = "222. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 24TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXIV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 456  } 
     location = 261 
     base     = 261
     division = 
     { id    = {  type = 14500 id = 457  } 
       name  = "241. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 458  } 
       name  = "242. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # 25TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXV. Unterseebootsflottille" 
     id       = {  type = 14500 id = 459  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 460  } 
       name  = "251. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 26TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVI. Unterseebootsflottille" 
     id       = {  type = 14500 id = 461  } 
     location = 184 
     base     = 184
     division = 
     { id    = {  type = 14500 id = 462  } 
       name  = "261. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # 27TH SUBMARINE FLOTILLA
   navalunit = 
   { name     = "XXVII. Unterseebootsflottille" 
     id       = {  type = 14500 id = 463  } 
     location = 226 
     base     = 226
     division = 
     { id    = {  type = 14500 id = 464  } 
       name  = "271. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }

   ##########################################
   ## Luftwaffe
  # 1ST AIR FLEET
  airunit =
  { location = 184
    base     = 184
    id       = { type = 14500 id = 500 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 501 }
      name       = "JG 54 'Grünherz'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 502 }
      name       = "KG 1 'Hindenburg'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 503 }
      name       = "Kampfgeschwader 76"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 504 }
      name       = "Kampfgeschwader 77"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 232
    base     = 232
    id       = { type = 14500 id = 505 }
    name     = "Luftflotte II"
    division =
    { id         = { type = 14500 id = 506 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
  }
  airunit =
  { location = 232
    base     = 232
    id       = { type = 14500 id = 507 }
    name     = "II. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 508 }
      name       = "JG 51 'Mölders'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 509 }
      name       = "KG 3 'Blitz'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 510 }
      name       = "KG 53 'Legion Condor'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 511 }
      name       = "Schnellkampfgeschwader 210"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 512 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 100
      type       = cas
      model      = 1 # Ju 87B
    }
  }
  airunit =
  { location = 228
    base     = 228
    id       = { type = 14500 id = 513 }
    name     = "VIII. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 514 }
      name       = "Sturzkampfgeschwader 1"
      strength   = 100
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 515 }
      name       = "Stukageschwader 2 'Immelmann'"
      strength   = 100
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 516 }
      name       = "Jagdgeschwader 27"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110E
    }
    division =
    { id         = { type = 14500 id = 517 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110C
    }
    division =
    { id         = { type = 14500 id = 518 }
      name       = "KG 2 'Holzhammer'"
      strength   = 100
      type       = tactical_bomber
      model      = 5 # Do 17Z
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 55
    base     = 55
    id       = { type = 14500 id = 519 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 520 }
      name       = "Kampfgeschwader 28"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 521 }
      name       = "KG 4 'General Wever'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 522 }
      name       = "KG 30 'Adler'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
  }
  airunit =
  { location = 37
    base     = 37
    id       = { type = 14500 id = 523 }
    name     = "Fliegerführer Atlantik"
    division =
    { id         = { type = 14500 id = 524 }
      name       = "Kampfgeschwader 40"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
  }
  airunit =
  { location = 52
    base     = 52
    id       = { type = 14500 id = 525 }
    name     = "Jagdfliegerführer 2"
    division =
    { id         = { type = 14500 id = 526 }
      name       = "JG 26 'Schlageter'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 527 }
      name       = "Jagdgeschwader 52"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
  }
  airunit =
  { location = 43
    base     = 43
    id       = { type = 14500 id = 528 }
    name     = "Jagdfliegerführer 3"
    division =
    { id         = { type = 14500 id = 529 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 227
    base     = 227
    id       = { type = 14500 id = 530 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 531 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 9 # Bf 109F
    }
    division =
    { id         = { type = 14500 id = 532 }
      name       = "Lehrgeschwader 2"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 109E
    }
    division =
    { id         = { type = 14500 id = 533 }
      name       = "KG 51 'Edelweiß'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 534 }
      name       = "KG 54 'Totenkopf'"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 535 }
      name       = "KG 55 'Greif'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
  }
  airunit =
  { location = 316
    base     = 316
    id       = { type = 14500 id = 536 }
    name     = "IV. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 537 }
      name       = "KG 27 'Boelcke'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 538 }
      name       = "JG 77 'Herz As'"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 109E
    }
  }
  # 10TH AIR CORPS
  airunit =
  { location = 377
    base     = 377
    id       = { type = 14500 id = 539 }
    name     = "X. Fliegerkorps"
    division =
    { id         = { type = 14500 id = 540 }
      name       = "Lehrgeschwader 1"
      strength   = 100
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 541 }
      name       = "Sturzkampfgeschwader 3"
      strength   = 50
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 542 }
      name       = "Kampfgeschwader z.b.V. 1"
      strength   = 100
      type       = transport_plane
      model      = 1 # Ju 52
    }
    division =
    { id         = { type = 14500 id = 543 }
      name       = "KG 26 'Löwen'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
  }
  # AIR FORCE COMMAND CENTER
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 548 }
    name     = "Luftwaffenbefehlshaber Mitte"
    division =
    { id         = { type = 14500 id = 549 }
      name       = "JG 1 'Oesau'"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 109E
    }
    division =
    { id         = { type = 14500 id = 550 }
      name       = "Nachtjagdgeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 551 }
      name       = "Nachtjagdgeschwader 2"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
    }
    division =
    { id         = { type = 14500 id = 552 }
      name       = "Nachtjagdgeschwader 3"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 110
    }
  }

landdivision = { dormant = yes id = { type = 14500 id = 2027 }  name = "1. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2028 }  name = "2. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2029 }  name = "3. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2030 }  name = "4. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2031 }  name = "5. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2032 }  name = "6. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2033 }  name = "7. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2034 }  name = "8. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2035 }  name = "9. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2036 }  name = "10. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2037 }  name = "11. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2038 }  name = "12. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2039 }  name = "13. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2040 }  name = "14. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2041 }  name = "15. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2042 }  name = "16. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2043 }  name = "17. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2044 }  name = "18. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2045 }  name = "19. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }
landdivision = { dormant = yes id = { type = 14500 id = 2046 }  name = "20. Festung Europa"  type = garrison model = 5 extra = artillery brigade_model = 9 locked  = yes }

   #Units under construction
	division_development = {
		name  = "250. Infanterie-Division 'Azul' (spanische)" 
		type  = infantry
		model = 10
		cost  = 0.1 
		id    = {  type = 14500 id = 600  } 
		date  = {  year = 1941 month = july day = 30  } 
	}
	division_development = {
		name  = "81. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 601  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "82. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 602  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "91. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 603  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "92. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 604  } 
		date  = {  year = 1941 month = october day = 1  } 
	}
	division_development = {
		name  = "101. Unterseeboots-Division" 
		type  = submarine
		model = 6 # Type IX
		cost  = 0.1 
		id    = {  type = 14500 id = 605  } 
		date  = {  year = 1942 month = january day = 1  } 
	}
	division_development = {
		name  = "102. Unterseeboots-Division" 
		type  = submarine
		model = 6 # Type IX
		cost  = 0.1 
		id    = {  type = 14500 id = 606  } 
		date  = {  year = 1942 month = january day = 1  } 
	}
	division_development = {
		name  = "111. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 607  } 
		date  = {  year = 1941 month = december day = 1  } 
	}
	division_development = {
		name  = "112. Unterseeboots-Division" 
		type  = submarine
		model = 5 # Type VII
		cost  = 0.1 
		id    = {  type = 14500 id = 608  } 
		date  = {  year = 1941 month = december day = 1  } 
	}
} 

