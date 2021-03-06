#include<iostream>

using namespace std;

class Recta{

private:

	double real1, real2, real3;
	int abcisa_x, abcisa_y;

	bool EsNulo(double real1, double real2){

		if(real1 == 0 && real2 == 0){
			return true;
		}
		return false;
	}

public:

	Recta(double asignar_real1, double asignar_real2, double asignar_real3, double asignar_abcisa_x, double asignar_abcisa_y){

		real1 = asignar_real1;
		real2 = asignar_real2;
		real3 = asignar_real3;
		abcisa_x = asignar_abcisa_x;
		abcisa_y = asignar_abcisa_y;

	}
	double Pendiente(){
		double resultado;
		if(!EsNulo(real1,real2))
			resultado = -real1/real2;
		else
			resultado = 0;

		return resultado;

	}

	double OrdenadaY(){
		double resultado;
		if(!EsNulo(real1,real2))
			resultado = (-real3 - (abcisa_x * real1)) / real2;
		else
			resultado = 0;
		return resultado;

	}

	double OrdenadaX(){
		double resultado;
	if(!EsNulo(real1,real2))
		resultado = (-real3 - (abcisa_y * real2)) / real1;
	else
		resultado = 0;
	return resultado;
	}
};

int main(){

	double real1, real2, real3, real4, real5, real6;
	int abcisa_x, abcisa_y;

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

	Recta recta1(real1,real2,real3,abcisa_x,abcisa_y);
	Recta recta2(real4,real5,real6,abcisa_x,abcisa_y);

	cout << "La pendiente de la primera recta es: " << recta1.Pendiente() << endl;
	cout << "La pendiente de la segunda recta es: " << recta2.Pendiente() << endl;

	cout << "El valor de la ordenada Y en la primera recta es: " << recta1.OrdenadaY() << endl;
	cout << "El valor de la ordenada X en la primera recta es: " << recta1.OrdenadaX() << endl;

	cout << "El valor de la ordenada Y en la segunda recta es: " << recta2.OrdenadaY() << endl;
	cout << "El valor de la ordenada X en la segunda recta es: " << recta2.OrdenadaX() << endl;


}