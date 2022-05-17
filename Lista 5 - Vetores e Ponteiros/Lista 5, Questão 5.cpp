// Lista 5, Questão 5 - Contar Vogais

#include <iostream>
#include <string>
using namespace std;

int main(){
	string pal;	// palavra
	cin>> pal;
	
	int tamanho;
	tamanho = pal.size(); // contar tamanho da palavra 
	
	int cont=0;
	for(int i=0; i<tamanho; i++){
		if ((pal[i] == 'a')or(pal[i] == 'e')or(pal[i] == 'i')or(pal[i] == 'o')or(pal[i] == 'u')){
			cont++;
		}
	}
	
	cout<< cont;
	
return 0;
}
