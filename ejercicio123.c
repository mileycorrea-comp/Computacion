/*En una clinica veterinaria, cree un algoritmo que lea la edad (entero) de una persona. 
Use la constante literal 220. Calcule la frecuencia cardiaca maxima con la expresion aritmetica
(220 - edad) y asignela a fcm. Use una constante simbolica FACTOR_ZONA = 0.70. Calcule la zona 
de entrenamiento con (fcm * FACTOR_ZONA) y asignela a zona. Muestre por pantalla la FCM y la zona 
de entrenamiento. Adicionalmente, calcule la suma acumulada de los resultados parciales. Justifique 
el tipo de dato simple elegido para cada variable.*/
#include <stdio.h>
int main() {
    //Variables
    int edad, fcm = 0;
    float zona_entrenamiento, suma = 0.0;
    float FACTOR_ZONA = 0.7;
    
    //Ingreso de datos
    printf("Ingrese la edad: ");
    scanf("%d", &edad);
    
    //Fórmulas respecto a las edades
    fcm = 220 - edad;
    zona_entrenamiento = fcm * FACTOR_ZONA;
    printf("Su FCM es: %d \n", fcm);
    printf("su zona de entrenamiento es: %f \n", zona_entrenamiento);

    suma = fcm + zona_entrenamiento;
    printf("La suma acumulada es; %.2f \n", suma);
}