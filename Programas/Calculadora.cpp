#include <iostream>

using namespace std;

int main(){
	
	int opcion = 0;
	int a, b;

	cout<<"Opcion 1: suma \nOpcion 2: resta \nOpcion 3: multiplicacion \nOpcion 4: division \n";
	cout<<"\nIngresa una opcion: ";
	cin>>opcion;
	switch(opcion){
	
		case 1:
			cout<<"Ingresa un numero: ";
			cin>>a;
			cout<<"Ingresa otro numero: ";
			cin>>b;
			cout<<"Tu resultado es: ";
			cout<<a + b;
			break;
		case 2:
			
			cout<<"Ingresa un numero: ";
			cin>>a;
			cout<<"Ingresa otro numero: ";
			cin>>b;
			cout<<"Tu resultado es: ";
			cout<<a - b;
			break;
		case 3:
			cout<<"Ingresa un numero: ";
			cin>>a;
			cout<<"Ingresa otro numero: ";
			cin>>b;
			cout<<"Tu resultado es: ";
			cout<<a * b;
			break;

		case 4:
			cout<<"Ingresa un numero: ";
			cin>>a;
			cout<<"Ingresa otro numero: ";
			cin>>b;
			cout<<"Tu resultado es: ";
			cout<<a / b;
			break;
	}

	return 0;
}
