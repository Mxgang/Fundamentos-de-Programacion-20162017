//No he entendido lo que hay que hacer en este apartado


#include<iostream>

using namespace std;

class Recta{

private:

	double real1, real2, real3;

public:

	Recta(double asignar_real1, double asignar_real2, double asignar_real3){

		real1 = asignar_real1;
		real2 = asignar_real2;
		real3 = asignar_real3;

	}
	/*double Pendiente(){
		double resultado;

		resultado = -real1/real2;

		return resultado;

	}

	double OrdenadaY(){
		double resultado;

		resultado = (-real3 - (abcisa_x * real1)) / real2;

		return resultado;

	}

	double OrdenadaX(){
		double resultado;

		resultado = (-real3 - (abcisa_y * real2)) / real1;

		return resultado;
	}*/
};

int main(){

	double primer_real, segundo_real, tercer_real;
	Recta mirecta;

	cout << "Introduce el primer real" << endl;
	cin >> primer_real;

	cout << "Introduce el segundo real" << endl;
	cin >> segundo_real;

	cout << "Introduce el tercer real" << endl;
	cin >> tercer_real;

	mirecta.real1 = primer_real;
	cout << mirecta.real1 << endl;



}