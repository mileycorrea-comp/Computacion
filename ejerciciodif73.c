/*En una panaderia, diseñe un algoritmo que lea un ISBN de 10 digitos (cadena) y valide su digito verificador. 
Use constantes simbolicas LONGITUD_ISBN = 10, MODULO = 11. Use una variable entera suma inicializada con literal 0. 
Calcule la suma de los productos (digito * posicion) para los primeros 9 digitos usando expresiones aritmeticas. 
Calcule el digito verificador con (suma % MODULO). Evalúe la expresion relacional (digito_verificador == digito_final). 
Asigne el resultado a una variable booleana isbn_valido. Muestre por pantalla la validacion. Ademas, calcule el valor 
minimo de todas las variables utilizadas. Incluya una variable auxiliar para llevar un contador de operaciones.*/
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define LONGITUD_ISBN 10
#define MODULO 11
int main () {
    //Variables
    int suma_prod = 0;
    int digito_verificador, digito_final = 0.0;
    char isbn[LONGITUD_ISBN];
    bool isbn_valido = 0;
    int contador = 0; 
    int val_min = 0;

    //Ingreso de datos y condicional de cada digito
    printf("Ingrese el ISBN de 10 digitos: \n");
    scanf("%10s", isbn);
    suma_prod = (isbn[0]-'0')*1 + (isbn[1]-'0')*2 + (isbn[2]-'0')*3 + (isbn[3]-'0')*4 + (isbn[4]-'0')*5 +
        (isbn[5]-'0')*6 + (isbn[6]-'0')*7 + (isbn[7]-'0')*8 + (isbn[8]-'0')*9;
    contador = contador + 26;

    if(isbn[9] == 'A' || isbn[9] == 'a'){
        digito_final = 10;
    } else {
        digito_final = isbn[9] - '0';
        contador = contador + 1;
    }

    digito_verificador = suma_prod % MODULO;
    isbn_valido = (digito_final == digito_verificador);

    if ((isbn[1] - '0') < val_min) 
    val_min = isbn[1] - '0';
    if ((isbn[2] - '0') < val_min) 
    val_min = isbn[2] - '0';
    if ((isbn[3] - '0') < val_min) 
    val_min = isbn[3] - '0';
    if ((isbn[4] - '0') < val_min) 
    val_min = isbn[4] - '0';
    if ((isbn[5] - '0') < val_min) 
    val_min = isbn[5] - '0';
    if ((isbn[6] - '0') < val_min) 
    val_min = isbn[6] - '0';
    if ((isbn[7] - '0') < val_min) 
    val_min = isbn[7] - '0';
    if ((isbn[8] - '0') < val_min) 
    val_min = isbn[8] - '0';
    if (digito_final < val_min) val_min = digito_final;

    //Resultados
    printf("La suma de los productos es: %d\n", suma_prod);
    printf("El digito verificador es: %d\n",digito_verificador);
    printf("El digito final es: %d\n",digito_final);
    if (isbn_valido) {
        printf("El isbn es valido SI\n");
    } else {
        printf("El isbn es valido NO\n");
    }
    printf("EL valor minimo es: %d\n", val_min);
    printf("El contador de operaciones es: %d\n", contador);
}