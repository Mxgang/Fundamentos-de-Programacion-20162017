/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 23 sesion 3
	Descripción del programa: Dado un numero de horas, minutos y segundos,
	calcular los dias, horas, minutos y segundos en formato real

*/

#include<iostream>

using namespace std;

int main()
{

	int horas, minutos, segundos, dias, hora_final, minuto_final, segundo_final, segundos_totales;

	cout << "Introduzca el numero de horas" << endl;
	cin >> horas;
	cout << "Introduzca el numero de minutos" << endl;
	cin >> minutos;
	cout << "Introduzca el numero de segundos" << endl;
	cin >> segundos;

	segundos_totales = horas * 3600 + minutos * 60 + segundos;

	dias = segundos_totales / (3600 * 24);
	segundos_totales = segundos_totales % (3600 * 24);

	hora_final = segundos_totales / 3600;
	segundos_totales = segundos_totales % 3600;

	minuto_final = segundos_totales / 60;
	segundos_totales = segundos_totales % 60;

	cout << "El resultado es: " << dias << " dias " << hora_final << " horas " << minuto_final << " minutos " << segundos_totales << " segundos" << endl;



}