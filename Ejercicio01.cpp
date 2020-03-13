/*
    Define un algoritmo que lea 5 numeros enteros y despues de leer
    el ultimo muestre cuantos eran multiplos de 2 y cuantos
    multiplos de 3
*/

#include <iostream>
using namespace std;

int main() {
    int Numero;
    int Multiplos2 = 0;
    int Multiplos3 = 0;

    for(int i = 0; i < 5; i++) {
        cout << "Dame un numero: ";
        cin >> Numero;

        if(Numero % 2 == 0)
            Multiplos2++;
        if(Numero % 3 == 0)
            Multiplos3++;
    }

    cout << "Total multiplos de 2: " << Multiplos2 << endl;
    cout << "Total multiplos de 3: " << Multiplos3 << endl;


    return 0;
}
