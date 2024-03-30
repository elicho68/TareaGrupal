//crear de forma grafica la multiplicacion de 1 a 3 digitos


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

//int main() {
    void Opcion10() {
    int multiplicando, multiplicador;
    cout << "Ingrese el multiplicando: ";
    cin >> multiplicando;
    cout << "Ingrese el multiplicador: ";
    cin >> multiplicador;
    
    cout << "   " << multiplicando << endl;
    cout << "x  " << multiplicador << endl;
    cout << "---------" << endl;
    
    int resultado = 0;
    int factor = 1;
    
    while (multiplicador > 0) {
        int digito = multiplicador % 10;
        int multiplicando_parcial = multiplicando * digito;
        resultado += multiplicando_parcial * factor;
        cout << multiplicando_parcial * factor << endl;
        multiplicador /= 10;
        factor *= 10;
    }
    
    cout << "---------" << endl;
    cout << resultado << endl;
    
//    return 0;
}



