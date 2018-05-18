/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 8 sesion 8
	Descripción del programa: Calcular gaussiana e integral usando funciones

*/

#include<iostream>
#include<cmath>

using namespace std;

const double numero_pi = 3.1416;
const double b0 = 0.2316419; 
const double b1 = 0.319381530; 
const double b2 = -0.356563782;
const double b3 = 1.781477937; 
const double b4 = -1.821255978; 
const double b5 = 1.330274429;

double Potencia(double base1, int potencia1){
	
	double resultado;
	resultado = base1;

	if(potencia1 == 0){

		resultado = 1;
	}

	else {

		while(potencia1 != 1){

			resultado = resultado * base1;
			potencia1 = potencia1 - 1;
		}
	}

	return resultado;
}

double Gaussiana(double desviacion, double minimo, double maximo, double incremento, double esperanza, double entero){

	double resultado_cociente, resultado_exponente, resultado_total;

	resultado_cociente = 1 / (desviacion * sqrt(2 * numero_pi));
	resultado_exponente= exp(-0.5 * pow(((minimo + entero * incremento) - esperanza) / desviacion,2));
	resultado_total = resultado_cociente * resultado_exponente;
	return resultado_total;

}

double CDF(double numero){
	double resultado, t;

	t = 1 / (1 + b0 * numero);

	resultado = 1 - (numero * (b1 * t + b2 * Potencia(t,2) + b3 * Potencia(t,3)+ b4 * Potencia(t,4) + b5 * Potencia(t,5)));
	return resultado;

}

int main()
{

	double esperanza, desviacion, minimo, maximo, incremento, resultado_total, nuevo_minimo, resultado_CDF;
	double entero = 0.0;
	char opcion1, opcion2;
	

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

				resultado_total = Gaussiana(desviacion, minimo, maximo, incremento, esperanza, entero);
				resultado_CDF = CDF(resultado_total);
				cout << "El resultado de la gaussiana es: " << resultado_total << endl;
				cout << "El resultado de la integral CDF es: " << resultado_CDF << endl;
				
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