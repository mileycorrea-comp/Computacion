Algoritmo ejercicio148
	nota1 <- 0.0;
	nota2 <- 0.0;
	nota3 <- 0.0;
	nota4 <- 0.0;
	nota5 <- 0.0;
	promedio <- 0.0;
	porcentaje <- 0.0;
	suma <- 0.0;
	mayor <- 0.0;
	menor <- 0.0;
	referencia_notas <- 0;
	Escribir 'Ingrese la nota 1: ';
	Leer nota1;
	Escribir 'Ingrese la nota 2: ';
	Leer nota2;
	Escribir 'Ingrese la nota 3: ';
	Leer nota3;
	Escribir 'Ingrese la nota 4: ';
	Leer nota4;
	Escribir 'Ingrese la nota 5: ';
	Leer nota5;
	Escribir 'Ingrese la referencia de calificacion: ';
	Leer referencia_notas;
	suma <- nota1+nota2+nota3+nota4+nota5;
	mayor <- nota1;
	menor <- nota1;
	Si nota2>mayor Entonces
		mayor <- nota2;
	FinSi
	Si nota2<menor Entonces
		menor <- nota2;
	FinSi
	Si nota3>mayor Entonces
		mayor <- nota3;
	FinSi
	Si nota3<menor Entonces
		menor <- nota3;
	FinSi
	Si nota4>mayor Entonces
		mayor <- nota4;
	FinSi
	Si nota4<menor Entonces
		menor <- nota4;
	FinSi
	Si nota5>mayor Entonces
		mayor <- nota5;
	FinSi
	Si nota5<menor Entonces
		menor <- nota5;
	FinSi
	promedio <- (suma-mayor-menor)/3;
	Si referencia_notas<=0 Entonces
		porcentaje <- 0.0;
		Escribir 'El valor de referencia no es valido. Ingrese nuevamente';
	SiNo
		porcentaje <- (promedio/referencia_notas)*100;
	FinSi
	Escribir 'El promedio de las notas es: ', promedio;
	Escribir 'El porcentaje respecto al valor de referencia es: ', porcentaje;
FinAlgoritmo
