// Lista 4, Questão 5 - Cálculo de Fatorial

#include <iostream>
using namespace std;


float fatorial (int n){
	
	if(n == 1){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}		

int main (){	
	int numero;
	
	cin>> numero;
	cout<< fatorial (numero);
	
	return 0;
}
