#include <iostream>
#include <cmath>
using namespace std;

int cantidadDeCaracteres;
char caracterIngresado;
 
 bool esPrimo(int numero){
 	int contador = 0;
 	for (int i = 2; i < numero; i++)
 	{
 		if (numero % i == 0)
 		{
 			contador++;
 		} else {
 			contador += 0;
 		}
 	}
 	if (contador > 0)
 	{
 		cout << "no es primo" << endl;
 		return false;
 	} else {
 		cout << "es primo" << endl;
 		return true;
 	}
 }

 int numeroPrimoMasCercano(int numero){
 	int posibilidad1 = numero + 1;
 	int posibilidad2 = numero - 1;
 	int primoPositivo = 0;
 	int primoNegativo = 0;

 	while(primoPositivo == 0){
 		bool result = esPrimo(posibilidad1);
 		if (result == false)
 		{
 			cout << "en este caso no fue primo: " << posibilidad1 << endl;
 			posibilidad1++;
 		} else {
 			cout << "en este caso si fue primo: " << posibilidad1 << endl;
 			primoPositivo += posibilidad1; 
 		}
 	}

 	while(primoNegativo == 0){
 		bool result = esPrimo(posibilidad2);
 		if (result == false)
 		{
 			cout << "en este caso no fue primo: " << posibilidad2 << endl;
 			posibilidad2--;
 		} else {
 			cout << "en este caso si fue primo: " << posibilidad2 << endl;
 			primoNegativo += posibilidad2; 
 		}
 	}

 	if ((primoPositivo - numero) < (numero - primoNegativo))
 	{
 		return primoPositivo;
 	} else if ((primoPositivo - numero) > (numero - primoNegativo))
 	{
 		return primoNegativo;
 	} else {
 		return primoPositivo;
 	}
 }

 int plegadoFase1(int numero) {
 	int d1, d2, d3;
	int digitoFinal;
	    if (numero < 100)
	    {
	    	d1 = numero / 10;
	    	d2 = numero % 10;
	    	cout << "primer digito: " << d1 << endl;
	    	cout << "segundo digito: " << d2 << endl;
	    	digitoFinal = d1 + d2;
	    	cout << digitoFinal << endl;
	    } else {
	    	d1 = numero / 100;
	    	d2 = (numero % 100) / 10;
	    	d3 = numero % 10;
	    	cout << "primer digito: " << d1 << endl;
	    	cout << "segundo digito: " << d2 << endl;
	    	cout << "tercer digito: " << d3 << endl;
	    	digitoFinal = d1 + d2 + d3;
	    	cout << digitoFinal << endl;
	    }

	    if (digitoFinal > 9)
	    {
	    	d1 = digitoFinal / 10;
	    	d2 = digitoFinal % 10;
	    	digitoFinal = d1 + d2;
	    	cout << "digito final de la fase 1 es: " << digitoFinal << endl;
	    } else {
	    	cout << "digito final de la fase 1 es: " << digitoFinal << endl;
	    }
	    return digitoFinal;
 }
 
 char codificar(int numero) {
 	int caracter;
     if (numero < 0 || numero > 9)
     {
     	cout << "no es un numero valido" << endl;
    
     } else {
     	cout << "es un numero valido" << endl;
    
    }
     if (numero == 0) { 
       caracter = '$';
       cout << "segun la tabla de silva, este numero es: " << '$' << endl;
       
    } else if (numero == 1) { 
       caracter = '{';
       cout << "segun la tabla de silva, este numero es: " << '{' << endl;
    
    } else if (numero == 2) { 
       caracter = '~';
       cout << "segun la tabla de silva, este numero es: " << '~' << endl;
    
    } else if (numero == 3) { 
       caracter = '}';
       cout << "segun la tabla de silva, este numero es: " << '}' << endl;
    
    } else if (numero == 4) { 
       caracter = '%';
       cout << "segun la tabla de silva, este numero es: " << '%' << endl;
    
    } else if (numero == 5) { 
       caracter = 'd';
       cout << "segun la tabla de silva, este numero es: " << 'd' << endl;
    
    } else if (numero == 6) { 
       caracter = '&';
       cout << "segun la tabla de silva, este numero es: " << '&' << endl;
    
    } else if (numero == 7) { 
       caracter = 'o';
       cout << "segun la tabla de silva, este numero es: " << 'o' << endl;
    
    } else if (numero == 8) { 
       caracter = '@';
       cout << "segun la tabla de silva, este numero es: " << '@' << endl;
    
    } else if (numero == 9) { 
       caracter = 'j';
       cout << "segun la tabla de silva, este numero es: " << 'j' << endl;
    }

    return caracter; 
 }

 int plegadoFase2(int numero) {

 	int d1, d2, d3, d4;

	 d1 = numero / 1000;
	 
	 d2 = (numero / 100) % 10;
	 
	 d3 = ((numero / 10) % 10) % 10;
	 
	 d4 = numero % 10;
 
	cout << d1 << d2 << d3 << d4 << endl;

    int sumaDedigitos = d1 + d2 + d3 + d4;

	cout << sumaDedigitos << endl;

	if (sumaDedigitos > 9)
	{
		d1 = sumaDedigitos / 10;
		d2 = sumaDedigitos % 10;
		sumaDedigitos = d1 + d2;
		cout << sumaDedigitos << endl;
	} else {
		cout << sumaDedigitos << endl;
	}

    return sumaDedigitos;
 }

int main() {
	cout << "Ingrese la cantidad de caracteres a desencriptar:" << endl;
	cin >> cantidadDeCaracteres;
	cantidadDeCaracteres <= 0 ? cout << "no es una cantidad valida" << endl : cout << "vamos a hacerlo" << endl;
	
	for (int i = 1; i <= cantidadDeCaracteres; i++) {
	    cout << "Ingrese el caracter " << i << endl;
	    cin >> caracterIngresado;

	    int caracterConvertido = caracterIngresado;
	    cout << caracterConvertido << endl;

	    int numeroPrimo = esPrimo(caracterConvertido);
	    if (numeroPrimo == 0){
	    	numeroPrimo = numeroPrimoMasCercano(caracterConvertido);
	    	cout << "el primo mas cercano es: " << numeroPrimo << endl;
	    } else {
	    	numeroPrimo = caracterConvertido;
	    	cout << "este numero ya es primo" << endl;
	    }

	    int digitoFinalFase1 = plegadoFase1(numeroPrimo);
	    
	   	char caracterCodificadoSilva = codificar(digitoFinalFase1);

	   	int caracterConvertidoSilva = caracterCodificadoSilva;
	   	cout << "este carecter es el numero: " << caracterConvertidoSilva << endl;

	   	double raizCuadrada = sqrt(caracterConvertido);
		cout << "La raiz cuadrada de " << caracterConvertidoSilva << " es: " << raizCuadrada  << endl;
		
		int decimalesAUsar = (raizCuadrada * 100000) / 10;
		cout << decimalesAUsar << endl;
    	
    	int digitosAUsar = (decimalesAUsar % 10000);
		cout << digitosAUsar << endl;
		
		int digitoFinalFase2 = plegadoFase2(digitosAUsar);
		cout << "el digito final de la fase 2 es: " << digitoFinalFase2 << endl;
	    }
	
	system("pause");
	
	return 0;
}