#include <iostream>
#include <string>

std::string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
std::string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince"};
std::string decenas[] = {"", "dieci", "veinti", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
std::string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

std::string convertir_unidades(int n) {
    return unidades[n];
}

std::string convertir_decenas(int n) {
    if (n < 10) {
        return convertir_unidades(n);
    } else if (n < 16) {
        return especiales[n - 10];
    } else {
        int decena = n / 10;
        int unidad = n % 10;
        if (unidad == 0) {
            return decenas[decena];
        } else if (decena == 2) {
            return decenas[decena] + unidades[unidad];
        } else {
            return decenas[decena] + " y " + unidades[unidad];
        }
    }
}

std::string convertir_centenas(int n) {
    if (n < 100) {
        return convertir_decenas(n);
    } else {
        int centena = n / 100;
        int resto = n % 100;
        if (resto == 0) {
            if (centena == 1) {
                return "cien";
            } else {
                return centenas[centena];
            }
        } else {
            return centenas[centena] + " " + convertir_decenas(resto);
        }
    }
}

std::string convertir_numero_a_letras(int n) {
    if (n == 0) {
        return "cero";
    } else if (n < 100) {
        return convertir_centenas(n);
    } else {
        int centena = n / 100;
        int resto = n % 100;
        if (centena == 1 && resto == 0) {
            return "cien";
        } else {
            return convertir_centenas(centena * 100) + " " + convertir_centenas(resto);
        }
    }
}

void Opcion6() {
    int numero;
    std::cout << "Ingrese un número entre 0 y 999: ";
    std::cin >> numero;

    if (numero < 0 || numero > 999) {
        std::cout << "Número fuera de rango." << std::endl;
    } else {
        std::cout << "El número en letras es: " << convertir_numero_a_letras(numero) << std::endl;
    }

    
}
