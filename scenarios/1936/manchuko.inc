 
 ############################## 
 # Country definition for MAN # 
 ############################## 
  
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = MAN
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes } } 
	puppet                 = JAP 
	control                = JAP 
	# Resource Reserves 
	energy                 = 900
	metal                  = 450
	rare_materials         = 225
	transports = 100
	oil                    = 200 
	supplies               = 100 
	money                  = 10 
	manpower               = 8 
	capital                = 1208 
   free                   = {  energy = 14 metal = 7 rare_materials = 4  } 
   diplomacy = 
   {  relation = {  tag = CHC value = -100  } 
     relation = {  tag = CHI value = -100  }
     relation = {  tag = CSX value = -100  } 
     relation = {  tag = U67 value = -200 } 
     relation = {  tag = CXB value = -75  } 
     relation = {  tag = CYN value = -75  } 
     relation = {  tag = CGX value = -75  } 
     relation = {  tag = GER value = 20  } 
     relation = {  tag = JAP value = 200 access = yes  } 
     relation = {  tag = SIA value = 75  } 
     relation = {  tag = USA value = 1  } 
    } 
   nationalprovinces      = {  1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1216 1217 1218 1219 1220 1235 1236 1237 } 
   ownedprovinces         = {  1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237  } 
   controlledprovinces    = {  1197 1198 1199 1200 1201 1202 1203 1204 1205 1206 1207 1208 1209 1210 1211 1212 1213 1214 1215 1217 1218 1220 1237  } 
   # ROTW Minor Tech '36 
   # Group E 1936 techs 
   # ###################### 
   # GW fighter 
   techapps               = {  
#Interwar Fighter  
4500 4510 4520 4530
#Interwar Armoured Car  
2860
#Light Field Artillery  
2290
#SW Tank 
7600 7610 2620 2010
#Great War Infantry Division  
1010  1020 1030 1040 1050 1060 
#Interbellum 1930 Supply 
1910 1920 1930 1940 1950 1960 1970
#1916 Cavalry Division  
13060 13070 13080 1310 1320 1330 1340 
#Early Agriculture
5700 
#Naval Infantry
#1560 
#Medicine
5600
#Troopships
3810
#Engineers
1830 1840
#Manufactoring
5810 5820
# Basic Construction Engineering
5800 5080 
# Early Anti-Tank Artillery
#2400  
 
 #Air Doctrines - ww2 techs
27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 # Land Doctrines WW1 - Entente Line (default)
6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
 } 
 inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 1 
     political_left    = 4 
     freedom           = 3 
     free_market       = 3 
     professional_army = 2 
     defense_lobby     = 8 
     interventionism   = 8 
    } 

   SpyInfo                = {  country = "MAN" NumberOfSpies = 5  } 
   headofstate            = {  type = 9 id = 235001  } 
   headofgovernment       = {  type = 9 id = 235002  } 
   foreignminister        = {  type = 9 id = 235003  } 
   armamentminister       = {  type = 9 id = 235004  } 
   ministerofsecurity     = {  type = 9 id = 235005  } 
   ministerofintelligence = {  type = 9 id = 235006  } 
   chiefofstaff           = {  type = 9 id = 235007  } 
   chiefofarmy            = {  type = 9 id = 235008  } 
   chiefofnavy            = {  type = 9 id = 235009  } 
   chiefofair             = {  type = 9 id = 235010  } 
   # Basic Construction Engineering Development Process 
   landunit = 
   {  location = 1214 
     id       = {  type = 28500 id = 1  } 
     name     = "Di'1 Fang'tien J�ntuan" 
     Division = 
     {  id       = {  type = 28500 id = 2  } 
       name     = "1 Man'chu L�" 
       type     = militia
		model = 4   
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 3  } 
       name     = "2 Man'chu L�" 
       type     = militia
		model = 4   
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 4  } 
       name     = "3 Man'chu L�" 
       type     = militia
		model = 4   
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 5  } 
       name     = "4 Man'chu L�" 
       type     = militia
		model = 4   
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 6  } 
       name     = "5 Man'chu L�" 
       type     = militia
		model = 4   
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 7  } 
       name     = "6 Man'chu L�" 
       type     = militia
		model = 4   
       strength = 50 
      } 
    } 
   landunit = 
   {  location = 1207 
     id       = {  type = 28500 id = 8  } 
     name     = "Di'2 Ji'lin J�ntuan" 
     Division = 
     {  id       = {  type = 28500 id = 9  } 
       name     = "7 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 10  } 
       name     = "8 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 11  } 
       name     = "9 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 12  } 
       name     = "10 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 13  } 
       name     = "1 Man'chu Qi'Bing" 
       type     = cavalry 
	   model = 7
       strength = 15 
      } 
     Division = 
     {  id       = {  type = 28500 id = 14  } 
       name     = "2 Man'chu Qi'Bing" 
       type     = cavalry 
	   model = 7
       strength = 15 
      } 
     Division = 
     {  id       = {  type = 28500 id = 15  } 
       name     = "3 Man'chu Qi'Bing" 
       type     = cavalry 
	   model = 7
       strength = 15 
      } 
    } 
   landunit = 
   {  location = 1203 
     id       = {  type = 28500 id = 16  } 
     name     = "Di'3 Qiqihar J�ntuan" 
     Division = 
     {  id       = {  type = 28500 id = 17  } 
       name     = "11 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 18  } 
       name     = "12 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 19  } 
       name     = "13 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 20  } 
       name     = "14 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 21  } 
       name     = "15 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 22  } 
       name     = "4 Man'chu Qi'Bing" 
       type     = cavalry 
	   model = 7
       strength = 15 
      } 
    } 
   landunit = 
   {  location = 1199 
     id       = {  type = 28500 id = 23  } 
     name     = "Di'4 Harbin J�ntuan" 
     Division = 
     {  id       = {  type = 28500 id = 24  } 
       name     = "16 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 25  } 
       name     = "17 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 26  } 
       name     = "18 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 27  } 
       name     = "19 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 28  } 
       name     = "20 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 29  } 
       name     = "21 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 30  } 
       name     = "22 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 31  } 
       name     = "23 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 32  } 
       name     = "5 Man'chu Qi'Bing" 
       type     = cavalry 
	   model = 7
       strength = 15 
      } 
    } 
   landunit = 
   {  location = 1236 
     id       = {  type = 28500 id = 33  } 
     name     = "Di'5 Chengde J�ntuan" 
     Division = 
     {  id       = {  type = 28500 id = 34  } 
       name     = "24 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 35  } 
       name     = "25 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 36  } 
       name     = "26 Man'chu L�" 
       type     = militia 
	   model = 4
       strength = 50 
      } 
     Division = 
     {  id       = {  type = 28500 id = 37  } 
       name     = "6 Man'chu Qi'Bing" 
       type     = cavalry 
	   model = 7
       strength = 15 
      } 
    } 
  } 
 
