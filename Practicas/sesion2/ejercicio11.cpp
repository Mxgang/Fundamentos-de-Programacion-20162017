/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 11 sesion 2
	Descripción del programa: Reescribir ejercicios utilizando constantes

*/

//Ejercicio 3

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	cout << "-----------------Ejercicio 3-------------------" << endl;

	double radio, area, circunferencia;
	const double numero_pi = 3.1416;

	cout << "Introduce el radio del circulo" << endl;
	cin >> radio;

	area = numero_pi*radio*radio;
	circunferencia = 2*numero_pi*radio;

	cout << "El valor del area del circulo es: " << area << endl;
	cout << "EL valor de la circunferencia del circulo es: " << circunferencia << endl;


//Ejercicio 6

	cout << "-----------------Ejercicio 6-------------------" << endl;

	int segundos_ini, segundos_final;
	int minutos_ini, minutos_final;
	int horas_ini, horas_final;
	int resultado;

	const int segundos = 60;
	const int minutos = 60;

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

	resultado = (horas_final - horas_ini) * minutos * segundos + (minutos_final - minutos_ini) * segundos + (segundos_final - segundos_ini);

	cout << "El tiempo total son: " << resultado << " segundos" << endl;



//Ejercicio 9

	cout << "-----------------Ejercicio 9-------------------" << endl;

	double salario_base, salario_final;
	const double primer_interes = 1.02;
	const double segundo_interes = 1.03;

	cout << "Introduce el salario base" << endl;
	cin >> salario_base;

	salario_final = salario_base * primer_interes;

	cout << "El salario con el porcentaje aumentado es " << salario_final << endl;

	salario_final = salario_final * segundo_interes;

	cout << "El salario con el porcentaje aumentado de nuevo es " << salario_final << endl;



//Ejercicio 10

	cout << "-----------------Ejercicio 10-------------------" << endl;

	double esperanza, desviacion, abcisa_x, resultado_cociente, resultado_exponente, resultado_total;

	// const double numero_pi = 3.1416; Inicializado en Ejercicio 3
	

	cout << "Introduce el valor de la esperanza" << endl;
	cin >> esperanza;

	cout << "Introduce el valor de la desviacion" << endl;
	cin >> desviacion;

	cout << "Introduce el valor de la abcisa X" << endl;
	cin >> abcisa_x;

	// He dividido la ecuacion en dos partes para que resultase mas facil ver el contenido de la ecuacion (y evitar errores)
	
	resultado_cociente = 1 / (desviacion * sqrt(2 * numero_pi));
	resultado_exponente= exp(-0.5 * pow((abcisa_x - esperanza) / desviacion,2));
	resultado_total = resultado_cociente * resultado_exponente;

	cout << "El resultado es: " << resultado_total << endl;









}

