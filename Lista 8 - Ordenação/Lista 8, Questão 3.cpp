// Lista 8, Questão 3 - Ordena Até Posição

#include <iostream>
using namespace std;

void selection (int vet[], int tam, int pos);

int main (){
	int tam, pos;
	cin>> tam;
	
	int vet[tam];
	for (int i=0; i<tam; i++)
		cin>> vet[i];
	
	cin>> pos;
	selection(vet, tam, pos);	
	for (int i=0; i<tam; i++)
		cout<< vet[i]<< " ";
	
return 0;
}

void selection (int vetor[], int tamanho, int posicao){
	int posiMenor;
	int aux;
	
	for (int i=0; i<posicao; i++){
		posiMenor = i;
		for (int j=i+1; j<posicao+1; j++){
			if (vetor[j] > vetor[posiMenor])
				posiMenor = j;
		}
		aux = vetor[i];
		vetor[i] = vetor[posiMenor];
		vetor[posiMenor] = aux;
	}
}
