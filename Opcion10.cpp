//crear de forma grafica la multiplicacion de 1 a 3 digitos
//multiplicando cada uno por los otros numeros del mismo tamaño
#include <iostream>
using namespace std;


///int main() 
    void Opcion10(){
    	
    int num, i, j;
    cout << "Ingrese un numero entre 0 y 999: ";
    cin >> num;
    if (num >= 0 && num <= 999) {
        for (i = 1; i  <= num / 100; i++) {
            for (j = 1; j <= 10; j++) {
                printf("%d * %d = %2d%c", i, j, i*j, '\n');
            }
        }
    } else {
        cout << "Numero fuera de rango. Ingrese nuevamente\n";
        system("pause");
        //return -1;
    }
}

/*
//declaracion de variables y funciones
#include <iostream> 
using namespace std;

int main() {

 
    int num1,num2,resul;
     cout << "Ingrese el primer  numero: ";
     cin >> num1;
     cout << "\nIngrese el segundo numero: ";
     cin >> num2;
     resul = num1 * num2;
     system("cls");
     cout<<"La multiplicacion de  "<<num1<<" por "<<num2<<" es igual a :\n";
     cout<<num1<<" x "<<num2<<"= "<<resul<<endl;
      return 0;

}
*/

