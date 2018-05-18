/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 30 sesion 6
	Descripción del programa: Sacar todos los digitos de cualquier numero

*/

#include<iostream>
#include<cmath>


using namespace std;


int main(){
	int divisor = 10;
	int residuo = 0;
	int digito = 0;
	int cifras_aux = 0;

	int num;
	cout << "Ingrese un numero para mostrarlo separado en digitos: " << endl; 
	cin >> num; 
	
	//Calculamos el numero de cifras que tiene el numero
	while (residuo != num){
	residuo = num % divisor;
	divisor = divisor * 10;
	cifras_aux++;
	}
	cifras_aux--;

	//Reseteamos las variables a sus valores iniciales
	divisor = 10;
	residuo = 0;
	digito = 0;



	//Se eleva el divisor de forma que tenga el mismo número de cifras que nuestro número inicial
	divisor = pow(divisor, (cifras_aux));


	cout << "Los digitos son: ";
	while (cifras_aux >= 0){
	//El cociente son Digitos de izquiera a derecha
	digito = num / divisor;

	//El residuo se convierte en el numero
	residuo = num % divisor;
	num = residuo;

	//El divisor disminuye
	divisor = divisor / 10;
	cout << digito << ", ";
	cifras_aux--;
	}

	cout << endl;

}

	

