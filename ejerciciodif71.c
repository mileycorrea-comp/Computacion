#include <stdio.h>
//Variables usadas para calcular el precio
int main() {
    float largo = 0.0;                  float ancho = 0.0;    
    float IVA = 0.15;                   float desc_contado = 0.1;
    float inter_financiado = 0.18;
    float precio_m2 = 0.0;              
    float area = 0.0;                   float precio_base= 0.0; 
    float precio_contado = 0.0;         float precio_financiado= 0.0;
    float precio_contado_iva = 0.0;     float precio_financiado_iva = 0.0;

printf("Por favor ingresa el largo del terreno: ");
scanf("%f", &largo);

printf("Por favor ingrese el ancho del terreno: ");
scanf("%f", &ancho);

printf("Por favor ingrese el precio en m2: ");
scanf("%f", &precio_m2);

area = largo * ancho;
precio_base = precio_m2 * area;
precio_contado = precio_base * (1 - desc_contado);
precio_financiado = precio_base * (1 + inter_financiado);
precio_contado_iva = precio_contado * (1 + IVA); 
precio_financiado_iva = precio_financiado * (1 + IVA);

/// Evaluar expresion del precio al contado y financiado
if (precio_contado_iva < precio_financiado_iva) {
    printf("El precio al contado es menor que el precio financiado.\n");
} else {
    printf("El precio al contado no es menor que el precio financiado.\n");
}

printf("El valor del precio al contado es: %f\n", precio_contado_iva);
printf("El valor del precio financiado es: %f\n", precio_financiado_iva);
}