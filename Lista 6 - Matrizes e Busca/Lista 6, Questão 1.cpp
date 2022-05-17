// Lista 6, Questão 1 - Minimax

#include <iostream>
using namespace std;

int minimax(int *matriz, int &linha, int &coluna);

int main(){
	int *entrada = new int[100];
	int L = 0;
	int C = 0;
	
	for (int i=0; i<100; i++)
		cin>> *(entrada+i);
		
	cout<< minimax(entrada, L, C)<< endl;
	cout<< L<< " "<< C<< endl;
	
	delete [] entrada;	
	
return 0;
}
int minimax(int *matriz, int &linha, int &coluna){
	int maior = *matriz;
	
	for (int i=0; i<100; i++){
		if (*(matriz+i) > maior){
			maior = *(matriz+i);
			linha = i/10;
		}
	}
	
	int menor = *(matriz+(linha*10));
	
	for (int j=0; j<10; j++){
		if (*(matriz+(linha*10)+j) < menor){
			menor = *(matriz+(linha*10)+j);
			coluna = j;
		}
	}
	
return menor;
}
