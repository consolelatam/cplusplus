/*
 *Realizar un algoritmo que imprima en consola todos los numeros
 *pares del 1 al 100
 * */

#include <iostream>
using namespace std;

int main(){
	for(int i = 1; i <= 100; i++) {
		if(i % 2 == 0)
			cout << "El numero: " << i << endl;
	}

	return 0;
}
