/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 28 sesion 10
	Descripción del programa: Ejercicio Circunferencia con una clase y un struct

*/

#include<iostream>

using namespace std;

const double PI = 3.1415927;

struct CoordenadasPunto2D{
	double centro1, centro2;


};

class Circunferencia{

	private:

	CoordenadasPunto2D coordenadas;
	double radio, punto1, punto2;

	public:

	Circunferencia(CoordenadasPunto2D coord, double rad, double punt1, double punt2){
		coordenadas = coord;
		radio = rad;
		punto1 = punt1;
		punto2 = punt2;
	}

	double longitudCircunferencia(){
		double resultado;

		resultado = 2 * PI * radio;
		return resultado;
	}

	double areaCircunferencia(){
		double resultado;

		resultado = PI * radio * radio;
		return resultado;
	}

	bool contienePunto(){
		bool resultado;
		double formula;

		formula = ((coordenadas.centro1 - punto1) * (coordenadas.centro1 - punto1)) + ((coordenadas.centro2 - punto2) * (coordenadas.centro2 - punto2));
		if(formula <= (radio * radio)){
			resultado = true;
		}
		else{
			resultado = false;
		}

		return resultado;
	}


};

int main(){

	double centro1, centro2, punto1, punto2, radio, area, longitud;
	bool contiene;
	CoordenadasPunto2D coordenadas;

	cout << "Introduce la coordenada X del centro de la circunferencia" << endl;
	cin >> coordenadas.centro1;

	cout << "Introduce la coordenada Y del centro de la circunferencia" << endl;
	cin >> coordenadas.centro2;

	cout << "Introduce el radio de la circunferencia" << endl;
	cin >> radio;

	cout << "Introduce la coordenada X de un punto cualquiera" << endl;
	cin >> punto1;

	cout << "Introduce la coordenada Y de un punto cualquiera" << endl;
	cin >> punto2;

	Circunferencia mi_circunferencia(coordenadas, radio, punto1, punto2);
	area = mi_circunferencia.areaCircunferencia();
	longitud = mi_circunferencia.longitudCircunferencia();
	contiene = mi_circunferencia.contienePunto();

	cout << "La longitud de la circunferencia es de " << longitud << endl;

	cout << "El area de la circunferencia es de " << area << endl;

	if(contiene){
		cout << "Los puntos estan dentro de la circunferencia" << endl;
	}
	else{
		cout << "Los puntos no estan dentro de la circunferencia" << endl;
	}
}

