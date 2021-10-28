#include <program1.h>                                           	// Archivo de traducción de seudocódigo a C++
/** 
AUTOR : Paz Garcia, Fernando
*/

principal
	
	archivo datos;		
	entero anterior = 0
	,actual
	,suma
	,sumaMinima;
	logico hay2 = FALSO;
	
	abrir(datos,"datos.txt", ALEER);
	limpiar;
	
	si(estaAbierto(datos))entonces
		mientras(!datos.eof())
			datos >> actual;			
			si(hay2 Y (anterior % 2 ES 0) Y (actual % 2 ES 0)) entonces					
				suma = anterior + actual;		
				si(sumaMinima > suma) entonces						
					sumaMinima = suma;								
				finSi
			sinoSi((anterior % 2 ES 0) Y (actual % 2 ES 0)) entonces				
				hay2 = VERDADERO;							
				sumaMinima = anterior + actual;							
			finSi			
			anterior = actual;											
		finMientras
	finSi
	
	si(hay2) entonces
		mostrar << sumaMinima << salto;
	finSi
		
	cerrar(datos);
	
finPrincipal
