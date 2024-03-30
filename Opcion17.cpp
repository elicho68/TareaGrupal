#include <iostream>

using namespace std;

void Opcion17() {
    // Declaración de la matriz de 3x3
    int matriz[3][3];

    // Inicialización de la matriz
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            matriz[i][j] = i + j;  // Podrías asignar cualquier valor aquí
        }
    }

    // Imprimir la matriz
    cout << "Matriz:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    
}


