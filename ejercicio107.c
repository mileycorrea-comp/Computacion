/*En un supermercado, diseñe un algoritmo que lea las dos diagonales (reales) de un rombo. Use la constante 
literal 2 en el denominador. Calcule el area con la expresión aritmetica ((diagonal_mayor * diagonal_menor) / 2) 
y asignela a area. Evalúe la expresion logica (diagonal_mayor > 0 AND diagonal_menor > 0). Muestre por pantalla 
el area del rombo. Adicionalmente, reste un descuento del 5% al resultado final. Muestre al inicio una lista de 
las variables que se utilizaran.*/
#include <stdio.h>
int main () {
    //Variables
    float Descuento = 0.05;
    float diagonal_mayor, diagonal_menor = 0.0;
    float area = 0.0; 
    float area_desc = 0.0;
    
    //Ingreso de datos y explicación del algortimo
    printf("Este algoritmo calcula el area de un rombo y su resultado con un descuento del 5%%\n");
    printf("Ingrese la diagonal mayor en m: \n");
    scanf("%f", &diagonal_mayor);
    printf("Ingrese la diagonal menor en m: \n");
    scanf("%f", &diagonal_menor);
    
    //Cálculos y condicional de los datos ingresados con resultados datos de salida
    if (diagonal_mayor > 0 && diagonal_menor > 0){
        area = (diagonal_mayor * diagonal_menor)/2;
        area_desc = area - (area * Descuento);
        printf("El area del rombo es: %.2f m^2\n", area);
        printf("El area del rombo con descuento de 5%% es: %.2f m^2\n", area_desc);
    } else {
        printf("ERROR POR FAVOR INGRESE DATOS VALIDOS MAYORES A 0.");
    }
}