#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){

	//variables
	float peso = 0;
	float altura = 0;
	float resultado = 0;

	cout<<"Calculadora de Indice de masa Corporal \n";
	cout<<"Peso en Kilogramos: ";
	cin>>peso;
	cout<<"Altura en Metros: ";
	cin>>altura;

	//Calcular IMC
	resultado = peso / pow(altura,2);
	cout<<"Su IMC es: "<<setprecision(4)<<resultado<<" kg/m2\n";


	return 0;
}
