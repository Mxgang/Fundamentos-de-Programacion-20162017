/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 46 sesion 7
	Descripción del programa: Calcular sumatoria de factorial usando un unico bucle
*/

#include<iostream>

using namespace std;

int main(){

	int valor, contador;
	double resultado_multiplicacion = 1;
	double resultado_total;
	cout << "Introduce un valor" << endl;
	cin >> valor;

	contador = valor;

	while(contador >= 1){


		for(int i = contador; i > 1; i--){
			
			resultado_multiplicacion = resultado_multiplicacion * i;

		}

		resultado_total = resultado_total + resultado_multiplicacion;
		contador--;
		resultado_multiplicacion = 1;
	}
	cout << "El resultado es: " << resultado_total << endl;

}
