#include <iostream>

using namespace std;

int main(){
	//constante -> valor que nunca va a cambiar, nombrada en mayuscula
	float altura = 1.70;
	cout<<altura<<"\n";
	altura = 1.75;
	cout<<altura<<"\n";
	const float GRAVEDAD = 9.8;
	cout<<GRAVEDAD<<"\n";
	return 0;
}
