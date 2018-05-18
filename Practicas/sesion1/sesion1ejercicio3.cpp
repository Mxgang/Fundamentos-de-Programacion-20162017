/*
	Nombre: Javier Martín Gómez
	Grupo: A2
	Descripción del programa: Calcular el area y circunferencia de un circulo

*/


#include<iostream>

using namespace std;

int main()
{

	int radio, area, circunferencia;
	const int numero_pi = 3.1416;

	cout << "Introduce el radio del circulo" << endl;
	cin >> radio;

	area = numero_pi*radio*radio;
	circunferencia = 2*numero_pi*radio;

	cout << "El valor del area del circulo es: " << area << endl;
	cout << "EL valor de la circunferencia del circulo es: " << circunferencia << endl;
}