/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 12 sesion 8
	Descripción del programa: Calcular salario usando funciones

*/

#include<iostream>

using namespace std;

double SalarioFinal(double segundos, int casos_resueltos, double salario_empleado, double grado_satisfaccion, double grado_satisfaccion_incremento, double incremento_grado_satisfaccion, double limite_1, double limite_2, double incremento_limite, double incremento_max_casos_resueltos){

	double salario_primera_subida, diferencia_salario_segunda_subida, salario_final, horas_trabajadas;
	horas_trabajadas = segundos / 3600;

	if (casos_resueltos > 30){
		if (grado_satisfaccion >= grado_satisfaccion_incremento)
		{
			salario_primera_subida = salario_empleado * horas_trabajadas * incremento_max_casos_resueltos/100;
			diferencia_salario_segunda_subida = (salario_empleado * horas_trabajadas * incremento_grado_satisfaccion/100) - (salario_empleado * horas_trabajadas);
			salario_final = salario_primera_subida + diferencia_salario_segunda_subida;

		}

		else
		{
			salario_final = salario_empleado * horas_trabajadas * incremento_max_casos_resueltos/100;
		}
	}

	else if(casos_resueltos >= limite_1 && casos_resueltos <= limite_2)
	{
		if (grado_satisfaccion >= grado_satisfaccion_incremento)
		{
			salario_primera_subida = salario_empleado * horas_trabajadas * incremento_limite/100;
			diferencia_salario_segunda_subida = (salario_empleado * horas_trabajadas * incremento_grado_satisfaccion/100) - (salario_empleado * horas_trabajadas);
			salario_final = salario_primera_subida + diferencia_salario_segunda_subida;

		}

		else
		{
			salario_final = salario_empleado * horas_trabajadas * incremento_limite/100;
		}

	}

	else
	{
		if (grado_satisfaccion >= grado_satisfaccion_incremento)
		{
			salario_final = salario_empleado * horas_trabajadas * incremento_grado_satisfaccion/100;
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
	double grado_satisfaccion_incremento, incremento_grado_satisfaccion, limite_1, limite_2, incremento_limite, incremento_max_casos_resueltos;

	cout << "Introduzca el salario del empleado cada hora" << endl;
	cin >> salario_empleado;

	cout << "Introduzca el código del empleado" << endl;
	cin >> codigo_empleado;

	cout << "Introduzca el valor del grado de satisfaccion para hacer el incremento" << endl;
	cin >> grado_satisfaccion_incremento;

	cout << "Introduzca el incremento salarial del grado de satisfaccion" << endl;
	cin >> incremento_grado_satisfaccion;

	cout << "Introduzca el primer limite de casos resueltos" << endl;
	cin >> limite_1;

	cout << "Introduzca el segundo limite de casos resueltos" << endl;
	cin >> limite_2;

	cout << "Introduzca la subida salarial del limite de casos resueltos" << endl;
	cin >> incremento_limite;

	cout << "Introduzca el incremento salarial cuando los casos resueltos sea mayor a 30" << endl;
	cin >> incremento_max_casos_resueltos;

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

	cout << "El salario final del empleado 1 es de " << SalarioFinal(segundos_totales_1, casos_resueltos_1, salario_empleado, grado_satisfaccion, grado_satisfaccion_incremento, incremento_grado_satisfaccion, limite_1, limite_2, incremento_limite, incremento_max_casos_resueltos
) << " euros" << endl;
	cout << "El salario final del empleado 2 es de " << SalarioFinal(segundos_totales_2, casos_resueltos_2, salario_empleado, grado_satisfaccion, grado_satisfaccion_incremento, incremento_grado_satisfaccion, limite_1, limite_2, incremento_limite, incremento_max_casos_resueltos
) << " euros" << endl;
	cout << "El salario final del empleado 3 es de " << SalarioFinal(segundos_totales_3, casos_resueltos_3, salario_empleado, grado_satisfaccion, grado_satisfaccion_incremento, incremento_grado_satisfaccion, limite_1, limite_2, incremento_limite, incremento_max_casos_resueltos
) << " euros" << endl;

}
