// Lista 5, Questão 4 - Inserção em um Vetor

#include <iostream>
using namespace std;

int main(){
	int vetor[10];
	int i=0; // aux
	int k; // quantidade a se ler
	int n; // novo elemento
	int p; // posição do novo elemento;
	
	cin>> k;
		
	for (i=0; i<k; i++) // atribuir os k elementos ao vetor
		cin>> vetor[i]; 
	
	for (i=k; i<10; i++) // completar o vetor com 0
		vetor[i] = 0;
		
	cin>> n;
	cin>> p;	
	
	for(i=9; i>p; i--) // deslocar todos os elementos depois de p para o lado
		vetor[i] = vetor[i-1];
	
	for(i=0; i<10; i++) // atribuir o valor n na posição p
		vetor[p] = n;
		
	for(i=0; i<10; i++) // imprimir o novo vetor
		cout<< vetor[i]<< " ";

return 0;	
}
