/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 7 sesion 4
	Descripción del programa: Programa que dice si algunos numeros enteros estan ordenados o no con estructuras de control

*/

#include<iostream>

using namespace std;

int main()
{
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
		cout << "La sucesion de numeros " << primer_entero << "," << segundo_entero << "," << tercer_entero << " estan ordenados" << endl;
	}
	else
	{
		cout << "La sucesion de numeros " << primer_entero << "," << segundo_entero << "," << tercer_entero << " no estan ordenados" << endl;
	}

}