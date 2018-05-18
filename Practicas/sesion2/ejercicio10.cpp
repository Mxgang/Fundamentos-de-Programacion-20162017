/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 10 sesion 2
	Descripción del programa: Realizar la funcion gaussiana

*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	double esperanza, desviacion, abcisa_x, resultado_cociente, resultado_exponente, resultado_total;
	const double numero_pi = 3.1416;

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