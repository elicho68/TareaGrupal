//realizar un programa de millas a kilometros
#include <iostream>
#include <stdio.h>
#include <wchar.h>
#include <locale.h>
#include <stdlib.h>

using namespace std;

//main() {
void Opcion3() {

	setlocale(LC_ALL, "");
	
	int opcion;
	
	do{
    int millas, kilom, mts, pul, lbs, kil;
    double resul_k, resul_m, kilo=1.60934, resul_mts, resul_pul, pulgada=39.3701, resul_lbs, resul_kil, kilos=2.20462;
		 // Mostrar el menú de opciones
        cout << "\nMenú de Opciones" << endl;
        cout << "1. Convertir de kilómetros a millas y viceversa" << endl;
        cout << "2. Convertir de metros a pulgadas y viceversa" << endl;
        cout << "3. Convertir de libras a kilos y viceversa" << endl;
        cout << "0. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        system("cls");        
		// Según la opción seleccionada por el usuario
        switch(opcion) {
            case 1:
                cout << "Ha seleccionado la Opción 1." << endl;
     //convertir kilos a millas y viceversa
	 cout << "Ingrese la cantidad en millas: ";
     cin >> millas;
     cout << "Ingrese la cantidad en Kilometros: ";
     cin >> kilom;
     //calculo de operaciones
     resul_m = millas * kilo;
     resul_k = (double) kilom/kilo;     
	//Resultado al usuario
     cout << "\nLa conversion de: "<<millas<<" millas son iguales a "<<resul_m<<" Kilometros.";
     cout << "\nLa conversion de: "<<kilos<<" kilometros son iguales a "<<resul_k<<" millas.";
	 cout << endl;	
                break;
            case 2:
                cout << "Ha seleccionado la Opción 2." << endl;
                // Aquí puedes colocar el código correspondiente a la opción 2
	//convertir pulgadas a metros y viceversa      
     cout << "Ingrese la cantidad en metros: ";
     cin >> mts;
     cout << "Ingrese la cantidad en pulgadas: ";
     cin >> pul;
 
     resul_mts = mts * pulgada;
     resul_pul = (double) pul/pulgada;     
     
     cout << "\nLa conversion de: "<<mts<<" metros son iguales a "<<resul_mts<<" pulgadas.";
     cout << "\nLa conversion de: "<<pul<<" pulgadas son iguales a "<<resul_pul<<" metros.";
	cout << endl;
                break;
            case 3:
                cout << "Ha seleccionado la Opción 3." << endl;
                // Aquí puedes colocar el código correspondiente a la opción 3
	//convertir libras a kilos y viceversa      
     cout << "Ingrese la cantidad en libras: ";
     cin >> lbs;
     cout << "Ingrese la cantidad en kilos: ";
     cin >> kil;
 
     resul_kil = lbs * kilos;
     resul_lbs = (double) kil/kilos;     
     
     cout << "\nLa conversion de: "<<lbs<<" libras son iguales a "<<resul_lbs<<" kilos.";
     cout << "\nLa conversion de: "<<kil<<" kilos son iguales a "<<resul_kil<<" libras.";
	cout << endl;
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, seleccione una opción válida." << endl;
        }
    } while (opcion != 0);

//    return 0;		
	}


