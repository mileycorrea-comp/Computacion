Algoritmo ejercicio122
	// Variables
    Definir num1, num2 Como Real;
    Definir raiz_cuadrada, descuento Como Real;
    Definir media_geometrica Como Real;
    
    // Ingreso de datos
    Escribir "Ingrese un numero positivo: ";
    Leer num1;
    Escribir "Ingrese otro numero positivo: ";
    Leer num2;
    
    // Condicional del numero ingresado
    Si (num1 > 0) Y (num2 > 0) Entonces
        raiz_cuadrada <- rc(num1 * num2);  // rc se entiende como raíz cuadrada
        media_geometrica <- raiz_cuadrada;
        descuento <- media_geometrica * 0.05;
        
        Escribir "La media geometrica es: ", media_geometrica;
        Escribir "La media geometrica con 5% de descuento es: ", media_geometrica - descuento;
    Sino
        Escribir "ERROR POR FAVOR INGRESE DE NUEVO LOS VALORES";
    Fin Si
FinAlgoritmo
