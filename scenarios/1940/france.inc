 
 ############################## 
 # Country definition for FRA # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag                    = FRA 
   capital                = 55
   ai 			  = "fra_1940.ai"
   ai_settings	= { flags = { FRABuildStandard = yes MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes MOB5 = yes MOB6 = yes MOB7 = yes MOB8 = yes RES = yes } }
   # Resource Reserves 
   energy                 = 8000
   metal                  = 4000
   rare_materials         = 2000
   oil                    = 1000 
   supplies               = 1000 
   money                  = 100 
   manpower               = 5000
   transports             = 350 
   escorts                = 60     
   
   diplomacy = 
   {  relation = {  tag = AST value = 150  } 
     relation = 
     {  tag        = BEL 
       value      = 120 
       guaranteed = {  day = 30 month = december year = 1935  } 
      } 
     relation = {  tag = BHU value = 150  } 
     relation = {  tag = BUL value = 20  } 
     relation = {  tag = CAN value = 150  } 
     relation = {  tag = SLO value = -200  } 
     relation = {  tag = ENG value = 150  } 
     relation = {  tag = EST value = 65  } 
     relation = {  tag = FIN value = 85  } 
     relation = {  tag = GER value = -200  } 
     relation =
     {  tag        = GRE
       value      = 75
       guaranteed = { day = 13 month = april year = 1939 }
     }
     relation = {  tag = HOL value = 75 } 
     relation = {  tag = HUN value = -70  } 
     relation = {  tag = IRE value = 25  } 
     relation = {  tag = IRQ value = 100  } 
     relation = {  tag = ITA value = -100  } 
     relation = {  tag = JAP value = -40  } 
     relation = {  tag = LAT value = 65  } 
     relation = {  tag = LIT value = 65  } 
     relation = {  tag = LUX value = 120  } 
     relation = {  tag = NEP value = 150  } 
     relation = {  tag = NOR value = 150 } 
     relation = {  tag = NZL value = 150  } 
     relation = {  tag = OMN value = 150  }  
     relation =
     {  tag        = ROM
       value      = 50
       guaranteed = { day = 13 month = april year = 1939 }
     } 
     relation = {  tag = SAF value = 150  } 
     relation = {  tag = SAU value = 10  } 
     relation = {  tag = SCH value = 1 } 
     relation = {  tag = SIA value = -100  } 
     relation = {  tag = SOV value = 100  } 
     relation = {  tag = SPA value = -65  } 
     relation = {  tag = SWE value = 80 }
     relation = 
     {  tag        = TUR 
       value      = 50 
       guaranteed = {  day = 7 month = january year = 1935  } 
      } 
     relation = {  tag = U03 value = 50 access = yes  }  
     relation = {  tag = U04 value = 50 access = yes  }  
     relation = {  tag = U05 value = 75  }
     relation = {  tag = USA value = 65  } 
     relation = {  tag = YEM value = 150  } 
     relation = 
     {  tag        = YUG 
       value      = 50 
       guaranteed = {  day = 7 month = january year = 1935  } 
      } 
    } 
   SpyInfo                = {  country = "FRA" NumberOfSpies = 9  } 
   # Togoland 
   # Metropolitan France 
   nationalprovinces      = { 37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 
          
                             } 
   # Metropolitan France 
   ownedprovinces         = {  37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 740 741 742 743 744 745 746 747 748 749 833 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1001 1002 1003 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 1752 1767 1768 2000 2135 
                             } 
   # Togoland 
   # Metropolitan France 
   controlledprovinces    = {  37 38 39 40 41 42 43 44 45 46 47 48 49 50 51 52 53 54 55 56 57 58 59 60 61 62 63 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79 80 81 82 83 84 85 86 87 88 89 90 91 92 93 94 95 96 97 98 99 100 101 102 103 104 105 106 107 717 718 719 720 721 722 723 724 725 726 727 728 729 730 731 732 733 734 735 736 737 738 739 740 741 742 743 744 745 746 747 748 749 833 907 908 909 910 911 914 915 917 918 919 920 921 922 923 924 925 926 927 928 942 943 944 945 946 947 948 949 950 951 957 958 959 960 961 962 965 966 967 968 970 971 972 973 974 975 976 977 978 980 981 982 983 984 985 986 996 999 1000 1001 1002 1003 1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 1752 1767 1768 2000 2135 
                             }
	claimedprovinces = {
                            717 718 719 720 721 722 723 724 725 726 #Morocco 
                            727 728 729 730 731 732 733 734 735 736 737 738 739 743 #Algeria
                            740 741 742 744 745 746 747 748 749 # Tunisia
                            907 908 909 910 911 914 915 917 918 919 #French Congo and Cameroon
                            920 921 922 923 924 925 926 927 928 #Central Africa
                            942 943 944 945 946 947 #Niger
                            948 949 950 951 #Slave Coast
                            957 958 959 #Volta
                            960 961 962 #Ivory Coast
                            965 966 967 968 970 #Guinean Coast
                            971 972 973 974 975 976 977 #Malian Valleys
                            978 980 #Senegambia
                            981 982 983 #Mauretania
                            984 985 986 #Malian Desert
                            833 #Djbouti
                            1001 1002 1003 996 999 1000 #Madagascar + nearby Island
                            
                            2000  #Cayenne 
                            1752 1767 1768 #French West Indies
                            1581 1582 1583 1584 1585 1586 1730 1740 1743 1744 #French Pacific Island
                            2135 #Saint Pierre island near Newfoundland
						}		 
		 
	# FRA 1940 techs 
	# ###################### 
	techapps = { 
	# Armoured Car  
	2860 2870 2880 2020 2150
	# Tank 
	7600 7610 2620 2010 2630 2640 2646 2650 2030 2040 2050 2070
	#Heavy Tanks
	2100
	# Field Artillery 
	2290 2300 2310 2900 2910 2920 2930 2940 2320 2330
	# Anti-Tank Artillery
	2400
	# Static Anti-Air Artillery 
	2800 2450 21180 21190 21200
	#Basic Anti-Air Artillery Brigade 
	2810 2820 2510 2520
	
	# Infantry Division  
	1010  1020 1030 1040 1050 1060 1070 1080 1090 1100 1110
	# Cavalry Division  
	13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380
	# Mountain Division 
	1160  1170 1180 1190 1200 1210 1220 1230 1240 1250
	# Motorised Inf
	1396
	# Naval Infantry
	1560 1570 1580 
	# Engineers
	1830 1840 1850 1860
	# Supply 
	1910 1920 1930 1940 1950 1960 1970 1980 1990
	
	# Agriculture 
	5700 5710 5010 5020 5030
	# Machine Tools 
	5810 5820 5050 5830 5060 5070
	# Construction Engineering 
	5800 5080 5090 
	# Oil Refining 
	5190 5200
	# Computers 
	5310 54010 54020 54030 5320
	# Cryptography
	5316 5326 5327 5350 5360
	# Radar
	5410 5416
	# Atomic Research 
	5470 5480
	# Medicine
	5600 5610 5620 5630 5640
	# Exp. Rocket
	5560

	# Destroyer 
	3010 3020 3030 3040 3050 3060 3070
	# Light Cruiser 
	3110 3120 3130 3140 3150 3160
	# Heavy Cruiser 
	3210 3220 3230 3240 3250 3260 
	# Battleship 
	3410 3420 3430 3440 3450 3456 3460 3470 3480
	# Aircraft Carrier 
	3510 3520
	# Light carrier 
	12100 12110 12120
	# Submarine 
	3610 3620 3630 3640 3650 3660
	# Battle Cruiser
	3310 3320 3330 3340
	# Torpedo & ASW 18
	3720 3730 3736 3740 3750 3900
	# Troopships
	3810 3820 3830

	# Interceptors
	4500 4510 4520 4530 4540 4550 4010 4020 4030 4060
	# CAS
	4400 4170 4280
	# Tactical Bombers
	4600 4610 4620 4630 4120 4130 4140
	# Multi-role fighter
	4300 4310 4320 4330 4340 4040
	# Escort Fighters
	4050
	# Seaplanes
	4740 4750 4760 4770 4780 4790
	# Strategic Bombers
	4800 4810 4820
	# Naval Bombers
	4700 4710 4190
	# CAG
	4900 4910 4920
	# Air Transports
	4290 4250
	
	#Great War Hospital System 
	14000 14010 14020 14030
	# Great War Land Doctrines (entente)
	6500 6510 6530 6580 6600 6610 6680 6620 6630 6640 6650 6660 6670 6540 6910
	#Land Doctrines
	6560 6030 6110 6120 6130 6900

	#Naval Doctrines
	# Theories
	8010 8020 8030 8040 8050 8060 8070 8080 
	# Amphibious Warfare
	82300
	# Naval Logistics
	82500
	# Naval Interdiction
	8500 8510 8520 8550 8560 8600 8610
	# Engagement Tactic (Fleet-in-Being)
	8900 8910 8920 8930 8940 8950 8960
	# Naval Supremacy
	8100 8110 8120 8150 8160 8200 8210
	# Carrier Tactics
	81650 81850
	
	#Air Doctrines - ww2 techs
	27480 27490 27500 27510 27520 27530 27540 27550 27570 27580 27590 27600 9030 9020 27560 
	27460 27470 9010 9040 9050 9060 9070 9090 9100 9110 9120 9140 9150 
	} 
	
