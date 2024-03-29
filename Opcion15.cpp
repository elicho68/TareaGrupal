#include <iostream>
#include <iomanip>

class CajeroAutomatico {
private:
    double saldo;
public:
    CajeroAutomatico(double saldoInicial) : saldo(saldoInicial) {}

    void consultarSaldo() {
        std::cout << "Su saldo actual es: Q" << std::fixed << std::setprecision(2) << saldo << std::endl;
    }

    void depositar(double cantidad) {
        saldo += cantidad;
        std::cout << "Se ha depositado Q" << std::fixed << std::setprecision(2) << cantidad << " correctamente." << std::endl;
    }

    void retirar(double cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            std::cout << "Retiro exitoso. Retiraste Q" << std::fixed << std::setprecision(2) << cantidad << "." << std::endl;
        } else {
            std::cout << "Fondos insuficientes para realizar el retiro." << std::endl;
        }
    }
};

int main() {
    CajeroAutomatico cajero(10000000.10); 

    int opcion;
    double cantidad;

    do {
        std::cout << "1. Consultar saldo" << std::endl;
        std::cout << "2. Depositar" << std::endl;
        std::cout << "3. Retirar" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Ingrese una opcion GRACIAS: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                cajero.consultarSaldo();
                break;
            case 2:
                std::cout << "Ingrese la cantidad a depositar: Q";
                std::cin >> cantidad;
                cajero.depositar(cantidad);
                break;
            case 3:
                std::cout << "Ingrese la cantidad a retirar: Q";
                std::cin >> cantidad;
                cajero.retirar(cantidad);
                break;
            case 4:
                std::cout << "Gracias por utilizar el cajero BI." << std::endl;
                break;
            default:
                std::cout << "Opcion no valida. Por favor, intente de nuevo GRACIAS." << std::endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}

