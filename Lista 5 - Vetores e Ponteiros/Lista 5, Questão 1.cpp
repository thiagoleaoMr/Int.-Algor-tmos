// Lista 5, Questão 1 - Escrever Vetor

#include <iostream>
using namespace std;

int subprog (int vetor[], int tam);

int main(){
	int qtd, i; //quantidade de numeros, auxiliar
	
	cin>> qtd;
		
	int vetor[qtd]; // vetor
	
	for (i=0; i<qtd; i++){
		cin>> vetor[i];
	}
		
	subprog (vetor, qtd);	
	cout<< endl;
	
return 0;
}

int subprog (int vet[], int tam){	
	cout<< "[";
	
	if (tam > 0){
		for (int i=0; i<tam; i++){
			if (i+1 == tam){
				cout<< vet[i]<< "]";
			}else{
				cout<< vet[i]<< ", ";
			}
		}
	}else{
		cout<< "]";
	}
	
return 0;
}
