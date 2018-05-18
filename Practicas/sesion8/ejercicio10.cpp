/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 10 sesion 8
	Descripción del programa: Calcular poblacion usando funciones

*/

#include<iostream>

using namespace std;

bool LeerIntRango(int natalidad, int mortalidad, int migracion){

	bool rango_natalidad, rango_mortalidad, rango_emigracion;

	rango_natalidad = (natalidad >= 0 && natalidad <= 1000);
	rango_mortalidad = (mortalidad >= 0 && mortalidad <= 1000);
	rango_emigracion = (migracion >= 0 && migracion <= 1000);

	while(rango_mortalidad && rango_emigracion && rango_natalidad){
		return true;
	}
}

bool LeerIntMayorIgualQue(int anios){

	while(anios > 0){
		return true;
	}
}

double PoblacionDespuesDosAnios(int natalidad, int mortalidad, int migracion, int numero_anios, double poblacion_total){

	int anios_transcurridos;

	do
	{
		poblacion_total = poblacion_total + (poblacion_total * natalidad) / 1000 - (poblacion_total * mortalidad) / 1000 - (poblacion_total * migracion) / 1000;
		anios_transcurridos++;	
	} 
	while (anios_transcurridos < numero_anios);	

	return poblacion_total;

}

double AniosPoblacionDuplicada(int natalidad, int mortalidad, int migracion, double poblacion_total, double poblacion_inicial){

	int anios_transcurridos;
	anios_transcurridos = 1;


	do
	{
		poblacion_total = poblacion_total + (poblacion_total * natalidad) / 1000 - (poblacion_total * mortalidad) / 1000 - (poblacion_total * migracion) / 1000;
		anios_transcurridos++;
	}
	while(poblacion_total < (poblacion_inicial * 2));

	return anios_transcurridos;

}

int main()
{

	int natalidad, mortalidad, migracion, anios_transcurridos, numero_anios;
	
	double poblacion_inicial, poblacion_total;
	

	do{
		cout << "Introduce la poblacion inicial" << endl;
		cin >> poblacion_inicial;
	}while (poblacion_inicial <= 0);

	do{
		cout << "Las tasas deben estar comprendidas entre 0 y 1000" << endl;
		
		cout << "Introduce la tasa de natalidad" << endl;
		cin >> natalidad;

		cout << "Introduce la tasa de mortalidad" << endl;
		cin >> mortalidad;

		cout << "Introduce la tasa de migracion" << endl;
		cin >> migracion;

	}while (!LeerIntRango(natalidad, mortalidad, migracion));

	do{
		cout << "Introduzca el numero de anios" << endl;
		cin >> numero_anios;

	}while(!LeerIntMayorIgualQue(numero_anios));
	

	poblacion_total = poblacion_inicial;

	

	cout << "El numero de habitantes transcurridos " << numero_anios << " anios es de " << PoblacionDespuesDosAnios(natalidad, mortalidad, migracion, numero_anios, poblacion_total) << " habitantes" << endl;


	cout << "Para duplicar la poblacion deben transcurrir " << AniosPoblacionDuplicada(natalidad, mortalidad, migracion, poblacion_total, poblacion_inicial) << " anios " << endl;

}