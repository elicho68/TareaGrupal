#include <iostream>

using namespace std;

void Opcion18() {
    int rows;

    cout << "Ingrese el número de filas para la pirámide: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i) {
        // Imprimir espacios en blanco a la izquierda
        for (int j = 1; j <= rows - i; ++j) {
            cout << " ";
        }

      
        for (int k = 1; k <= 2 * i - 1; ++k) {
            cout << "5";
        }

        // Ir a la siguiente línea después de imprimir una fila
        cout << endl;
    }

    
}

