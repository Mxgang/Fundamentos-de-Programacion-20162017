#include<iostream>

using namespace std;

class Recta{

public:

	double real1, real2, real3;
	int abcisa_x, abcisa_y;

	double Pendiente(double real1, double real2){
		double resultado;

		resultado = -real1/real2;

		return resultado;

	}

	double OrdenadaY(double real1, double real2, double real3, double abcisa_x){
		double resultado;

		resultado = (-real3 - (abcisa_x * real1)) / real2;

		return resultado;
	}

	double OrdenadaX(double real1, double real2, double real3, double abcisa_y){
		double resultado;

		resultado = (-real3 - (abcisa_y * real2)) / real1;

		return resultado;
	}
};

int main(){

	double real1, real2, real3, real4, real5, real6;
	int abcisa_x, abcisa_y;

	Recta recta1;
	Recta recta2;

	cout << "Introduce el primer real" << endl;
	cin >> real1;

	cout << "Introduce el segundo real" << endl;
	cin >> real2;

	cout << "Introduce el tercer real" << endl;
	cin >> real3;

	cout << "Introduce el cuarto real" << endl;
	cin >> real4;

	cout << "Introduce el quinto real" << endl;
	cin >> real5;

	cout << "Introduce el sexto real" << endl;
	cin >> real6;

	cout << "Introduce el valor de la abcisa x" << endl;
	cin >> abcisa_x;

	cout << "Introduce el valor de la abcisa y" << endl;
	cin >> abcisa_y;

	cout << "La pendiente de la primera recta es: " << recta1.Pendiente(real1, real2) << endl;
	cout << "La pendiente de la segunda recta es: " << recta2.Pendiente(real4, real5) << endl;

	cout << "El valor de la ordenada Y en la primera recta es: " << recta1.OrdenadaY(real1, real2, real3, abcisa_x) << endl;
	cout << "El valor de la ordenada X en la primera recta es: " << recta1.OrdenadaX(real1, real2, real3, abcisa_y) << endl;

	cout << "El valor de la ordenada Y en la segunda recta es: " << recta2.OrdenadaY(real1, real2, real3, abcisa_x) << endl;
	cout << "El valor de la ordenada X en la segunda recta es: " << recta2.OrdenadaX(real4, real5, real6, abcisa_y) << endl;


}