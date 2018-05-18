/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 24 sesion 3
	Descripción del programa: Intercambiar 3 variables entre si

*/


#include<iostream>

using namespace std;

int main()
{
	int x, y, z, copia_x;

	cout << "Introduzca el valor X" << endl;
	cin >> x;
	cout << "Introduzca el valor Y" << endl;
	cin >> y;
	cout << "Introduzca el valor Z" << endl;
	cin >> z;

	copia_x = x;
	x = z;
	z = y;
	y = copia_x;

	cout << "El valor de X es " << x << ", el valor de Y es " << y << ", el valor de Z es " << z << endl;

}