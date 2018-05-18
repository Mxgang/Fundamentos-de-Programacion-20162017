/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 46 sesion 7
	Descripción del programa: Calcular Gaussiana usando un menu
*/

#include<iostream>
#include<cmath>

using namespace std;

int main()
{

	double esperanza, desviacion, minimo, maximo, incremento, resultado_cociente, resultado_exponente, resultado_total, nuevo_minimo;
	double entero = 0.0;
	char opcion1, opcion2;
	const double numero_pi = 3.1416;

	cout << "Introducir los parametros de la funcion (esperanza y desviacion) (Tecla 'P')" << endl;
	cout << "Salir del programa (Tecla 'S')" << endl;
	cin >> opcion1;

	while(opcion1 == 'P'){
		cout << "Introduce el valor de la esperanza" << endl;
		cin >> esperanza;

		do
		{
			cout << "Introduce el valor de la desviacion, debe ser mayor que 0" << endl;
			cin >> desviacion;

		}
		while(desviacion <= 0);

		cout << "Introducir valores de abcisas (Tecla 'R')" << endl;
		cout << "Volver al menu principal (Tecla 'V')" << endl;
		cin >> opcion2;
		
		while(opcion2 == 'R'){
			do
			{
				cout << "Introduzca el valor minimo" << endl;
				cin >> minimo;

				cout << "Introduzca el valor maximo" << endl;
				cin >> maximo;


			}
			while (maximo < minimo);

				cout << "Introduzca el incremento" << endl;
				cin >> incremento;

			do
			{

				resultado_cociente = 1 / (desviacion * sqrt(2 * numero_pi));
				resultado_exponente= exp(-0.5 * pow(((minimo + entero * incremento) - esperanza) / desviacion,2));
				resultado_total = resultado_cociente * resultado_exponente;
				cout << "El resultado es: " << resultado_total << endl;
				
				nuevo_minimo = minimo + (entero * incremento);
				entero++;



			}while(maximo > nuevo_minimo);
			cout << "Introducir valores de abcisas (Tecla 'R')" << endl;
			cout << "Volver al menu principal (Tecla 'V')" << endl;
			cin >> opcion2;

		}
		cout << "Introducir los parametros de la funcion (esperanza y desviacion) (Tecla 'P')" << endl;
		cout << "Salir del programa (Tecla 'S')" << endl;
		cin >> opcion1;
	}

}