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
 
 char decodificar(int numero) {
     if (numero < 0 || numero > 9)
     {
     	cout << "no es un numero valido" << endl;
    
     } else {
     	cout << "es un numero valido" << endl;
    
    }
     if (numero == 0) { 
       caracter =  '$';
       
    } else if (numero == 1) { 
       caracter =  '{';
    
    } else if (numero == 2) { 
       caracter =  '~';
    
    } else if (numero == 3) { 
       caracter =  '}';
    
    } else if (numero == 4) { 
       caracter =  '%';
    
    } else if (numero == 5) { 
       caracter =  'd';
    
    } else if (numero == 6) { 
       caracter =  '&';
    
    } else if (numero == 7) { 
       caracter =  'o';
    
    } else if (numero == 8) { 
       caracter =  '@';
    
    } else if (numero == 9) { 
       caracter =  'j';
    
    } 
 }

int main() {
	cout << "Ingrese la cantidad de caracteres a desencriptar:" << endl;
	cin >> cantidadDeCaracteres;
	
	for (int i = 1; i <= cantidadDeCaracteres; i++) {
	    cout << "Ingrese el caracter " << i << endl;
	    cin >> caracterIngresado;
	    int caracterConvertido = caracterIngresado;
	    cout << caracterConvertido << endl;
	    esPrimo(caracterConvertido);
	    int numeroPrimo = numeroPrimoMasCercano(caracterConvertido);
	    cout << "el primo mas cercano es: " << numeroPrimo << endl;
	    int d1;
	    int d2;
	    int d3;
	    int digitoFinalFase1;
	    if (numeroPrimo < 100)
	    {
	    	d1 = numeroPrimo / 10;
	    	d2 = numeroPrimo % 10;
	    	cout << "primer digito: " << d1 << endl;
	    	cout << "segundo digito: " << d2 << endl;
	    	digitoFinalFase1 = d1 + d2;
	    	cout << "digito final de la fase 1: " << digitoFinalFase1 << endl;
	    } else {
	    	d1 = numeroPrimo / 100;
	    	d2 = (numeroPrimo % 100) / 10;
	    	d3 = numeroPrimo % 10;
	    	cout << "primer digito: " << d1 << endl;
	    	cout << "segundo digito: " << d2 << endl;
	    	cout << "tercer digito: " << d3 << endl;
	    	digitoFinalFase1 = d1 + d2 + d3;
	    	cout << "digito final de la fase 1: " << digitoFinalFase1 << endl;
	    }
	   
	    }
	system("pause");
	
	return 0;
}












// fase 2:

char caracter;



 	int caracterConvertido = caracter;

 	double  raizCuadrada = sqrt ( caracterConvertido );
 	
cout << "La raiz cuadrada de " << caracterConvertido << " es: " << raizCuadrada  << endl;

    int decimalesAUsar = (raizCuadrada * 10000);
cout << decimalesAUsar << endl;

    int digitosAUsar = (decimalesAUsar % 10000);
cout << digitosAUsar << endl;

    int d1, d2, d3, d4;

 d1 = digitosAUsar / 1000;
 
 d2 = (digitosAUsar / 100) % 10;
 
 d3 = ((digitosAUsar/ 10) % 10) % 10;
 
 d4 = digitosAUsar% 10;
 
cout << d1 << d2 << d3 << d4 << endl;

    int sumaDedigitosAUsar;
    
sumaDedigitosAUsar = d1 + d2 + d3 + d4;

cout << sumaDedigitosAUsar << endl;

while (sumaDedigitosAUsar > 9) {
        int pliegueDeDigitos = 0;
        while (sumaDedigitosAUsar > 0) {
            
            pliegueDeDigitos += sumaDedigitosAUsar % 10; 
            
            sumaDedigitosAUsar /= 10;
        }
        sumaDedigitosAUsar = pliegueDeDigitos;
    }
    
    cout << sumaDedigitosAUsar << endl;
    
 return 0;
 }

