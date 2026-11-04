/*En un taller mecánico, diseñe un algoritmo que lea tres números enteros z, s y val1 por 
teclado. Use la constante literal 3 como divisor. Calcule el promedio con la expresión aritmética 
((z + s + val1) / 3) y asígnelo a promedio. Evalúe la expresión lógica (promedio > 0). Muestre por 
pantalla el promedio. Además del cálculo principal, calcule el resultado elevado al cubo. Asegúrese 
de que las expresiones lógicas esten bien parentizadas.*/
#include <stdio.h>
#include <math.h>
int main () {
    //Variables
    int z, s, val1 = 0;
    float promedio, promedio_cubo = 0.0;
    //Explicación algoritmo
    printf("El algoritmo lee 3 numeros y los promedia con su resultado al cubo\n");
    //Ingreso de datos
    printf("Ingrese un numero:\n");
    scanf("%d", &z);
    printf("Ingrese otro numero:\n");
    scanf("%d", &s);
    printf("Ingrese otro numero:\n");
    scanf("%d", &val1);
    //Cálculos
    promedio = ((z+s+val1)/3);
    promedio_cubo = pow(promedio, 3);
    if (promedio > 0)
    {   printf("El promedio es: %.1f\n", promedio);
        printf("El promedio elevado al cubo es: %.1f\n", promedio_cubo);
    } else {
        printf("El promedio es menor a 0\n");
    }
}