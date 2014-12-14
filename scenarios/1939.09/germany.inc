 
 ############################## 
 # Country definition for GER # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = GER 
	ai                     = "GER_1939.ai" 
	ai_settings	= { flags = { GERBuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes RES = yes } }
	capital                = 163 
	manpower               = 1400 # based on http://ww2total.com/WW2/History/Orders-of-Battle/Germany/Wehrmacht.htm 
	transports             = 85 
	escorts                = 23 
	# Resource Reserves 
	energy                 = 2500
	metal                  = 2000
	rare_materials         = 3000
	oil                    = 5000 
	supplies               = 5000 
	money                  = 100
	belligerence           = 20
  diplomacy =
  { relation = { tag = ARG value = 75 }
    relation = { tag = AST value = -200 }
    relation = { tag = BEL value = 20 }
    relation = { tag = BHU value = -200 }
    relation = { tag = BOL value = 15 }
    relation = { tag = BRA value = 50 }
    relation = { tag = BUL value = 125 }
    relation = { tag = CAN value = -200 }
    relation = { tag = CHL value = 50 }
    relation = { tag = COL value = -20 }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = ENG value = -200 }
    relation = { tag = EST value = 10 }
    relation = { tag = FIN value = 80 }
    relation = { tag = FRA value = -200 }
    relation = { tag = HOL value = 1 }
    relation = { tag = HUN value = 150 }
    relation = { tag = IRQ value = 25 }
    relation =
    { tag        = ITA
      value      = 150
      guaranteed = { day = 25 month = october year = 1936 }
    }
    relation = { tag = JAP value = 75 }
    relation = { tag = LAT value = 10 }
    relation = { tag = LIT value = 10 }
    relation = { tag = LUX value = -50 }
    relation = { tag = MAN value = 20 }
    relation = { tag = MEN value = 20 }
    relation = { tag = NEP value = -200 }
    relation = { tag = NZL value = -200 }
    relation = { tag = OMN value = -200 }
    relation = { tag = POL value = -200 }
    relation = { tag = POR value = 75 }
    relation = { tag = ROM value = 120 }
    relation = { tag = SAF value = -200 }
    relation =
    { tag        = SCH
      value      = 50
      guaranteed = { day = 16 month = may year = 1935 }
    }
    relation = { tag = SOV value = 20 }
    relation =
    { tag        = SPA
      value      = 50
      guaranteed = { day = 18 month = november year = 1936 }
    }
    relation = { tag = SWE value = 50 }
    relation = { tag = TUR value = 10 }
    relation = { tag = YEM value = -200 }
    relation = { tag = YUG value = 50 }
    relation = { tag = URU value = 10 }
    relation = { tag = USA value = -50 }
    relation = {  tag = U05 value = 1  }
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
         186 187 188 189 190 191 192 193 194 195 
         200 206 205 197 199 207 198 201 196 202 204
         261
                             } 
   controlledprovinces    = {  126 127 128 129 130 131 132 133 134 135 136 137 138 139 140 141 142 143 144 145 146 147 148 149 150 151 152 153 154 155 156 157 158 159 160 161 162 163 164 165 166 167 168 169 170 171 172 173 174 175 176 177 178 179 180 182 183 184 185 
         186 187 188 189 190 191 192 193 194 195
         200 206 205 197 199 207 198 201 196 202 204
         261
                             } 
claimedprovinces = { 846 847 848 849 850 851 882 883 884 885 886 908 909 910 911 919 925 928 933 936 948 950 955  # Afrika
1234 1587 1602 1603 1605 1610 1665 1666 1667 1668 1669 1670 1671 1674 1675 1676 1677 1681 1684 1685 1686 1725 1726 1727 # Pacific
1731 #Apia
1328 # Qingdao
}
	# Germany 1940 techs 
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
	1910 1920 1930 1940 1950 1960 1970 1980 1990 199130
	# Airborne Infantry
	1670
	# Marine Division
	1560 1570 1580 1590

	# Armoured Car  
	2860 2870 2880 2020 2150
	# Light / Early Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050
	# Medium Tank
	2070
	# Heavy Tank
	2100
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320
	# Anti-tank Artillery
	2400 2410 2420
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200 2460
	# Anti-Air Artillery Brigade 
	2810 2820 2510 2520

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260  
	# Battlecruiser
	3310 3320 3330 3340
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
	4300 4310 4320 4330 4340 4040
	# CAS
	4400 4170
	# Strategic bomber
	4800 4810 4820 4220
	# Navalbomber
	4700 4710 4190
	# Interceptor  
	4500 4510 4520 4530 4540 4550 4010 4020 4030
	# Tactical Bomber
	4600 4610 4620 4630 4120 4130 4140 4150
	# Seaplanes
	4740 4750 4760 4770 4780 4790 4850
	# Escort Fighter
	4050 4080
	# CAG
	4900 4910 4920

	# Manufacturing
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090
	# Oil Refining
	5190 5200
	# Computers & cryptography
	5310 54010 54020 54030 5320 5316 5326 5327 5350 5360
	# Atomic Research
	5470 5480 5490
	# Exp. Rocket
	5560
	# Agriculture 
	5700 5710 5010 5020 5030
	# Medicine
	5600 5610 5620 5630 5640
	# Radar
	5410 5416 5417

	# Great War Land Doctrines (central powers)
	6500 6510 6530 6550 6590 6600 6620 6650 6670 6610 6680 6690 6700 6710 6910
	# WW2 Land Doctrines
	6210 6220 6230 6240 6250 6260 6900 
	#Great War Hospital System 
	14000 14010 14020 14030

	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470
	9010 9040 9050 9060 9070 9080 9090 9100 9110 9120 9140 9190 9200 9230 9240

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
	7550 7560 
	} 
	
