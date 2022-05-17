// Lista 6, Questão 6 - Itinerário

#include <iostream>
using namespace std;

int main(){
	float custos[4][4];
	
	for (int i=0; i<4; i++){
		for (int j=0; j<4; j++)
			cin>> custos[i][j];
	}
	
	int totalCidades;
	cin>> totalCidades;	
	int cidades[totalCidades];
	float custoTotal=0;
	
	
	for (int i=0; i<totalCidades; i++)
		cin>> cidades[i];
		
	for (int i=0; i<totalCidades-1; i++)
		custoTotal = custoTotal + custos[cidades[i]][cidades[i+1]];
		
	cout<< custoTotal;
	
return 0;
}
