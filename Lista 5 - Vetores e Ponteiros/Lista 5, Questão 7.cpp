// Lista 5, Questão 7 - Contar Vogais e Consoantes

#include <iostream>
#include <string>
using namespace std;

int main(){
	string pal;	// palavra
	cin>> pal;
	
	int tamanho;
	tamanho = pal.size(); // contar tamanho da palavra 
	
	int cont1=0, cont2=0;
	for(int i=0; i<tamanho; i++){
		if ((pal[i] == 'a')or(pal[i] == 'e')or(pal[i] == 'i')or(pal[i] == 'o')or(pal[i] == 'u')or(pal[i] == 'A')or(pal[i] == 'E')or(pal[i] == 'I')or(pal[i] == 'O')or(pal[i] == 'U')){
			cont1++;
		}else{
			cont2++;
		}
	}
	
	cout<< cont1<< endl<< cont2;
	
return 0;
}
