// Lista 5, Questão 3 - Trocando Elementos de Dois Vetores

#include <iostream>
using namespace std;

int main(){
	int aux1, aux2;
	char A[10];
	char B[10];
		
	for (int i=0; i<10; i++){ // caracteres vetor A
		cin>> A[i];
	}
	for (int i=0; i<10; i++){ // caracteres vetor B
		cin>> B[i];			
	}
	
	aux1 = A[0];
	aux2 = B[9];
	for (int i=0; i<10; i++){ // trocar 1 e 10
		A[0] = aux2;
		B[9] = aux1;
	}	
	
	aux1 = A[2];
	aux2 = B[8];
	for (int i=0; i<10; i++){ // trocar 3 e 9
		A[2] = aux2;
		B[8] = aux1;
	}
	
	aux1 = A[4];
	aux2 = B[7];
	for (int i=0; i<10; i++){ // trocar 5 e 8
		A[4] = aux2;
		B[7] = aux1;
	}
	
	aux1 = A[6];
	aux2 = B[6];
	for (int i=0; i<10; i++){ // trocar 7 e 7
		A[6] = aux2;
		B[6] = aux1;
	}	
	
	aux1 = A[8];
	aux2 = B[5];
	for (int i=0; i<10; i++){ // trocar 9 e 6
		A[8] = aux2;
		B[5] = aux1;
	}
	
	for (int i=0; i<10; i++){ // saida novo A
		cout<< A[i]<< " ";
	}
	
	cout<< endl;
	
	for (int i=0; i<10; i++){ // saida novo B
		cout<< B[i]<< " ";
	}
	
	
return 0;	
}

