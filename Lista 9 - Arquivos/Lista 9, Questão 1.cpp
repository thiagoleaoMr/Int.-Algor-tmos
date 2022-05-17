// Lista 9, Questão 1 - Escrita Básica em Arquivos

#include <iostream>
#include <fstream>
using namespace std;

int main(){
	string nome, pal;
	cin>> nome>> pal;
	
	ofstream arquivo(nome);
	arquivo<< pal;
	arquivo.close();

return 0;
}
