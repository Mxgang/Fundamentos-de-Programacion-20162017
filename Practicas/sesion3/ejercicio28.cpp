/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 28 sesion 3
	Descripción del programa: Comprobaciones de precision y desbordamiento

*/

#include<iostream>

using namespace std;

int main()
{
	cout.precision(8);
	
	//Apartado a)

	int chico, chico1, chico2;

	chico1 = 1234567;
	chico2 = 1234567;

	chico = chico1 * chico2; //Problema de desbordamiento

	cout << "Resultado del apartado a): " << chico << endl;

	//Apartado b)

	long grande;

	chico1 = 1234567;
	chico2 = 1234567;

	grande = chico1 * chico2; //Problema de desbordamiento

	cout << "Resultado del apartado b): " << grande << endl;

	//Apartado c)

	double real, real1, real2;

	real1 = 123.1;
	real2 = 124.2;

	real = real1 * real2; //Problema de precision

	cout << "Resultado del apartado c): " << real << endl;

	//Apartado d)

	real1 = 123456789.1;
	real2 = 123456789.2;

	real = real1 * real2; //Problema de precision

	cout << "Resultado del apartado d): " << real << endl;

	//Apartado e)

	double otro_real;

	real = 2e34;

	otro_real = real + 1;
	otro_real = otro_real - real; //Problema de precision

	cout << "Resultado del apartado e): " << otro_real << endl;

	//Apartado f)

	real = 1e+300;
	otro_real = 1e+200;

	otro_real = otro_real * real; //Problema de desbordamiento

	cout << "Resultado del apartado f): " << otro_real << endl;

	//Apartado g)

	float chico_g;
	double grande_g;

	grande_g = 2e+150;
	chico_g = grande_g; //Problema de desbordamiento

	cout << "Resultado del apartado g): " << chico_g << endl;
}