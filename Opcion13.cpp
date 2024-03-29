#include <iostream>

using namespace std;

void Opcion13() {
    int altura;
    cout << "Ingrese la altura del triángulo: ";
    cin >> altura;

    for (int i = 1; i <= altura; ++i) {
       
        for (int j = 1; j <= altura - i; ++j) {
            cout << " ";
        }
       
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << endl;
    }

    
}

