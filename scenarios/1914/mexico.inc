 
 ############################## 
 # Country definition for MEX # 
 ############################## 
 
 ##################### 
 # Country main data # 
 ##################### 
  
 country = 
 {  tag          = MEX 
	ai             = "MEX_1914.ai"
	ai_settings	= { flags = { MOB1 = yes MOB2 = yes MOB3 = yes MOB4 = yes } }
	flag_ext = _14
	# Resource Reserves 
	energy                 = 1140
	metal                  = 570
	rare_materials         = 285
	oil          = 500 
	supplies        = 500 
	money         = 20 
	capital        = 1974 
	dissent = 5
	manpower        = 112 
	transports       = 100 
  policy = 
  {  date       = {  year = 0 month = january day = 0  } 
   democratic    = 5 
   political_left  = 3 
   freedom      = 4 
   free_market    = 6 
   professional_army = 4 
   defense_lobby     = 6 
   interventionism  = 3 
   } 

   headofstate            = {  type = 9 id = 170106  } # Victoriano Huerta
   headofgovernment       = {  type = 9 id = 170108  } # Victoriano Huerta
   foreignminister        = {  type = 9 id = 170118  } # Francisco S. Carbajal
   armamentminister       = {  type = 9 id = 170120  } # Querido Moheno
   ministerofsecurity     = {  type = 9 id = 170126  } # Ignacio Alcocer
   ministerofintelligence = {  type = 9 id = 170142  } #Aureliano Blanquet
   chiefofstaff           = {  type = 9 id = 170127  } # Pascual Orozco 
   chiefofarmy            = {  type = 9 id = 170134  } # Jos� Refugio Velasco
   chiefofnavy            = {  type = 9 id = 170137  } # Jos� Refugio Velasco
   chiefofair             = {  type = 9 id = 170139  } # Juan Guillermo Villasana

 	nationalprovinces   = {  1965 1966 1967 1968 1969 1970 1971 1972 1973 1974 1975 1976 1977 1978 1979 1980 1981 1982  } 
	ownedprovinces     = {  1966 1965 1970 1974 1973 1981 1982 1969 } 
	controlledprovinces  = { 1970 1974 1973 1969  } 

    dormant_teams = {
		170016 #�lvaro Obreg�n
		170020 #Emiliano Zapata
		170021 #Pancho Villa
		170025 #Alberto Salinas Carranza
	}
	dormant_ministers = { 
		#Constitucionalistas
		170200 #Venustiano Carranza
		170201 #Adolfo de la Huerta
		170202 #�lvaro Obreg�n
		170203 #Plutarco El�as Calles
		170204 #Venustiano Carranza
		170205 #Adolfo de la Huerta
		170206 #�lvaro Obreg�n
		170207 #Plutarco El�as Calles
		170208 #Francisco Escudero
		170209 #Isidro Fabela Alfaro
		170210 #Jes�s Acu�a
		170211 #C�ndido Aguilar
		170212 #Alfonso Siller
		170213 #Ernesto Garza P�rez
		170214 #Salvador Diego Fern�ndez
		170215 #Hilario Medina
		170216 #Juan S�nchez Azcona
		170217 #Miguel Covarrubias Acosta
		170218 #Cutberto Hidalgo
		170219 #Alberto Jos� Pani
		170220 #Aar�n S�enz
		170221 #Francisco Escudero
		170222 #Pastor Rouaix
		170223 #Alberto Jos� Pani
		170224 #Plutarco El�as Calles
		170225 #Jacinto Blas Trevi�o
		170226 #Rafael Zubar�n Capmany
		170227 #Miguel Alessio Robles
		170228 #Manuel P�rez Trevi�o
		170229 #Luis Napole�n Morones
		170230 #Rafael Zubar�n Capmany
		170231 #Adolfo de la Huerta
		170232 #Manuel Aguirre Berlanga
		170233 #Gilberto Valenzuela
		170234 # Jos� Inocente Lugo
		170235 #Plutarco El�as Calles
		170236 #Enrique Colunga
		170237 #Romeo Ortega
		170239 #Eduardo Hay
		170240 #Jacinto Blas Trevi�o
		170241 #Ignacio L. Pesqueira
		170242 #�lvaro Obreg�n
		170243 #Jes�s Agust�n Castro
		170244 #Juan Jos� R�os
		170245 #Francisco L. Urquizo
		170246 #Plutarco El�as Calles
		170247 #Benjam�n Hill
		170248 #Enrique Estrada Reynoso
		170249 #Francisco Roque Serrano
		170250 #Joaqu�n Amaro Dom�nguez
		170252 #Eduardo Hay
		170253 #Jacinto Blas Trevi�o
		170254 #Ignacio L. Pesqueira
		170255 #�lvaro Obreg�n
		170256 #Jes�s Agust�n Castro
		170257 #Juan Jos� R�os
		170258 #Francisco L. Urquizo
		170259 #Plutarco El�as Calles
		170260 #Benjam�n Hill
		170261 #Enrique Estrada Reynoso
		170262 #Francisco Roque Serrano
		170263 #Joaqu�n Amaro Dom�nguez
		170265 #Eduardo Hay
		170266 #Jacinto Blas Trevi�o
		170267 #Ignacio L. Pesqueira
		170268 #�lvaro Obreg�n
		170269 #Jes�s Agust�n Castro
		170270 #Juan Jos� R�os
		170271 #Francisco L. Urquizo
		170272 #Plutarco El�as Calles
		170273 #Benjam�n Hill
		170274 #Enrique Estrada Reynoso
		170275 #Francisco Roque Serrano
		170276 #Joaqu�n Amaro Dom�nguez
		#Villistas / Zapatistas
		170150 #Francisco Lagos Ch�zaro
		170151 #Eulalio Guti�rrez Ortiz
		170152 #Francisco 'Pancho' Villa
		170153 #Emiliano Zapata
		170154 #Francisco Lagos Ch�zaro
		170155 #Eulalio Guti�rrez Ortiz
		170156 #Francisco 'Pancho' Villa
		170157 #Emiliano Zapata
		170158 #Jos� Ortiz Rodriguez
		170159 #Miguel D�az Lombardo
		170160 #Ignacio Borrego
		170161 #Francisco Lagos Ch�zaro
		170162 #Alberto B. Pi�a
		170163 #Julio Ram�rez Wiella
		170164 #Francisco Escudero
		170165 #Valent�n Gama y Cruz
		170166 #Luis Zubir�a y Campa
		170167 #Adolfo Francisco Salinas
		170168 #Santiago Gonz�lez Cordero
		170169 #Jos� Lucio Blanco Fuentes
		170170 #Francisco Lagos Ch�zaro
		170171 #Jos� Quevedo
		170172 #Jos� Isabel Robles
		170173 #Francisco 'Pancho' Villa
		170174 #Francisco Pacheco
		170175 #Alfredo Serratos Amador
		170176 #Emiliano Zapata
		170177 #Francisco Pacheco
		170178 #Alfredo Serratos Amador
		170179 #Jos� Isabel Robles
		170180 #Francisco Pacheco
		170181 #Alfredo Serratos Amador
		170182 #Pedro Caloca Larios
		170183 #Emiliano Zapata
		170184 #Jos� Isabel Robles
	}
	dormant_leaders = { 
		#Constitucionalistas
		170330 #Acosta
		170331 #Aguilar
		170332 #Aguirre
		170333 #Aguirre Escobar
		170334 #Aguirre Santiago
		170335 #Alba�ez
		170336 #Alem�n Gonz�lez
		170337 #Alessio Robles
		170338 #Alvarado
		170339 #�lvarez
		170340 #�lvarez R�bago
		170341 #Amaro Dom�nguez
		170342 #Ar�valo Vera
		170343 #Arrieta Le�n, D.
		170344 #Arrieta Le�n, E.
		170345 #Azuara 
		170346 #Baca Calder�n
		170347 #Beltr�n
		170348 #Blanco Fuentes
		170349 #Caballero
		170350 #Cabral
		170351 #Calderon
		170352 #Calles
		170353 #Camacho
		170354 #C�rdenas Zepeda
		170355 #Carranza, J.
		170356 #Carranza, V.
		170357 #Carrasco
		170358 #Castrej�n
		170359 #Castro
		170360 #Coss
		170361 #Cossio Robelo
		170362 #Cruz
		170363 #D�vila Aguirre
		170364 #D�az de Le�n
		170365 #Di�guez
		170366 #Dom�nguez Su�rez
		170367 #Durazo
		170368 #Estrada
		170369 #Flores
		170370 #Garc�a Alvarado
		170371 #Garc�a Robles
		170372 #Garc�a, G.
		170373 #Garc�a, M.
		170374 #Garfias Espinosa
		170375 #Gonz�lez
		170376 #Gonz�lez Garza
		170377 #Gonz�lez Pe�a
		170378 #Greene Ram�rez
		170379 #Guajardo
		170380 #Hay
		170381 #Herrera
		170382 #Herrera Cano
		170383 #Herrero Hern�ndez
		170384 #Hill
		170385 #Huerta, A. de la
		170386 #Kloss
		170387 #L�rraga Orta
		170388 #Leyva
		170389 #Maciel
		170390 #MacKinney
		170391 #Maycotte
		170392 #Montes Alanis
		170393 #M�gica Vel�zquez
		170394 #Murgu�a L�pez de Lara
		170395 #Natera Garc�a
		170396 #Obreg�n
		170397 #Pesqueira
		170398 #Pi�a
		170399 #R�os
		170400 #Trevi�o
		170401 #Vidal
		170402 #Villarreal Gonz�lez
		170403 #Malpica
		170404 #Carranza, A.S.
		170405 #Salinas Carmi�a
		170406 #Cardenas
		170407 #Cota
		#Villistas
		170150 #Aguirre Benavides
		170151 #�lvarez Borboa
		170152 #�ngeles
		170153 #Arroyo
		170154 #�vila
		170155 #Baca
		170156 #Barraza
		170157 #Ba�uelos
		170158 #Beltr�n
		170159 #Buelna
		170160 #Calzada
		170161 #Caloca Larios, P.
		170162 #Caloca
		170163 #Caloca Larios, M.
		170164 #Cant�
		170165 #Carranza Sainz
		170166 #Carrera Torres, A.
		170167 #Carrera Torres, F.
		170168 #Casas
		170169 #Casso L�pez
		170170 #Castro
		170171 #Cedillo, C.
		170172 #Cedillo, M.
		170173 #Cedillo, S.
		170174 #Ceniceros
		170175 #Cervantes, C.
		170176 #Cervantes, F.
		170177 #Chao
		170178 #Contreras
		170179 #Corral, A.
		170180 #Corral, J.
		170181 #Delgado
		170182 #Dozal
		170183 #Echeverr�a
		170184 #Esc�rcega
		170185 #Espada
		170186 #Fern�ndez
		170187 #Fierro
		170188 #Fraire
		170189 #Fuentes
		170190 #Garc�a Ch�vez
		170191 #Garay, A.
		170192 #Garay, N.
		170193 #Gonz�lez
		170194 #Gonz�lez Garza
		170195 #Granados
		170196 #Guti�rrez Ortiz, E.
		170197 #Guti�rrez Ortiz, L.
		170198 #Guti�rrez
		170199 #Hern�ndez, P.
		170200 #Hern�ndez, R.
		170201 #Herrera Cano
		170202 #Herrera
		170203 #Hern�ndez
		170204 #Licon
		170205 #L�pez, E.
		170206 #L�pez, M.
		170707 #L�pez Aguirre, P.
		170208 #L�pez Aguirre, M.
		170209 #Luj�n
		170210 #Montalvo
		170211 #Mendoza
		170212 #M�ndez
		170213 #Mel�ndez
		170214 #Madinabeitia
		170215 #Medina, Juli�n
		170216 #Medina, Juan
		170217 #Maytorena
		170218 #Matus
		170219 #Mart�n del Campo
		170220 #M�rquez
		170221 #Mar�n Loya
		170222 #Mapula
		170223 #Madero
		170224 #Ortiz, E.
		170225 #Ornelas Galindo
		170226 #Ortega, M.
		170227 #Ortega, P.
		170228 #Ortega Ram�rez
		170229 #Ortiz, J.
		170230 #Ortiz, T.
		170231 #Ortiz Rojas
		170232 #P�ez
		170233 #Pereyra
		170234 #P�rez
		170235 #Priego
		170236 #Prieto
		170237 #Quevedo Moreno
		170238 #Quevedo
		170239 #Qui�ones
		170240 #Reyes
		170241 #R�os
		170242 #Robles
		170243 #Rodr�guez, J.
		170244 #Rodr�guez Carrasco
		170245 #Rodr�guez, T.
		170246 #Rosa
		170247 #Ruiz
		170248 #Saavedra
		170249 #S�nchez
		170250 #Sarabia
		170251 #Serratos
		170252 #Serv�n
		170253 #Silva
		170254 #Sol�s
		170255 #Soto
		170256 #Silva
		170257 #Urbina
		170258 #Valdivieso;
		170259 #Vargas, C.;
		170260 #Vargas, J.
		170261 #Vel�squez
		170262 #Villa, F.
		170263 #Villa, H.
		170264 #Zamora
		170265 #Barlow
		170266 #Parsons	
		#Zapatistas
		170270 #Galindo S.
		170271 #Saavedra Brito
		170272 #Gal�n S.
		170273 #Sanchez Flores M.
		170274 #Serna C.
		170275 #Silva M.
		170276 #Vazquez Herrera L.
		170277 #Ortiz Vazquez G.
		170278 #Vergara C.S.
		170279 #Rangel M.
		170280 #Mendoza Palma F.
		170281 #Rodriguez M.
		170282 #Rodr�guez J.
		170283 #Robles Avila A.
		170284 #Salgado J. H. 
		170285 #Reyes Nava V.
		170286 #Reyes Nava M.
		170287 #Castillo H.
		170288 #D�az Encarnaci�n
		170289 #Reynoso D�az L.
		170290 #Ocampo C.
		170291 #Ortega Mendoza Z.
		170292 #V. Pacheco F.
		170293 #Pantale�n Garc�a E.
		170294 #Palma J.
		170295 #Pazuengo M.
		170296 #Pliego F.
		170297 #Navarro Garc�a J.
		170298 #Caama�o J.
		170299 #Flores D.
		170300 #Farf�n Campos C.
		170301 #Cherizola T.
		170302 #Ch�vez Carrera C.
		170303 #Carnalla Sanch�z C.
		170304 #C�sares A.
		170305 #Casas Medina P.
		170306 #Castrej�n A.
		170307 #Cazales P.
		170308 #Barrios �.
		170309 #Bastida Flores I.
		170310 #Ayaquica Rangel F.
		170311 #Maga�a Cerda O.
		170312 #Mart�nez Carona M.
		170313 #Mej�a M.
		170314 #Mariaca G.
		170315 #Palafox M.
		170316 #Burgos S.
		170317 #Zapata Emiliano
		170318 #Robles Morales S.M.
		170319 #Sanchez T.
		170320 #Diaz Soto y Gama A.
		170321 #Neri Jim�nez
		170322 #Monta�o
		170323 #de la O
		170324 #Palafox M.
		170325 #Salazar
		170326 #Zapata Eufemio
	}
  # Semi-Major Tech '14 
  # Group D 1914 techs 
  # ###################### 
  # GW fighter 
   techapps               = { 
	#Early Infantry Division  
	1010  1020   
	#Early Mountain Division 
	1160  1170   
	#Great War Cavalry Division  
	13060    
	#Basic Armoured Car  

	#Great War Heavy Field Artillery 
	2290  
	#Early Static Anti-Air Artillery 

	#Basic Anti-Air Artillery Brigade 

	#Interwar Fighter  

	#Modern Agriculture  
	5700
	#Improved Construction Engineering 

	#Basic Oil Refining 

	#Naval Infantry

	#Engineers
	1830  
	#Landdoctrine ww1 - rest
	6500 6510 6530 
	#Air Doctrines - ww1 techs
	#Naval Doctrines
	8010 8020 8050 8100

	#Troopships
	3810
} 
  diplomacy = 
  {  relation = {  tag = ENG value = 50  } 
   relation = {  tag = HOL value = 25  } 
   relation = {  tag = USA value = 75  } 
   relation = {  tag = U57 value = -200  }
   relation = {  tag = U58 value = -200  }
   relation = {  tag = U59 value = -200  }   
   relation = {  tag = U08 value = 50  } 
   relation = {  tag = U09 value = -15  } 
   relation = {  tag = GUA value = -15  } 
   } 
  SpyInfo        = {  country = "MEX" NumberOfSpies = 5  } 
  # Firepower   
landunit = { 
        id = { type = 24000 id = 1 } 
        name   = "Ejercito de Mexico" 
        location = 1973
        division = { 
            id = { type = 24000 id = 2 } 
            name   = "I Divisi�n de Infanter�a"
            type = infantry
			strength = 50
			morale = 20
			experience = 30
			model = 2 
        	}		
	}   
   
landunit = { 
        id = { type = 24000 id = 3 } 
        name   = "I Cuerpo del Ej�rcito"
        location = 1973
        division = { 
            id = { type = 24000 id = 4 } 
            name   = "II Divisi�n de Infanter�a"
            type = infantry
			strength = 50
			morale = 20
			experience = 30
			model = 2 
        	}		
	}   
	
landunit = { 
        id = { type = 24000 id = 5 } 
        name   = "II Cuerpo del Ej�rcito"
        location = 1974
        division = { 
            id = { type = 24000 id = 6 } 
            name   = "III Divisi�n de Infanter�a" 
            type = infantry
			experience = 30
			model = 2 
        	}		
	}   
   
landunit = { 
        id = { type = 24000 id = 7 } 
        name   = "Milicia de Mexico"
        location = 1974
        division = { 
            id = { type = 24000 id = 8 } 
            name = "Guardia Rural" 
            type = militia
			experience = 30
			model = 2 
        	}		
	}    
   
   navalunit = {   
   id = {  type = 29500 id = 9  } 
   name = "Armada de Mexico" 
   location = 1970 
   base = 1970 
   division = { id = { type = 29500 id = 10 } name = "Zaragosa" type = light_cruiser model = 0 } 
 
    } 

  } 
 
