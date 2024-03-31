#include <iostream>

int main() {
    int numero1, numero2, resultado;

    // Solicitar al usuario que ingrese dos números
    std::cout << "Ingrese el primer numero: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> numero2;

    // Restar los dos números
    resultado = numero1 - numero2;

    // Mostrar el resultado de la resta
    std::cout << "La resta de " << numero1 << " y " << numero2 << " es: " << resultado << std::endl;

    return 0;
}

