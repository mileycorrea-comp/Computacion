Algoritmo ejerciciodif75
	NUM_MAX = 36;
	PAGO_PLENO = 35;
	PAGO_PAR = 1;
	PAGO_IMPAR = 1;
	num_apost = 0;
	num = 0;
	monto_apost = 0.0;
	ganancia = 0.0;
	val_min = 0.0;
	acierto = Falso;
	acierto_par = Falso;
	acierto_impar = Falso;
	
	Escribir "Este algoritmo calcula la ganancia de un numero apostado (0-36)";
	Escribir "Ingrese el numero apostado (0-36): ";
	Leer num_apost;
	Escribir "Ingrese el monto apostado (0-36): ";
	Leer monto_apost;
	Escribir "Ingrese el numero que salio en la ruleta (0-36): ";
	Leer num;
	
	acierto = (num == num_apost);
	acierto_par = ((num % 2 == 0) Y (num_apost % 2 == 0) Y (num <> 0) Y (num_apost <> 0));
	acierto_impar = ((num % 2 <> 0) Y (num_apost % 2 <> 0));
	
	Si acierto Entonces
		ganancia = monto_apost * PAGO_PLENO;
	Sino
		Si acierto_par Entonces
			ganancia = monto_apost * PAGO_PAR;
		Sino
			Si acierto_impar Entonces
				ganancia = monto_apost * PAGO_IMPAR;
			Sino
				ganancia = 0.0;
				Escribir "HA PERDIDO LA APUESTA";
			FinSi
		FinSi
	FinSi
	
	val_min = num_apost;
	Si num < val_min Entonces
		val_min = num;
	FinSi
	
	Si monto_apost < val_min Entonces
		val_min = monto_apost;
	FinSi
	
	Si ganancia < val_min Entonces
		val_min = ganancia;
	FinSi
	
	Si acierto Entonces
		Escribir "Ha obtenido el acierto pleno";
	Sino
		Si acierto_par Entonces
			Escribir "Ha obtenido un acierto par";
		Sino
			Si acierto_impar Entonces
				Escribir "Ha obtenido un acierto impar";
			Sino
				Escribir "No tuvo acierto, siga intentando";
			FinSi
		FinSi
	FinSi
	
	Escribir "Se aposto un monto de: ", monto_apost;
	Escribir "Su ganancia total es de: ", ganancia;
	Escribir "El valor minimo de los numeros fue de: ", val_min;
FinAlgoritmo