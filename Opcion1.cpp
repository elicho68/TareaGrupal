//Create program basic for Addition, Subtraction, Multiplication and Division of two numbers with variable
#include <iostream>
#include <stdlib.h>

using namespace std;

//main(){
    void Opcion1() {

        int num1, num2, sum, res, mul, div;

        cout << "Ingrese  el primer numero: ";
        cin >> num1;
        cout << "Ingrese el segundo numero: ";
        cin >> num2;

        sum = num1 + num2;//Addition
        res = num1 - num2;//Resta
        mul = num1 * num2;//Multiplicacion
        if (num2 == 0)
        {
            cout << "\nNo se puede dividir entre cero";
        }
        else {
            div = num1 / num2;//Division
        }

        cout << "\nLa suma de " << num1 << " + " << num2 << ": " << sum <<
            "\nLa resta de " << num1 << " - " << num2 << ": " << res <<
            "\nLa multiplicacion de " << num1 << " x " << num2 << ": " << mul <<
            "\nLa division de " << num1 << " / " << num2 << ": " << div;
	 cout << endl<<endl;  
//        return 0;

    }




