// Lista 5, Questão 14 - Vetor Dinâmico

#include <iostream>
#include <string.h>
using namespace std;

int* alocacao (int *vet, int tam){
	int *novo = new int[tam+5];
	
	memcpy (novo, vet, (sizeof(int)*tam));
	tam += 5;
	
	delete [] vet;
	
return novo;
}

int main(){
	int tamanho = 5;
	int *vetor = new int[tamanho];
	int entrada;
	int armaz = -1;
	int realoc = 0;
	
	cin>> entrada;
	
	while (entrada > 0){
		armaz ++;
		if ((armaz > 0) and (armaz%5 == 0)){
			vetor = alocacao (vetor, tamanho);
			realoc ++;
		}
		
		vetor[armaz] = entrada;
		cout<< vetor[armaz]<< " ";
		cin>> entrada;
	}
	
	tamanho += (realoc*5);
	
	cout<< endl<< tamanho<< endl<< realoc<< endl;
	
	delete [] vetor;
	
return 0;
}

	
