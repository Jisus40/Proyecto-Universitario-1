#include <iostream>
#include <cmath>
using namespace std;

int cantidadDeCaracteres;
char caracterIngresado;

 bool esPrimo (int c){
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
	           
 }; 
 
 

int main() {
	cout << "Ingrese la cantidad de caracteres a desencriptar:" << endl;
	cin >> cantidadDeCaracteres;
	
	for (int i = 1; i <= cantidadDeCaracteres; i++) {
	    cout << "Ingrese el caracter " << i << endl;
	    cin >> caracterIngresado;
	    int caracterConvertido = caracterIngresado;
	    cout << caracterConvertido << endl;
	   cout<<esPrimo(caracterConvertido)<<endl;
	} 
	
	return 0;
}