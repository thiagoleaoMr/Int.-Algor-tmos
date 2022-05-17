// Lista 2, Questão 7 - Rendimentos Bancários

#include <iostream>
using namespace std;

int main (){
	char tipo;
	float valor, total;
	
	cin>> tipo>> valor;

	if (tipo == '1'){
		total = valor * 1.005;
	}else if(tipo == '2'){
		total = (valor * 1.03)- 30;
	}

	cout<< total;

return 0;
}
