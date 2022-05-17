// Questão 3, Lista Avaliativa - Armazém (Ponteiros)

#include <iostream>
using namespace std;

int main(){
	int mat[2][2][3]; // matriz 2x2x3
	int ***ptr; // ponteiro da matriz
	int n; // produto a ser procurado
	int pdt=0; // produto encontrado
  
	ptr = new int **[2];
	
	for(int i=0; i<2; i++){
		ptr[2] = new int *[2];
		for(int j=0; j<2; j++){
			ptr[2][2] = new int [3];
			for(int k=0; k<3; k++){
				cin>> mat[i][j][k];
			} 
		}
	}
 
	cin>> n;
  
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			for(int k=0; k<3; k++){
				if (mat[i][j][k] == n){
				cout<< i<< " "<< j<< " "<< k<< endl;
				pdt++;
				}
			}
		}
	}
  
	if(pdt == 0){
		cout<< "-1";
	}
 
	delete[] ptr;
  
return 0;  
}
