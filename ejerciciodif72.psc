Algoritmo ejerciciodif72
	TARIFA_BASE = 5.0;
	COSTO_KG = 2.0;
	COSTO_KM = 0.5;
	FACTOR_EXPRESS = 1.5;
	FACTOR_PRIORITARIO = 2.0;
	PESO_MAX = 30.0;
	DISTANCIA_MAX = 1000.0;
	
	peso = 0.0;
	distancia = 0.0;
	costo_tot_servicio = 0.0;
	costo_total = 0.0;
	cost_peso = 0.0;
	cost_dist = 0.0;
	tipo_servicio = " ";
	
	Escribir "Este algoritmo calcula el costo total del envio de un paquete";
	Escribir "Ingrese el peso en kg: ";
	Leer peso;
	Escribir "Ingrese la distancia en km: ";
	Leer distancia;
	Escribir "Ingrese el tipo de servicio: ";
	Escribir "N - normal ; E - express ; P - prioritario";
	Leer tipo_servicio;
	
	Si peso <= PESO_MAX Y distancia <= DISTANCIA_MAX Entonces
		cost_dist = (distancia) * COSTO_KG; 
		cost_peso = (peso) * COSTO_KG;
		cost_total = cost_dist + cost_peso;
		
		Escribir "El costo de la distancia es: ", cost_dist;
		Escribir "El costo del peso es: ", cost_peso;
	Sino
		Escribir "El peso o distancia es mayor a al nivel maximo.";
	FinSi
	
	Si tipo_servicio == "N" O tipo_servicio == "n" Entonces
		costo_tot_servicio = costo_total;
		Escribir "El costo total a pagar es: ", costo_tot_servicio;
	Sino
		Si tipo_servicio == "E" O tipo_servicio == "e" Entonces
			costo_tot_servicio = costo_total * FACTOR_EXPRESS;
			Escribir "El costo total a pagar es: ", costo_tot_servicio;
		Sino
			Si tipo_servicio == "P" O tipo_servicio == "p" Entonces
				costo_tot_servicio = costo_total * FACTOR_PRIORITARIO;
				Escribir "El costo total a pagar es: ", costo_tot_servicio;
			Sino
				Escribir "ERROR. INGRESE UN TIPO DE SERVICIO VALIDO";
			FinSi
		FinSi
	FinSi
FinAlgoritmo
