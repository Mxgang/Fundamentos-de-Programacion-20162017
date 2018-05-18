/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 2 sesion 7
	Descripción del programa: Factorial y potencia usando funciones

*/

#include <iostream>

using namespace std;

double Potencia(int base1, int potencia1){
	/* Calcula el resultado entre la base elevado a una potencia*/
	double resultado;
	resultado = base1;

	if(potencia1 == 0){

		resultado = 1;
	}

	else {

		while(potencia1 !=1){

			resultado = resultado*base1;
			potencia1 = potencia1 - 1;
		}
	}

	return resultado;
}

double Factorial(int numero){
	/*Calcula el factorial de un numero dado*/
	double resultado, total;

	total = 1;

	for(int i=numero; i>0; i--){

		total = total * i;
	}

	return total;
}

int main(){
	int base, fpotencia, factor;
	double total1, total2;


	cout << "Introduce la base" << endl;
	cin >> base;
	cout << "Introduce la potencia" << endl;
	cin >> fpotencia;

	total1 = Potencia(base,fpotencia);
	cout << "El resultado de " << base << " elevado a " << fpotencia << " es "  << total1 << endl;

	cout << "Introduce el factorial" << endl;
	cin >> factor;

	total2 = Factorial(factor);
	cout << "El factorial de " << factor << " es " << total2 << endl;


}