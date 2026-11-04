/*En una empresa de transporte, construya un algoritmo que lea el radio (real) y el angulo (real, en grados) 
de un sector circular. Use constantes simbolicas PI = 3.14159 y FACTOR = 360. Calcule el area con la expresion 
aritmetica ((PI * radio * radio * angulo) / FACTOR) y asignela a area_sector. Evalúe la expresion logica 
(radio > 0 AND angulo > 0). Muestre por pantalla el area del sector. Ademas, calcule el cuadrado del resultado 
principal. Agregue al final un resumen de los datos ingresados.*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define FACTOR 360
int main () {
    //Variables
    float angulo, area_sector = 0.0;
    float radio, cuadrado_sector = 0.0;
    
    //Explicación e ingreso de datos del algoritmo
    printf("Este algoritmo calcula el area del sector y su resultado al cuadrado\n");
    printf("Ingrese el radio\n");
    scanf("%f", &radio);
    printf ("Ingrese el angulo:\n" );
    scanf ("%f", &angulo);
    
    //Cálculos y datos de salida
    area_sector = (PI * radio * radio * angulo)/FACTOR;
    cuadrado_sector = pow(area_sector,2);
    printf("El radio es de %.1f, su angulo de %.1f y el factor de 360\n", radio, angulo);
    printf("El area del sector es: %.2f\n", area_sector);
    printf("El area del sector al cuadrado es: %.2f\n", cuadrado_sector);
}