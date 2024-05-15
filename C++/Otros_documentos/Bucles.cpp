#include <iostream>

using namespace std;

int main(){


	int a = 0;
	cout<<"Ingresa un numero mayor a 10: ";
	cin>>a;
	while(a < 10){
		
		cout<<"Este no es un numero mayor de 10... Ingresa otro: ";
		cin>>a;
		
	}


	return 0;
}
