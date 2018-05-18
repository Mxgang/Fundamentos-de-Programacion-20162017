/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 27 sesion 3
	Descripción del programa: Trabajar con expresiones booleanas

*/

#include<iostream>

using namespace std;

int main()
{
	bool resultado_caracter, resultado_edad, resultado_adivine, resultado_anio;
	char letra;
	int edad, adivine, anio;

	cout << "El resultado puede ser 1(TRUE) o 0(FALSE)" << endl;

	//Apartado caracter

	cout << "Introduzca un caracter" << endl;
	cin >> letra;

	resultado_caracter = (letra >= 'a') && (letra <= 'z');

	cout << "El resultado es: " << resultado_caracter << endl;

	//Apartado edad

	cout << "Introduzca una edad" << endl;
	cin >> edad;

	resultado_edad = (edad < 18) || (edad > 65);

	cout << "El resultado es: " << resultado_edad << endl;

	//Apartado adivine numero

	cout << "Introduzca un numero" << endl;
	cin >> adivine;

	resultado_adivine = (adivine >= 1) || (adivine <= 100);

	cout << "El resultado es: " << resultado_adivine << endl;

	//Apartado anio bisiesto

	cout << "Introduzca un anio" << endl;
	cin >> anio;

	resultado_anio = ((anio % 4 == 0) && (anio % 100 !=0)) || (anio % 400 == 0);
	
	cout << "El resultado es: " << resultado_anio << endl;


}