inventions = { 3000027 }
   policy = 
   {  date              = {  year = 0 month = january day = 0  } 
     democratic        = 9 
     political_left    = 10 
     free_market       = 8 
     freedom           = 10 
     professional_army = 8 
     defense_lobby     = 7 
     interventionism   = 8 
    } 
   headofstate            = {  type = 9 id = 5001  } 
   headofgovernment       = {  type = 9 id = 5021  } 
   foreignminister        = {  type = 9 id = 5037  } 
   armamentminister       = {  type = 9 id = 5057  } 
   ministerofsecurity     = {  type = 9 id = 5088  } 
   ministerofintelligence = {  type = 9 id = 5108  } 
   chiefofstaff           = {  type = 9 id = 5007  } 
   chiefofarmy            = {  type = 9 id = 5008  } 
   chiefofnavy            = {  type = 9 id = 5139  } 
   chiefofair             = {  type = 9 id = 5148  }
   dormant_ministers      = {  5002 5016 5019 5003 5031 5035 5004 5072 5005 5098 5006  } 
   # #################
   # ###FRENCH OOB####
   # #################

   # GHQ
   landunit = 
   { id       = {  type = 13500 id = 1  } 
     name     = "Gouvernement militaire de Paris" 
     leader   = 5076 # Gamelin
     location = 55 
     division = 
     { id       = {  type = 13500 id = 2  } 
       name     = "Grand Quartier Général" 
       type     = hq 
       model    = 2 
       strength = 90 
      } 
     division = 
     { id    = {  type = 13500 id = 3  } 
       name  = "2ème Division Cuirassée de Réserve" 
       type  = armor
       model = 0
       strength = 70
       extra    = heavy_armor 
       brigade_model = 1
      }
     division = 
     { id    = {  type = 13500 id = 4  } 
       name  = "3ème Division Cuirassée de Réserve" 
       type  = armor
       model = 0
       strength = 70
       extra    = heavy_armor 
       brigade_model = 1
      }
    } 
   # 1ST ARMY GROUP
   # 7th Army
   landunit = 
   { id       = {  type = 13500 id = 7  } 
     name     = "VIIème Armée" 
     leader   = 5083 # Giraud
     location = 51 
     division = 
     { id       = {  type = 13500 id = 8  } 
       name     = "VIIème Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      } 
     division = 
     { id    = {  type = 13500 id = 9  } 
       name  = "1ère Division Légère Mécanisée" 
       type  = light_armor
       model = 1
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 10  } 
       name  = "4ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 65
      }
     division = 
     { id    = {  type = 13500 id = 16  } 
       name  = "9ème Division d'Infanterie Motorisée" 
       type  = motorized
       model = 0
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 11  } 
       name  = "21ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 85
      }
     division = 
     { id    = {  type = 13500 id = 14  } 
       name  = "25ème Division d'Infanterie Motorisée" 
       type  = motorized
       model = 0
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 12  } 
       name  = "60ème Division d'Infanterie" 
       type  = infantry
       model = 8
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 196  } 
       name  = "7ème Division d'Infanterie Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 60
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 192  } 
     name     = "Secteur Fortifié des Flandres" 
     location = 51 
     division = 
     { id    = {  type = 13500 id = 1930  } 
       name  = "Secteur Fortifié des Flandres" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   # 1st Army
   landunit = 
   { id       = {  type = 13500 id = 17  } 
     name     = "Ière Armée" 
     leader   = 5016 # Blanchard
     location = 52 
     division = 
     { id       = {  type = 13500 id = 18  } 
       name     = "Ière Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      } 
     division = 
     { id    = {  type = 13500 id = 19  } 
       name  = "1ère Division Cuirassée de Réserve" 
       type  = light_armor
       model = 0
       strength = 70
       extra    = heavy_armor 
       brigade_model = 1
      }
     division = 
     { id    = {  type = 13500 id = 20  } 
       name  = "32ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 36  } 
       name  = "101ème Division d'Infanterie de Forteresse" 
       type  = garrison
       model = 4
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 34  } 
       name  = "Secteur Fortifié de l'Escaut" 
       type  = garrison
       model = 4
       strength = 50
      }
    } 
   landunit = 
   { id       = {  type = 13500 id = 21  } 
     name     = "Corps de Cavalerie" 
     location = 52 
     division = 
     { id    = {  type = 13500 id = 22  } 
       name  = "2ème Division Légère Mécanisée" 
       type  = light_armor
       model = 1
       strength = 100
       extra    = anti_air 
       brigade_model = 3
      }
     division = 
     { id    = {  type = 13500 id = 23  } 
       name  = "3ème Division Légère Mécanisée" 
       type  = light_armor
       model = 0
       strength = 100
      }
    } 
   landunit = 
   { id       = {  type = 13500 id = 24  } 
     name     = "IIIème Corps d'Armée" 
     location = 52 
     division = 
     { id    = {  type = 13500 id = 25  } 
       name  = "1ère Division d'Infanterie Motorisée" 
       type  = motorized
       model = 0
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 26  } 
       name  = "2ème Division d'Infanterie Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
      }
    } 
   landunit = 
   { id       = {  type = 13500 id = 27  } 
     name     = "IVème Corps d'Armée" 
     location = 103 
     division = 
     { id    = {  type = 13500 id = 28  } 
       name  = "15ère Division d'Infanterie Motorisée" 
       type  = motorized
       model = 0
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 29  } 
       name  = "1ère Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 1931  } 
       name  = "1ère Division Marocaine" 
       type  = infantry
       model = 8
       strength = 60
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 30  } 
     name     = "Vème Corps d'Armée" 
     location = 103 
     division = 
     { id    = {  type = 13500 id = 31  } 
       name  = "12ère Division d'Infanterie Motorisée" 
       type  = motorized
       model = 0
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 32  } 
       name  = "5ème Division d'Infanterie Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 70
       extra = medium_armor
       brigade_model = 0
      }
    }
   # 9th Army
   landunit = 
   { id       = {  type = 13500 id = 37  } 
     name     = "IXème Armée" 
     leader   = 5037 # Corap
     location = 103 
     division = 
     { id       = {  type = 13500 id = 38  } 
       name     = "IXème Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      } 
     division = 
     { id    = {  type = 13500 id = 39  } 
       name  = "1ère Division Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 80
       extra = light_armor_brigade
       brigade_model = 0
      }
     division = 
     { id    = {  type = 13500 id = 40  } 
       name  = "4ème Division Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 90
       extra = light_armor_brigade
       brigade_model = 0
      }
     division = 
     { id    = {  type = 13500 id = 41  } 
       name  = "4ème Division d'Infanterie Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 70
      }
     division = 
     { id    = {  type = 13500 id = 42  } 
       name  = "53ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 51  } 
       name  = "102ème Division d'Infanterie de Forteresse" 
       type  = garrison
       model = 4
       strength = 75
      }
    } 
   landunit = 
   { id       = {  type = 13500 id = 43  } 
     name     = "IIème Corps d'Armée" 
     location = 102 
     division = 
     { id    = {  type = 13500 id = 44  } 
       name  = "5ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 45  } 
     name     = "XIème Corps d'Armée" 
     location = 102 
     division = 
     { id    = {  type = 13500 id = 46  } 
       name  = "18ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 47  } 
       name  = "22ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 1950  } 
       name  = "1ère Division d'Infanterie Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 48  } 
     name     = "XLIème Corps d'Armée de Forteresse" 
     location = 102 
     division = 
     { id    = {  type = 13500 id = 49  } 
       name  = "61ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 75
      }
    }
   # 2nd Army
   landunit = 
   { id       = {  type = 13500 id = 52  } 
     name     = "IIème Armée" 
     leader   = 5094 # Huntziger
     location = 102 
     division = 
     { id       = {  type = 13500 id = 53  } 
       name     = "IIème Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      } 
     division = 
     { id    = {  type = 13500 id = 54  } 
       name  = "2ème Division Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 95
      }
     division = 
     { id            = {  type = 13500 id = 55  } 
       name          = "5ème Division Légère de Cavalerie" 
       type          = cavalry
       model         = 10
       strength      = 100
       extra         = armored_car
       brigade_model = 4
      }
     division = 
     { id    = {  type = 13500 id = 56  } 
       name  = "71ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 58  } 
       name  = "Secteur Fortifié de Montmédy" 
       type  = garrison
       model = 4
       strength = 50
      }
    } 
   landunit = 
   { id       = {  type = 13500 id = 59  } 
     name     = "Xème Corps d'Armée" 
     location = 102 
     division = 
     { id    = {  type = 13500 id = 60  } 
       name  = "3ème Division d'Infanterie Nord-Africaine" 
       type  = infantry
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 61  } 
       name  = "55ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 199  } 
       name  = "5ème Division d'Infanterie Coloniale" 
       type  = infantry
       model = 9
       strength = 70
      }
     division = 
     { id    = {  type = 13500 id = 200  } 
       name  = "7ème Division d'Infanterie Coloniale" 
       type  = infantry
       model = 8
       strength = 70
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 62  } 
     name     = "XVIIIème Corps d'Armée" 
     location = 102 
     division = 
     { id    = {  type = 13500 id = 63  } 
       name  = "1ère Division d'Infanterie Coloniale" 
       type  = infantry
       model = 8
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 64  } 
       name  = "3ème Division d'Infanterie Coloniale" 
       type  = infantry
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 65  } 
       name  = "41ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
    }
   # 2ND ARMY GROUP
   landunit = 
   { id       = {  type = 13500 id = 66  } 
     name     = "Réserves de l'Groupe d'Armées II" 
     location = 100 
     division = 
     { id    = {  type = 13500 id = 68  } 
       name  = "4ème Division d'Infanterie Coloniale" 
       type  = infantry
       model = 9
       strength = 70
      }
     division = 
     { id    = {  type = 13500 id = 69  } 
       name  = "87ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 70
      }
    }
   # 3rd Army
   landunit = 
   { id       = {  type = 13500 id = 70  } 
     name     = "IIIème Armée" 
     leader   = 5036 # Condé
     location = 96 
     division = 
     { id       = {  type = 13500 id = 71  } 
       name     = "IIIème Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      } 
     division = 
     { id    = {  type = 13500 id = 72  } 
       name  = "3ème Division Légère de Cavalerie" 
       type  = cavalry
       model = 10
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 73  } 
       name  = "6ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 74  } 
       name  = "7ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 75  } 
       name  = "8ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 76  } 
       name  = "6ème Division d'Infanterie Coloniale" 
       type  = infantry
       model = 9
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 77  } 
       name  = "6ème Division d'Infanterie Nord-Africaine" 
       type  = infantry
       model = 8
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 82  } 
       name  = "Secteur Fortifiée de Thionville" 
       type  = garrison
       model = 4
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 84  } 
       name  = "Secteur Fortifiée de Boulay" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 78  } 
     name     = "Corps d'Armée Colonial" 
     location = 96 
     division = 
     { id    = {  type = 13500 id = 79  } 
       name  = "2ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 80  } 
       name  = "56ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 85  } 
     name     = "VIéme Corps d'Armée" 
     location = 96 
     division = 
     { id    = {  type = 13500 id = 86  } 
       name  = "26ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 87  } 
       name  = "42ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 88  } 
     name     = "XXIVéme Corps d'Armée" 
     location = 96 
     division = 
     { id    = {  type = 13500 id = 89  } 
       name  = "51ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 90  } 
     name     = "XLIIéme Corps d'Armée de Forteresse" 
     location = 96 
     division = 
     { id    = {  type = 13500 id = 91  } 
       name  = "20ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 92  } 
       name  = "58ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
    }
   # 4th Army
   landunit = 
   { id       = {  type = 13500 id = 93  } 
     name     = "IVème Armée" 
     leader   = 5130 # Réquin
     location = 104 
     division = 
     { id       = {  type = 13500 id = 94  } 
       name     = "IVème Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      } 
     division = 
     { id    = {  type = 13500 id = 95  } 
       name  = "1. Dywizja Grenadierów" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 98  } 
       name  = "2 Dywizja Strzelców Pieszych" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 96  } 
       name  = "45ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 99  } 
       name  = "47ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 105  } 
       name  = "52éme Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 106  } 
       name  = "82ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 70
      }
     division = 
     { id    = {  type = 13500 id = 101  } 
       name  = "Secteur Fortifiée de Faulquemont" 
       type  = garrison
       model = 4
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 103  } 
       name  = "Secteur Fortifié de la Sarre" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   # 5th Army
   landunit = 
   { id       = {  type = 13500 id = 107  } 
     name     = "Vème Armée" 
     #leader   = #### # Bourret
     location = 107 
     division = 
     { id       = {  type = 13500 id = 108  } 
       name     = "Vème Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      } 
     division = 
     { id    = {  type = 13500 id = 118  } 
       name  = "16ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 111  } 
       name  = "24ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 126  } 
       name  = "30ème Division d'Infanterie" 
       type  = bergsjaeger
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 112  } 
       name  = "31ème Division d'Infanterie" 
       type  = bergsjaeger
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 119  } 
       name  = "35ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 109  } 
       name  = "44ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      } 
     division = 
     { id    = {  type = 13500 id = 311  } #122
       name  = "62ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 120  } 
       name  = "70ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 95
      }
     division = 
     { id    = {  type = 13500 id = 124  } 
       name  = "103ème Division d'Infanterie de Forteresse" 
       type  = garrison
       model = 4
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 114  } 
       name  = "Secteur Fortifié de Rohrbach" 
       type  = garrison
       model = 4
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 116  } 
       name  = "Secteur Fortifiée de Haguenau" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   # 3RD ARMY GROUP
   landunit = 
   { id       = {  type = 13500 id = 127  } 
     name     = "Réserves de l'Groupe d'Armées III" 
     location = 97 
     division = 
     { id    = {  type = 13500 id = 129  } 
       name  = "57ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 70
      }
     division = 
     { id    = {  type = 13500 id = 130  } 
       name  = "63ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 70
      } 
     division = 
     { id    = {  type = 13500 id = 132  } 
       name  = "Secteur Fortifiée du Jura" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   # 8th Army
   landunit = 
   { id       = {  type = 13500 id = 133  } 
     name     = "VIIIème Armée" 
     leader   = 5078 # Garchery
     location = 105 
     division = 
     { id       = {  type = 13500 id = 134  } 
       name     = "VIIIème Armée" 
       type     = hq 
       model    = 2 
       strength = 75 
      }
     division = 
     { id    = {  type = 13500 id = 136  } 
       name  = "13ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 323  } #139
       name  = "19ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 90
      }
     division = 
     { id    = {  type = 13500 id = 137  } 
       name  = "27ème Division d'Infanterie" 
       type  = bergsjaeger
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 140  } 
       name  = "54ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 144  } 
       name  = "67ème Division d'Infanterie" 
       type  = infantry
       model = 9
       strength = 100
      }
     division = 
     { id    = {  type = 13500 id = 141  } 
       name  = "104ème Division d'Infanterie de Forteresse" 
       type  = garrison
       model = 4
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 326  } #142
       name  = "105ème Division d'Infanterie de Forteresse" 
       type  = garrison
       model = 4
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 146  } 
       name  = "Secteur Fortifiée d'Altkirch" 
       type  = garrison
       model = 4
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 148  } 
       name  = "Secteur Fortifié de Montbéliard" 
       type  = garrison
       model = 4
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 150  } 
       name  = "Défense de Belfort" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   # Army of the Alps
   landunit = 
   { id       = {  type = 13500 id = 151  } 
     name     = "Armée des Alpes" 
     #leader   = #### # Olry
     location = 90 
     division = 
     { id       = {  type = 13500 id = 152  } 
       name     = "Armée des Alpes" 
       type     = hq 
       model    = 2 
       strength = 60 
      }
     division = 
     { id    = {  type = 13500 id = 153  } 
       name  = "8ème Division d'Infanterie Coloniale" 
       type  = infantry
       model = 9
       strength = 70
      } 
     division = 
     { id    = {  type = 13500 id = 158  } 
       name  = "Secteur Fortifié du Dauphiné" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 154  } 
     name     = "XIVéme Corps d'Armée" 
     location = 91 
     division = 
     { id    = {  type = 13500 id = 155  } 
       name  = "64ème Division d'Infanterie" 
       type  = bergsjaeger
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 156  } 
       name  = "66ème Division d'Infanterie" 
       type  = bergsjaeger
       model = 9
       strength = 80
      } 
     division = 
     { id    = {  type = 13500 id = 160  } 
       name  = "Secteur Défensif du Rhône" 
       type  = garrison
       model = 4
       strength = 50
      } 
     division = 
     { id    = {  type = 13500 id = 162  } 
       name  = "Secteur Fortifié de Savoie" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 163  } 
     name     = "XIVéme Corps d'Armée" 
     location = 87 
     division = 
     { id    = {  type = 13500 id = 164  } 
       name  = "2ème Division d'Infanterie Coloniale" 
       type  = bergsjaeger
       model = 9
       strength = 80
      }
     division = 
     { id    = {  type = 13500 id = 165  } 
       name  = "65ème Division d'Infanterie" 
       type  = bergsjaeger
       model = 9
       strength = 75
      }
     division = 
     { id    = {  type = 13500 id = 167  } 
       name  = "Secteur Fortifié de Alpes-Maritimes" 
       type  = garrison
       model = 4
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 169  } 
       name  = "Secteur Fortifié de Nice" 
       type  = garrison
       model = 4
       strength = 50
      }
    }
   # FRENCH EXPEDITIONARY CORPS IN SCANDINAVIA
   landunit = 
   { id       = {  type = 13500 id = 170  } 
     name     = "Corps Expéditionnaire Français en Scandinavie" 
     leader   = 5006 # Audet
     location = 495 
     division = 
     { id    = {  type = 13500 id = 171  } 
       name  = "1ère Division Légère d'Infanterie" 
       type  = infantry
       model = 9
       strength = 15
       extra = light_armor_brigade
       brigade_model = 0	   
      }
     division = 
     { id    = {  type = 13500 id = 172  } 
       name  = "1ère Division Légère de Chasseurs" 
       type  = bergsjaeger
       model = 9
       strength = 5
      }
     division = 
     { id    = {  type = 13500 id = 173  } 
       name  = "2ème Division Légère de Chasseurs" 
       type  = bergsjaeger
       model = 9
       strength = 10
      }
    }
   # COLONIAL ARMY
   # Command of Tunisia
   landunit = 
   { id       = {  type = 13500 id = 174  } 
     name     = "Commandement Supérieur des Troupes de Tunisie" 
     location = 747
     division = 
     { id    = {  type = 13500 id = 175  } 
       name  = "83ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 176  } 
       name  = "84ème Division d'Infanterie d'Afrique" 
       type  = bergsjaeger
       model = 8
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 177  } 
       name  = "88ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 178  } 
     name     = "Front Sud-Tunisien" 
     location = 744 
     division = 
     { id    = {  type = 13500 id = 179  } 
       name  = "81ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 183  } 
       name  = "85ème Division d'Infanterie d'Afrique" 
       type  = bergsjaeger
       model = 8
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 180  } 
       name  = "180ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 181  } 
       name  = "6ème Division Légère de Cavalerie" 
       type  = cavalry
       model = 9
       strength = 45
      }
    }
   # 19th Military Region
   landunit = 
   { id       = {  type = 13500 id = 182  } 
     name     = "XIXème Région Militaire" 
     location = 727 
     division = 
     { id    = {  type = 13500 id = 184  } 
       name  = "182ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 185  } 
     name     = "XIXème Région Militaire" 
     location = 728
     division = 
     { id    = {  type = 13500 id = 1860  } 
       name  = "181ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
     division = 
     { id    = {  type = 13500 id = 187  } 
       name  = "183ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 188  } 
     name     = "XIXème Région Militaire" 
     location = 734 
     division = 
     { id    = {  type = 13500 id = 189  } 
       name  = "Front Est Saharien" 
       type  = infantry
       model = 8
       strength = 40
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 190  } 
     name     = "Troupes du Maroc" 
     location = 718 
     division = 
     { id    = {  type = 13500 id = 191  } 
       name  = "3ème Division Marocaine" 
       type  = infantry
       model = 8
       strength = 50
      }
    }
   landunit = 
   { id       = {  type = 13500 id = 202  } 
     name     = "Troupes du Levant" 
     location = 1016 
     division = 
     { id    = {  type = 13500 id = 201  } 
       name  = "86ème Division d'Infanterie d'Afrique" 
       type  = infantry
       model = 8
       strength = 50
      }
    }
   landunit = 
   {  id       = {  type = 13500 id = 210  } 
     name     = "Troupes d'Afrique occidentale" 
     location = 978 
     Division = 
     {  id   = {  type = 13500 id = 211  } 
       name = "Point d'appui de la flotte de Dakar" 
       type = garrison 
	   model = 4
       strength = 40
      }
    } 
   landunit = 
   {  id       = {  type = 13500 id = 212  } 
     name     = "1ère Brigade de Tirailleurs Sénégalais" 
     location = 983 
     Division = 
     {  id       = {  type = 13500 id = 213  } 
       name     = "1ère Brigade de Tirailleurs Sénégalais" 
       type     = militia 
       model    = 4 
      } 
    }
   landunit = 
   {  id       = {  type = 13500 id = 214  } 
     name     = "2ème Brigade de Tirailleurs Sénégalais" 
     location = 976 
     Division = 
     {  id       = {  type = 13500 id = 215  } 
       name     = "2ème Brigade de Tirailleurs Sénégalais" 
       type     = militia 
       model    = 4 
      } 
    }
   landunit = 
   {  id       = {  type = 13500 id = 216  } 
     name     = "3ème Brigade de Tirailleurs Sénégalais" 
     location = 962 
     Division = 
     {  id       = {  type = 13500 id = 217  } 
       name     = "3ème Brigade de Tirailleurs Sénégalais" 
       type     = militia 
       model    = 4 
      } 
    }
   landunit = 
   {  id       = {  type = 13500 id = 218  } 
     name     = "Troupes d'Afrique équatoriale" 
     location = 920 
     Division = 
     {  id       = {  type = 13500 id = 219  } 
       name     = "Tirailleurs du Tchad" 
       type     = militia 
       model    = 4 
      } 
    }
   landunit = 
   {  id       = {  type = 13500 id = 220  } 
     name     = "Troupes d'Afrique orientale" 
     location = 1001 
     Division = 
     {  id       = {  type = 13500 id = 222  } 
       name     = "Tirailleurs Malgaches" 
       type     = militia 
       model    = 4 
      } 
    }

	# ############
	# French Navy
	# ############

	# 1ST SQUADRON
	navalunit = { 
		id = { type = 13500 id = 302 } #300
		name = "1ère Escadre" 
		location = 37 
		base = 37 
		division = { 
			id = { type = 13500 id = 301 } 
			name = "Béarn" 
			type = escort_carrier 
			model = 1 
			}
		division = { 
			id = { type = 13500 id = 300 } #302
			name = "Dunkerque" 
			type = battlecruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 316 } 
			name = "Strasbourg" 
			type = battlecruiser 
			model = 3 
			}
 		division = { 
			id = { type = 13500 id = 330 } 
			name = "George Leygues" 
			type = light_cruiser 
			model = 4
			}
 		division = { 
			id = { type = 13500 id = 331 } 
			name = "Gloire" 
			type = light_cruiser 
			model = 4
			}
 		division = { 
			id = { type = 13500 id = 332 } 
			name = "Montcalm" 
			type = light_cruiser 
			model = 4
			}
		division = { 
			id = { type = 13500 id = 335 } 
			name = "6ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 337 } 
			name = "8ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 339 } 
			name = "10ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 309 } 
			name = "1ère Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		} 
	# 2ND SQUADRON
	navalunit = { 
		id = { type = 13500 id = 315 } 
		name = "2ème Escadre" 
		location = 728 
		base = 728 
		division = { 
			id = { type = 13500 id = 122 } #311
			name = "Provence" 
			type = battleship 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 142 } #326
			name = "Bretagne" 
			type = battleship 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 310 } 
			name = "Lorraine" 
			type = battleship 
			model = 3 
			extra1 = naval_anti_air_l
			extra2 = floatplane
			brigade_model2 = 4
			} 
		division = { 
			id = { type = 13500 id = 1730 } 
			name = "18ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 1731 } 
			name = "19ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 1732 } 
			name = "20ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 324 } 
			name = "2ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		} 
	# 3RD SQUADRON
	navalunit = { 
		id = { type = 13500 id = 325 } 
		name = "3ème Escadre" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 327 } 
			name = "Algérie" 
			type = heavy_cruiser 
			model = 4 
			extra1 = floatplane
			brigade_model1 = 4
			}
		division = { 
			id = { type = 13500 id = 333 } 
			name = "Foch" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 334 } 
			name = "Tourville" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 318 } 
			name = "Duquesne" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 312 } 
			name = "Colbert" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 313 } 
			name = "Dupleix" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 314 } 
			name = "Emile Bertin" 
			type = light_cruiser 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 139 } #323
			name = "5ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 336 } 
			name = "7ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 338 } 
			name = "9ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 340 } 
			name = "3ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}
		} 
	# 1ST NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3103 } 
		name = "Forces navales de la Ière région" 
		location = 43 
		base = 43 
		division = { 
			id = { type = 13500 id = 3104 } 
			name = "16ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 366 } 
			name = "11ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		}
	# 2ND NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3102 } 
		name = "Forces navales de la IIème région" 
		location = 37 
		base = 37 
		division = { 
			id = { type = 13500 id = 3100 } 
			name = "Courbet" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 3101 } 
			name = "Paris" 
			type = battleship 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 308 } 
			name = "2ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 343 } 
			name = "2ème Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 348 } 
			name = "6ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 350 } 
			name = "8ème Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		}
	# 3RD NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3105 } 
		name = "Forces navales de la IIIème région" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 138 } #322
			name = "4ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 1716 } 
			name = "13ème Flottille Légère de Contre-Torpilleurs" 
			type = destroyer 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 342 } 
			name = "1ère Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 344 } 
			name = "3ème Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 346 } 
			name = "5ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 349 } 
			name = "7ème Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 356 } 
			name = "13ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 358 } 
			name = "15ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		}
	# 4TH NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3106 } 
		name = "Forces navales de la IVème région" 
		location = 748 
		base = 748 
		division = { 
			id = { type = 13500 id = 328 } 
			name = "Marsellaise" 
			type = light_cruiser 
			model = 4
			}
 		division = { 
			id = { type = 13500 id = 329 } 
			name = "Jean de Vienne" 
			type = light_cruiser 
			model = 4
			}
		division = { 
			id = { type = 13500 id = 306 } 
			name = "La Galissonnière" 
			type = light_cruiser 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 307 } 
			name = "1ère Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 321 } 
			name = "3ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 3660 } 
			name = "12ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 4 
			}
		division = { 
			id = { type = 13500 id = 360 } 
			name = "4ème Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		}
	# 6th Light Squadron
	navalunit = { 
		id = { type = 13500 id = 3107 } 
		name = "6ème Escadre Légère" 
		location = 728 
		base = 728 
		division = { 
			id = { type = 13500 id = 3260 } 
			name = "Commandant Teste" 
			type = escort_carrier 
			model = 0 
			extra1 = naval_anti_air_l
			brigade_model1 = 0
			} 
		division = { 
			id = { type = 13500 id = 1729 } 
			name = "17ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 5 
			} 
		division = { 
			id = { type = 13500 id = 355 } 
			name = "12ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		division = { 
			id = { type = 13500 id = 357 } 
			name = "14ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		} 
	# Bizerte Submarine Base
	navalunit = { 
		id = { type = 13500 id = 347 } 
		name = "Centre de Sous-Marins a Bizerte" 
		location = 748 
		base = 748 
		division = { 
			id = { type = 13500 id = 351 } 
			name = "9ème Flottille de Sous-Marins" 
			type = submarine 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 352 } 
			name = "10ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		} 
	# Morocco Naval Forces
	navalunit = { 
		id = { type = 13500 id = 3108 } 
		name = "Marine du Maroc" 
		location = 717 
		base = 717 
		division = { 
			id = { type = 13500 id = 1728 } 
			name = "16ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 0 
			} 
		division = { 
			id = { type = 13500 id = 345 } 
			name = "4ème Flottille de Sous-Marins" 
			type = submarine 
			model = 5 
			} 
		} 
	# 5TH NAVAL REGION
	navalunit = { 
		id = { type = 13500 id = 3109 } 
		name = "Forces navales de la Vème région" 
		location = 40 
		base = 40 
		division = { 
			id = { type = 13500 id = 1725 } 
			name = "14ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 2 
			} 
		}
	# FAR EAST NAVAL FORCES
	navalunit = { 
		id = { type = 13500 id = 3250 } 
		name = "Forces navales d'Extrême-Orient" 
		location = 1399 
		base = 1399 
		division = { 
			id = { type = 13500 id = 305 } 
			name = "Lamotte-Picquet" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 317 } 
			name = "Suffren" 
			type = heavy_cruiser 
			model = 3 
			extra1 = floatplane
			brigade_model1 = 4
			} 
		division = { 
			id = { type = 13500 id = 1726 } 
			name = "15ème Flottille de Contre-Torpilleurs" 
			type = destroyer 
			model = 0 
			} 
		}
	# LEVANT NAVAL STATION
	navalunit = { 
		id = { type = 13500 id = 3110 } 
		name = "Station Navale du Levant" 
		location = 1019 
		base = 1019 
		division = { 
			id = { type = 13500 id = 354 } 
			name = "11ème Flottille de Sous-Marins" 
			type = submarine 
			model = 4 
			} 
		}
	# WEST AFRICA NAVAL STATION
	navalunit = { 
		id = { type = 13500 id = 3111 } 
		name = "C.E.C. des Forces Maritimes Françaises" 
		location = 978 
		base = 978 
		division = { 
			id = { type = 13500 id = 303 } 
			name = "Primauguet" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 304 } 
			name = "Duguay-Trouin" 
			type = light_cruiser 
			model = 3 
			} 
		division = { 
			id = { type = 13500 id = 320 } 
			name = "Jeanne d'Arc" 
			type = light_cruiser 
			model = 3 
			} 
		}
	# TRANSPORT FLEET
	navalunit = { 
		id = { type = 13500 id = 359 } 
		name = "Transport Général" 
		location = 86 
		base = 86 
		division = { 
			id = { type = 13500 id = 364 } 
			name = "5ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}
		division = { 
			id = { type = 13500 id = 363 } 
			name = "6ème Flottille de Convoi" 
			type = transport 
			model = 2 
			}  
		division = { 
			id = { type = 13500 id = 361 } 
			name = "7ème Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 3610 } 
			name = "8ème Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		division = { 
			id = { type = 13500 id = 3611 } 
			name = "9ème Flottille de Convoi" 
			type = transport 
			model = 2 
			} 
		}      

	# ###############
	# French Airforce
	# ###############
   airunit = 
   {  id       = {  type = 13500 id = 500  } 
     name     = "Zone d'Opérations Aériennes Nord" 
     location = 55 
     base     = 55 
     Division = 
     {  id       = {  type = 13500 id = 501  } 
       name     = "Groupe de Chasse 21" 
       strength = 80 
       type     = interceptor 
       model    = 9 # Bloch 152
      }
     Division = 
     {  id       = {  type = 13500 id = 502  } 
       name     = "Groupe de Chasse 23" 
       strength = 80 
       type     = interceptor 
	   model = 8 # Morane 406
      } 
     Division = 
     {  id       = {  type = 13500 id = 503  } 
       name     = "Groupe de Chasse 25" 
       strength = 40 
       type     = interceptor 
	   model = 8 # Morane 406
      }
     Division = 
     {  id       = {  type = 13500 id = 504  } 
       name     = "Groupement de Chasse de Nuit" 
       strength = 40 
       type     = multi_role 
	   model = 5 # Potez 631
      }
     Division = 
     {  id       = {  type = 13500 id = 505  } 
       name     = "Groupe de Bombardement 6" 
       strength = 50 
       type     = tactical_bomber 
	   model = 6 # LéO 451
      }
     Division = 
     {  id       = {  type = 13500 id = 506  } 
       name     = "Groupe de Bombardement 9" 
       strength = 60 
       type     = tactical_bomber 
	   model = 4 # Amiot 143
      }
     Division = 
     {  id       = {  type = 13500 id = 507  } 
       name     = "Groupe de Bombardement d'Assaut 18" 
       strength = 30 
       type     = cas 
       model    = 2 # Bréguet 693
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 508  } 
     name     = "Zone d'Opérations Aériennes Est" 
     location = 66 
     base     = 66 
     Division = 
     {  id       = {  type = 13500 id = 509  } 
       name     = "Groupe de Chasse 22" 
       strength = 80 
       type     = interceptor 
       model    = 8 # Morane 406
      }
     Division = 
     {  id       = {  type = 13500 id = 510  } 
       name     = "Groupe de Bombardement 10" 
       strength = 50 
       type     = tactical_bomber 
	   model = 4 # Amiot 143
      }
     Division = 
     {  id       = {  type = 13500 id = 511  } 
       name     = "Groupe de Bombardement 15" 
       strength = 30 
       type     = tactical_bomber 
	   model = 5 # Farman F 222
      }
    }
   airunit = 
   {  location = 89 
     base     = 89 
     id       = {  type = 13500 id = 512  } 
     name     = "Zone d'Opérations Aériennes Sud" 
     Division = 
     {  id       = {  type = 13500 id = 513  } 
       name     = "Groupe de Chasse 24" 
       strength = 60 
       type     = interceptor 
       model    = 8 # Morane 406
      }  
     Division = 
     {  id       = {  type = 13500 id = 514  } 
       name     = "Groupe de Bombardement 1" 
       strength = 30 
       type     = tactical_bomber 
	   model = 6 # Glenn-Martin 167 F
      }
     Division = 
     {  id       = {  type = 13500 id = 515  } 
       name     = "Groupe de Bombardement 7" 
       strength = 30 
       type     = tactical_bomber 
	   model = 5 # Bloch 210
      }
     Division = 
     {  id       = {  type = 13500 id = 516  } 
       name     = "Groupe de Bombardement 11" 
       strength = 30 
       type     = tactical_bomber 
	   model = 5 # Bloch 210
      }
     Division = 
     {  id       = {  type = 13500 id = 517  } 
       name     = "Groupe de Bombardement d'Assaut 19" 
       strength = 20 
       type     = cas 
       model    = 1 # Bréguet 691
      }
    }
   airunit = 
   {  location = 89 
     base     = 89 
     id       = {  type = 13500 id = 518  } 
     name     = "Zone d'Opérations Aériennes des Alpes" 
     Division = 
     {  id       = {  type = 13500 id = 519  } 
       name     = "Groupe de Chasse 10" 
       strength = 30 
       type     = interceptor 
       model    = 8 # Morane 406
      }  
     Division = 
     {  id       = {  type = 13500 id = 520  } 
       name     = "Groupement Aérien de Transport" 
       strength = 20 
       type     = transport_plane 
       model    = 1 # Bréguet 691
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 521 } 
     name     = "Zone d'Opérations Africain" 
     location = 747 
     base     = 747 
     Division = 
     {  id       = {  type = 13500 id = 522  } 
       name     = "Groupe de Chasse 1" 
       strength = 50 
       type     = interceptor 
       model    = 8 # Morane 406
      }
     Division = 
     {  id       = {  type = 13500 id = 523  } 
       name     = "Groupe de Bombardement 2" 
       strength = 30 
       type     = naval_bomber 
	   model = 2 # Douglas DB-7
      }
     Division = 
     {  id       = {  type = 13500 id = 524  } 
       name     = "Groupe de Bombardement 8" 
       strength = 20 
       type     = tactical_bomber 
	   model = 4 # Bloch 200
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 525  } 
     name     = "Zone d'Opérations Moyen-Orient" 
     location = 1019 
     base     = 1019 
     Division = 
     {  id       = {  type = 13500 id = 526  } 
       name     = "Groupe de Chasse 2" 
       strength = 25 
       type     = interceptor 
       model    = 8 # Morane 406
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 527  } 
     name     = "Zone d'Opérations Indochine" 
     location = 1399 
     base     = 1399 
     Division = 
     {  id       = {  type = 13500 id = 528  } 
       name     = "Groupe de Bombardement 3" 
       strength = 30 
       type     = naval_bomber 
	   model = 2
      }
     Division = 
     {  id       = {  type = 13500 id = 529  } 
       name     = "Groupe Aérien Autonome 41/42" 
       strength = 40 
       type     = multi_role 
       model    = 3 # Potez 25
      }
    }
   airunit = 
   {  id       = {  type = 13500 id = 530  } 
     name     = "Zone d'Opérations Afrique Ouest" 
     location = 978 
     base     = 978 
     Division = 
     {  id       = {  type = 13500 id = 531  } 
       name     = "Groupe de Bombardement 4" 
       strength = 20 
       type     = naval_bomber 
	   model = 2
      }
    }
   # ################################# 
   # Naval units under construction 
   # #################################
   division_development = 
   {  name  = "Joffre" 
     type  = carrier 
     model = 1
     new_model = no
     cost  = 0.1
     id    = {  type = 13500 id = 600  } 
     date  = {  year = 1942 month = may day = 24  } 
      extra = cag 
      brigade_model = 2  
    }
   division_development = 
   {  name  = "De Grasse" 
     type  = light_cruiser 
     model = 5
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 601  } 
     date  = {  year = 1942 month = february day = 28  } 
    }
   division_development = 
   {  name  = "Richelieu" 
     type  = battleship
     model = 7
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 602  } 
     date  = {  year = 1940 month = june day = 18  } 
    }
   division_development = 
   {  name  = "Jean-Bart" 
     type  = battleship
     model = 7
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 603  } 
     date  = {  year = 1941 month = march day = 23  } 
    }
   division_development = 
   {  name  = "Clemenceau" 
     type  = battleship
     model = 7
     new_model = no
     cost  = 0.4 
     id    = {  type = 13500 id = 604  } 
     date  = {  year = 1943 month = june day = 28  } 
    }
   division_development = 
   {  name  = "4ème Division Cuirassée de Réserve" 
     type  = light_armor
     model = 0
     cost  = 0.1 
     id    = {  type = 13500 id = 206  } 
     date  = {  year = 1940 month = may day = 15  } 
    }
} 
 
