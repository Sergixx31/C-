#include <iostream>

using namespace std;

int main(){
	
	int tamanio = 0, a = 0, suma = 0;
	
	cout<<"Indica cuantas notas quiere registrar: ";
	cin>>tamanio;

	int notas[tamanio];
	
	for(int x = 0; x < tamanio; x++){
		cout<<"Ingresa la nota numero #"<<x+1<<": ";
		cin>>a;
		notas[x] = a;
		suma += notas[x];
	}

	cout<<"Tu promedio es de: "<<(float)suma/tamanio<<endl;


	return 0;
}
