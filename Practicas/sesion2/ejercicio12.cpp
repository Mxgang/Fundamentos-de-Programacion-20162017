/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 12 sesion 2
	Descripción del programa: Ver poblacion total con tasas de natalidad, mortalidad y emigracion

*/

#include<iostream>

using namespace std;

int main()
{

	int natalidad, mortalidad, migracion;
	double poblacion_inicial, anio1, anio2, anio3;

	cout << "Introduce la poblacion inicial" << endl;
	cin >> poblacion_inicial;

	cout << "Introduce la tasa de natalidad" << endl;
	cin >> natalidad;

	cout << "Introduce la tasa de mortalidad" << endl;
	cin >> mortalidad;

	cout << "Introduce la tasa de migracion" << endl;
	cin >> migracion;

	anio1 = poblacion_inicial + (poblacion_inicial * natalidad) / 1000 - (poblacion_inicial * mortalidad) / 1000 - (poblacion_inicial * migracion) / 1000;

	anio2 = anio1 + (anio1 * natalidad) / 1000 - (anio1 * mortalidad) / 1000 - (anio1 * migracion) / 1000;

	anio3 = anio2 + (anio2 * natalidad) / 1000 - (anio2 * mortalidad) / 1000 - (anio2 * migracion) / 1000;

	cout << "La poblacion resultante tras tres anios es de " << anio3 << " habitantes" << endl;

}