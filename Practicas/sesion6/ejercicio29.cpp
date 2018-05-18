/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 29 sesion 6
	Descripción del programa: Determinar longitud de sencuencia de dias con temperaturas crecientes

*/

#include<iostream>

using namespace std;

int main(){

	double temperatura, temperatura_comparativa;
	int subsecuencia = 0;
	int contador_longitud = 0;
	int contador = 0;
	double temperatura_anterior = 0;
	int subsecuencia_mas_larga = 0;
	int longitud_auxiliar = 0;
	int subsecuencia_final, longitud_final;

	cout << "Introduce la temperatura" << endl;
	cin >> temperatura;

	while(temperatura != -1){

		contador++;

		temperatura_comparativa = temperatura;

		if(temperatura_comparativa >= temperatura_anterior){

			if(subsecuencia <= 0){

				subsecuencia = contador;

			}

			contador_longitud++;

		}

		else{

			if((contador_longitud > longitud_auxiliar) && (subsecuencia > subsecuencia_mas_larga)){

				longitud_auxiliar = contador_longitud;
				subsecuencia_mas_larga = subsecuencia - 1;

			}

			contador_longitud = 1;
			subsecuencia = 0;
		}

		temperatura_anterior = temperatura;

		cout << "Introduce la temperatura" << endl;
		cin >> temperatura;

	}

	if(contador_longitud > longitud_auxiliar){
		longitud_final = contador_longitud;
	}

	else{
		longitud_final = longitud_auxiliar;
	}

	if(subsecuencia > subsecuencia_mas_larga){
		subsecuencia_final = subsecuencia;

	}
	
	else{
		subsecuencia_final = subsecuencia_mas_larga;
	}

	cout << "La mayor subsecuencia empieza en la posicion " << subsecuencia_final << " y tiene una longitud de " << longitud_final << endl;
}