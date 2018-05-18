/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 9 sesion 2
	Descripción del programa: Recuperar ejercicio4 y subir el salario de nuevo

*/

#include<iostream>

using namespace std;

int main()
{
	double salario_base, salario_final;

	cout << "Introduce el salario" << endl;
	cin >> salario_base;

	salario_final = salario_base * 1.02;

	cout << "El salario con el porcentaje aumentado es " << salario_final << endl;

	salario_final = salario_final * 1.03;

	cout << "El salario con el porcentaje aumentado de nuevo es " << salario_final << endl;

}