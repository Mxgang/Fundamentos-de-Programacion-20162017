/*

	Programa que calcula un total dado un capital y un interes

*/

#include<iostream>

using namespace std;

int main()
{
	double total, capital, interes;

	cout << "Introduce el capital" << endl;
	cin >> capital;

	cout << "Introduce el interes" << endl;
	cin >> interes;

	total = capital + (capital*interes/100);

	cout << "El resultado total es: " << total << endl;

}