/*
 *Realizar un algoritmo que imprima la sumatoria de los primeros
 *100 numeros naturales
 * */

#include <iostream>
using namespace std;

int main() {
	int Suma = 0;

	for(int i = 1; i <= 100; i++) 
		Suma += i;

	cout << "Resultado de la suma: " << Suma << endl;
	return 0;
}
