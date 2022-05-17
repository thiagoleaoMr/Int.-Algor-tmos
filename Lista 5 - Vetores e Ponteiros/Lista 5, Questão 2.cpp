// Lista 5, Questão 2 - Apagando os Múltiplos

#include <iostream>
using namespace std;

int validos (int vetor[], int tamanho);

int main (){
	int tam;	
	cin>> tam;
	
	int vet[tam];	
	for (int i=0; i<tam; i++){
		cin>> vet[i];
	}
	
	validos (vet, tam);	
	
return 0;
}

int validos (int vetor[], int tamanho){
	int cont=0;

	for (int i=0; i<tamanho; i++){
		if ((vetor[i]%3) != 0){
			cout<< vetor[i]<< " ";
			cont++;
		}else{
			vetor[i] = -1;
		}
	}
	
	cout<< endl<< cont;
			
return 0;
}
