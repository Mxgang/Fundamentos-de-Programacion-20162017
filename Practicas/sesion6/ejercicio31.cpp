/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 31 sesion 6
	Descripción del programa: 

*/


#include<iostream>

using namespace std;

int main(){


	int multiplicando, multiplicador, suma_total;

	cout << "Introduce el multiplicando" << endl;
	cin >> multiplicando;

	cout << "Introduce el multiplicador" << endl;
	cin >> multiplicador;

	while(multiplicando >= 1){

		if(multiplicando % 2 != 0){

			suma_total = suma_total + multiplicador;
		}

		multiplicando = multiplicando / 2;

		multiplicador = multiplicador + multiplicador;


	}

	cout << "El resultado de la multiplicacion rusa es de " << suma_total << endl;
}