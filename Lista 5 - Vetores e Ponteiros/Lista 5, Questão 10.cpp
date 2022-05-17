// Lista 5, Questão 10 - Removendo Nomes Duplicados

#include <iostream>
#include <string.h>
using namespace std;

string unificacao (string nome[], int n);

int main(){
	int qtd;
	cin>> qtd;
	
	string nomes[qtd];
	for (int i=0; i<qtd; i++)
		cin>> nomes[i];
		
	cout<< unificacao(nomes, qtd);

return 0;
}

string unificacao (string nome[], int n){
	int cont=0;

	for (int i=0; i<n; i++)	{	
		if (nome[i] != nome[i-1])
			cont++;
	}
	cout<< cont<< endl;

	for (int i=0; i<n; i++)	{	
		if (nome[i] != nome[i-1])
			cout<< nome[i]<< endl;
	}
			
return 0;	
}
