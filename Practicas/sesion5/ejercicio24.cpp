/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 24 sesion 5
	Descripción del programa: Ver poblacion total con tasas de natalidad, mortalidad y emigracion usando bucles

*/

#include<iostream>

using namespace std;

int main()
{
	int min, max, entero, intentos_permitidos, resultado_resta, resultado_segunda_resta;
	intentos_permitidos = 0;

	do 
	{	
		cout << "Introduzca el valor minimo, debe ser mayor que 0" << endl;
		cin >> min;
	
		cout << "Introduzca el valor maximo, debe ser mayor que el numero minimo" << endl;
		cin >> max;

	}
	while((min <= 0) || (max < min));

	do
	{
		cout << "Introduzca el valor del nuevo entero, debe estar comprendido entre el minimo y maximo" << endl;
		cin >> entero;

		if(entero < min || entero > max)
		{
			intentos_permitidos++;
		}


	}
	while((entero < min || entero > max) && (intentos_permitidos < 3));

	if(intentos_permitidos == 3)
	{
		cout << "Numero de intentos sobrepasado" << endl;
	}
	else
	{
		resultado_resta = entero - min;
		resultado_segunda_resta = max - entero;
		cout << "El resultado de las operaciones es " << resultado_resta << ", " << resultado_segunda_resta << endl;
	}
}