Algoritmo ejerciciodif71
	largo = 0.0;
	ancho = 0.0;
	IVA = 0.15;
	desc_contado = 0.1;
	inter_financiado = 0.18;
	precio_m2 = 0.0;
	precio_base = 0.0;
	precio_contado = 0.0;
	precio_financiado = 0.0;
	precio_contado_iva = 0.0;
	precio_financiado_iva = 0.0;
	
	Escribir "Por favor ingresa el largo del terreno: ";
	Leer largo;
	
	Escribir "Por favor ingresa el ancho del terreno: ";
	Leer ancho;
	
	Escribir "Por favor ingrese el precio en m2: ";
	Leer precio_m2;
	
	area = largo * ancho;
	precio_base = precio_m2 * area;
	precio_contado = precio_base * (1 - desc_contado);
	precio_financiado = precio_base * (1 + inter_financiado);
	precio_contado_iva = precio_contado * (1 + IVA);
	precio_financiado_iva = precio_financiado * (1 + IVA);
	
	Si precio_contado_iva < precio_financiado_iva Entonces
		Escribir "El precio al contado es menor que el precio financiado.";
	Sino
		Escribir "El precio al contado no es menor que el precio financiado.";
	FinSi
	
	Escribir "El valor del precio al contado es: ", precio_contado_iva;
	Escribir "El valor del precio financiado es: ", precio_financiado_iva;
FinAlgoritmo