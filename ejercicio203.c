/*En una libreria, cree un algoritmo que lea un monto en soles (real). Use una constante 
simbolica TASA_CAMBIO = 0.27. Calcule el equivalente en dolares con la expresion aritmetica 
(soles * TASA_CAMBIO) y asignelo a dolares. Evalúe la expresion relacional (dolares > 0). 
Muestre por pantalla 'X soles equivalen a Y dolares'. Ademas del calculo principal, calcule 
el producto del resultado por PI. Asegurese de inicializar todas las variables antes de usarlas.*/
#include <stdio.h>
#define TASA_CAMBIO 0.27
#define PI 3.14159
int main () {
    
    //variables
    float soles = 0.0;
    float dolar_total = 0.0;
    float result_pi = 0.0;
    
    //Explicación del algoritmo e ingreso de datos
    printf("Este algoritmo lee soles y muestra su equivalente en dolares\n");
    printf("Ingrese los soles:\n");
    scanf("%f", &soles);
    
    //cálculos y condicional de los resultados con los datos de salida
    dolar_total = soles * TASA_CAMBIO;
    if(dolar_total > 0) {
    printf("%.2f soles equivalen a %.2f dolares\n", soles, dolar_total);
    }
    
    //resultado con PI
    result_pi = PI * dolar_total;
    printf("El resultado en dolares por PI es: %.2f\n", result_pi);
}