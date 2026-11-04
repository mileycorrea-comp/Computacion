Algoritmo ejercicio123
	// Variables
    Definir edad, fcm Como Entero;
    Definir zona_entrenamiento, suma, factor_zona Como Real;
    
    factor_zona <- 0.7;
    
    // Ingreso de datos
    Escribir "Ingrese la edad: ";
    Leer edad;
    
    // Fórmulas respecto a las edades
    fcm <- 220 - edad;
    zona_entrenamiento <- fcm * factor_zona;
    Escribir "Su FCM es: ", fcm;
    Escribir "su zona de entrenamiento es: ", zona_entrenamiento;
    
    suma <- fcm + zona_entrenamiento;
    Escribir "La suma acumulada es; ", suma;
FinAlgoritmo
