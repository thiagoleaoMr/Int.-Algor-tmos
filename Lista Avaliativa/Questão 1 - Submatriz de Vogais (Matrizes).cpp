// Questão 1, Lista Avaliativa - Submatriz de Vogais (Matrizes)

#include <iostream>
using namespace std;

int main (){
	int dim; // dimensão da matriz	
	cin>> dim;
	
	char mat[dim][dim]; // elementos da matriz (maiusc)

	
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			cin>> mat[i][j];
		}
	}
	
	char** submat = new char*[2];
	for(int i=0; i<2; i++){
		submat[i] = new char[2];
	}
	
	int cont=0, col=0, lin=0;	
	for(int i=0; i<dim; i++){
		for(int j=0; j<dim; j++){
			if((mat[i][j]=='A') or (mat[i][j]=='E') or (mat[i][j]=='I') or (mat[i][j]=='O') or (mat[i][j]=='U')){
				if((mat[i][j+1]=='A') or (mat[i][j+1]=='E') or (mat[i][j+1]=='I') or (mat[i][j+1]=='O') or (mat[i][j+1]=='U')){
					i++;
					if((mat[i][j]=='A') or (mat[i][j]=='E') or (mat[i][j]=='I') or (mat[i][j]=='O') or (mat[i][j]=='U')){
						if((mat[i][j+1]=='A') or (mat[i][j+1]=='E') or (mat[i][j+1]=='I') or (mat[i][j+1]=='O') or (mat[i][j+1]=='U')){
							cont++;
							i--;
							
							while(col < 2){
								while(lin < 2){
									submat[col][lin] = mat[i][j];
									lin++;
									j++;
								}
								col++;
								lin = 0;
								
								i++;
								j = j-2;
							}
							i=dim;
							j=dim;
						}
					}
				}
			}
		}
	}
	
	if(cont == 1){
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				cout<< submat[i][j]<< " "<< endl;
			}
		}
	}else{
		cout<< "submatriz nao encontrada"<< endl;
	}
	for(int i=0; i<2; i++){
		delete[] submat[i];
	}
	delete[] submat;
	
return 0;
}
