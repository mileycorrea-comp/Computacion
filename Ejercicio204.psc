Algoritmo Ejercicio204
	Leer radio;
	Leer angulo;
	Leer area_sector;
	Leer cuadrado_sector;
	
	area_sector = (PI * radio * radio * angulo)/FACTOR;
	cuadrado_sector = (area_sector)^2;
	
	Escribir "El area del sector es: ", area_sector;
	Escribir "El cuadrado del area del sector es:", cuadrado_sector;

FinAlgoritmo
