/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 11 sesion 8
	Descripción del programa: Calcular salario usando funciones

*/

#include<iostream>

using namespace std;

const double subida_casos_resueltos = 1.04;
const double subida_casos_resueltos_20_30 = 1.03;
const double subida_grado_satisfaccion = 1.02;

double SalarioFinal(double segundos, int casos_resueltos, double salario_empleado, double grado_satisfaccion){

	double salario_primera_subida, diferencia_salario_segunda_subida, salario_final, horas_trabajadas;
	horas_trabajadas = segundos / 3600;

	if (casos_resueltos > 30){
		if (grado_satisfaccion >= 4.0)
		{
			salario_primera_subida = salario_empleado * horas_trabajadas * subida_casos_resueltos;
			diferencia_salario_segunda_subida = (salario_empleado * horas_trabajadas * subida_grado_satisfaccion) - (salario_empleado * horas_trabajadas);
			salario_final = salario_primera_subida + diferencia_salario_segunda_subida;

		}

		else
		{
			salario_final = salario_empleado * horas_trabajadas * subida_casos_resueltos;
		}
	}

	else if(casos_resueltos >= 20 && casos_resueltos <= 30)
	{
		if (grado_satisfaccion >= 4.0)
		{
			salario_primera_subida = salario_empleado * horas_trabajadas * subida_casos_resueltos_20_30;
			diferencia_salario_segunda_subida = (salario_empleado * horas_trabajadas * subida_grado_satisfaccion) - (salario_empleado * horas_trabajadas);
			salario_final = salario_primera_subida + diferencia_salario_segunda_subida;

		}

		else
		{
			salario_final = salario_empleado * horas_trabajadas * subida_casos_resueltos_20_30;
		}

	}

	else
	{
		if (grado_satisfaccion >= 4.0)
		{
			salario_final = salario_empleado * horas_trabajadas * subida_grado_satisfaccion;
		}

		else
		{
			salario_final = salario_empleado * horas_trabajadas;
		}
	}

	return salario_final;
}



int main()
{
	double salario_empleado, grado_satisfaccion, segundos_totales_1, segundos_totales_2, segundos_totales_3, segundos;
	int horas_trabajadas, casos_resueltos_1, casos_resueltos_2, casos_resueltos_3, codigo_empleado;
	int resultado;

	cout << "Introduzca el salario del empleado cada hora" << endl;
	cin >> salario_empleado;

	cout << "Introduzca el código del empleado" << endl;
	cin >> codigo_empleado;

	while (codigo_empleado != -1){

		cout << "Introduzca la duracion en segundos de la llamada" << endl;
		cin >> segundos;

		cout << "¿Fue resuelto el caso? Escriba 1(Resuelto) 0(No resuelto)" << endl;
		cin >> resultado;

		cout << "Introduzca el grado de satisfaccion" << endl;
		cin >> grado_satisfaccion;

		if(codigo_empleado == 1){

			if(resultado == 1){
				casos_resueltos_1++;
			}
			segundos_totales_1 = segundos_totales_1 + segundos;
		}

		else if(codigo_empleado == 2){

			if(resultado == 1){
				casos_resueltos_2++;
			}
			segundos_totales_2 = segundos_totales_2 + segundos;
		}

		else{

			if(resultado == 1){
				casos_resueltos_3++;
			}
			segundos_totales_3 = segundos_totales_3 + segundos;
		}


		cout << "Introduzca el código del empleado" << endl;
		cin >> codigo_empleado;

	}

	cout << "El salario final del empleado 1 es de " << SalarioFinal(segundos_totales_1, casos_resueltos_1, salario_empleado, grado_satisfaccion) << " euros" << endl;
	cout << "El salario final del empleado 2 es de " << SalarioFinal(segundos_totales_2, casos_resueltos_2, salario_empleado, grado_satisfaccion) << " euros" << endl;
	cout << "El salario final del empleado 3 es de " << SalarioFinal(segundos_totales_3, casos_resueltos_3, salario_empleado, grado_satisfaccion) << " euros" << endl;

}
