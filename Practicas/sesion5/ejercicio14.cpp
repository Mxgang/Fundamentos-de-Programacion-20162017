/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 14 sesion 5
	Descripción del programa: Programa que dice si un año es bisiesto o no, separando E/S y C

*/
#include<iostream>

using namespace std;

int main()
{
	int anio;
	bool es_bisiesto;
 
	cout << "Introduce un anio" << endl;
	cin >> anio;

	es_bisiesto = (((anio % 4 == 0) && (anio % 100 !=0)) || (anio % 400 == 0));


	if (es_bisiesto)
	{
		cout << "El anio " << anio << " es bisiesto" << endl;
	}
	else
	{
		cout << "El anio " << anio << " no es bisiesto" << endl;
	}

	
}