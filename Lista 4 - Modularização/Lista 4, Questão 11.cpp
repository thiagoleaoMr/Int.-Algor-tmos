// Lista 4, Questão 11 - Sequência de Ricci

#include <iostream>
using namespace std;

int ricci(int qtd, int n1, int n2);

int main (){
	int num1, num2, quantidade;	
	cin>> num1>> num2>> quantidade;
	
	for (int cont=1; cont<=quantidade; cont++)
		cout<< ricci (cont, num1, num2)<< " ";
		
return 0;
}

int ricci (int qtd, int n1, int n2){
	if (qtd == 1)
		return n1;
	else if (qtd == 2)
		return n2;
	else
		return ricci (qtd-1, n1, n2) + ricci(qtd-2, n1, n2);
}
