// Lista 6, Questão 9 - Imprimindo o Elemento Central

#include <iostream>
using namespace std;

int buscaBin (int vetor[], int inicio, int fim, int busca);

int main(){
	int tam, buscado;
	cin>> tam;
	
	int vet[tam];
	for (int i=0; i<tam; i++)
		cin>> vet[i];
	
	cin>> buscado;
	buscaBin(vet, 0, tam-1, buscado);
	
return 0;
}

int buscaBin (int vetor[], int inicio, int fim, int busca){
	int mid = (inicio + fim)/2;
	
	if (inicio <= fim){
		if (busca > vetor[mid]){
			cout<< vetor[mid]<< " ";
			return buscaBin(vetor, mid+1, fim, busca);
		} else if (busca < vetor[mid]){
			cout<< vetor[mid]<< " ";
			return buscaBin(vetor, inicio, mid-1, busca);
		}else{
			cout<< vetor[mid]<< " ";
			return vetor[mid];
		}
	}

return -1;
}
