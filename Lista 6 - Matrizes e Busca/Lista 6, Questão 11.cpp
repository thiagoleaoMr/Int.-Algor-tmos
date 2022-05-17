// Lista 6, Questão 11 - Número de Comparações

#include <iostream>
using namespace std;

int buscaComp(int vetor[], int inicio, int fim, int& mid, int busca, int& encontrado);

int main(){
	int tam, buscado;
	cin>> tam;
	
	int vet[tam];
	for (int i=0; i<tam; i++)
		cin>> vet[i];
		
	cin>> buscado;
	
	int ini=0;
	int fimm=tam-1;
	int mid=(ini+fimm)/2;
	int encontrado=0; 
	int comparacoes;
	
	comparacoes = buscaComp(vet, ini, fimm, mid, buscado, encontrado);
	
	if(encontrado != 0){
		cout<< mid<< endl;
		cout<< comparacoes;
	}else{
		cout<< "-1"<< endl;
		cout<< comparacoes;
	}

return 0;
}

int buscaComp(int vetor[], int inicio, int fim, int& mid, int busca, int& encontrado){
	int comp=0; // comparaçoes
	
	while (inicio <= fim){
		mid = (inicio + fim)/2;
		if (busca == vetor[mid]){
			inicio = fim+1;
			comp++;
			encontrado++;
		}else{
			if (busca > vetor[mid]){
				inicio = mid+1;
				comp++;
			}else{
				fim = mid-1;
				comp++;
			}
		}
	}
	
return comp;
}
