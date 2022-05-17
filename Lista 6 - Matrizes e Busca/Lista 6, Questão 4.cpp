// Lista 6, Questão 4 - Correção de Provas de Múltipla Escolha

#include <iostream>
using namespace std;

int main(){
	char prova[11][8];
	
	for (int i=0; i<11; i++){
		for (int j=0; j<8; j++)
			cin>> prova[i][j];
	}
	
	float corretas=0;
	int aprovados=0;
	
	for (int i=1; i<11; i++){
		for (int j=0; j<8; j++)
			if (prova[i][j] == prova[0][j])
				corretas++;	
				
		cout<< (corretas/8*100)<< endl;
		
		if ((corretas/8*100)>60)
			aprovados++;
		corretas=0;
	}
	
	cout<< endl;
	cout<< (aprovados*10);
	
return 0;
}
