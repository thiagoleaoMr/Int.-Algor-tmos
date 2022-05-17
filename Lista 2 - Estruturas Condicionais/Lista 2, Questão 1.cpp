// Lista 2, Questão 1 - Divisão e Resto

#include <iostream>
using namespace std;

int main () {
	
	int numerador, denominador, quociente, resto;
	
	cin>> numerador;
	cin>> denominador;
	
	 
	if ((numerador >= denominador) and (numerador !=0) and (denominador !=0)) {
		
		quociente = numerador / denominador;
		resto = numerador % denominador;
		
		cout<< quociente << endl;
		cout<< resto;		
	} else {
		cout<< "erro";
	}
	
	return 0;
}

