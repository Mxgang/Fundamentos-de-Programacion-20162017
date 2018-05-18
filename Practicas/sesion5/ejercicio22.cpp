/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 22 sesion 5
	Descripción del programa: Realizar la funcion gaussiana con condicional while

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	double esperanza, desviacion, minimo, maximo, incremento, resultado_cociente, resultado_exponente, resultado_total, nuevo_minimo;
	double entero = 0.0;
	const double numero_pi = 3.1416;

	cout << "Introduce el valor de la esperanza" << endl;
	cin >> esperanza;

	do
	{
		cout << "Introduce el valor de la desviacion, debe ser mayor que 0" << endl;
		cin >> desviacion;

	}
	while(desviacion <= 0);
	
	do
	{
		cout << "Introduzca el valor minimo" << endl;
		cin >> minimo;

		cout << "Introduzca el valor maximo" << endl;
		cin >> maximo;


	}
	while (maximo < minimo);

		cout << "Introduzca el incremento" << endl;
		cin >> incremento;

	do
	{

		resultado_cociente = 1 / (desviacion * sqrt(2 * numero_pi));
		resultado_exponente= exp(-0.5 * pow(((minimo + entero * incremento) - esperanza) / desviacion,2));
		resultado_total = resultado_cociente * resultado_exponente;
		cout << "El resultado es: " << resultado_total << endl;
		
		nuevo_minimo = minimo + (entero * incremento);
		entero++;



	}while(maximo > nuevo_minimo);

}