#include <iostream>

double calcular_porcentaje(double numero, double porcentaje) {
    return (numero * porcentaje) / 100.0;
}

void Opcion20() {
    double numero, porcentaje;
    std::cout << "Ingrese un número: ";
    std::cin >> numero;
    std::cout << "Ingrese el porcentaje a calcular: ";
    std::cin >> porcentaje;

    double resultado = calcular_porcentaje(numero, porcentaje);
    std::cout << "El " << porcentaje << "% de " << numero << " es: " << resultado << std::endl;

    
}
