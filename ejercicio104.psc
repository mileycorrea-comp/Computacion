Algoritmo ejercicio104
	capital= 0.0;
	tasa= 0.0;
	tiempo = 0;
	interes_generado= 0.0;
	monto_total= 0.0;
	Leer capital;
	Leer tasa;
	Leer tiempo;
	Si capital > 0 Y tasa > 0 Y tiempo > 0 Entonces 
		interes_generado= redon((capital * tasa * tiempo / 100) * 100) / 100;
		monto_total= redon((capital + interes_generado) * 100) / 100;
		Escribir "Capital: ", capital;
		Escribir "Tasa de intereses anual: ", tasa;
		Escribir "Tiempo (en años): ", tiempo;
		Escribir "Interes generado: ", interes_generado;
		Escribir "Monto total: ", monto_total;
		Sino
			Escribir "Error. Por favor ingrese datos positivos";
	FinSi
FinAlgoritmo