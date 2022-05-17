// Lista 8, Questão 7 - Soma dos Maiores Elementos

#include <iostream>
using namespace std;

void insertion (int vetor[], int tamanho);

int main(){
	int tam, nK;
	cin>> tam;
	
	int vet[tam];
	for (int i=0; i<tam; i++)
		cin>> vet[i];
		
	cin>> nK;
	insertion (vet, tam);
	
	int cont=0;
	int soma=0;
	while (cont != nK){
		soma += vet[tam-1];
		tam--;
		cont++;
	}
	
	cout<< soma;

return 0;
}

void insertion (int vetor[], int tamanho){
	int pivo;
	int indice;
	
	for (int i=1; i<tamanho; i++){
		pivo = vetor[i];
		indice = i-1;
		while ((indice >= 0) and (pivo < vetor[indice])){
			vetor[indice+1] = vetor[indice];
			indice--;
		}
		vetor[indice+1] = pivo;
	}
}