inventions = { 3000027 3000028 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 1 
     free_market       = 5 
     freedom           = 2 
     professional_army = 7 
     defense_lobby     = 10 
     interventionism   = 10 
    }
   headofstate            = {  type = 9 id = 1   } 
   headofgovernment       = {  type = 9 id = 2   } 
   foreignminister        = {  type = 9 id = 35  } 
   armamentminister       = {  type = 9 id = 70  } 
   ministerofsecurity     = {  type = 9 id = 86  } 
   ministerofintelligence = {  type = 9 id = 6   } 
   chiefofstaff           = {  type = 9 id = 132 } 
   chiefofarmy            = {  type = 9 id = 146 } 
   chiefofnavy            = {  type = 9 id = 9   } 
   chiefofair             = {  type = 9 id = 10  } 
   dormant_ministers      = {  3 4 5 7 8 14 26 27 32 33 44 56 69 94 109 151 152 } 
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
     { id       = {  type = 14500 id = 3  } 
       name     = "10. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 47  } 
       name     = "56. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 48  } 
       name     = "57. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 60 
      }
    }
   # ARMY GROUP NORTH
   landunit = 
   { location = 158 
     name     = "Heeresgruppe Nord Reserve" 
     leader   = 278 # von Bock
     id       = {  type = 14500 id = 4  } 
     division = 
     { id       = {  type = 14500 id = 6  } 
       name     = "73. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 7  } 
       name     = "206. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 8  } 
       name     = "208. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   # 3rd Army
   landunit = 
   { location = 183 
     name     = "3. Armee" 
     leader   = 313 # von Küchler
     id       = {  type = 14500 id = 9  } 
     division = 
     { id       = {  type = 14500 id = 10  } 
       name     = "A.O.K. 3" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 11  } 
       name     = "217. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       extra1    = engineer
       brigade_model1 = 4
       extra2    = cavalry_brigade
       brigade_model2 = 10
       offensive = { year = 1939 month = october day = 0 }
      }
#     division = 
#     { id       = {  type = 14500 id = 12  } 
#       name     = "15. Grenzdivision" 
#       type     = infantry 
#       model    = 10 
#       strength = 90 
#      }
    }
   landunit = 
   { location = 183 
     name     = "XXI. Armeekorps" 
     id       = {  type = 14500 id = 13  } 
     division = 
     { id       = {  type = 14500 id = 14  } 
       name     = "21. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 15  } 
       name     = "228. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 185 
     name     = "I. Armeekorps" 
     id       = {  type = 14500 id = 16  } 
     division = 
     { id       = {  type = 14500 id = 17 } 
       name     = "1. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 18  } 
       name     = "11. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 19  } 
       name     = "12. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 20  } 
       name     = "61. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 21  } 
       name     = "Panzer-Division 'Kempf'" 
       type     = light_armor
       model    = 1 
       strength = 70 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
#   landunit = 
#   { location = 155 
#     name     = "I. Armeekorps" 
#     id       = {  type = 14500 id = 22  } 
#     division = 
#     { id       = {  type = 14500 id = 23  } 
#       name     = "21. Grenzdivision" 
#       type     = infantry 
#       model    = 10 
#       strength = 90 
#       extra    = artillery
#       brigade_model = 8
#      }
#    }
   # 4th Army
   landunit = 
   { location = 161 
     name     = "4. Armee" 
     leader   = 310 # von Kluge
     id       = {  type = 14500 id = 24  } 
     division = 
     { id       = {  type = 14500 id = 25  } 
       name     = "A.O.K. 4" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 26  } 
       name     = "23. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 27  } 
       name     = "207. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 28  } 
       name     = "218. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       extra    = engineer
       brigade_model = 4
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 161 
     name     = "III. Armeekorps" 
     id       = {  type = 14500 id = 29  } 
     division = 
     { id       = {  type = 14500 id = 30  } 
       name     = "50. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = medium_armor
       brigade_model = 1
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 161 
     name     = "II. Armeekorps" 
     id       = {  type = 14500 id = 31  } 
     division = 
     { id       = {  type = 14500 id = 32  } 
       name     = "3. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 33  } 
       name     = "32. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 155 
     name     = "XIX. Armeekorps (mot.)" 
     id       = {  type = 14500 id = 34  } 
     division = 
     { id       = {  type = 14500 id = 35  } 
       name     = "2. Infanterie-Division (mot.)" 
       type     = motorized 
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 36  } 
       name     = "20. Infanterie-Division (mot.)" 
       type     = motorized 
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 37  } 
       name     = "3. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80
       offensive = { year = 1939 month = october day = 0 }
      }
    }
#   landunit = 
#   { location = 159 
#     name     = "Grenzschutz-Kommando I" 
#     id       = {  type = 14500 id = 38  } 
#     division = 
#     { id       = {  type = 14500 id = 39  } 
#       name     = "1. Grenzdivision" 
#       type     = infantry 
#       model    = 10 
#       strength = 90 
#       extra    = artillery
#       brigade_model = 8
#      }
#     division = 
#     { id       = {  type = 14500 id = 40  } 
#       name     = "2. Grenzdivision" 
#       type     = infantry 
#       model    = 10 
#       strength = 90 
#       extra    = artillery
#       brigade_model = 8
#      }
#     division = 
#     { id       = {  type = 14500 id = 41  } 
#       name     = "12. Grenzdivision" 
#       type     = infantry 
#       model    = 10 
#       strength = 90 
#       extra    = medium_armor
#       brigade_model = 1
#      }
#    }
   # ARMY GROUP SOUTH
   landunit = 
   { location = 167 
     name     = "Heeresgruppe Süd Reserve" 
     leader   = 334 # von Rundstedt
     id       = {  type = 14500 id = 42  } 
     division = 
     { id       = {  type = 14500 id = 44  } 
       name     = "252. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 80 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 45  } 
       name     = "257. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 46  } 
       name     = "258. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 80 
      }
    }
   landunit = 
   { location = 167 
     name     = "VII. Armeekorps" 
     id       = {  type = 14500 id = 49  } 
     division = 
     { id       = {  type = 14500 id = 50  } 
       name     = "27. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 51  } 
       name     = "68. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 212 
     name     = "XXII. Armeekorps" 
     id       = {  type = 14500 id = 52  } 
     division = 
     { id       = {  type = 14500 id = 53  } 
       name     = "62. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 54  } 
       name     = "213. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 55  } 
       name     = "221. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   # 8th Army
   landunit = 
   { location = 164 
     name     = "8. Armee" 
     leader   = 20 # Blaskowitz
     id       = {  type = 14500 id = 56  } 
     division = 
     { id       = {  type = 14500 id = 57  } 
       name     = "A.O.K. 8" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 58  } 
       name     = "30. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = medium_armor
       brigade_model = 1
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 164 
     name     = "X. Armeekorps" 
     id       = {  type = 14500 id = 59  } 
     division = 
     { id       = {  type = 14500 id = 60  } 
       name     = "24. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 164 
     name     = "XIII. Armeekorps" 
     id       = {  type = 14500 id = 61  } 
     division = 
     { id       = {  type = 14500 id = 62  } 
       name     = "10. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 63  } 
       name     = "17. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   # 10th Army
   landunit = 
   { location = 168 
     name     = "10. Armee" 
     leader   = 333 # von Reichenau
     id       = {  type = 14500 id = 64  } 
     division = 
     { id       = {  type = 14500 id = 65  } 
       name     = "A.O.K. 10" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 66  } 
       name     = "1. Leichte-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 67  } 
       name     = "3. Leichte-Division" 
       type     = light_armor
       model    = 0 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 168 
     name     = "XI. Armeekorps" 
     id       = {  type = 14500 id = 68  } 
     division = 
     { id       = {  type = 14500 id = 69  } 
       name     = "13. Infanterie-Division (mot.)" 
       type     = motorized 
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 70  } 
       name     = "29. Infanterie-Division (mot.)" 
       type     = motorized 
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 168 
     name     = "XVI. Armeekorps (mot.)" 
     id       = {  type = 14500 id = 71  } 
     division = 
     { id       = {  type = 14500 id = 72  } 
       name     = "1. Panzer-Division" 
       type     = armor
       model    = 0 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 73  } 
       name     = "14. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 74  } 
       name     = "31. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 168 
     name     = "XIV. Armeekorps (mot.)" 
     id       = {  type = 14500 id = 75  } 
     division = 
     { id       = {  type = 14500 id = 76  } 
       name     = "4. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 77  } 
       name     = "18. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 78  } 
       name     = "19. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 166 
     name     = "IV. Armeekorps" 
     id       = {  type = 14500 id = 79  } 
     division = 
     { id       = {  type = 14500 id = 80  } 
       name     = "4. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 81  } 
       name     = "46. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 166 
     name     = "XV. Armeekorps" 
     id       = {  type = 14500 id = 82  } 
     division = 
     { id       = {  type = 14500 id = 83  } 
       name     = "2. Leichte-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   # 14th Army
   landunit = 
   { location = 206 
     name     = "14. Armee" 
     leader   = 188 # List
     id       = {  type = 14500 id = 84  } 
     division = 
     { id       = {  type = 14500 id = 85  } 
       name     = "A.O.K. 14" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 86  } 
       name     = "1. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 87  } 
       name     = "2. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 201 
     name     = "VIII. Armeekorps" 
     id       = {  type = 14500 id = 88  } 
     division = 
     { id       = {  type = 14500 id = 89  } 
       name     = "5. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 90  } 
       name     = "8. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 91  } 
       name     = "28. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 92  } 
       name     = "239. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
#     division = 
#     { id       = {  type = 14500 id = 93  } 
#       name     = "30. Grenzdivision" 
#       type     = infantry 
#       model    = 10 
#       strength = 90 
#      }
    }
   landunit = 
   { location = 212 
     name     = "XVII. Armeekorps" 
     id       = {  type = 14500 id = 94  } 
     division = 
     { id       = {  type = 14500 id = 95  } 
       name     = "7. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 96  } 
       name     = "44. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 97  } 
       name     = "45. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   landunit = 
   { location = 214 
     name     = "XVIII. Armeekorps" 
     id       = {  type = 14500 id = 98  } 
     division = 
     { id       = {  type = 14500 id = 99  } 
       name     = "3. Gebirgsjäger-Division" 
       type     = bergsjaeger 
       model    = 10 
       strength = 100 
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 100  } 
       name     = "4. Leichte-Division" 
       type     = light_armor
       model    = 0 
       strength = 80 
       extra    = anti_air
       brigade_model = 3
       offensive = { year = 1939 month = october day = 0 }
      }
     division = 
     { id       = {  type = 14500 id = 101  } 
       name     = "2. Panzer-Division" 
       type     = light_armor
       model    = 1 
       strength = 80 
       offensive = { year = 1939 month = october day = 0 }
      }
    }
   # ARMY GROUP C
   landunit = 
   { location = 138 
     name     = "Heeresgruppe C Reserve" 
     leader   = 315 # von Leeb
     id       = {  type = 14500 id = 102  } 
     division = 
     { id       = {  type = 14500 id = 104  } 
       name     = "76. Infanterie-Division" 
       type     = infantry
       model    = 9
       strength = 80 
      }
# Was still an infantry division AFAIK.
     division = 
     { id       = {  type = 14500 id = 106  } 
       name     = "251. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 107  } 
       name     = "253. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 108  } 
       name     = "254. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 109  } 
       name     = "255. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 110  } 
       name     = "256. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 111  } 
       name     = "260. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 112  } 
       name     = "262. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 113  } 
       name     = "263. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 114  } 
       name     = "267. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 115  } 
       name     = "268. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
     division = 
     { id       = {  type = 14500 id = 116  } 
       name     = "269. Infanterie-Division" 
       type     = infantry 
       model    = 7 
       strength = 60 
      }
    }
   # 5th Army
   landunit = 
   { location = 131 
     name     = "5. Armee" 
     leader   = 185 # Liebmann
     id       = {  type = 14500 id = 117  } 
     division = 
     { id       = {  type = 14500 id = 118  } 
       name     = "A.O.K. 5" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 119  } 
       name     = "58. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 120  } 
       name     = "87. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
      }
    }
   landunit = 
   { location = 129 
     name     = "XXVII. Armeekorps" 
     id       = {  type = 14500 id = 121  } 
     division = 
     { id       = {  type = 14500 id = 122  } 
       name     = "16. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 123  } 
       name     = "69. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 124  } 
       name     = "211. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 125  } 
       name     = "216. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
    }
   landunit = 
   { location = 128 
     name     = "Grenztruppen Eifel" 
     id       = {  type = 14500 id = 126  } 
     division = 
     { id       = {  type = 14500 id = 127  } 
       name     = "26. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 128  } 
       name     = "86. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 129  } 
       name     = "227. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
    }
   landunit = 
   { location = 126 
     name     = "V. Armeekorps" 
     id       = {  type = 14500 id = 130  } 
     division = 
     { id       = {  type = 14500 id = 131 } 
       name     = "22. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 132  } 
       name     = "225. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
    }
#   landunit = 
#   { location = 126 
#     name     = "XXX. Armeekorps" 
#     id       = {  type = 14500 id = 133  } 
#     division = 
#     { id       = {  type = 14500 id = 134 } 
#       name     = "9. Grenzdivision" 
#       type     = infantry 
#       model    = 10 
#       strength = 90 
#      }
#    }
#   landunit = 
#   { location = 126 
#     name     = "Grenztruppen Aachen" 
#     id       = {  type = 14500 id = 135  } 
#     division = 
#     { id       = {  type = 14500 id = 136 } 
#       name     = "Grenztruppen Aachen" 
#       type     = garrison 
#       model    = 5 
#       strength = 100 
#      }
#    }
#   landunit = 
#   { location = 128 
#     name     = "Grenztruppen Trier" 
#     id       = {  type = 14500 id = 137  } 
#     division = 
#     { id       = {  type = 14500 id = 138 } 
#       name     = "Grenztruppen Trier" 
#       type     = garrison 
#       model    = 5 
#       strength = 100 
#      }
#    }
   # 1st Army
   landunit = 
   { location = 130 
     name     = "1. Armee" 
     leader   = 353 # von Witzleben
     id       = {  type = 14500 id = 139  } 
     division = 
     { id       = {  type = 14500 id = 140  } 
       name     = "A.O.K. 1" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 141  } 
       name     = "75. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 142  } 
       name     = "209. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 143  } 
       name     = "214. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 144  } 
       name     = "223. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 145  } 
       name     = "231. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
     division = 
     { id       = {  type = 14500 id = 146  } 
       name     = "246. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
      }
    }
   landunit = 
   { location = 127 
     name     = "XII. Armeekorps" 
     id       = {  type = 14500 id = 147  } 
     division = 
     { id       = {  type = 14500 id = 148  } 
       name     = "15. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 149  } 
       name     = "34. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 150  } 
       name     = "52. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 151  } 
       name     = "79. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
      }
    }
   landunit = 
   { location = 127 
     name     = "Grenztruppen Saarpfalz" 
     id       = {  type = 14500 id = 152  } 
     division = 
     { id       = {  type = 14500 id = 153  } 
       name     = "6. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 154  } 
       name     = "9. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = engineer
       brigade_model = 4
      }
     division = 
     { id       = {  type = 14500 id = 155  } 
       name     = "36. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 159  } 
       name     = "71. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
      }
    }
   landunit = 
   { location = 130 
     name     = "IX. Armeekorps" 
     id       = {  type = 14500 id = 156  } 
     division = 
     { id       = {  type = 14500 id = 157  } 
       name     = "25. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 158  } 
       name     = "33. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
    }
   # 7th Army
   landunit = 
   { location = 132 
     name     = "7. Armee" 
     leader   = 52 # Dollmann
     id       = {  type = 14500 id = 160  } 
     division = 
     { id       = {  type = 14500 id = 161  } 
       name     = "A.O.K. 7" 
       type     = hq 
       model    = 3 
       strength = 75
       extra    = anti_air
       brigade_model = 3
      }
     division = 
     { id       = {  type = 14500 id = 162  } 
       name     = "78. Infanterie-Division" 
       type     = infantry 
       model    = 9 
       strength = 100 
       extra    = medium_armor
       brigade_model = 1
      }
     division = 
     { id       = {  type = 14500 id = 163  } 
       name     = "212. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       extra    = engineer
       brigade_model = 4
      }
     division = 
     { id       = {  type = 14500 id = 164  } 
       name     = "215. Infanterie-Division" 
       type     = infantry 
       model    = 8 
       strength = 80 
       extra    = artillery
       brigade_model = 8
      }
    }
   landunit = 
   { location = 132 
     name     = "Grenztruppen Oberrhein" 
     id       = {  type = 14500 id = 165  } 
     division = 
     { id       = {  type = 14500 id = 166  } 
       name     = "5. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
       extra    = artillery
       brigade_model = 8
      }
     division = 
     { id       = {  type = 14500 id = 167  } 
       name     = "14. Landwehr-Division" 
       type     = infantry 
       model    = 6 
       strength = 100 
      }
     division = 
     { id       = {  type = 14500 id = 168  } 
       name     = "35. Infanterie-Division" 
       type     = infantry 
       model    = 10 
       strength = 100 
      }
    }

   ##########################################
   ## Kriegsmarine

   # HIGH SEAS FLEET
   navalunit = 
   { name     = "Hochseeflotte" 
     id       = {  type = 14500 id = 300  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 301  } 
       name  = "Gneisenau" 
       type  = battlecruiser 
       model = 3
      } 
     division = 
     { id    = {  type = 14500 id = 302  } 
       name  = "Scharnhorst" 
       type  = battlecruiser 
       model = 3
      }
     division = 
     { id    = {  type = 14500 id = 303  } 
       name  = "Admiral Hipper" 
       type  = heavy_cruiser 
       model = 5
      }
    } 
   # EXPLORATION FLEET
   navalunit = 
   { name     = "Erkundungsflotte" 
     id       = {  type = 14500 id = 304  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 305  } 
       name  = "Nürnberg" 
       type  = light_cruiser 
       model = 4 
      }
     division = 
     { id    = {  type = 14500 id = 306  } 
       name  = "Leipzig" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 307  } 
       name  = "Köln" 
       type  = light_cruiser 
       model = 3 
      }
     Division = 
     {  id    = {  type = 14500 id = 308  } 
       name  = "Königsberg" 
       type  = light_cruiser 
       model = 3 
      } 
     Division = 
     {  id    = {  type = 14500 id = 309  } 
       name  = "Karlsruhe" 
       type  = light_cruiser 
       model = 3 
      } 
     division = 
     { id    = {  type = 14500 id = 310  } 
       name  = "Emden" 
       type  = light_cruiser 
       model = 3 
      }
     division = 
     { id    = {  type = 14500 id = 311  } 
       name  = "Admiral Scheer" 
       type  = heavy_cruiser 
       model = 4
      }
    } 
   # DESTROYER FLEET
   navalunit = 
   { name     = "Zerstörerflottille" 
     id       = {  type = 14500 id = 312  } 
     location = 147 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 313  } 
       name  = "4. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
     division = 
     { id    = {  type = 14500 id = 314  } 
       name  = "5. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
     division = 
     { id    = {  type = 14500 id = 315  } 
       name  = "6. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      }
    } 
   # TRANSPORT FLEET
   navalunit = 
   { name     = "I. Transportflotte" 
     id       = {  type = 14500 id = 316  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 317  } 
       name  = "1. Transportflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 348  } 
       name  = "2. Transportflottille" 
       type  = transport 
       model = 2 
      }
     division = 
     { id    = {  type = 14500 id = 349  } 
       name  = "3. Transportflottille" 
       type  = transport 
       model = 2 
      }	    
    }
   # BALTIC FLEET
   navalunit = 
   { name     = "Baltische Flotte" 
     id       = {  type = 14500 id = 318  } 
     location = 153 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 319  } 
       name  = "Schlesien" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 320  } 
       name  = "Schleswig-Holstein" 
       type  = battleship 
       model = 1
      }
     division = 
     { id    = {  type = 14500 id = 321  } 
       name  = "1. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
     division = 
     { id    = {  type = 14500 id = 322  } 
       name  = "2. Zerstörergeschwader" 
       type  = destroyer 
       model = 5 
      } 
     division = 
     { id    = {  type = 14500 id = 323  } 
       name  = "3. Zerstörergeschwader" 
       type  = destroyer 
       model = 4 
      } 
    } 
   navalunit = 
   { name     = "Deutschland" 
     id       = {  type = 14500 id = 324  } 
     location = 2652 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 325  } 
       name  = "Deutschland" 
       type  = heavy_cruiser 
       model = 4
      }
    } 
   navalunit = 
   { name     = "Graf Spee" 
     id       = {  type = 14500 id = 326  } 
     location = 2294 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 327  } 
       name  = "Admiral Graf Spee" 
       type  = heavy_cruiser 
       model = 4
      }
    } 
   # SUBMARINE FLOTILLA 'WEDDIGEN'
   navalunit = 
   { name     = "Unterseebootsflottille 'Weddigen'" 
     id       = {  type = 14500 id = 328  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 329  } 
       name  = "11. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 330  } 
       name  = "12. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    } 
   # SUBMARINE FLOTILLA 'SALTZWEDEL'
   navalunit = 
   { name     = "Unterseebootsflottille 'Saltzwedel'" 
     id       = {  type = 14500 id = 331  } 
     location = 2691 
     base     = 147
     division = 
     { id    = {  type = 14500 id = 332  } 
       name  = "21. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 333  } 
       name  = "22. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # SUBMARINE FLOTILLA 'LOHS'
   navalunit = 
   { name     = "Unterseebootsflottille 'Lohs'" 
     id       = {  type = 14500 id = 334  } 
     location = 2721 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 335  } 
       name  = "31. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 336  } 
       name  = "32. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }
   # SUBMARINE FLOTILLA 'EMSMANN'
   navalunit = 
   { name     = "Unterseebootsflottille 'Emsmann'" 
     id       = {  type = 14500 id = 337  } 
     location = 152 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 338  } 
       name  = "51. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
     division = 
     { id    = {  type = 14500 id = 339  } 
       name  = "52. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    } 
   # SUBMARINE FLOTILLA 'HUNDIUS'
   navalunit = 
   { name     = "Unterseebootsflotille 'Hundius'" 
     id       = {  type = 14500 id = 340  } 
     location = 2284 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 341  } 
       name  = "61. Unterseeboots-Division" 
       type  = submarine 
       model = 6 # Type IX
      }
     division = 
     { id    = {  type = 14500 id = 342  } 
       name  = "62. Unterseeboots-Division" 
       type  = submarine 
       model = 6 # Type IX
      }
    }
   # SUBMARINE FLOTILLA 'WEGENER'
   navalunit = 
   { name     = "Unterseebootsflottille 'Wegener'" 
     id       = {  type = 14500 id = 343  } 
     location = 2704 
     base     = 152
     division = 
     { id    = {  type = 14500 id = 344  } 
       name  = "71. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
     division = 
     { id    = {  type = 14500 id = 345  } 
       name  = "72. Unterseeboots-Division" 
       type  = submarine 
       model = 5 # Type VII
      }
    }
   # SUBMARINE SCHOOL FLOTILLA
   navalunit = 
   { name     = "Unterseebootsschulflottille" 
     id       = {  type = 14500 id = 346  } 
     location = 151 
     base     = 153
     division = 
     { id    = {  type = 14500 id = 347  } 
       name  = "211. Unterseeboots-Division" 
       type  = submarine 
       model = 4 # Type II
      }
    }

   ##########################################
   ## Luftwaffe

  # AIR FORCE COMMAND
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 400 }
    name     = "Ob.d.L."
    division =
    { id         = { type = 14500 id = 401 }
      name       = "Kampfgeschwader z.b.V. 1"
      strength   = 100
      type       = transport_plane
      model      = 1 # Ju 52
    }
  }
  # 1ST AIR FLEET
  airunit =
  { location = 163
    base     = 163
    id       = { type = 14500 id = 402 }
    name     = "Luftflotte I"
    division =
    { id         = { type = 14500 id = 403 }
      name       = "KG 1 'Hindenburg'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 404 }
      name       = "KG 26 'Löwen'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 405 }
      name       = "Stukageschwader 2 'Immelmann'"
      strength   = 70
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 406 }
      name       = "JG 2 'Richthofen'"
      strength   = 100
      type       = interceptor
      model      = 8 # Bf 109D
    }
    division =
    { id         = { type = 14500 id = 407 }
      name       = "Zerstörergeschwader 1"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110C
    }
  }
  airunit =
  { location = 184
    base     = 184
    id       = { type = 14500 id = 408 }
    name     = "Luftwaffenkommando Ostpreussen"
    division =
    { id         = { type = 14500 id = 409 }
      name       = "KG 3 'Blitz'"
      strength   = 100
      type       = tactical_bomber
      model      = 5 # Do 17Z
    }
    division =
    { id         = { type = 14500 id = 410 }
      name       = "Sturzkampfgeschwader 1"
      strength   = 60
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 411 }
      name       = "JG 1 'Oesau'"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 109E
    }
  }
  airunit =
  { location = 167
    base     = 167
    id       = { type = 14500 id = 412 }
    name     = "Luftwaffen-Lehrdivision"
    division =
    { id         = { type = 14500 id = 413 }
      name       = "Lehrgeschwader 1"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 414 }
      name       = "KG 2 'Holzhammer'"
      strength   = 100
      type       = tactical_bomber
      model      = 5 # Do 17Z
    }
    division =
    { id         = { type = 14500 id = 415 }
      name       = "JG 3 'Udet'"
      strength   = 100
      type       = interceptor
      model      = 8 # Bf 109D
    }
    division =
    { id         = { type = 14500 id = 416 }
      name       = "Jagdgeschwader 20"
      strength   = 50
      type       = interceptor
      model      = 8 # Bf 109D
    }
  }
  # 2ND AIR FLEET
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 417 }
    name     = "Luftflotte II"
    division =
    { id         = { type = 14500 id = 418 }
      name       = "KG 54 'Totenkopf'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111P
    }
    division =
    { id         = { type = 14500 id = 419 }
      name       = "Kampfgeschwader 28"
      strength   = 50
      type       = tactical_bomber
      model      = 6 # He 111P
    }
    division =
    { id         = { type = 14500 id = 420 }
      name       = "Kampfgeschwader 25"
      strength   = 50
      type       = tactical_bomber
      model      = 7 # Ju 88A
    }
    division =
    { id         = { type = 14500 id = 421 }
      name       = "JG 26 'Schlageter'"
      strength   = 100
      type       = interceptor
      model      = 8 # Bf 109D
    }
    division =
    { id         = { type = 14500 id = 422 }
      name       = "Lehrgeschwader 2"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 109E
    }
    division =
    { id         = { type = 14500 id = 423 }
      name       = "Jagdgeschwader 52"
      strength   = 50
      type       = interceptor
      model      = 8 # Bf 109D
    }
  }
  airunit =
  { location = 145
    base     = 145
    id       = { type = 14500 id = 424 }
    name     = "4. Flieger-Division"
    division =
    { id         = { type = 14500 id = 425 }
      name       = "KG 55 'Greif'"
      strength   = 80
      type       = tactical_bomber
      model      = 6 # He 111P
    }
    division =
    { id         = { type = 14500 id = 426 }
      name       = "KG 27 'Boelcke'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111P
    }
    division =
    { id         = { type = 14500 id = 427 }
      name       = "JG 77 'Herz As'"
      strength   = 50
      type       = multi_role
      model      = 5 # Bf 109E
    }
    division =
    { id         = { type = 14500 id = 428 }
      name       = "ZG 26 'Horst Wessel'"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 110
    }
  }
  # 3RD AIR FLEET
  airunit =
  { location = 138
    base     = 138
    id       = { type = 14500 id = 429 }
    name     = "Luftflotte III"
    division =
    { id         = { type = 14500 id = 430 }
      name       = "KG 51 'Edelweiß'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 431 }
      name       = "KG 53 'Legion Condor'"
      strength   = 70
      type       = tactical_bomber
      model      = 6 # He 111H
    }
    division =
    { id         = { type = 14500 id = 432 }
      name       = "Sturzkampfgeschwader 51"
      strength   = 50
      type       = cas
      model      = 1 # Ju 87B
    }
  }
  airunit =
  { location = 179
    base     = 179
    id       = { type = 14500 id = 433 }
    name     = "Luftgau-Kommando VII/XII/XIII"
    division =
    { id         = { type = 14500 id = 434 }
      name       = "JG 51 'Mölders'"
      strength   = 50
      type       = interceptor
      model      = 8 # Bf 109D
    }
    division =
    { id         = { type = 14500 id = 435 }
      name       = "JG 53 'Pik As'"
      strength   = 100
      type       = interceptor
      model      = 8 # Bf 109D
    }
    division =
    { id         = { type = 14500 id = 436 }
      name       = "Jagdgeschwader 70"
      strength   = 50
      type       = interceptor
      model      = 8 # Bf 109D
    }
    division =
    { id         = { type = 14500 id = 437 }
      name       = "Jagdgeschwader 71"
      strength   = 50
      type       = interceptor
      model      = 8 # Bf 109D
    }
    division =
    { id         = { type = 14500 id = 438 }
      name       = "Jagdgeschwader 72"
      strength   = 75
      type       = multi_role
      model      = 4 # Ar 68
    }
  }
  # 4TH AIR FLEET
  airunit =
  { location = 167
    base     = 167
    id       = { type = 14500 id = 439 }
    name     = "Luftflotte IV"
    division =
    { id         = { type = 14500 id = 440 }
      name       = "KG 4 'General Wever'"
      strength   = 100
      type       = tactical_bomber
      model      = 6 # He 111P
    }
    division =
    { id         = { type = 14500 id = 441 }
      name       = "Kampfgeschwader 76"
      strength   = 100
      type       = tactical_bomber
      model      = 5 # Do 17Z
    }
    division =
    { id         = { type = 14500 id = 442 }
      name       = "Kampfgeschwader 77"
      strength   = 100
      type       = tactical_bomber
      model      = 5 # Do 17E
    }
    division =
    { id         = { type = 14500 id = 443 }
      name       = "Sturzkampfgeschwader 76"
      strength   = 100
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 444 }
      name       = "Sturzkampfgeschwader 77"
      strength   = 50
      type       = cas
      model      = 1 # Ju 87B
    }
    division =
    { id         = { type = 14500 id = 445 }
      name       = "Jagdgeschwader 76"
      strength   = 100
      type       = multi_role
      model      = 5 # Bf 109E
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
   #Units under construction
	division_development = {
		name  = "Bismarck" 
		type  = battleship
		model = 7
		new_model = no
		cost  = 0.3 
		id    = {  type = 14500 id = 500  } 
		date  = {  year = 1940 month = august day = 24  } 
	}
	division_development = {
		name  = "Tirpitz" 
		type  = battleship
		model = 7
		new_model = no
		cost  = 0.3 
		id    = {  type = 14500 id = 501  } 
		date  = {  year = 1941 month = february day = 25  } 
	}
	division_development = {
		name  = "Blücher" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14500 id = 502  } 
		date  = {  year = 1939 month = september day = 20  } 
	} 
	division_development = {
		name  = "Prinz Eugen" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14500 id = 503  } 
		date  = {  year = 1940 month = august day = 1  } 
	}
	division_development = {
		name  = "Seydlitz" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14500 id = 520  } 
		date  = {  year = 1940 month = may day = 14  } 
	}
	division_development = {
		name  = "Lützow" 
		type  = heavy_cruiser
		model = 5
		new_model = no
		cost  = 0.2 
		id    = {  type = 14500 id = 521  } 
		date  = {  year = 1940 month = december day = 16  } 
	}
	division_development = {
		name  = "Graf Zeppelin" 
		type  = carrier
		model = 2
		new_model = no
		cost  = 0.3 
		id    = {  type = 14500 id = 504  } 
		date  = {  year = 1940 month = october day = 1  } 
		 extra = cag
		 brigade_model = 2
	}
	division_development = {
		name  = "241. Unterseeboots-Division" 
		type  = submarine
		model = 4 # Type II
		cost  = 0.1 
		id    = {  type = 14500 id = 505  } 
		date  = {  year = 1939 month = november day = 1  } 
	}
	division_development = {
		name  = "251. Unterseeboots-Division" 
		type  = submarine
		model = 4 # Type II
		cost  = 0.1 
		id    = {  type = 14500 id = 506  } 
		date  = {  year = 1940 month = april day = 1  } 
	}
	division_development = {
		name  = "271. Unterseeboots-Division" 
		type  = submarine
		model = 4 # Type II
		cost  = 0.1 
		id    = {  type = 14500 id = 507  } 
		date  = {  year = 1940 month = january day = 1  } 
	}
	division_development = {
		name  = "A.O.K. 2" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 512  } 
		date  = {  year = 1939 month = october day = 20  } 
		extra = anti_air
		brigade_model = 3
	}
	division_development = {
		name  = "A.O.K. 9" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 513  } 
		date  = {  year = 1940 month = may day = 15  } 
		extra = anti_air
		brigade_model = 3
	}
	division_development = {
		name  = "A.O.K. 11" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 514  } 
		date  = {  year = 1940 month = october day = 5  } 
		extra = anti_air
		brigade_model = 3
	}
	division_development = {
		name  = "A.O.K. 12" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 515  } 
		date  = {  year = 1939 month = october day = 13  } 
		extra = anti_air
		brigade_model = 3
	}
	division_development = {
		name  = "A.O.K. 15" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 516  } 
		date  = {  year = 1941 month = january day = 15  } 
		extra = anti_air
		brigade_model = 3
	}
	division_development = {
		name  = "A.O.K. 16" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 517  } 
		date  = {  year = 1939 month = october day = 22  } 
		extra = anti_air
		brigade_model = 3
	}
	division_development = {
		name  = "A.O.K. 17" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 518  } 
		date  = {  year = 1940 month = december day = 20  } 
		extra = anti_air
		brigade_model = 3
	}
	division_development = {
		name  = "A.O.K. 18" 
		type  = hq
		model = 3
		cost  = 0.1 
		id    = {  type = 14500 id = 519  } 
		date  = {  year = 1939 month = november day = 1  } 
		extra = anti_air
		brigade_model = 3
	}
} 

