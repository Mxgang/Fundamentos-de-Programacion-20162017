/*
	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 3 sesion 1
	Descripción del programa: Subir el salario

*/

#include<iostream>

using namespace std;

int main()
{
	int salario;

	cout << "Introduce el salario" << endl;
	cin >> salario;

	salario = salario * 1.02;

	cout << "El salario con el porcentaje aumentado es " << salario << endl;
}