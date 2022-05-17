// Lista 9, Questão 2 - Leitura Básica de Arquivos

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nome, pal;
	cin>> nome;
	
	ifstream arquivo(nome);
	if (arquivo){
		while(arquivo>> pal)
			cout<< pal;
		arquivo.close();
	}

return 0;
}
