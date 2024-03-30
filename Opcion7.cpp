/* digita un numero en el rango del 0 al 9999 y convierte en ltras debido a como se escribe*/ 

#include <iostream>
#include <string>

using namespace std;

// Función para convertir números enteros a palabras
string convertirEnteroATexto(int numero) {
    string unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
    string especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "dieciseis", "diecisiete", "dieciocho", "diecinueve"};
    string especialesv[] = {"", "veintiuno", "veintidos", "veintitres", "veinticuatro", "veinticinco", "ventiseis", "veintisiete", "veintiocho", "veintinueve"};
    string decenas[] = {"", "", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
    string centenas[] = {"", "ciento", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};

    string resultado;

    // Convertir miles
    if (numero >= 1000) {
        resultado += unidades[numero / 1000] + " mil ";
        numero %= 1000;
    }

    // Convertir centenas
    if (numero >= 100) {
        resultado += centenas[numero / 100] + " ";
        numero %= 100;
    }

    // Convertir decenas y unidades
    if (numero >= 30) {
        resultado += decenas[numero / 10] + " ";
        numero %= 10;
        if (numero > 0)
            resultado += "y " + unidades[numero] + " ";
    } else if (numero >= 10) {
        resultado += especiales[numero - 10] + " ";
    } else if (numero >= 20) {
        resultado += especialesv[numero - 10] + " ";        
        
    } else if (numero > 0) {
        resultado += unidades[numero] + " ";
    }

    return resultado;
}

// Función para convertir números decimales a palabras
string convertirDecimalATexto(int numero) {
    string resultado;

    if (numero <= 10) {
        resultado = "" + convertirEnteroATexto(numero);
    } else if (numero <= 100) {
        resultado = convertirEnteroATexto(numero);
    } else if (numero <= 1000) {
        resultado = convertirEnteroATexto(numero / 10) + " con " + convertirEnteroATexto(numero % 10);
    } else if (numero <= 10000) {
        resultado = convertirEnteroATexto(numero / 100) + " con " + convertirEnteroATexto(numero % 100);
    }

    return resultado;
}


//int main() {
    void Opcion7() {
    double numero;

    cout << "Ingrese un número (0 a 9999): ";
    cin >> numero;

    // Extraer la parte entera y decimal
    int parteEntera = static_cast<int>(numero);
    int parteDecimal = static_cast<int>((numero - parteEntera) * 100);

    // Convertir la parte entera y la parte decimal a texto
    string textoParteEntera = convertirEnteroATexto(parteEntera);
    string textoParteDecimal = convertirDecimalATexto(parteDecimal);

    // Imprimir el resultado
    cout << "Número en texto: " << textoParteEntera;
    if (!textoParteDecimal.empty())
        cout << " con " << textoParteDecimal;
    cout << endl;
//    return 0;
}

