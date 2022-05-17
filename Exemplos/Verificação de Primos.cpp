// Verificação de Primos 

#include <iostream>
using namespace std;

bool primo(int num){
	int divisor = 2;
	
	while (divisor < num){
		if ((num % divisor) == 0){
			return false;
		}else{
			divisor++;
		}
	} 
	return true;
}

int main(){
	int numero;
	
	cin >> numero;
	
	if (numero < 0) {
		return -1;
		}
		
	cout << primo(numero) << endl;
	
	return 0;
}
