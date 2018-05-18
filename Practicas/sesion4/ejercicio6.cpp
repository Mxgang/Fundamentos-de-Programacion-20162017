/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 6 sesion 4
	Descripción del programa: Programa que aplica subida salarial usando operadores y estructuras de control

*/

#include<iostream>

using namespace std;

int main()
{
	double salario_empleado, grado_satisfaccion, salario_primera_subida, diferencia_salario_segunda_subida, salario_final;
	int horas_trabajadas, casos_resueltos;
	const double subida_casos_resueltos = 1.04;
	const double subida_grado_satisfaccion = 1.02;

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
		if (grado_satisfaccion >= 4.0)
		{
			salario_primera_subida = salario_empleado * horas_trabajadas * subida_casos_resueltos;
			diferencia_salario_segunda_subida = (salario_empleado * horas_trabajadas * subida_grado_satisfaccion) - (salario_empleado * horas_trabajadas);
			salario_final = salario_primera_subida + diferencia_salario_segunda_subida;

			cout << "El salario final con los dos porcentajes aumentados es de: " << salario_final << " euros" << endl;

		}

		else
		{
			salario_final = salario_empleado * horas_trabajadas * subida_casos_resueltos;
			cout << "El salario actual del empleado con el porcentaje subido es: " << salario_final << " euros" << endl;
		}
	}

	else
	{
		if (grado_satisfaccion >= 4.0)
		{
			salario_final = salario_empleado * horas_trabajadas * subida_grado_satisfaccion;
			cout << "El salario actual del empleado con el porcentaje subido es: " << salario_final  << " euros" << endl;
		}

		else
		{
			salario_final = salario_empleado * horas_trabajadas;
			cout << "El salario actual del empleado es: " << salario_final << " euros" << endl;
		}
	}
}