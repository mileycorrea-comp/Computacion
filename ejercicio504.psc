Algoritmo ejercicio504
	valor_PI = 3.14159;
	FACTOR = 360;
	CONSTANTE_DIVISOR = 10;
	
	radio = 0.0;
	angulo = 0.0;
	area_sector = 0.0;
	resultado = 0.0;
	sector_valido = Falso;
	
	Escribir "Este algoritmo calcula el area del sector y su resultado divido a una constante simbolica";
	Escribir "Ingrese el valor del radio:";
	Leer radio;
	Escribir "Ingrese el valor del angulo en grados:";
	Leer angulo;
	
	area_sector = ((valor_PI * radio * radio * angulo) / FACTOR);
	sector_valido = (radio > 0 Y angulo > 0);
	resultado = area_sector / CONSTANTE_DIVISOR;
	
	Si sector_valido Entonces
		Escribir "El area del sector es: ", area_sector;
		Escribir "El area divida para la constante 10 es: ", resultado;
	Sino
		Escribir "ERROR. El radio o angulo no son validos.";
		Escribir "POR FAVOR INGRESE VALORES MAYORES A 0";
	FinSi
FinAlgoritmo