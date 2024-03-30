#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <iomanip>  // for setprecision

using namespace std;

//main(){
    void Opcion16(){
    //programa que calcule la hipotenusa
char opcion;
    do {

    float base, altura;
     cout << "Ingrese el valor de la Base: "; cin >> base;  
     cout << "Ingrese el valor de la Altura: ";  cin >> altura;
     double Hipotenusa = sqrt(pow(base,2) + pow(altura,2));
     
     cout<< setprecision(4) <<"\nLa longitud de la Hipotenusa es: "<<Hipotenusa <<endl;

 // Preguntar al usuario si quiere calcular otra hipotenusa
        cout << "\n¿Desea calcular de nuevo otra hipotenusa? (s/n): ";
        cin >> opcion;
    } while(opcion == 's' || opcion == 'S');

    //cout << "¡Hasta luego!" << endl;
    system("cls");
    
}
//fin del main

