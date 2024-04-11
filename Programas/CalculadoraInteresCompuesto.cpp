#include <iostream>

using namespace std;

int main(){
	//Colocar caracteres especiales en español, accentos y ñ
	setlocate(LC_CTYPE, "Spanish");

	//CapitalInicial
	float Ci = 0;
	//Tasa de Interes
	float Ti = 0;
	//Tiempo
	int t = 0;


	while(Ci <= 0){
		cout<<"Ingrese el Capital Inicial: ";
		cin<<Ci;
	}
	while(ti <= 0){
		cout<<"Ingrese la Tasa de Interes anual: ";
		cin<<Ti;
	}
	while(t <= 0){
		cout<<"Ingresa el tiempo en años: ";
		cin>>t;
	}

	


	//El programa, al terminar el programa espera que tecleemos cualquier tecla para acabar
	getch();	
	return 0;
}
