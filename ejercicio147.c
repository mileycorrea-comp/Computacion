/*En una tienda de electronica, cree un algoritmo que lea un numero real y por teclado. Use la constante 
literal 2 como exponente. Calcule la potencia con la expresion aritmetica (y ^ 2) y asignela a cuadrado. 
Evalúe la expresion relacional (cuadrado >= 0). Muestre por pantalla 'El cuadrado de X es Y'. Adicionalmente, 
calcule la diferencia entre el resultado y el promedio. Muestre al inicio una lista de las variables que se utilizaran.*/
#include <stdio.h>
#include <math.h>
int main () {
    //Variables
    float num, potencia = 0.0;
    float promedio, diferencia = 0.0;
    
    //Ingreso de datos y condicionante de estos
    printf("Ingrese el valor del producto o servicio: \n");
    scanf("%f", &num);
    
    //Cálculos y resultados de datos de salida
    if (num >= 0){
        potencia = pow(num, 2);
        promedio = (num + potencia)/2;
        diferencia = potencia - promedio;
        printf("El valor ingresado fue: %.2f, se utilizo un exponente 2 \n", num);
        printf("El cuadrado del resultado fue: %.2f\n", potencia);
        printf("Su promedio fue de: %.2f\n", promedio);
        printf("Su diferencia fue de: %.2f\n", diferencia);
    } else {
        printf("ERROR EL VALOR INGRESADO NO ES VALIDO");
    }
}