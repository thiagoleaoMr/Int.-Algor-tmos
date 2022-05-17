// Lista 6, Questão 12 - Ordem Crescente

#include <iostream>
using namespace std;

int buscaDec (int vetor[], int inicio, int fim, int buscado);

int main(){
	int tam, busca;
	cin>> tam;
	
	int vet[tam];
	for (int i=0; i<tam; i++)
		cin>> vet[i];
		
	cin>> busca;
	cout<< buscaDec(vet, 0, tam-1, busca);
	
return 0;
}

int buscaDec (int vetor[], int inicio, int fim, int buscado){
	int mid;
	
	if (inicio <= fim){
		mid = (inicio+fim)/2;
		if(buscado<vetor[mid])
			return buscaDec(vetor, mid+1, fim, buscado);
		else if (buscado > vetor[mid])
			return buscaDec(vetor, inicio, mid-1, buscado);
		else
			return mid;
	}

return -1;
}
