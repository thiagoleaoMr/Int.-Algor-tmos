// Lista 4, Questão 1 - Pirâmide de Números

#include <iostream>
using namespace std;

void linhas (int numLinhas){
	int nLinha, nColuna;
	nLinha = 1;
	nColuna = 1;
	
	while ((nLinha - 1) < numLinhas){
		while (nColuna <= nLinha){
			cout<< nColuna <<" ";
			nColuna ++;
		}
		nLinha ++;
		nColuna = 1;
		cout<< endl;
	}
}
	
int main (){
	int numLinhas;
	cin>> numLinhas;
	linhas (numLinhas);

return 0;
}
