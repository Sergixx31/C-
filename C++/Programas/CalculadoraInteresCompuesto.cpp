#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int main(){
	//Colocar caracteres especiales en español, accentos y ñ
	setlocale(LC_CTYPE, "Spanish");

	//CapitalInicial
	float Ci = 0;
	//Tasa de Interes
	float Ti = 0;
	//Tiempo
	int t = 0;
	float resultado = 0;

	while(Ci <= 0){
		cout<<"Ingrese el Capital Inicial: ";
		cin>>Ci;
	}
	while(Ti <= 0){
		cout<<"Ingrese la Tasa de Interes anual: ";
		cin>>Ti;
	}
	while(t <= 0){
		cout<<"Ingresa el tiempo en años: ";
		cin>>t;
	}

	resultado = Ci * pow((1 + (Ti/100)),t);
	cout<<"El dinero que se generó al final del tiempo de la inversion es: $"<<resultado;

	//El programa, al terminar el programa espera que tecleemos cualquier tecla para acabar
	//getch();
	return 0;
}
