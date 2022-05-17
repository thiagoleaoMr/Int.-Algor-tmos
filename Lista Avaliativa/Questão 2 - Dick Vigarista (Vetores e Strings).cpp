// Questão 2, Lista Avaliativa - Dick Vigarista (Vetores e Strings)

#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int tamVet;
	int somHash=0;
   
	cin>>tamVet;
	string palavras[tamVet];
    
	const int UMPRIMO=37;
	const int M=15;

	for (int i=0; i<tamVet; i++){
		cin>>palavras[i];
	}
	for (int i=0; i<tamVet; i++){
		long hash=0;
		for (unsigned int j=0; j<palavras[i].size(); j++){
		hash = ((UMPRIMO*hash + palavras[i][j])%M);
		}
    
		somHash = somHash + hash; 
		cout<< hash<< " "; 
	}

	cout<<somHash;

return 0;
}
