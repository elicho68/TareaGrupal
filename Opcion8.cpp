#include <iostream>
using namespace std;
int main()
{
int multiplicacion, numero, a=1;
cout<<"Ingresa el numero de la tabla : ";
cin>>numero;
cout<<"La tabla del "<<numero<<" es :"<<endl;
do{
multiplicacion = numero * a;
cout<< numero <<" x "<< a <<" = "<< multiplicacion <<endl;
a++;
}
while(a<=10);
}
