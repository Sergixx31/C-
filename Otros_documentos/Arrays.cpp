#include <iostream>

using namespace std;

int main(){


//	int numero[] = {4,5,6,7,10,11};	
//	for(int i = 0; i <= 5; i++){
//		cout<<numero[i]<<endl;
//	}


	int prueba[4],a;
	//son 5 posiciones ya que cuenta el 0
	for(int i = 0; i < 5; i++){
		cout<<"Ingresa un dato";
		cin>>a;
		prueba[i]=a;
	}
	for(int i = 0; i < 5; i++){
		cout<<prueba[i]<<endl;
	}



	return 0;
}
