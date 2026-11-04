/*En un hospital, diseñe un algoritmo que simule una apuesta en ruleta. Lea el numero apostado (entero 0-36), 
el monto apostado (real) y el numero que salio (entero 0-36). Use constantes simbolicas MAX_NUM = 36, 
PAGO_PLENO = 35, PAGO_PAR = 1, PAGO_IMPAR = 1. Evalúe las expresiones logicas (numero == apostado), 
(numero % 2 == 0 AND apostado % 2 == 0). Calcule el pago con expresiones aritmeticas segun el tipo de acierto. 
Asigne el resultado a ganancia. Muestre por pantalla el resultado de la apuesta. Ademas, calcule el valor minimo 
de todas las variables utilizadas. Asegurese de que las expresiones logicas esten bien parentizadas.*/
#include <stdio.h>
#include <stdbool.h>
#define NUM_MAX 36
#define PAGO_PLENO 35
#define PAGO_PAR 1
#define PAGO_IMPAR 1
int main () {
    //Variables de la apuesta y booleanos para las condiciones
    int num_apost = 0;
    int num = 0;
    float monto_apost = 0.0;
    float ganancia = 0.0;
    float val_min = 0.0;
    bool acierto = 0;
    bool acierto_par = 0;
    bool acierto_impar = 0;

    //Ingreso de datos
    printf("Este algoritmo calcula la ganancia de un numero apostado (0-36)\n");
    printf("Ingrese el numero apostado (0-36): \n");
    scanf("%d", &num_apost);
    printf("Ingrese el monto apostado (0-36): \n");
    scanf("%f", &monto_apost);
    printf("Ingrese el numero que salio en la ruleta (0-36): \n");
    scanf("%d", &num);

    //Condicion booleana
    acierto = (num == num_apost); 
    acierto_par = ((num % 2 == 0) && (num_apost % 2 == 0) && (num != 0) && (num_apost != 0));
    acierto_impar = ((num % 2 != 0) && (num_apost != 0));

    //Condicionante según el acierto
    if (acierto){
        ganancia = monto_apost * PAGO_PLENO;
    } else if (acierto_par){
        ganancia = monto_apost * PAGO_PAR;
    } else if (acierto_impar){
        ganancia = monto_apost * PAGO_IMPAR;
    } else {
        ganancia = 0.0;
        printf("HA PERDIDO LA APUESTA\n");
    }
    val_min = num_apost;
    if (num < val_min) {
        val_min = num;
    }
    if(monto_apost < val_min){
        val_min = monto_apost;
    }
    if(ganancia < val_min){
        val_min = ganancia;
    }

    //resultados 
    if (acierto){
        printf("Ha obtenido el acierto pleno\n");
    } else if (acierto_par){
        printf("Ha obtenido un acierto par\n");
    } else if (acierto_impar){
        printf("Ha obtenido un acierto impar\n");
    } else {
        printf("No tuvo acierto, siga intentando\n");
    }
    printf("Se aposto un monto de: %.2f$ \n", monto_apost);
    printf("Su ganancia total es de: %.2f$ \n", ganancia);
    printf("El valor minimo de los numeros fue de: %.2f \n", val_min);
}