/*En una florería, diseñe un algoritmo que lea el capital (real), la tasa de interes anual (real) 
y el tiempo en años (entero). Use la constante literal 100. Calcule el interes con la expresion 
aritmetica (capital * tasa * tiempo / 100) y el monto total con (capital + interes). Asigne los 
resultados a interes_generado y monto_total. Muestre por pantalla el desglose. Adicionalmente, 
redondee el resultado a 2 decimales. Agregue una validacion para asegurar que los datos sean positivos.*/
#include <stdio.h>
#include <math.h>
int main () {
    //Variables
    float capital, tasa = 0.0;
    int tiempo = 0;
    float interes_generado, monto_total = 0.0;
    
    //Explicación del algoritmo e ingreso de datos
    printf("El algoritmo calcula el interes generado y el monto total redondedado\n");
    printf("Ingrese el capital: \n");
    scanf("%f", &capital);
    printf("Ingrese la tasa de interes anual: \n");
    scanf("%f", &tasa);
    printf("Ingrese el tiempo en anios: \n");
    scanf("%d", &tiempo);
    
    //condicional del capital y resultado
    if (capital > 0 && tasa > 0 && tiempo > 0){
        interes_generado = round((capital * tasa * tiempo / 100)*100)/100;
        monto_total = round((capital + interes_generado) *100)/100;
        printf("El capital es: %.2f\n", capital);
        printf("La tasa de interes anual es: %.2f\n", tasa);
        printf("El tiempo en anios es: %d\n", tiempo);
        printf("El interes generado es: %.2f\n", interes_generado);
        printf("El monto total es: %.2f\n", monto_total);
    } else {
        printf("ERROR POR FAVOR INGRESAR DATOS POSITIVOS\n");
    }
}