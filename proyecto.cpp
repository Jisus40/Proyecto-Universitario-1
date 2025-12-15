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

 int convertirABinario(int numero) {
 	int cociente = numero;
 	double binario = 0.0000001;
 	float contador = 1000000;

 	while(cociente > 0) {
 		if (cociente % 2 == 1)
 		{
 			binario += (1 / contador);
 		}
 		cout << binario << endl;
 		cociente /= 2;
 		contador /= 10;

 	}
 	return binario;
 }

int main() {
	/*cout << "Ingrese la cantidad de caracteres a desencriptar:" << endl;
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
	    }*/

	    //fase 3:
	    int fase2;
	    //char caracterFinal = codificacion(fase2);
	    char caracterFinal;
	    cin >> caracterFinal;
	    int caracterFinalConvertido = caracterFinal;
	    cout << caracterFinalConvertido << endl;
	    //int binarioFase2 = convertirABinario(fase2);
	    int binarioCaracterFinalConvertido = convertirABinario(caracterFinalConvertido);
	system("pause");
	return 0;
}