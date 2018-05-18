/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 5 sesion 4
	Descripción del programa: Programa que aplica subida salarial con una estructura de control

*/

#include<iostream>

using namespace std;

int main()
{

	double salario_empleado, grado_satisfaccion, salario_final;
	int horas_trabajadas, casos_resueltos;
	const int subida_casos_resueltos = 1.04;

	cout << "Introduzca el salario del empleado cada hora" << endl;
	cin >> salario_empleado;

	cout << "Introduzca las horas trabajadas en este mes" << endl;
	cin >> horas_trabajadas;

	cout << "Introduzca los casos resueltos" << endl;
	cin >> casos_resueltos;

	cout << "Introduzca el grado de satisfaccion" << endl;
	cin >> grado_satisfaccion;

	if (casos_resueltos > 30)
	{
		salario_final = salario_empleado * horas_trabajadas * subida_casos_resueltos;
		cout << "El salario actual del empleado con el porcentaje subido es: " << " euros" << salario_final << endl;
	}
	else
	{
		salario_final = salario_empleado * horas_trabajadas;
		cout << "El salario actual del empleado es: " << salario_final << " euros" << endl;
	}


}