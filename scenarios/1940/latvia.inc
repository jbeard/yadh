 # Ministers OK
 # OOB OK

 ##############################
 # Country definition for LAT #
 # Edited by Sephy email: valters.logins@gmail.com #
 ##############################

 #####################
 # Country main data #
 #####################

 country = 
	{  tag					= LAT 
	# Resource Reserves
	energy					= 1120
	metal					= 210
	rare_materials				= 105 
	transports				= 125
	oil					= 500 
	supplies				= 500 
	money					= 10 
	capital					= 264 
	manpower				= 5 

	diplomacy = 
	{  relation = {  tag = ENG value = 65  } 
	relation = 
	{  tag = EST 
		value = 150 
		guaranteed = {  day = 12 month = september year = 1934  } 
	} 
	relation = {  tag = FIN value = 90  } 
	relation = {  tag = FRA value = 65  } 
	relation = {  tag = GER value = 10  } 
	relation = 
	{  tag = LIT 
		value = 40 
		guaranteed = {  day = 12 month = september year = 1934  } 
	}
	relation = {  tag = POL value = 75  } 
	relation = {  tag = SOV value = -30 } 
	relation = {  tag = CZE value = 65  }
	relation = {  tag = USA value = 65  }
	relation = {  tag = SWE value = 75  }
	relation = {  tag = DEN value = 75  }
	} 
	SpyInfo				= {  country = "LAT" NumberOfSpies = 3  } 
	nationalprovinces		= {  268 269 267 264 266 265  } 
	ownedprovinces			= {  268 269 267 264 266 265  } 
	controlledprovinces		= {  268 269 267 264 266 265  } 
	# Group D 1936 techs 
	# ###################### 
	# GW fighter 
	techapps			= {
 #Post WW1 Tank I
 2620 2010 2630
 #Interwar Fighter 
 4500 4510 4520 4530 4540 4550 4020 4010 4030
 #Great War Seaplanes
 4740 4750 4760
 #3rd Generation Tactical Bomber
 4600 4610 4620 4630
 #Multi Role Fighters
 4300 4310 4320
 #Basic Armoured Car 
 2860 2870 2880 2020 
 #Interwar Field Artillery
 2290 2300 2310 2900 2910 2920 2930
 #SW Tank 
 7600 7610 
 #1931 Infantry
 1010 1020 1030 1040 1050 1060 1070 1080 1090
 #Interbellum Supply 
 1910 1920 1930 1940 1950 1960 1970 1980
 #Great War Cavalry Division  
 13060 13070 13080 1310 1320 1330 1340 1350 1360
 #Early Mountain Division 
 1160 1170 1180 1190 1200 1210 
 #Early Static Anti-Air Artillery 
 2800 2450 21180 21190
 #Basic Anti-Air Artillery Brigade 
 2810 2820 2510
 #Mechanized Agriculture 
 5700 5710 5010 5020 5030
 #Improved Construction Engineering 
 5800 5080 5090 
 #Manufacturing
 5810 5820 5050 5830 5060 5070
 #Naval Infantry
 #1560 1570
 #Engineers
 1830 1840 1850 1860
 #Submarine
 3610 3620 3630 3640
 #Turbine Destroyer
 3010 3020 3030
 #Light Cruiser
 3110 3120 3130
 #Battleships
 3410 3420
 #Armoured Frigate
 3210 3220
 #Naval Doctrines
 8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 81300 8550 81310 8120 82500
 #Medicine
 5600 5610 5620 5630
 #Computers
 5310 54010 54020 54030
 #Cryptography 
 5316 5326
 #Hospital System
 14000 14010 14020 14030
 #Defensive Focus
 6560 6030
 #Torpedo & ASW 18
 3720 3730 3736 3740 3750 3900
 #Troopships
 3810 3820
 # Land Doctrines WW1 - Entente Line (default)
 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 
 #Air Doctrines - ww2 techs
 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	} 
inventions = { 3000027 }

	policy = 
	{  date				= {  year = 0 month = january day = 0  } 
	democratic			= 3 
	political_left			= 2 
	freedom				= 4 
	free_market			= 2 
	professional_army		= 5 
	defense_lobby			= 5 
	interventionism			= 1 
	}

	headofstate			= {  type = 9 id = 135012  } 
	headofgovernment		= {  type = 9 id = 135018  } 
	foreignminister			= {  type = 9 id = 135024  } 
	armamentminister		= {  type = 9 id = 135031  } 
	ministerofsecurity		= {  type = 9 id = 135037  } 
	ministerofintelligence		= {  type = 9 id = 135042  } 
	chiefofstaff			= {  type = 9 id = 135007  } 
	chiefofarmy			= {  type = 9 id = 135050  } 
	chiefofnavy			= {  type = 9 id = 135009  } 
	chiefofair			= {  type = 9 id = 135058  } 

	landunit = 
	{  id = {  type = 24500 id = 1  } 
	name		= "Latvijas Armija" 
	location	= 264 
	Division	= 
		{  id = {  type = 24500 id = 2  } 
			name		= "Kurzemes Divizija" 
			type		= infantry 
			model		= 8
			strength	= 85
			extra		= engineer
			brigade_model	= 3
		} 
	Division = 
		{  id = {  type = 24500 id = 3  } 
			name		= "Vidzemes Divizija" 
			type		= infantry
			model		= 8
			strength	= 85
			extra		= armored_car
			brigade_model	= 3
		}
	Division = 
		{  id = {  type = 24500 id = 4  } 
			name		= "Zemgales Divizija" 
			type		= infantry
			model		= 8
			strength	= 85
			extra		= artillery 
			brigade_model	= 6
		}
	Division = 
		{  id = {  type = 24500 id = 5  } 
			name		= "Latgales Divizija" 
			type		= infantry 
			model		= 8
			strength	= 85
		} 
	}

	airunit = 
	{  id = {  type = 24500 id = 8  } 
	name		= "Latvijas Gaisa speki" 
	location	= 264 
	base		= 264 
	Division = 
		{  id = {  type = 24500 id = 9  } 
			name		= "I Aviacijas pulka" 
			type		= interceptor 
			model		= 6
			strength	= 100 
		} 
	}

	navalunit = 
	{  id = { type = 24500 id = 50 } 
	name		= "Kara flote"
	location	= 264
	base		= 264
	division = 
		{  id = { type = 24500 id = 51 } 
			name		= "Virsaitis" 
			type		= light_cruiser 
			model		= 2
			strength	= 100 
		} 
	division = 
		{  id = { type = 24500 id = 52 } 
			name		= "Varonis" 
			type		= light_cruiser 
			model		= 2
			strength	= 100 
		}
	}

	navalunit = { 
	id = { type = 24500 id = 60 } 
	name		= "Zemudenu divizions" 
	location	= 264 
	base		= 264
	division = 
		{  id = { type = 24500 id = 61 } 
			name		= "Ronis" 
			type		= submarine 
			model		= 3 
			strength	= 100 
		}
	division = 
		{  id = { type = 24500 id = 62 } 
			name		= "Spidola" 
			type		= submarine 
			model		= 3 
			strength	= 100 
		}
	}}