Algoritmo ejercicio147
	num = 0.0;
	potencia = 0.0;
	promedio = 0.0;
	diferencia = 0.0;
	
	Escribir "Ingrese el valor del producto o servicio: ";
	Leer num;
	
	Si num >= 0 Entonces
		potencia = num ^ 2; 
		promedio = (num + potencia) / 2;
		diferencia = potencia - promedio;
		
		Escribir "El valor ingresado fue: ", num, ", se utilizo un exponente 2";
		Escribir "El cuadrado del resultado fue: ", potencia;
		Escribir "Su promedio fue de: ", promedio;
		Escribir "Su diferencia fue de: ", diferencia;
	Sino
		Escribir "ERROR EL VALOR INGRESADO NO ES VALIDO";
	FinSi
FinAlgoritmo
