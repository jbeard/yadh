 
 ############################## 
 # Country definition for CUB # 
 ############################## 

 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = CUB 
	ai_settings = { flags = { MOB1 = yes MOB2 = yes } }
	# Resource Reserves 
	energy                 = 480
	metal                  = 240
	rare_materials         = 120
	transports = 100
	oil                    = 500 
	supplies               = 500 
	money                  = 10 
	manpower               = 0 
	capital                = 1776 
      
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 5 
     political_left    = 6 
     free_market       = 8 
     freedom           = 5 
     professional_army = 2 
     defense_lobby     = 5 
     interventionism   = 2 
    } 

   nationalprovinces      = {  1775 1776 1777 1778 1779  } 
   ownedprovinces         = {  1775 1776 1777 1779  } 
   controlledprovinces    = {  1775 1776 1777 1779  } 
   # ROTW Minor Tech '36 
   # Group D 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530 4540 4550 4010
#Basic Armoured Car  
2860 2870 2880 2020
#Great War Heavy Field Artillery 
2290 2300 2310
#SW Tank 
7600 7610
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960
#Great War Cavalry Division  
13060 13070 13080 1310 1320 1330 1340
#Early Mountain Division 
1160  1170 1180 1190 1200 1210 1220 1230 1240
#Engineers
1830 1840
#Early Static Anti-Air Artillery 
2800 2450 21180 21190
#Basic Anti-Air Artillery Brigade 
2810 2820 2510
#Modern Agriculture  
5700 5710 5010
#Improved Construction Engineering 
5800 5080 
#Basic Oil Refining 
#5190 

#Medicine
5600 5610
#Troopships
3810

# Great War Land Doctrines (entente)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
#Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 } 
 inventions = { 3000027 }
   diplomacy = 
   {  relation = {  tag = DOM value = 50  } 
     relation = {  tag = ENG value = 30  } 
     relation = {  tag = HAI value = 30  } 
     relation = {  tag = USA value = 200  } 
    } 
   SpyInfo                = {  country = "CUB" NumberOfSpies = 2  } 
  
   headofstate            = {  type = 9 id = 85013  } 
   headofgovernment       = {  type = 9 id = 85021  } 
   foreignminister        = {  type = 9 id = 85029  } 
   armamentminister       = {  type = 9 id = 85043  } 
   ministerofsecurity     = {  type = 9 id = 85056  } 
   ministerofintelligence = {  type = 9 id = 85068  } 
   chiefofstaff           = {  type = 9 id = 85075  } 
   chiefofarmy            = {  type = 9 id = 85078  } 
   chiefofnavy            = {  type = 9 id = 85081  } 
   chiefofair             = {  type = 9 id = 85010  } 
  
   # Firepower 
  
   landunit = 
   {  id       = {  type = 26000 id = 40  } 
     name     = "Ejercito de Cuba" 
     location = 1776 
     Division = 
     {  id       = {  type = 26000 id = 4000  } 
       name     = "1a Brigada de Ejercito" 
       strength = 35 
       type     = infantry 
       model    = 7
      } 
     Division = 
     {  id       = {  type = 26000 id = 4001  } 
       name     = "1a Brigada de Caballerķa 'Floridita'" 
       strength = 35 
       type     = cavalry 
       model    = 7
      } 
    } 
  } 
 