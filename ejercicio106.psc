Algoritmo ejercicio106
	ONZA_GRAMO= 28.3495;
	DIVIDSOR= 2;
	onzas= 0.0;
	gramos= 0.0;
	mitad_gramos= 0.0;
	
	Leer onzas;
	gramos = onzas * ONZA_GRAMO;
	
	Si gramos > 0 Entonces
		mitad_gramos= gramos / DIVISOR;
		Escribir onzas, "onzas equivalen a", gramos, "gramos";
		Escribir "La mitad de los gramos es de", mitad_gramos, "gramos";
	Sino
		Escribir "Ha ingresado un dato no valido, ingrese un dato mayor a 0";
	FinSi
FinAlgoritmo
