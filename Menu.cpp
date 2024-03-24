#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "Opcion1.cpp"  //Elicho
#include "Opcion3.cpp"  //Elicho
#include "Opcion5.cpp"  //Elicho
#include "Opcion7.cpp"  //Elicho
#include "Opcion9.cpp"  //Elicho
#include "Opcion10.cpp"  //Elicho
#include "Opcion16.cpp"  //Elicho

using namespace std;
int main(void) {
	setlocale(LC_ALL, "");
    int opcion;
    do {
    	//opciones del menu principal
        cout << "Menu: " << endl;
        cout << "1. Suma, Resta, Multiplicación y División de dos números" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa" << endl;
        cout << "5. Conversión de números arábigos a romanos (mínimo 1,000)" << endl;
        cout << "7. Conversión de números enteros con decimal a letras" << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Crear de forma gráfica la multiplicación manual" << endl;
        cout << "16. Calcular la hipotenusa" << endl;
        cout << "0. Salir" << endl;
        cout << "\nSelecciona una opción: ";
        cin >> opcion;
        //Limpia pantalla luego de seleccion
        system("cls");
        // llamamos los .cpp de cada opcion a elegir
        switch (opcion) {
            case 1:
                Opcion1();
                break;
			case 3:
                Opcion3();
                break;
            case 0:
                cout << "Saliendo del programa." << endl;
                break;
            default:
            	//si ingresan un numero que no este entre 0 a 20
                cout << "     - Opción inválida. Inténtalo de nuevo." << endl << endl;
                break;
        }
    } while (opcion != 0);

    return 0;
    
    }
