/*En un restaurante, cree un algoritmo que simule el calculo del costo de envio de un paquete. Lea el peso 
(real, kg), la distancia (real, km) y el tipo de servicio (caracter: 'N' normal, 'E' express, 'P' prioritario). 
Use constantes simbolicas COSTO_KG = 2.0, COSTO_KM = 0.5, FACTOR_EXPRESS = 1.5, FACTOR_PRIORITARIO = 2.0, 
PESO_MAX = 30.0, DISTANCIA_MAX = 1000.0. Evalue la expresion logica (peso <= PESO_MAX AND distancia <= DISTANCIA_MAX). 
Use expresiones logicas para seleccionar el factor. Calcule el costo total. Muestre por pantalla el desglose. Ademas, 
calcule el valor minimo de todas las variables utilizadas. Asegurese de inicializar todas las variables antes de usarlas.*/
import java.util.Scanner;

public class APE6 {
    public static void main(String[] args) {
        Scanner paqueteria = new Scanner(System.in);

    // Constantes 
    float COSTO_KG = 2.0f;
    float COSTO_KM = 0.5f;
    float FACTOR_EXPRESS = 1.5f;
    float FACTOR_PRIORITARIO = 2.0f;
    float PESO_MAX = 30.0f;
    float DISTANCIA_MAX = 1000.0f;
        
        // Variables
        float peso = 0.0f, distancia = 0.0f, costo_tot_servicio = 0.0f;
        float costo_total = 0.0f, cost_peso = 0.0f, cost_dist = 0.0f;
        char tipo_servicio = ' '; // N = normal ; E = express ; P = prioritario
        
        // Ingreso de datos
        System.out.println("Calcule el costo total del envio de un paquete");
        System.out.println("Ingrese el peso en kg:");
        peso = paqueteria.nextFloat();
        System.out.println("Ingrese la distancia en km:");
        distancia = paqueteria.nextFloat();
        System.out.println("Ingrese el tipo de servicio:");
        System.out.println("N = normal ; E = express ; P = prioritario");
        tipo_servicio = paqueteria.next().charAt(0);

        // Calculos y condicionantes
        if (peso <= PESO_MAX && distancia <= DISTANCIA_MAX) {
            cost_dist = distancia * COSTO_KM;
            cost_peso = peso * COSTO_KG;
            costo_total = cost_dist + cost_peso;
            
            System.out.printf("El costo de la distancia es: %.2f\n ", cost_dist);
            System.out.printf("El costo del peso es: %.2f\n ", cost_peso);
            
            // Seleccion tipo de servicio
            switch (tipo_servicio) {
                case 'N':
                case 'n':
                    costo_tot_servicio = costo_total;
                    System.out.printf("El costo total a pagar es: %.2f\n ", costo_tot_servicio);
                    break;
                case 'E':
                case 'e':
                    costo_tot_servicio = costo_total * FACTOR_EXPRESS;
                    System.out.printf("El costo total a pagar es: %.2f\n ", costo_tot_servicio);
                    break;
                case 'P':
                case 'p':
                    costo_tot_servicio = costo_total * FACTOR_PRIORITARIO;
                    System.out.printf("El costo total a pagar es: %.2f\n ", costo_tot_servicio);
                    break;
                default:
                    System.out.println("ERROR. INGRESE UN TIPO DE SERVICIO VALIDO");
                    break;
            }
        } else {
            System.out.println("El peso o distancia es mayor a al nivel maximo.");
        }
        paqueteria.close();
    }
}