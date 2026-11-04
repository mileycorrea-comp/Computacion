/*En un hotel, cree un algoritmo que lea tres calificaciones (reales) de un estudiante. Use la 
constante literal 2 como divisor. Identifique la menor con expresiones relacionales. Calcule el 
promedio de las dos mejores con la expresion aritmetica ((suma_total - menor) / 2). Asignelo a 
promedio. Muestre por pantalla el promedio final. Adicionalmente, calcule el resultado divido 
entre una constante simbolica. Verifique que las constantes esten declaradas al inicio del algoritmo.*/
#include <stdio.h>
#define CONST_SIMBOLICA 10
int main () {
    //Variables
    float nota1, nota2, nota3 = 0.0;
    float suma_total, menor, promedio = 0.0;
    float promedi_simbo = 0.0;
    
    //Ingreso de datos y explicación del algoritmo
    printf("Este algoritmo calcula el promedio final y el resultado divido por una constante\n");
    printf("Ingrese la primera nota 1: \n");
    scanf("%f", &nota1);
    printf("Ingrese la primera nota 2: \n");
    scanf("%f", &nota2);
    printf("Ingrese la primera nota 3: \n");
    scanf("%f", &nota3);    

    //Condicional de las notas y su valor
    if (nota1 <= nota2 && nota1 <= nota3){
        menor = nota1;
    } else if (nota2 <= nota1 && nota2 <= nota3){
        menor = nota2;
    } else {
        menor = nota3;
    }
    
    //Cálculos suma de notas y pomedios
    suma_total = nota1 + nota2 + nota3;
    promedio = (suma_total - menor)/2;
    promedi_simbo = promedio/CONST_SIMBOLICA;

    //Resultados
    printf("El promedio final del alumno es: %.2f\n", promedio);
    printf("El promedio simbolico del alumno es: %.2f\n", promedi_simbo);
}