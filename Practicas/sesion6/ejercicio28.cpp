/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 28 sesion 6
	Descripción del programa: Determinar numero de casos y mayor grado de satisfaccion con bucles

*/

#include<iostream>

using namespace std;

int main(){

	double salario_empleado, grado_satisfaccion_1, grado_satisfaccion_2, grado_satisfaccion_3;
	int segundos, grado_satisfaccion;
	string resultado;
	int codigo_empleado;
	int casos_introducidos = 0;
	int contador_1 = 1;
	int contador_2 = 1;
	int contador_3 = 1;


	cout << "Introduzca el salario del empleado cada hora" << endl;
	cin >> salario_empleado;

	cout << "Introduzca el código del empleado" << endl;
	cin >> codigo_empleado;

	while (codigo_empleado != -1){

		cout << "Introduzca la duracion en segundos de la llamada" << endl;
		cin >> segundos;

		cout << "¿Fue resuelto el caso? Escriba (Resuelto) o (No resuelto)" << endl;
		cin >> resultado;

		cout << "Introduzca el grado de satisfaccion" << endl;
		cin >> grado_satisfaccion;

		if(codigo_empleado == 1){

			grado_satisfaccion_1 = grado_satisfaccion + grado_satisfaccion_1;
			contador_1++;

		}

		else if(codigo_empleado == 2){

			grado_satisfaccion_2 = grado_satisfaccion + grado_satisfaccion_2;
			contador_2++;

		}

		else{

			grado_satisfaccion_3 = grado_satisfaccion + grado_satisfaccion_3;
			contador_3++;

		}

		casos_introducidos++;

		cout << "Introduzca el código del empleado" << endl;
		cin >> codigo_empleado;

	}

	grado_satisfaccion_1 = grado_satisfaccion_1 / contador_1;
	grado_satisfaccion_2 = grado_satisfaccion_2 / contador_2;
	grado_satisfaccion_3 = grado_satisfaccion_3 / contador_3;

	cout << "El numero de casos introducidos es de " << casos_introducidos << endl;

	if((grado_satisfaccion_1 > grado_satisfaccion_2) && (grado_satisfaccion_2 > grado_satisfaccion_3)){

		cout << "El empleado 1 tiene el mayor grado de satisfaccion con una media de " << grado_satisfaccion_1 << endl;;

	}

	else if((grado_satisfaccion_2 > grado_satisfaccion_1) && (grado_satisfaccion_1 > grado_satisfaccion_3)){

		cout << "El empleado 2 tiene el mayor grado de satisfaccion con una media de " << grado_satisfaccion_2 << endl;
		
	}

	else if((grado_satisfaccion_3 > grado_satisfaccion_2) && (grado_satisfaccion_2 > grado_satisfaccion_1)){

		cout << "El empleado 3 tiene el mayor grado de satisfaccion con una media de " << grado_satisfaccion_3 << endl;

	}

}