/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 3 sesion 7
	Descripción del programa: Factorial y potencia usando funciones

*/

#include<iostream>

using namespace std;

int Max(int entero1, int entero2){
	int max;

	if(entero1 >= entero2){

		max = entero1;
	}

	else{
		max = entero2;
	}

	return max;
}

int Max3(int entero1, int entero2, int entero3){

	int max, max_funcion;

	max_funcion = Max(entero1,entero2);

	if(max_funcion >= entero3){

		max = max_funcion;

	}
	else{

		max = entero3;
	}

	return max;
}

int main(){

	int entero1, entero2, entero3, resultado;
 
	cout << "Introduzca el primer entero" << endl;
	cin >> entero1;

	cout << "Introduzca el segundo entero" << endl;
	cin >> entero2;

	cout << "Introduzca el tercer entero" << endl;
	cin >> entero3;

	resultado = Max3(entero1, entero2, entero3);

	cout << "El numero mas grande es: " << resultado << endl;
}