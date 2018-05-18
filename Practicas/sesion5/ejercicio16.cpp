/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 16 sesion 5
	Descripción del programa: Programa que dice si algunos numeros enteros estan ordenados o no con eenumerados

*/

#include<iostream>

using namespace std;

enum class Ordenados{ordenado, no_ordenado};

int main()
{

	Ordenados numeros_ordenados;

	int primer_entero, segundo_entero, tercer_entero;

	cout << "Introduce el valor del primer entero" << endl;
	cin >> primer_entero;

	cout << "Introduce el valor del segundo entero" << endl;
	cin >> segundo_entero;

	cout << "Introduce el valor del tercer entero" << endl;
	cin >> tercer_entero;

	if (((primer_entero <= segundo_entero) && (segundo_entero <= tercer_entero)) || 
		((primer_entero >= segundo_entero) && (segundo_entero >= tercer_entero)))
	{
		numeros_ordenados = Ordenados::ordenado;
	}
	else
	{
		numeros_ordenados = Ordenados::no_ordenado;
	}

	switch (numeros_ordenados)
	{
		case Ordenados::ordenado:
			cout << "La sucesion de numeros " << primer_entero << "," << segundo_entero << "," << tercer_entero << " estan ordenados" << endl;
			break;
		case Ordenados::no_ordenado:
			cout << "La sucesion de numeros " << primer_entero << "," << segundo_entero << "," << tercer_entero << " no estan ordenados" << endl;
			break;
	}

}