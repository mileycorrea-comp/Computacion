/*En una empresa de telecomunicaciones, construya un algoritmo que lea un peso en onzas (real). Use una 
constante simbolica ONZA_GRAMO = 28.3495. Calcule la equivalencia en gramos con la expresion aritmetica 
(onzas * ONZA_GRAMO) y asignela a gramos. Evalúe la expresion relacional (gramos > 0). Muestre por pantalla 
'X onzas equivalen a Y gramos'. Adicionalmente, calcule la mitad del resultado obtenido. Incluya una seccion 
que explique brevemente el proposito del algoritmo.*/
#include <stdio.h>
#define ONZA_GRAMO 28.3495
int main () {
    //variables
    float onzas, gramos = 0.0; 
    float mitad_gramos = 0.0;
    
    //Propósito algoritmo 
    printf("Este algoritmo permite convertir un peso en onzas a gramos.\n");
    printf("Ademas, verifica que el resultado sea valido y calcula la mitad del resultado obtenido en gramos\n");
    
    //Ingreso de datos y cálculos
    printf("Ingrese el peso en onzas:\n");
    scanf("%f", &onzas);
    gramos = onzas * ONZA_GRAMO;
    
    //Condiciones de datos de salida 
    if (gramos > 0)    {
        mitad_gramos = gramos/2;
        printf("%.2f onzas equivalen a %.2f gramos.\n", onzas, gramos);
        printf("La mitad de los gramos es: %.2f.", mitad_gramos);
    } else {
        printf("ERROR SE HA INGRESADO UN DATO NO VALIDO. \nINGRESE UN VALOR MAYOR A 0");
    }
}