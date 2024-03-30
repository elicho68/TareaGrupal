#include <iostream>
#include <sstream>

std::string decimalToHexadecimal(int decimal) {
    std::stringstream ss;
    ss << std::hex << decimal;
    return ss.str();
}

int main() {
    int decimal;
    std::cout << "Ingrese un numero decimal: ";
    std::cin >> decimal;
    std::string hexadecimal = decimalToHexadecimal(decimal);
    std::cout << "El numero en hexadecimal es: " << hexadecimal << std::endl;
    return 0;
}

