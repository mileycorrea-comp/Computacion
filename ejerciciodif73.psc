Algoritmo ejerciciodif73
	LONGITUD_ISBN <- 10;
	MODULO <- 11;
	suma_prod <- 0;
	digito_verificador <- 0;
	digito_final <- 0;
	isbn <- '';
	isbn_valido <- Falso;
	contador <- 0;
	val_min <- 0;
	Escribir 'Ingrese el ISBN de 10 digitos: ';
	Leer isbn;
	suma_prod <- ConvertirANumero(Subcadena(isbn,1,1))*1+ConvertirANumero(Subcadena(isbn,2,2))*2+ConvertirANumero(Subcadena(isbn,3,3))*3+ConvertirANumero(Subcadena(isbn,4,4))*4+ConvertirANumero(Subcadena(isbn,5,5))*5+ConvertirANumero(Subcadena(isbn,6,6))*6+ConvertirANumero(Subcadena(isbn,7,7))*7+ConvertirANumero(Subcadena(isbn,8,8))*8+ConvertirANumero(Subcadena(isbn,9,9))*9;
	contador <- contador+26;
	Si Subcadena(isbn,10,10)=='A' O Subcadena(isbn,10,10)=='a' Entonces
		digito_final <- 10;
	SiNo
		digito_final <- ConvertirANumero(Subcadena(isbn,10,10));
		contador <- contador+1;
	FinSi
	digito_verificador <- suma_prod MOD MODULO;
	isbn_valido <- (digito_final==digito_verificador);
	Si ConvertirANumero(Subcadena(isbn,2,2))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,2,2));
	FinSi
	Si ConvertirANumero(Subcadena(isbn,3,3))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,3,3));
	FinSi
	Si ConvertirANumero(Subcadena(isbn,4,4))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,4,4));
	FinSi
	Si ConvertirANumero(Subcadena(isbn,5,5))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,5,5));
	FinSi
	Si ConvertirANumero(Subcadena(isbn,6,6))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,6,6));
	FinSi
	Si ConvertirANumero(Subcadena(isbn,7,7))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,7,7));
	FinSi
	Si ConvertirANumero(Subcadena(isbn,8,8))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,8,8));
	FinSi
	Si ConvertirANumero(Subcadena(isbn,9,9))<val_min Entonces
		val_min <- ConvertirANumero(Subcadena(isbn,9,9));
	FinSi
	Si digito_final<val_min Entonces
		val_min <- digito_final;
	FinSi
	Escribir 'La suma de los productos es: ', suma_prod;
	Escribir 'El digito verificador es: ', digito_verificador;
	Escribir 'El digito final es: ', digito_final;
	Si isbn_valido Entonces
		Escribir 'El isbn es valido SI';
	SiNo
		Escribir 'El isbn es valido NO';
	FinSi
	Escribir 'El valor minimo es: ', val_min;
	Escribir 'El contador de operaciones es: ', contador;
FinAlgoritmo
