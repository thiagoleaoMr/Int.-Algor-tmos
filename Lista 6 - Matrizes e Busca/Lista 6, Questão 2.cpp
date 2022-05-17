// Lista 6, Questão 2 - Elementos Abaixo da Diagonal Secundária

#include <iostream>
using namespace std;

int main(){
	int dim, soma=0;
	cin>> dim;
	
	int matriz[dim][dim];
	
	for (int i=0; i<dim; i++){
		for (int j=0; j<dim; j++)
			cin>> matriz[i][j];
	}
	
	for (int i=0; i<dim; i++){
		for (int j=0; j<dim; j++){
			if (j>(dim-1) - i){
				cout<< matriz[i][j]<< " ";
				soma += matriz[i][j];
			}
		}
	}
	
	cout<< endl<< soma;

return 0;
}
