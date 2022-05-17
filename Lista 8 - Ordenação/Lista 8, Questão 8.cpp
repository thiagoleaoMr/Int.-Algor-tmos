// Lista 8, Questão 8 - Selection Sort Inverso

#include <iostream>
using namespace std;

void selection (int vet[], int tam);

int main(){
	int n;
	cin>> n;
	
	int vetor[n];
	for (int i=0; i<n; i++)
		cin>> vetor[i];
	
	selection(vetor, n);
	
return 0;
}

void selection (int vet[], int tam){
	int posiMenor, aux;
	
	for (int i=0; i<tam-1; i++){
		posiMenor = i;
		for (int j=i+1; j<tam; j++){
			if (vet[j] > vet[posiMenor])
				posiMenor = j;
		}
		aux = vet[i];
		vet[i] = vet[posiMenor];
		vet[posiMenor] = aux;
		
		for (int m=0; m<tam; m++)
			cout<< vet[m]<< " ";
		cout<< endl;
	}
}
