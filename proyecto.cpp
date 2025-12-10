#include <iostream>
#include <cmath>
using namespace std;

int cantidadDeCaracteres;
char caracterIngresado;

 /*bool esPrimo (int c){
	        if (c==2){
	            return true;
	        }
	        if(c%2==0){
	            return false;
	        }
	        int limite = sqrt(c);
	        
	        for(int n=3; n<=limite; n+=2){
	            if(c%n==0){
	                return false;
	            }
	        }
	           
 };*/ 
 
 void esPrimo(int numero){
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
 	} else {
 		cout << "es primo" << endl;
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
	    } 
	    //cout<<esPrimo(caracterConvertido)<<endl;
	system("pause");
	return 0;
}