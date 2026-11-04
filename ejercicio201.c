/*En una tienda de ropa, construya un algoritmo que lea el largo, ancho y alto (tres reales) 
de un prisma rectangular. Calcule el volumen con la expresion aritmetica (largo * ancho * alto) 
y asignelo a volumen. Evalúe la expresion logica (largo > 0 AND ancho > 0 AND alto > 0). Muestre
por pantalla el volumen del prisma. Ademas del calculo principal, multiplique el resultado por 1.5 
como bono. Incluya una variable auxiliar para llevar un contador de operaciones*/
#include <stdio.h>
int main () {
    //Variables 
    int largo, ancho, alto = 0;
    int volumen = 0;
    float volumen_bono = 0;
    //Explicación algoritmo
    printf("Este algoritmo calcula el volumen de un prisma rectangular y su bono\n");
    printf("complete los siguientes datos\n");
    //Ingreso de datos
 printf ("Ingrese el LARGO:\n");
    scanf ("%d", &largo);
    printf ("Ingrese el ANCHO:\n");
    scanf ("%d", &ancho);
    printf ("Ingrese el ALTO:\n");
    scanf ("%d", &alto);
    //Cálculos respecto a los datos y condición según estos
    volumen = (largo * ancho * alto);
    volumen_bono = volumen * 1.5;
    if(largo > 0 && ancho > 0 && alto > 0){   
    printf ("Medidas validas\n");
    } else {
    printf ("¡ERROR! Medidas no validas\n");
    }
    //Datos de salida y resultados
    printf ("El volumen del prisma es: %d centimetros cubicos\n", volumen );
    printf ("Y el volumen bono es: %f centimetros cubicos \n", volumen_bono);
}