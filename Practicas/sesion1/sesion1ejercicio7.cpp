/*
	
	Programa trilero que intercambia dos componentes
	
*/

#include<iostream>

using namespace std;

int main()
{
	
	string caja_dcha, caja_izda, aux;

	cout << "Introduce el nombre de la caja derecha" << endl;
	cin >> caja_dcha;

	cout << "Introduce el nombre de la caja izquierda" << endl;
	cin >> caja_izda;

	aux = caja_izda;
	caja_izda = caja_dcha;
	caja_dcha = aux;

	cout << "El nombre de la caja derecha es " << caja_dcha << endl;
	cout << "El nombre de la caja izquierda es " << caja_izda << endl;
}