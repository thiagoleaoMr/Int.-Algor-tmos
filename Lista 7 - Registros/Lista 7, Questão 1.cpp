// Lista 7, Questão 1 - Preços dos Carros

#include <iostream>
using namespace std;

struct carro{
	string nome;
	int ano;
	int preco;
};

int main(){
	int qtdCarros;
	cin>> qtdCarros;
	
	carro lista [qtdCarros];
	for (int i=0; i<qtdCarros; i++){
		cin>> lista[i].nome>> lista[i].ano>> lista[i].preco;
	}
	
	int ref;
	cin>> ref;
	
	for (int i=0; i<qtdCarros; i++){
		if (lista[i].preco < ref)
		cout<< lista[i].nome<< endl<< lista[i].ano<< endl<< lista[i].preco<< endl;
	}

return 0;	
}
