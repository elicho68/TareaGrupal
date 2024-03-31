#include <iostream>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>
#include "Opcion1.cpp"  //Elicho
#include "Opcion2.cpp" //benjamin
#include "Opcion3.cpp"  //Elicho
#include "Opcion4.cpp"  //benjamin
#include "Opcion5.cpp"  //Elicho
#include "Opcion6.cpp"  //Yeymi
#include "Opcion7.cpp"  //Elicho
#include "Opcion8.cpp"  //benjamin
#include "Opcion9.cpp"  //Elicho
#include "Opcion10.cpp"  //Elicho
#include "Opcion11.cpp"  //Yeymi
#include "Opcion12.cpp"  //benjmin
#include "Opcion13.cpp"  //Yeymi
#include "Opcion14.cpp"  //benjamin
#include "Opcion15.cpp"  //benjamin
#include "Opcion16.cpp"  //Elicho
#include "Opcion17.cpp"  //Yeymi
#include "Opcion18.cpp"  //Yeymi
#include "Opcion19.cpp"  //benjamin
#include "Opcion20.cpp"  //Yeymi

using namespace std;
int main(void) {
	setlocale(LC_ALL, "");
    int opcion;
    do {
    	//opciones del menu principal
        cout << "Menu: " << endl;
        cout << "1. Suma, Resta, Multiplicación y División de dos números." << endl;
        cout << "2. Determinar si un número es par o impar" << endl;
        cout << "3. Convertir de kilómetros a millas, metros a pulgadas, de libras a kilos y viceversa." << endl;
        cout << "4. si una palabra o un número es políndromo." << endl;
        cout << "5. Conversión de números arábigos a romanos (mínimo 1,000)." << endl;
        cout << "6. Conversión de números Enteros a Letras." << endl;
        cout << "7. Conversión de números enteros con decimal a letras." << endl;
        cout << "8.  Una tabla de multiplicar: " << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10." << endl;
        cout << "10. Crear de forma gráfica la multiplicación manual." << endl;
        cout << "11. Conversion de decimales a binarios." << endl;
        cout << "12. Conversión de números decimales a hexadecimales: " << endl;
        cout << "13. Crear Figuras Géometricas Básicas." << endl;
        cout << "14. Mover un punto en toda la pantalla: " << endl;
    	cout << "15. Simulación de un Cajero (Autómata): " << endl;    
        cout << "16. Calcular la hipotenusa." << endl;
        cout << "17. Imprimir una matriz de 3x3." << endl;
        cout << "18. Imprimir una piramide." << endl;
        cout << "19. resta  de 3 numeros " << endl;
        cout << "20. Calcular el porcentaje de un numero." << endl;
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
            case 2:
                Opcion2();
                break;
			case 3:
                Opcion3();
                break;
            case 4:
                Opcion4();
                break;    
			case 5:
                Opcion5();
                break;                
            case 6:
                Opcion6();
                break; 
            case 7:
                Opcion7();
                break; 
            case 8:
                Opcion8();
                break;    
            case 9:
                Opcion9();
                break; 								
            case 10:
                Opcion10();
                break;
			case 11:
                Opcion11();
                break;
			case 12:
                Opcion12();
                break;		   
            case 13:
                Opcion13();
                break;
			case 14:
                Opcion14();
                break;
			case 15:
                Opcion15();
                break;		 
            case 16:
                Opcion16();
                break; 
			case 17:
                Opcion17();
                break;	   
            case 18:
                Opcion18();
                break;
			case 19:
                Opcion19();
                break;	    
            case 20:
                Opcion20();
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
    

