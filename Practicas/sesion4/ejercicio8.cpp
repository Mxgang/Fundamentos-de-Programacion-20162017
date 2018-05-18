/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 8 sesion 4
	Descripción del programa: Programa que dice si un año es bisiesto o no con estructuras de control

*/

#include<iostream>

using namespace std;

int main()
{
	int anio;
 
	cout << "Introduce un anio" << endl;
	cin >> anio;

	if (((anio % 4 == 0) && (anio % 100 !=0)) || (anio % 400 == 0))
	{ 
		cout << "El anio " << anio << " es bisiesto" << endl;
	}
	else
	{
		cout << "El anio " << anio << " no es bisiesto" << endl;
	}
}