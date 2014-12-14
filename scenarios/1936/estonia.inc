 # Ministers OK
 # OOB OK

 ########################################################
 # Country definition for EST				#
 # Edited by Sephy email: valters.logins@gmail.com	#
 ########################################################

 #####################
 # Country main data #
 #####################

 country =
	{
	tag			= EST
	ai			= "est_1936.ai"
	capital			= 270
	manpower		= 1
	# Resource Reserves
	energy			= 360
	metal			= 180
	rare_materials		= 90
	oil			= 500
	supplies		= 500
	money			= 10
	transports		= 100
	peacetime_ic_mod	= 0.6

	diplomacy =
	{
	relation = {  tag = ENG value = 65  }
	relation = {  tag = FIN value = 120  }
	relation = {  tag = FRA value = 65  }
	relation = {  tag = GER value = 10  }
	relation = {  tag = LAT value = 150 guaranteed = {  day = 12 month = september year = 1934  }  }
	relation = {  tag = LIT value = 40 guaranteed = {  day = 12 month = september year = 1934  }  }
	relation = {  tag = POL value = 75  }
	relation = {  tag = SOV value = -30  }
	relation = {  tag = CZE value = 65  }
	relation = {  tag = USA value = 65  }
	relation = {  tag = SWE value = 75  }
	relation = {  tag = DEN value = 75  }
	}

	SpyInfo = {  country = "EST" NumberOfSpies = 2  }

	nationalprovinces	= {  274 270 275 271 272 273  }
	ownedprovinces		= {  274 270 275 271 272 273  }
	controlledprovinces	= {  274 270 275 271 272 273  }

 techapps =
 {
 #1926 Infantry
 1010 1020 1030 1040 1050 1060 1070 1080
 #1918 Mountain infantry
 1160 1170 1180 1190 1200 1210
 #1922 Naval infantry
 1560
 #1924 Cavalry
 13060 13070 13080 1310 1320 1330 1340 1350
 #1921 Engineers
 1830 1840 1850
 #Interbellum Supply 1924
 1910 1920 1930 1940 1950 1960 1970
 #Late-Great War Tank
 2620 2010
 #Interwar Armoured Car
 2860 2870 2880
 #Post GW Field Artillery
 2290 2300 2310 2900 2910
 #Interbellum I Static Anti-Air Artillery
 2800 2450 21180
 #Early Anti-Air Artillery
 2810 2820
 #Protected Cruiser
 3110
 #Armoured Frigate
 3210
 #ASW Equipment 1918
 3900
 #Turbine Destroyer
 3010 3020 3030
 #Ocean-going Submarine
 3610 3620 3630
 #Troopship
 3810
 #Great War Torpedo
 3720 3730 3736 3740
 #Interwar Fighter
 4500 4510 4520 4530 4540 4550 4010
 #Early WW1 MR
 4300
 #Prewar bomber designs, Taube, Voisin
 4600
 #Early Seaplanes
 4740
 #Manufacturing support systems
 5810 5820 5830 5050
 #Basic Construction Engineering
 5800 5080
 #Analog Fire Control Computers
 5310 54010 54020
 #Teleprinter
 5316 5326
 #Mechanized Agriculture
 5700 5710 5010 5020
 #Early Pharmacology
 5600 5610 5620
 #Improved Great War Hospital System
 14000 14010
 # Land Doctrines WW1 - Entente Line (default)
 6500 6510 6530 6580 6600 6610 6620 6630 6640 6650 6660 6670 6540 6910
 #Defensive Focus
 6560
 #Super heavy WW1 Tank (K-Wagen, Landship)
 7600 7610
 #Naval Doctrines
 8010 8020 8040 8050 8060 8070 8080 8100 8110 8150 8500 81300
 #Air Doctrines - ww1 techs
 27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 27460 27470 9010
 }

inventions = { 3000027 }

	policy =
	{
	date			= {  year = 0 month = january day = 0  }
	democratic		= 3
	political_left		= 3
	free_market		= 4
	freedom			= 4
	professional_army	= 4
	defense_lobby		= 5
	interventionism		= 2
	}

	headofstate		= {  type = 9 id = 130001  }
	headofgovernment	= {  type = 9 id = 130002  }
	foreignminister		= {  type = 9 id = 130003  }
	armamentminister	= {  type = 9 id = 130004  }
	ministerofsecurity	= {  type = 9 id = 130005  }
	ministerofintelligence	= {  type = 9 id = 130006  }
	chiefofstaff		= {  type = 9 id = 130007  }
	chiefofarmy		= {  type = 9 id = 130008  }
	chiefofnavy		= {  type = 9 id = 130009  }
	chiefofair		= {  type = 9 id = 130010  }

	landunit =
	{  id = {  type = 30000 id = 1  }
	name     = "Maavägi"
	location = 270
	Division =
		{  id = {  type = 30000 id = 2  }
			name		= "I Jalaväediviis"
			type		= infantry
			strength	= 20
			model		= 7
			extra		= artillery
			brigade_model	= 4
		}
	Division =
		{  id = {  type = 30000 id = 3  }
			name		= "II Jalaväediviis"
			type		= infantry
			strength	= 20
			model		= 7
		} 
	Division = 
		{  id = {  type = 30000 id = 4  }
			name		= "III Jalaväediviis"
			type		= infantry
			strength	= 20
			model		= 7
			extra		= armored_car
			brigade_model	= 1
		}
	}

	airunit =
	{  id = {  type = 30000 id = 5  }
	name     = "Eesti Ohuvagi"
	location = 270
	base     = 270
	Division =
		{  id = {  type = 30000 id = 6  }
			name     	= "I Lennusalk"
			type     	= interceptor
			model    	= 6
			strength 	= 50
		}
	}}