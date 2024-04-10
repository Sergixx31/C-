#include <iostream>

using namespace std;

int main(){
	//int a, b, c, d;
	//bool respuesta;

	//int a = 5;
	//int b = 6;
	//c = 15;
	//d = 20;

	//la primera es verdadera pero la segunda es falta, respuesta false
	//respuesta = (b > a && d < c);
	//cout<<respuesta; 


	//condicional anidado, else if. Si no se cumple una condicion pasa a la siguiente condicion
	
	//if(a > b){

	//	cout<<"A es mayor que B";

	//}else{
	
	//cout<<"B es mayor que A";
	//}



	//int edad = 1;
	//cout<<"Por favor ingresa tu edad\n";
	//cin>>edad;
	//if(edad < 18){
	//	cout<<"No puedes entrar\n";
	//}else{
	//	cout<<"Si puedes entrar\n";
	//}



	int horas;
	cout<<"Por favor ingresa cuantas horas trabajaste";
	cin>>horas;

	if(horas < 5){
		cout<<"Tu ganancia es de 10 dolares";
	}else if(horas > 5 && horas < 11){
		cout<<"Tu ganancia es de 20 dolares";
	}else if(horas > 10){
		cout<<"Tu ganancia es de 30 dolares";
	}



	return 0;
}
