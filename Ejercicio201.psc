Algoritmo Ejercicio201
	Leer ANCHO;
	Leer ALTO;
	Leer LARGO;
	Leer volumen;
	Leer volumen_bono;
	
	Si LARGO > 0 Y ANCHO > 0 Y ALTO > 0;
		Volumen = LARGO * ANCHO * ALTO;
		Volumen_bono = volumen * 1.5;
		Escribir "El volumen de un prisma rectangular es: ", volumen;
	Sino Escribir "Error: Las dimensiones deben ser mayores a 0";
	FinSi
FinAlgoritmo
