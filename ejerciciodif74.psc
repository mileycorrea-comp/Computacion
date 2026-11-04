Algoritmo ejerciciodif74
	PORCENTAJE = 100;
	NOTA_MIN = 7.0;
	NOTA_MAX = 10.0;
	nota1 = 0.0;
	nota2 = 0.0;
	nota3 = 0.0;
	nota_final = 0.0;
	p1 = 0.0;
	p2 = 0.0;
	p3 = 0.0;
	valor_min = 0.0;
	aprobo = Falso;
	con_honores = Falso;
	
	Escribir "Este algoritmo calcula la nota final del alumno y si aprobo o no.";
	Escribir "Ingrese las notas del alumno (0-10)";
	Escribir "Ingrese la nota 1: ";
	Leer nota1;
	Escribir "Ingrese el porcentaje de la nota 1: ";
	Leer p1;
	Escribir "Ingrese la nota 2: ";
	Leer nota2;
	Escribir "Ingrese el porcentaje de la nota 2: ";
	Leer p2;
	Escribir "Ingrese la nota 3: ";
	Leer nota3;
	Escribir "Ingrese el porcentaje de la nota 3: ";
	Leer p3;
	
	nota_final = ((nota1 * (p1 * 1000) + nota2 * (p2 * 1000) + nota3 * (p3 * 1000)) / PORCENTAJE) / 3;
	aprobo = nota_final >= NOTA_MIN;
	con_honores = nota_final == NOTA_MAX;
	valor_min = nota1;
	Si nota2 < valor_min Entonces
		valor_min = nota2;
	FinSi
	
	Si nota3 < valor_min Entonces
		valor_min = nota3;
	FinSi
	
	Si p1 < valor_min Entonces
		valor_min = p1;
	FinSi
	
	Si p2 < valor_min Entonces
		valor_min = p2;
	FinSi
	
	Si p3 < valor_min Entonces
		valor_min = p3;
	FinSi
	
	Escribir "La nota final del estudiante es: ", nota_final;
	
	Si con_honores Entonces
		Escribir "APROBADO CON HONORES.";
	Sino
		Si aprobo Entonces
			Escribir "APROBADO.";
		Sino
			Escribir "REPROBADO.";
		FinSi
	FinSi
	
	Escribir "El valor minimo en las variables es: ", valor_min;
	Escribir "La nota 1: ", nota1, ", de porcentaje: ", p1, "%";
	Escribir "La nota 2: ", nota2, ", de porcentaje: ", p2, "%";
	Escribir "La nota 3: ", nota3, ", de porcentaje: ", p3, "%";
FinAlgoritmo