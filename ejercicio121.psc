Algoritmo ejercicio121
	// Variables
    Definir c Como Entero;
    Definir es_divisible Como Logico;
    Definir mitad_resul Como Real;
    
    // Ingreso de datos
    Escribir "Ingrese un numero entero:";
    Leer c;
    
    // Proceso de cálculo
    es_divisible <- (c MOD 3 = 0) Y (c MOD 5 = 0);
    
    Si es_divisible Entonces
        Escribir "El numero ", c, " Es divisible por 3 y por 5.";
    Sino
        Escribir "El numero ", c, " No es divisible por 3 ni 5.";
    Fin Si
    
    mitad_resul <- c / 2;
    
    // Resultados
    Escribir "La mitad del resultado del numero entero (", es_divisible O (c <> 0), ") es: ", mitad_resul;
FinAlgoritmo
