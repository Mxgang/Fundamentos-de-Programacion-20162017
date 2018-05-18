/*

	Nombre: Javier Martín Gómez
	Grupo: A2
	Numero de ejercicio: Ejercicio 1 sesion 7
	Descripción del programa: Encontrar errores en el ejercicio

*/

// Ejemplo 1
int ValorAbsoluto (int entero) {
	if (entero < 0)
		entero = -entero;
	else						//El return debe ir fuera del if-else además que si el entero es < 0 no devuelve nada
		return entero;
} 

// Ejemplo 2
void Imprime(double valor) {
	double valor;				//No se puede llamar a una variable igual que el argumento
	cout << valor;
}

// Ejemplo 3
void Cuadrado (int entero) {
	return entero*entero;		//Un void no puede devolver con un return
} 

// Ejemplo 4
bool EsPositivo(int valor) {
	if (valor > 0)				//Falta un else que devuelve false
		return true;
}