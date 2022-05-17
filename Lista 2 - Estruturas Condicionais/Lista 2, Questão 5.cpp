// Lista 2, Questão 5 - Crédito Especial

#include <iostream>
using namespace std;

int main() {
	float saldo, credito;
	
	cin>> saldo;
	
	if (saldo == 0){
		credito = 0;
		cout<< saldo<< endl<< credito;
	
	}else if (saldo>0 and saldo<200){
		credito = 0.1*saldo;
		cout<< saldo<< endl<< credito;
		
	}else if (saldo>=200 and saldo<400){
		credito = 0.15*saldo;
		cout<< saldo<< endl<< credito;
		
	}else if (saldo>=400 and saldo<800){
		credito = 0.2*saldo;
		cout<< saldo<< endl<< credito;
		
	}else if (saldo>=800 and saldo<1600){
		credito = 0.25*saldo;
		cout<< saldo<< endl<< credito;
		
	}else if (saldo>=1600){
		credito = 0.3*saldo;
		cout<< saldo<< endl<< credito;
	}

return 0;
}
