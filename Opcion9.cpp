#include <iostream>

using namespace std;

//int main() {
    void Opcion9() { 
 	int inicio = 0, fin = 0, res= 0;
	
	cout<<"Ingrese Tabla Inicial: ";
	cin>>inicio;
	cout<<"Ingrese Tabla Final: ";
	cin>>fin;

	for (int rango=inicio;rango<=fin;rango++){
	cout << "\nTabla del " << rango << endl;	
		for (int i=1;i<=10;i++){// 0 hasta 9
		res = rango * i;
		
		cout <<rango<<" X "<< i << " = "<< res << endl;
	
		}
    }
//return 0;
}

