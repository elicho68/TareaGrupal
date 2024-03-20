
#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "Opcion1.cpp"
#include "Opcion3.cpp"

using namespace std;
int main(void) {
	setlocale(LC_ALL, "");
    int opcion;
    do {
        cout << "Menu: " << endl;
        cout << "1. Suma, Resta, Multiplicación y División de dos números" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "4. Salir" << endl;
        cout << "\nSelecciona una opción: ";
        cin >> opcion;
        switch (opcion) {
            case 1:
                Opcion1();
                break;
			case 3:
                Opcion3();
                break;
            case 4:
                cout << "Saliendo del programa." << endl;
                break;
            default:
                cout << "     - Opción inválida. Inténtalo de nuevo." << endl << endl;
                break;
        }
    } while (opcion != 4);

    return 0;

    
    }
