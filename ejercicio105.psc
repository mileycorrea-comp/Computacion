Algoritmo ejercicio105
	CONST_SIMBOLICA= 3;
	promedio= 0.0;
	suma_total= 0.0;
	promedi_simbolico= 0.0;
	
	Leer nota_1;
	Leer nota_2;
	Leer nota_3;
	
	Si nota_1 <= nota_2 Y nota_1 <= nota_3 Entonces
		menor = nota_1;
	Sino 
		Si (nota_2 <= nota_1) Y (nota_2 <= nota_3) Entonces
			menor = nota_2;
		Sino
			menor = nota_3;
		FinSi
	FinSi 
	
	suma_total= nota_1 + nota_2 + nota_3;
	promedio = (suma_total - menor) / 2;
	promedi_simbolico = promedio / CONST_SIMBOLICA;
	Escribir "El promedio final del estudiante es", promedio;
	Escribir "El promedio simbolico del estudiante es", prom_simbolico;
FinAlgoritmo