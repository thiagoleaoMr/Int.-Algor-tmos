// Lista 5, Questão 6 - Palavras Justificadas

#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;	
	cin>> n;
	
	string palavra[n];	
	int maior=0;
	int tamanho=0;
	
	for (int i=0; i<n; i++){ // entra as palavras e indentifica a maior
		cin>> palavra[i];		
		tamanho = palavra[i].size();
		if (tamanho > maior)
			maior = tamanho;
	}
	
	for (int j=0; j<n; j++){ // acrescenta asteriscos até ficar do tamanho da maior
		tamanho = palavra[j].size();
		while (tamanho < maior){
			cout<< "*";
			tamanho += 1;
		}
		cout<< palavra[j]<< endl;
	}

return 0;
}
