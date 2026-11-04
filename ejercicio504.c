/*En una tienda de electronica, construya un algoritmo que lea el radio (real) y el angulo (real, en grados) 
de un sector circular. Use constantes simbolicas PI = 3.14159 y FACTOR = 360. Calcule el area con la expresion 
aritmetica ((PI * radio * radio * angulo) / FACTOR) y asignela a area_sector. Evalúe la expresion logica 
(radio > 0 AND angulo > 0). Muestre por pantalla el area del sector. Adicionalmente, calcule el resultado divido 
entre una constante simbolica. Agregue al inicio una descripcion breve de los pasos a seguir.*/
#include <stdio.h>
#define PI 3.14159
#define FACTOR 360
#define CONSTANTE_DIVISOR 10
int main () {
    /*PASOS A SEGUIR
    1. Definir constantes y variables
    2. Leer angulo y radio de la circunferencia
    3. Calcular el area del sector
    4. Evaluar (radio > 0 AND angulo > 0)
    5. Dividir el area por la constante y mostrar resultado*/
    float radio, angulo = 0.0;
    float area_sector, resultado, sector_valido = 0.0;

    //ingreso de datos
    printf("Este algoritmo calcula el area del sector y su resultado divido a una constante simbolica\n");
    printf("Ingrese el valor del radio:\n");
    scanf("%f", &radio);
    printf("Ingrese el valor del angulo en grados:\n");
    scanf("%f", &angulo);

    //Cálculos
    area_sector = ((PI * radio * radio * angulo) / FACTOR);
    sector_valido = (radio > 0 && angulo > 0);
    resultado = area_sector/CONSTANTE_DIVISOR;

    //Condicional 
    if(sector_valido >= 0){
        printf("El area del sector es: %.2f\n", area_sector);
        printf("El area divida para la constante 10 es: %.2f\n", resultado);
    } else {
        printf("ERROR. El radio o angulo no son validos.\nPOR FAVOR INGRESE VALORES MAYORES A 0");
    }
}