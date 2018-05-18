/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 49 sesion 7
	Descripción del programa: Numero secuenciable usando bucles

*/

#include<iostream>

using namespace std;

int main(){

	int entero, resultado_suma;

	cout << "Introduzca un entero" << endl;
	cin >> entero;

	for(int i = 1; i <= entero; i++){

		resultado_suma = i;

		for(int j = i + 1; j <= entero; j++){

			resultado_suma = resultado_suma + j;

			if(resultado_suma == entero){

				cout << "Resultado: ";
				for(int k = i; k <= j; k++){
					cout << k << " ";
				}
				cout << endl;
				
			}

		}
		resultado_suma = 0;

	}
	
}

