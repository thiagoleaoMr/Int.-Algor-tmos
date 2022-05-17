#include <iostream>
using namespace std;

int main (){
	char letra;
	int cont=0, contA=0, contB=0;
	
	while (cont < 10){
		cin>> letra;
		if (letra == 'a'){
			contA ++;
		} else if (letra == 'b'){
			contB ++;
		}
		cont ++;
	}
	
	if (contA < contB){
		cout<< "1";
	} else {
		cout<< "0";
	}
	
	return 0;
}
