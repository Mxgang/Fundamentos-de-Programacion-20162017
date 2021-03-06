#include<iostream>

using namespace std;

class Recta{

private:

	double real1, real2, real3;
	int abcisa_x, abcisa_y;

public:

	void AsignarReal1(double asignar_real1){

		real1 = asignar_real1;

	}

	void AsignarReal2(double asignar_real2){

		real2 = asignar_real2;

	}

	void AsignarReal3(double asignar_real3){

		real3 = asignar_real3;

	}

	void AsignarAbcisaX(double asignar_abcisa_X){

		abcisa_x = asignar_abcisa_X;

	}

	void AsignarAbcisaY(double asignar_abcisa_Y){

		abcisa_y = asignar_abcisa_Y;

	}

	double Pendiente(){
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

	recta1.AsignarReal1(real1);
	recta1.AsignarReal2(real2);
	recta1.AsignarReal3(real3);
	recta2.AsignarReal1(real4);
	recta2.AsignarReal2(real5);
	recta2.AsignarReal3(real6);
	recta1.AsignarAbcisaX(abcisa_x);
	recta1.AsignarAbcisaY(abcisa_y);
	recta2.AsignarAbcisaX(abcisa_x);
	recta2.AsignarAbcisaY(abcisa_y);
	
	cout << "La pendiente de la primera recta es: " << recta1.Pendiente() << endl;
	cout << "La pendiente de la segunda recta es: " << recta2.Pendiente() << endl;

	cout << "El valor de la ordenada Y en la primera recta es: " << recta1.OrdenadaY() << endl;
	cout << "El valor de la ordenada X en la primera recta es: " << recta1.OrdenadaX() << endl;

	cout << "El valor de la ordenada Y en la segunda recta es: " << recta2.OrdenadaY() << endl;
	cout << "El valor de la ordenada X en la segunda recta es: " << recta2.OrdenadaX() << endl;


}