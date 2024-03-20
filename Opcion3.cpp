//realizar un programa de millas a kilometros
#include <iostream>
#include <stdlib.h>

using namespace std;

void Opcion3() {
	
    int millas, kilos;
    double resul_k, resul_m, kilo=1.60934;
     cout << "Ingrese la cantidad en millas: ";
     cin >> millas;
     cout << "Ingrese la cantidad en Kilometros: ";
     cin >> kilos;
     resul_m = millas * kilo;
     resul_k = (double) kilos/kilo;     
     cout << "\nLa conversion de: "<<millas<<" millas son iguales a "<<resul_m<<" Kilometros.";
     cout << "\nLa conversion de: "<<kilos<<" kilometros son iguales a "<<resul_k<<" millas.";
	 cout << endl<<endl;  
//return 0;
}


/*int main() { 
    double km, milla;
    cout << "Ingrese la cantidad en kilogramos: "; cin >> km;
    milla = km * 0.621371;
    cout << "La conversion de " << km << " Km a millas es de: " << milla << " Millas"<< endl;
    return 0;
};
*/




