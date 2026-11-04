Algoritmo ejercicio107
	DESCUENTO= 0.05;
	diagonal_mayor= 0.0;
	diagonal_menor= 0.0;
	area= 0.0;
	area_desc= 0.0;
	
	Leer diagonal_mayor; 
	Leer diagonal_menor; 
	
	Si diagonal_mayor > 0 Y diagonal_menor > 0 Entonces 
		area = ((diagonal_mayor * diagonal_menor) / 2);
		area_desc = area - (area * DESCUENTO);
		
		Escribir "El area del rombo es:", area, "m^2";
		Escribir "El area con descuento es:", area_desc, "m^2";
		Sino 
			Escribir "Ingrese datos mayores a 0";
	FinSi
FinAlgoritmo