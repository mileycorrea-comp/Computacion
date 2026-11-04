/*En una empresa de mensajeria, cree un algoritmo que lea tres notas (reales entre 0 y 10) y sus porcentajes 
(reales que suman 100). Use constantes simbolicas PORCENTAJE = 100, NOTA_MIN = 7.0, NOTA_MAX = 10.0. Calcule la nota 
final con la expresion aritmetica ((nota1 * p1 + nota2 * p2 + nota3 * p3) / PORCENTAJE). Evalúe las expresiones logicas 
(nota_final >= NOTA_MIN) y (nota_final == NOTA_MAX). Asigne los resultados booleanos a aprobo y con_honores. Muestre por 
pantalla la nota final y la condicion. Ademas, calcule el valor minimo de todas las variables utilizadas. Agregue al final 
un resumen de los datos ingresados.*/
#include <stdio.h>
#include <stdbool.h>
#define PORCENTAJE 100
#define NOTA_MIN 7.0 
#define NOTA_MAX 10.0
int main () {
    //variables
    float nota1, nota2, nota3 = 0.0;
    float nota_final = 0.0;
    float p1 = 0.0;
    float p2 = 0.0; 
    float p3 = 0.0;
    float valor_min = 0.0;
    bool aprobo = 0;
    bool con_honores = 0;

    //Ingreso de datos 
    printf("Este algoritmo calcula la nota final del alumno y si aprobó o no.\n");
    printf("Ingrese las notas del alumno (0-10)\n");
    printf("Ingrese la nota 1: \n");
    scanf("%f", &nota1);
    printf("Ingrese el porcentaje de la nota 1: \n");
    scanf("%f", &p1);
    printf("Ingrese la nota 2: \n");
    scanf("%f", &nota2);
    printf("Ingrese el porcentaje de la nota 2: \n");
    scanf("%f", &p2);
    printf("Ingrese la nota 3: \n");
    scanf("%f", &nota3);
    printf("Ingrese el porcentaje de la nota 3: \n");
    scanf("%f", &p3);

    //calculos y condicionales
    nota_final = ((nota1*(p1*1000) + nota2*(p2*1000) + nota3*(p3*1000)) / PORCENTAJE)/3;
    aprobo = nota_final >= NOTA_MIN;
    con_honores = nota_final == NOTA_MAX;
    
    valor_min = nota1;
    if (nota2 < valor_min) {
        valor_min = nota2;
    }
    if (nota3 < valor_min) {
        valor_min = nota3;
    }
    if (p1 < valor_min) {
        valor_min = p1;
    }
    if (p2 < valor_min) {
        valor_min = p2;
    }
    if (p3 < valor_min) {
        valor_min = p3;
    }
    printf("La nota final del estudiante es: %.2f\n", nota_final);
    if (con_honores) {
        printf("APROBADO CON HONORES. \n");
    } else if (aprobo) {
        printf("APROBADO. \n");
    } else {
        printf("REPROBADO. \n");
    }    
    //Resultados
    printf("El valor minimo en las variables es: %.2f\n", valor_min);
    printf("La nota 1: %.2f, de porcentaje: %.1f%%\n", nota1, p1);
    printf("La nota 2: %.2f, de porcentaje: %.1f%%\n", nota2, p2);
    printf("La nota 3: %.2f, de porcentaje: %.1f%%\n", nota3, p3);
}