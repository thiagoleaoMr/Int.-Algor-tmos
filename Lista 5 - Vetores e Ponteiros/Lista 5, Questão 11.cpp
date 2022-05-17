// Lista 5, Questão 11 - Menor do Vetor

#include <iostream>
using namespace std;

int menor (int vet[], int p1, int p2, int &pMenor);

int main(){
	int tam;
	cin>> tam;
	
	int vet[tam];
	int menorElem;
	int posi=0;
	int i=0;
	
	for (i=0; i<tam; i++)
		cin>> vet[i];
	
	menorElem = vet[0];
	for (i=1; i<tam; i++){
		if (vet[i] < menorElem){
			menorElem = vet[i];
			posi = i;
		}
	}
	
	cout<< menor(vet, tam-1, tam-2, posi)<< " " << posi;
	
return 0;
}

int menor (int vet[], int p1, int p2, int &pMenor){
	if ((p1 >= 0) and (p2 >= 0)){
		if (vet[p1] < vet[p2]){
			pMenor = p1;
			return (menor(vet, p1, p2-1, pMenor));
		}else{
			pMenor = p2;
			return (menor(vet, p2, p2-1, pMenor));
		}
	}else{
		return vet[pMenor];
	}
}
