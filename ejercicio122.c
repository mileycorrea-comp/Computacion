/*En un supermercado, diseñe un algoritmo que lea dos numeros positivos (reales). 
Use constantes literales 2 como indice de la raiz. Calcule la media geometrica con 
la expresion aritmetica raiz_cuadrada(num1 * num2) y asignela a media_geometrica. 
Evalúe la expresion logica (num1 > 0 AND num2 > 0). Muestre por pantalla la media 
geometrica. Adicionalmente, reste un descuento del 5% al resultado final. Muestre 
al inicio una lista de las variables que se utilizaran.*/
#include <stdio.h>
#include <math.h>

int main() {
    //Variables
    float num1, num2 = 0.0;
    float descuento = 0.0;
    float media_geometrica = 0.0;

    //Ingreso de datos
    printf("Ingrese un numero positivo: \n");
    scanf("%f", &num1);
    printf("Ingrese otro numero positivo: \n");
    scanf("%f", &num2);

    //Condicional del numero ingresado
    if ((num1 > 0) && (num2 > 0)) {
    
    media_geometrica = sqrt(num1 * num2); //sqrt es la raiz cuadrada
    descuento = media_geometrica * 0.05;    
    printf("La media geometrica es: %2.f \n", media_geometrica);
    printf("La media geometrica con 5%% de descuento es: %f \n", media_geometrica - descuento);
    } else {
    printf("ERROR POR FAVOR INGRESE DE NUEVO LOS VALORES \n");
    }
}