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
	{
	tag					= LAT
	ai = "lat_1936.ai"
	dissent					= 15
	#Resource Reserves 
	energy					= 420
	metal					= 210
	rare_materials				= 105
	transports 				= 100
	oil					= 500
	supplies				= 500
	money					= 10
	capital					= 264
	manpower				= 2
	peacetime_ic_mod			= 0.6

	diplomacy = 
	{relation = {  tag = ENG value = 65  }
	relation =
	{  tag = EST
		value = 150
		guaranteed = {  day = 30 month = december year = 1932  }
	}
	relation = {  tag = FIN value = 90  }
	relation = {  tag = FRA value = 65  }
	relation = {  tag = GER value = 10  }
	relation =
	{  tag = LIT
		value = 40
		guaranteed = {  day = 30 month = december year = 1932  } 
	}
	relation = {  tag = POL value = 75  }
	relation = {  tag = SOV value = -30  }
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
 #Post ww1 Tank I
 2620 2010 2630
 #Interwar Fighter 
 4500 4510 4520 4530 4540 4550 4020 4010 
 #Early Seaplanes
 4740
 #Prewar bomber
 4600 4610
 #Basic Armoured Car 
 2860 2870 2880 2020 
 #Interwar Field Artillery
 2290 2300 2310 2900 2910 2920
 #SW Tank 
 7600 7610 
 #Great War Infantry Division  
 1010 1020 1030 1040 1050 1060 1070 1080
 #Interbellum Supply 
 1910 1920 1930 1940 1950 1960 1970
 #Great War Cavalry Division  
 13060 13070 13080 1310 1320 1330 1340 
 #Early Mountain Division 
 1160 1170 1180 1190 1200 1210 
 #Early Static Anti-Air Artillery 
 2800 2450 21180 21190
 #Basic Anti-Air Artillery Brigade 
 2810 2820 2510
 #Mechanized Agriculture 
 5700 5710 5010 5020
 #Improved Construction Engineering 
 5800 5080  
 #Manufacturing support systems
 5810 5820 5050 5830
 #Naval Infantry
 #1560 1570
 #Engineers
 1830 1840 1850 
 #Ocean-going Submarine
 3610 3620 3630
 #Turbine Destroyer
 3010 3020 3030
 #Scout Cruiser
 3110 3120
 #Turret Battleship
 3410
 #Armoured Frigate
 3210 3220
 #Naval Doctrines
 8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 81300
 #Medicine
 5600 5610 5620
 #Computers
 5310 54010 54020
 #Cryptography 
 5316 5326
 #Hospital System
 14000 14010
 #Defensive Focus
 6560
 #Torpedo & ASW 18
 3720 3730 3736 3740 3750 3900
 #Troopships
 3810
 # Land Doctrines WW1 - Entente Line (default)
 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910 
 #Air Doctrines - ww2 techs
 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
	}
inventions = { 3000027 }

	policy =
	{  date			= {  year = 0 month = january day = 0  }
	democratic		= 6 
	political_left		= 4 
	freedom			= 5 
	free_market		= 5 
	professional_army	= 5 
	defense_lobby		= 5 
	interventionism		= 4 
	}

	headofstate			= {  type = 9 id = 135001  }
	headofgovernment		= {  type = 9 id = 135002  }
	foreignminister			= {  type = 9 id = 135003  }
	armamentminister		= {  type = 9 id = 135004  }
	ministerofsecurity		= {  type = 9 id = 135005  }
	ministerofintelligence		= {  type = 9 id = 135006  }
	chiefofstaff			= {  type = 9 id = 135007  }
	chiefofarmy			= {  type = 9 id = 135008  }
	chiefofnavy			= {  type = 9 id = 135009  }
	chiefofair			= {  type = 9 id = 135010  }

	landunit = 
	{  id = {  type = 24500 id = 1  } 
	name		= "Latvijas Armija" 
	location	= 264 
	Division	= 
		{  id = {  type = 24500 id = 2  } 
			name		= "Kurzemes Divizija"
			type		= infantry
			model		= 7
			strength	= 50
			extra		= engineer
			brigade_model	= 2
		} 
	Division = 
		{  id = {  type = 24500 id = 3  } 
			name		= "Vidzemes Divizija"
			type		= infantry
			model		= 7
			strength	= 50
			extra		= armored_car
			brigade_model	= 3
		}
	Division = 
		{  id = {  type = 24500 id = 4  } 
			name		= "Zemgales Divizija"
			type		= infantry
			model		= 7   
			strength	= 50
			extra		= artillery
			brigade_model	= 5
		} 
	Division = 
		{  id = {  type = 24500 id = 5  } 
			name		= "Latgales Divizija" 
			type		= infantry 
			model		= 7
			strength	= 50
		} 
	}

	airunit = 
	{  id = {  type = 24500 id = 8  } 
	name		= "Latvijas Gaisa speki"
	location	= 264 
	base		= 264 
	Division = 
		{  id = {  type = 24500 id = 9  } 
			name		= "I Aviacijas pulks"
			type		= interceptor 
			model		= 6
			strength	= 60 
		} 
	}

	navalunit = 
	{  id = { type = 24500 id = 50 } 
	name		= "Kara flote"
	location	= 264
	base		= 264
	division	= 
		{  id = { type = 24500 id = 51 } 
			name		= "Virsaitis" 
			type		= light_cruiser 
			model		= 2
			strength	= 60 
		}
	division = 
		{  id = { type = 24500 id = 52 } 
			name		= "Varonis" 
			type		= light_cruiser 
			model		= 2
			strength	= 60 
		}
	}

	navalunit = 
	{  id = { type = 24500 id = 60 } 
	name		= "Zemudenu divizions" 
	location	= 264 
	base		= 264
	division	= 
		{ id = { type = 24500 id = 61 } 
			name		= "Ronis" 
			type		= submarine 
			model		= 3 
			strength	= 70 
		}
	division = 
		{  id = { type = 24500 id = 62 } 
			name		= "Spidola" 
			type		= submarine 
			model		= 3 
			strength	= 70 
		}
	}}