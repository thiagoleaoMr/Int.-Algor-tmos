// Lista 6, Questão 14 - Busca Dentro de Um Vetor

#include <iostream>
using namespace std;

int posicao(int vet[], int tam, int busca);

int main(){
	int N, A;
	cin>> N;
	
	int V[N];
	for (int i=0; i<N; i++)
		cin>> V[i];
	
	cin>> A;
	cout<< posicao(V, N, A);

return 0;
}

int posicao(int vet[], int tam, int busca){
	int ini=0;
	int fim=tam-1;
	int mid=(ini+fim/2);
	
	while (ini <= fim){
		mid = (ini + fim)/2;
		if (busca == vet[mid])
			return mid;
		else{
			if (busca > vet[mid])
				ini = mid+1;
			else
				fim = mid-1;
		}
	}
	
return -1;
}			
