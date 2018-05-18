/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 23 sesion 5
	Descripción del programa: Ver poblacion total con tasas de natalidad, mortalidad y emigracion usando bucles

*/

#include<iostream>

using namespace std;

int main()
{

	int natalidad, mortalidad, migracion, anios_transcurridos, numero_anios;
	bool rango_natalidad, rango_mortalidad, rango_emigracion;
	double poblacion_inicial, poblacion_total;
	anios_transcurridos = 0;
	rango_natalidad = (natalidad >= 0 && natalidad <= 1000);
	rango_mortalidad = (mortalidad >= 0 && mortalidad <= 1000);
	rango_emigracion = (migracion >= 0 && migracion <= 1000);

	do{
		cout << "Introduce la poblacion inicial" << endl;
		cin >> poblacion_inicial;
	}while (poblacion_inicial <= 0);

	do
	{
		cout << "Las tasas deben estar comprendidas entre 0 y 1000" << endl;
		
		cout << "Introduce la tasa de natalidad" << endl;
		cin >> natalidad;

		cout << "Introduce la tasa de mortalidad" << endl;
		cin >> mortalidad;

		cout << "Introduce la tasa de migracion" << endl;
		cin >> migracion;
	}while (!rango_natalidad || !rango_mortalidad || !rango_emigracion);

	cout << "Introduzca el numero de anios" << endl;
	cin >> numero_anios;

	poblacion_total = poblacion_inicial;

	do
	{
		poblacion_total = poblacion_total + (poblacion_total * natalidad) / 1000 - (poblacion_total * mortalidad) / 1000 - (poblacion_total * migracion) / 1000;
		anios_transcurridos++;	
	} 
	while (anios_transcurridos < numero_anios);	

	cout << "El numero de habitantes transcurridos " << anios_transcurridos << " anios es de " << poblacion_total << " habitantes" << endl;

	poblacion_total = poblacion_inicial + (poblacion_inicial * natalidad) / 1000 - (poblacion_inicial * mortalidad) / 1000 - (poblacion_inicial * migracion) / 1000;
	anios_transcurridos = 1;
	
	do
	{
		poblacion_total = poblacion_total + (poblacion_total * natalidad) / 1000 - (poblacion_total * mortalidad) / 1000 - (poblacion_total * migracion) / 1000;
		anios_transcurridos++;
	}
	while(poblacion_total < (poblacion_inicial * 2));

	cout << "Para duplicar la poblacion deben transcurrir " << anios_transcurridos << " anios " << " y hay en total: " << poblacion_total << " habitantes" << endl;

}