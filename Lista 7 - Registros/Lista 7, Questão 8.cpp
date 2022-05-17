// Lista 7, Questão 8 - Estoque do Papai Noel

#include <iostream>
using namespace std;

struct carta{
	string nome;
	string pedido;
};

struct brinquedo{
	string nome;
	int qtdDisponivel;
	int qtdNecessaria;
};

int main(){
	int totalCartas, totalBrinquedos;
	cin>> totalCartas;
	
	carta listaPedidos[totalCartas];	
	for (int i=0; i<totalCartas; i++){
		cin>> listaPedidos[i].nome>> listaPedidos[i].pedido;
	}
		
	cin>> totalBrinquedos;	
	brinquedo estoquePresentes[totalBrinquedos];
	
	for (int i=0; i<totalBrinquedos; i++){
		cin>> estoquePresentes[i].nome>> estoquePresentes[i].qtdDisponivel;
		estoquePresentes[i].qtdNecessaria = 0;
	}
	
	for (int i=0; i<totalCartas; i++){
		int indice=0;
		
		while ((indice < totalBrinquedos) and (estoquePresentes[indice].nome != listaPedidos[i].pedido))
			indice++;
			
		if (estoquePresentes[indice].nome == listaPedidos[i].pedido)
			estoquePresentes[indice].qtdNecessaria++;
	}
	
	for (int i=0; i<totalBrinquedos; i++){
		if (estoquePresentes[i].qtdDisponivel < estoquePresentes[i].qtdNecessaria)
			cout<< estoquePresentes[i].nome<< " ";
	}
	
return 0;
}
