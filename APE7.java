import java.util.Scanner;

public class APE7 {
    public static void main(String[] args) {
        Scanner nota = new Scanner(System.in);

        //Datos de entrada 
        
        float nota_individual, nota_grupal, nota_final;
        double promedio;
        String estado;
        int promedio_entero;

        //Ingreso de datos
        System.out.println("Sistema de Notas Finales");
        System.out.println("Ingrese la nota individual (0-10):");
        nota_individual = nota.nextFloat();
        System.out.println("Ingrese la nota grupal (0-10):");
        nota_grupal = nota.nextFloat();
        System.out.println("Ingrese la nota final (0-10):");
        nota_final = nota.nextFloat();
        
        //Limite de las notas
        if (nota_individual < 0 || nota_individual > 10 || 
            nota_grupal < 0 || nota_grupal > 10 || 
            nota_final < 0 || nota_final > 10) {
        System.err.println("Error, por favor ingrese una nota dentro del rango");
        } else {
            //Calculo promedio (ponderado)
        promedio = (nota_individual * 0.30) + (nota_grupal * 0.30) + (nota_final * 0.40);
        
        //nivel desempeño
        String desempeno = "";
        promedio_entero = (int) promedio;

        switch (promedio_entero){
            case 10: 
            case 9:
                desempeno = "Excelente";
                break;
            case 8:
                desempeno = "Muy bueno";
                break;
            case 7:    
                desempeno = "Bueno";
                break;
            case 6:
            case 5:
                desempeno = "Regular";
                break;
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                desempeno = "Deficiente";
                break;
        }
        estado = (promedio >= 7.0) ? "Aprobó la unidad" : "Reprobó la unidad";

        //Datos de salida
        System.out.println("RESULTADOS");
        System.out.println("La nota individual (30%): "+nota_individual * 0.3);
        System.out.println("La nota grupal (30%): "+nota_grupal * 0.3);
        System.out.println("La nota final (40%): "+nota_final* 0.4);
        System.out.println("Su promedio ponderado es: "+promedio);
        System.out.println("Su nivel de desempeño es: "+desempeno);
        System.out.println("Estado: "+estado);
        
        if (promedio_entero < 7)
            System.out.println("El estudiante requiere refuerzo academico");
        }
            nota.close();
    }
}