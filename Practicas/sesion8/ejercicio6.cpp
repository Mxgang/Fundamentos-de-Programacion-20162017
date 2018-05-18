/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 6 sesion 8
	Descripción del programa: Calcular sumatoria de factorial usando bucles y funciones

*/

#include<iostream>

using namespace std;


bool LeerIntRango(int numero){

	while(numero >= 1 && numero <= 20){
		return true;
	}
}

double Factorial(int contador){

	double resultado_multiplicacion;
	resultado_multiplicacion = 1;

	for(int i = contador; i > 1; i--){
			
		resultado_multiplicacion = resultado_multiplicacion * i;


	}
	return resultado_multiplicacion;
}

double SumaFactoriales(int numero){

	double resultado_total;
	int contador = numero;

	
	while(contador >= 1){
		
		resultado_total = resultado_total + Factorial(contador);
		contador--;
	}
	
	
	return resultado_total;
	


}



int main(){

	int numero;
	double resultado_suma_factorial;

	
	do{

		cout << "Introduzca un numero" << endl;
		cin >> numero;

	}while(!LeerIntRango(numero));

	resultado_suma_factorial = SumaFactoriales(numero);

	cout << "El resultado es " << resultado_suma_factorial << endl;

}