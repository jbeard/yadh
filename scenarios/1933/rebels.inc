# First East Turkestan Republic
 country = { 
  tag       	 = REB
  
  nationalprovinces    = {  } 
  ownedprovinces       = {  } 
  controlledprovinces  = { 1279 1275 } 
  capital	= 1981

  #Notice: For balance reason (due to lack of event chain to simulate Soviet intervention against rebels and inability to have rebel vs rebel fighting
  #to simulate infighting that caused Sheng Shicai to win the war with a worse army), rebels have been weakened from their historic strength. Also, KMT rebels
  #are not included since not possible to have rebels fight another rebel group.
  landunit = 
   {  location = 1279
     name     = "National Army of the Islamic Republic East Turkestan Republic" 
     id       = {  type = 25600 id = 10  } 
     Division = 
     {  id   = {  type = 25600 id = 11 } 
       name = "Kashgar Division" 
       type = militia 
	   strength = 20 
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 25600 id = 12  } 
       name = "Hotan Division" 
       type = militia
	   strength = 20
	   model    = 3
      } 
     Division = 
     {  id   = {  type = 25600 id = 13  } 
       name = "Qumul-Qurqan Revolutionary Divisions" 
       type = militia 
	   strength = 20 
	   model    = 3
      }
	 Division = 
	 {  id   = {  type = 25600 id = 14  }
	   name = "Aqsu-Aletai Cavalry Regiments"
	   type = cavalry
	   strength = 20
	   model = 5
	  }
    } 
	
}
 