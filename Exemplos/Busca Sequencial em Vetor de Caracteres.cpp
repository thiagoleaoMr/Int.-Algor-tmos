// Busca Sequencial em Vetor de Caracteres

#include <iostream>
using namespace std;

int buscaBin(string vetorPal[], string busca, int inicio, int fim);

int main(){
	int tam;
	cin>> tam;
	
	string vetorPalavras[tam];
	
	for (int i=0; i<tam; i++){
		cin>> vetorPalavras[i];
	}
	
	string palavra;
	cin>> palavra;
	
	cout<< buscaBin (vetorPalavras, palavra, 0, tam-1)<< endl;

return 0;
}

int buscaBin(string vetorPal[], string busca, int inicio, int fim){
	if (inicio <= fim){
		int meio = (inicio + fim)/2;
		
		if (vetorPal[meio] == busca){
			return meio;
		}else if(vetorPal[meio] > busca){
			fim = meio -1;
		}else{ 
			inicio = meio +1;
		}
		
		return buscaBin(vetorPal, busca, inicio, fim);
		
	}else{
		return -1;
	}
}


