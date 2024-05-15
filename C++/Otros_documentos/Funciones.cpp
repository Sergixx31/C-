#include <iostream>

using namespace std;

//no va a retornar nada, parametros por defecto un string con un mensaje
void mensaje(string a="Hola mundo");


int main(){

	//llamamos mensaje, sin mandar ningun parámetro
	//si le añadimos uno lo muestra y no le hace caso al por defecto
	mensaje();
	return 0;
}

void mensaje(string mensaje){
	cout<<mensaje;
}
