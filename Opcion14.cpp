#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

void gotoxy(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x;
    pos.Y = y;
    SetConsoleCursorPosition(hConsole, pos);
}

int main() {
    int x = 10, y = 10; // Posición inicial del punto
    char direction;

    while (true) {
        gotoxy(x, y);
        cout << "*"; // Dibuja el punto en la posición actual

        direction = _getch(); // Captura la dirección del usuario

        // Borra el punto de la posición actual
        gotoxy(x, y);
        cout << " ";

        // Mueve el punto según la dirección ingresada por el usuario
        switch (direction) {
            case 'w':
                y--;
                break; // Mover arriba
            case 's':
                y++;
                break; // Mover abajo
            case 'a':
                x--;
                break; // Mover izquierda
            case 'd':
                x++;
                break; // Mover derecha
            default:
                break;
        }
    }

    return 0;
}

