Algoritmo ejercicio101
	// Variables
    Definir num1, num2 Como Real;
    Definir promedio, resultado Como Real;
    
    // Propósito del algoritmo
    Escribir "Este algoritmo calcula el promedio de dos numeros";
    Escribir "reales y muestra dicho promedio elevado a la 4ta potencia.";
    
    // Ingreso de datos
    Escribir "Ingrese un numero real:";
    Leer num1;
    Escribir "Ingrese otro numero real:";
    Leer num2;
    
    // Cálculos
    promedio <- ((num1 + num2) / 2);
    resultado <- promedio ^ 4;
    
    // Condición del promedio
    Si promedio > 0 Entonces
        Escribir "El promedio entre los dos numeros ingresados es: ", promedio;
        Escribir "El promedio elevado a la 4ta potencia es: ", resultado;
    Sino
        Escribir "El promedio es menor a 0";
    Fin Si
FinAlgoritmo
