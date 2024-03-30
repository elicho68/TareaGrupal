#include <iostream>
#include <bitset>
using namespace std;

void Opcion11() {
    int numeroDecimal;
    
    // Solicitar al usuario que ingrese un número decimal
    cout << "Ingrese un número decimal: ";
    cin >> numeroDecimal;
    
    // Convertir el número decimal a binario usando std::bitset
    string binario = bitset<8>(numeroDecimal).to_string();
    
    // Eliminar los ceros a la izquierda
    size_t pos = binario.find('1');
    if (pos != string::npos) {
        binario = binario.substr(pos);
    }
    
    // Imprimir el número binario
    cout << "El número binario es: " << binario << endl;

   
}


