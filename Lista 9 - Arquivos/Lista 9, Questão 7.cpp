#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;

float* alocacao (float *vet, int tam, int novoTam){
	
	float *novoVet = new float [novoTam];
	
	for (int i=0; i<novoTam; i++){
		novoVet[i] = vet[i];
	}
	
	delete [] vet;
	return novoVet;

}

int main (){
	
	int tam = 200;
	float *vet = new float [tam];
	
	string nomeArquivo;
	cin >> nomeArquivo;
	
	int novoTam = 0;
	int indice = 0;
	float media;
	float auxiliar;
	
	ifstream arquivo (nomeArquivo.c_str());
	
	if (arquivo){
		while (arquivo >> media){
			if (arquivo >> auxiliar){
				media = media + auxiliar;
				media = media/2;
			}
			vet[indice] = media;
			novoTam ++;
			indice ++;
		}
		vet = alocacao (vet, tam, novoTam);
		for (int i=novoTam-1; i>=0; i--){
			cout << vet[i] << " ";
		}
	}
	
	arquivo.close();
	
	return 0;
	
}
