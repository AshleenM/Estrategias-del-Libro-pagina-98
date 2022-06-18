/*Cree un programa que devuelva el promedio de x cantidad
de numeros, el programa debe finalizar cuando el usuario 
ingrese el valor de cero.
*/
#include<iostream>
using namespace std;
int main(){
	int contador = 0;
	float promedio;
	float acumulador = 0;
	float num;
	cout<<"Ingrese un numero: "<<endl;
	cin>> num;
	while(num!=0){
	  acumulador = acumulador + num;
	  contador++;
	} 	
	return 0;
}
