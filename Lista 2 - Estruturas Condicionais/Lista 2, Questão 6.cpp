// Lista 2, Questão 6 - Maiúsculas e Minúsculas

#include <iostream>
using namespace std;

int main (){
	char letra;

	cin>> letra;
		
	if ((letra >= 'A') and (letra <= 'Z')){
		cout<< "MAIUSCULA";
	}else{
		cout<< "MINUSCULA";
	}

return 0;
}
