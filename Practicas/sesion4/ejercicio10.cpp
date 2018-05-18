/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 10 sesion 4
	Descripción del programa: Programa que calcula una tarifa de parking dependiendo de la hora de entrada y de salida, con estructuras de control

*/

#include<iostream>

using namespace std;

int main()
{
	int segundos_ini, segundos_final;
	int minutos_ini, minutos_final;
	int horas_ini, horas_final;
	double resultado, tarifa_total, tarifa_segunda_subida, tarifa_tercera_subida;

	const int segundos = 60;
	const int minutos = 60;
	const double tarifa_hasta_minuto30 = 0.0412;
	const double tarifa_hasta_minuto90 = 0.0370;
	const double tarifa_hasta_minuto660 = 0.0493;
	const double tarifa_unica = 31.55;
	const double tarifa_primera_subida = 30 * tarifa_hasta_minuto30;
	const double tarifa_segunda_subida_constante = 60 * tarifa_hasta_minuto90;

	cout << "Introduce las horas iniciales" << endl;
	cin >> horas_ini;

	cout << "Introduce los minutos iniciales" << endl;
	cin >> minutos_ini;

	cout << "Introduce los segundos iniciales" << endl;
	cin >> segundos_ini;

	cout << "Introduce las horas finales" << endl;
	cin >> horas_final;

	cout << "Introduce los minutos finales" << endl;
	cin >> minutos_final;

	cout << "Introduce los segundos finales" << endl;
	cin >> segundos_final;

	resultado = (horas_final - horas_ini) * minutos + (minutos_final - minutos_ini) + (segundos_final - segundos_ini) / minutos;

	cout << "El tiempo total son: " << resultado << " minutos" << endl;

	if ((resultado > 0 ) && (resultado <= 30))
	{
		tarifa_total = resultado * tarifa_hasta_minuto30;

		cout << "El precio a pagar por " << resultado << " minutos son " << tarifa_total << " euros" << endl;
	}
	else if ((resultado > 30 ) && (resultado <= 90))
	{
		tarifa_segunda_subida = (resultado - 30) * tarifa_hasta_minuto90;
		tarifa_total = tarifa_primera_subida + tarifa_segunda_subida;

		cout << "El precio a pagar por " << resultado << " minutos son " << tarifa_total << " euros" << endl;
	}
	else if ((resultado > 90 ) && (resultado <= 660))
	{
		tarifa_tercera_subida = (resultado - 90) * tarifa_hasta_minuto660;
		tarifa_total = tarifa_primera_subida + tarifa_segunda_subida_constante + tarifa_tercera_subida;

		cout << "El precio a pagar por " << resultado << " minutos son " << tarifa_total << " euros" << endl;
	}
	else if (resultado > 660)
	{
		cout << "El precio a pagar por " << resultado << " minutos son " << tarifa_unica << " euros" << endl;
	}
	else
	{
		cout << "-1" << endl;
		
	}
}