#include<iostream>

using namespace std;

class Recta{

public:
	double real1, real2, real3, real4, real5, real6;
};


int main(){

	double real1, real2, real3, real4, real5, real6;

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

	recta1.real1 = real1;
	recta1.real2 = real2;
	recta1.real3 = real3;
	recta2.real4 = real4;
	recta2.real5 = real5;
	recta2.real6 = real6;

	cout << "La pendiente de la primera recta es: " << -recta1.real1/recta1.real2 << endl;
	cout << "La pendiente de la segunda recta es: " << -recta2.real4/recta2.real5 << endl;


}