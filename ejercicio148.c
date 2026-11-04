/*En un gimnasio, construya un algoritmo que lea cinco notas (reales). Use la constante literal 3 como divisor. 
Identifique la mayor y la menor usando expresiones relacionales. Calcule el promedio de las tres notas intermedias 
con la expresion aritmetica ((suma - mayor - menor) / 3). Asignelo a promedio. Muestre por pantalla el promedio. 
Adicionalmente, calcule el porcentaje del resultado respecto a un valor de referencia. Justifique el tipo de dato 
simple elegido para cada variable.*/
#include <stdio.h>
int main () {
    //Variables
    float nota1, nota2, nota3, nota4, nota5 = 0.0;
    float promedio, porcentaje, suma, mayor, menor = 0.0;
    int referencia_notas = 0;
    
    //Ingreso de notas y datos
    printf("Ingrese la nota 1: \n");
    scanf("%f", &nota1);
    printf("Ingrese la nota 2: \n");
    scanf("%f", &nota2);
    printf("Ingrese la nota 3: \n");
    scanf("%f", &nota3);
    printf("Ingrese la nota 4: \n");
    scanf("%f", &nota4);
    printf("Ingrese la nota 5: \n");
    scanf("%f", &nota5);
    printf("Ingrese la referencia de calificacion: \n");
    scanf("%d", &referencia_notas);

    //Proceso de los cálculos
    suma = nota1 + nota2 + nota3 + nota4 + nota5;
    mayor = nota1;
    menor = nota1;
    
    //Condicionantes de los datos
    if(nota2 > mayor) {
        mayor = nota2;
    }
    if (nota2 < menor){
        menor = nota2;
    }
    if(nota3 > mayor) {
        mayor = nota3;
    }
    if (nota3 < menor){
        menor = nota3;
    }if(nota4 > mayor) {
        mayor = nota4;
    }
    if (nota4 < menor){
        menor = nota4;
    }if(nota5 > mayor) {
        mayor = nota5;
    }
    if (nota5 < menor){
        menor = nota5;
    }
    promedio = ((suma - mayor - menor)/3);
    if (referencia_notas <= 0){
        porcentaje= 0.0;
        printf("El valor de referencia no es valido. Ingrese nuevamente\n");
    } else {
        porcentaje = ((promedio / referencia_notas) * 100);
    }
    //Resultados
    printf("El promedio de las notas es: %.2f\n", promedio);
    printf("El porcentaje respecto al valor de referencia es: %.2f\n", porcentaje);
}