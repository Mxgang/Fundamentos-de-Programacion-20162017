/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 25 sesion 3
	Descripción del programa: Pasar un caracter en mayuscula a minuscula

*/


#include<iostream>

using namespace std;

int main()
{

	char caracter_original, caracter_minuscula;
	const int get_min = ('a' - 'A');

	cout << "Introduzca el caracter (en mayuscula)" << endl;
	cin >> caracter_original;

	caracter_minuscula = caracter_original + get_min;

	cout << "El caracter " << caracter_original << " en minuscula es " << caracter_minuscula << endl;


}