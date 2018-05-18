/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 28 sesion 10
	Descripción del programa: Ejercicio Poblacion con una clase

*/

#include<iostream>

using namespace std;

class Poblacion{

	private:

		int natalidad, mortalidad, migracion, anios;
		double poblacion_inicial;

	public:

		Poblacion(int nat, int mort, int migr, int ani, double poblacion_ini){

			natalidad = nat;
			mortalidad = mort;
			migracion = migr;
			anios = ani;
			poblacion_inicial = poblacion_ini;
		}
		Poblacion(int nat2, int mort2, int migr2){

			natalidad = nat2;
			mortalidad = mort2;
			migracion = migr2;
			
		}
		bool LeerIntRango(){

			bool rango_natalidad, rango_mortalidad, rango_emigracion;

			rango_natalidad = (natalidad >= 0 && natalidad <= 1000);
			rango_mortalidad = (mortalidad >= 0 && mortalidad <= 1000);
			rango_emigracion = (migracion >= 0 && migracion <= 1000);

			while(rango_mortalidad && rango_emigracion && rango_natalidad){
				return true;
			}
		}

		bool LeerIntMayorIgualQue(){

			while(anios > 0){
				return true;
			}
		}

		double PoblacionDespuesDosAnios(){

			int anios_transcurridos;
			double poblacion_total = poblacion_inicial;

			do
			{
				poblacion_total = poblacion_total + (poblacion_total * natalidad) / 1000 - (poblacion_total * mortalidad) / 1000 - (poblacion_total * migracion) / 1000;
				anios_transcurridos++;	
			} 
			while (anios_transcurridos < anios);	

			return poblacion_total;

		}

		double AniosPoblacionDuplicada(){

			int anios_transcurridos;
			double poblacion_total;
			anios_transcurridos = 1;


			do
			{
				poblacion_total = poblacion_total + (poblacion_total * natalidad) / 1000 - (poblacion_total * mortalidad) / 1000 - (poblacion_total * migracion) / 1000;
				anios_transcurridos++;
			}
			while(poblacion_total < (poblacion_inicial * 2));

			return anios_transcurridos;

		}
};

int main(){

	int natalidad, mortalidad, migracion, anios_transcurridos, numero_anios;
	
	double poblacion_inicial, poblacion_resultante, poblacion_duplicada;

	bool resultado, resultado2;
	

	do{
		cout << "Introduce la poblacion inicial" << endl;
		cin >> poblacion_inicial;
	}while (poblacion_inicial <= 0);

	do{
		cout << "Las tasas deben estar comprendidas entre 0 y 1000" << endl;
		
		cout << "Introduce la tasa de natalidad" << endl;
		cin >> natalidad;

		cout << "Introduce la tasa de mortalidad" << endl;
		cin >> mortalidad;

		cout << "Introduce la tasa de migracion" << endl;
		cin >> migracion;

		Poblacion mi_poblacion1(natalidad,mortalidad,migracion);
		resultado = mi_poblacion1.LeerIntRango();

	}while (!resultado);

	do{
		cout << "Introduzca el numero de anios" << endl;
		cin >> numero_anios;

		Poblacion mi_poblacion2(natalidad,mortalidad,migracion,numero_anios,poblacion_inicial);
		resultado2 = mi_poblacion2.LeerIntMayorIgualQue();

	}while(!resultado2);
	
	Poblacion mi_poblacion3(natalidad,mortalidad,migracion,numero_anios,poblacion_inicial);
	poblacion_resultante = mi_poblacion3.PoblacionDespuesDosAnios();
	

	cout << "El numero de habitantes transcurridos " << numero_anios << " anios es de " << poblacion_resultante << " habitantes" << endl;

	poblacion_duplicada = mi_poblacion3.AniosPoblacionDuplicada();
	cout << "Para duplicar la poblacion deben transcurrir " <<  poblacion_duplicada << " anios " << endl;

}

