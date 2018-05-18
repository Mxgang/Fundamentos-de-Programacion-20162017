/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 13 sesion 2
	Descripción del programa: lee un entero y lo separa en sus digitos

*/

#include<iostream>

using namespace std;

int main()
{
	int valor;
	float digito1, digito2, digito3;

	cout << "Introduce el valor numerico a separar" << endl;
	cin >> valor;

	digito1 = valor / 100;

	digito2 = (valor % 100) / 10;

	digito3 = valor % 10;

	cout << "Los digitos son: " << digito1 << ", " << digito2 << " y " << digito3 << endl;


}
