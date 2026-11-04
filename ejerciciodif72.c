/*En un restaurante, cree un algoritmo que simule el calculo del costo de envio de un paquete. Lea el peso 
(real, kg), la distancia (real, km) y el tipo de servicio (caracter: 'N' normal, 'E' express, 'P' prioritario). 
Use constantes simbolicas TARIFA_BASE = 5.0, COSTO_KG = 2.0, COSTO_KM = 0.5, FACTOR_EXPRESS = 1.5, FACTOR_PRIORITARIO = 2.0, 
PESO_MAX = 30.0, DISTANCIA_MAX = 1000.0. Evalúe la expresion logica (peso <= PESO_MAX AND distancia <= DISTANCIA_MAX). 
Use expresiones logicas para seleccionar el factor. Calcule el costo total. Muestre por pantalla el desglose. Ademas, 
calcule el valor minimo de todas las variables utilizadas. Asegurese de inicializar todas las variables antes de usarlas.|*/
#include <stdio.h>
//Constantes simbolicas
#define TARIFA_BASE 5.0 
#define COSTO_KG 2.0            
#define COSTO_KM 0.5
#define FACTOR_EXPRESS 1.5      
#define FACTOR_PRIORITARIO 2.0
#define PESO_MAX 30.0           
#define DISTANCIA_MAX 1000.0
int main () {
    //Variables
    float peso, distancia, costo_tot_servicio = 0.0;
    float costo_total, cost_peso, cost_dist = 0.0;
    char tipo_servicio = ' '; //N = normal ; E= express ; P= prioritario
    
    //Ingreso de datos
    printf("Este algoritmo calcula el costo total del envio de un paquete\n");
    printf("Ingrese el peso en kg: \n");
    scanf("%f", &peso);
    printf("Ingrese la distancia en km: \n");
    scanf("%f", &distancia);
    printf("Ingrese el tipo de servicio:\n");
    printf("N = normal ; E = express ; P = prioritario\n");
    scanf(" %c", &tipo_servicio);

    //Cálculos y condicionantes
    if (peso <= PESO_MAX && distancia <= DISTANCIA_MAX){
        cost_dist = (distancia) * COSTO_KG;
        cost_peso = (peso) * COSTO_KG;
        costo_total = cost_dist + cost_peso;
        printf("El costo de la distancia es: %.2f\n", cost_dist);
        printf("El costo del peso es: %.2f\n", cost_peso);
        //printf("El costo total a pagar es: %.2f\n", costo_total);
    } else {
        printf("El peso o distancia es mayor a al nivel maximo.\n");
    }
    
    if (tipo_servicio == 'N' || tipo_servicio == 'n'){
        costo_tot_servicio = costo_total;
        printf("El costo total a pagar es: %.2f\n", costo_tot_servicio);
    } else if (tipo_servicio == 'E' || tipo_servicio == 'e'){
        costo_tot_servicio = costo_total * FACTOR_EXPRESS;
        printf("El costo total a pagar es: %.2f\n", costo_tot_servicio);
    } else if (tipo_servicio == 'P' || tipo_servicio == 'p'){
        costo_tot_servicio = costo_total * FACTOR_PRIORITARIO;
        printf("El costo total a pagar es: %.2f\n", costo_tot_servicio);
    } else {
        printf("ERROR. INGRESE UN TIPO DE SERVICIO VALIDO");
    }
}