#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool esPalindromo(string str) {
    int izquierda = 0;
    int derecha = str.length() - 1;

    while (derecha > izquierda) {
        if (str[izquierda] != str[derecha]) {
            return false;
        }
        izquierda++;
        derecha--;
    }
    return true;
}

int main() {
    string entrada;
    cout << "Ingrese una palabra o número: ";
    cin >> entrada;

    // Eliminar espacios en blanco para el caso de palabras
    entrada.erase(remove(entrada.begin(), entrada.end(), ' '), entrada.end());

    // Verificar si la entrada es palíndroma
    if (esPalindromo(entrada)) {
        cout << "La entrada es palíndroma." << endl;
    } else {
        cout << "La entrada no es palíndroma." << endl;
    }

    return 0;
}

