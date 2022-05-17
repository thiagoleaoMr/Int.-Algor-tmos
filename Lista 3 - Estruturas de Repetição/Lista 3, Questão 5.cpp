// Lista 3, Questão 5 - Números Triangulares

#include <iostream>
using namespace std;

int main (){
	int numero, numTri, x=0;
	
	cin>> numero;
	
	if (numero == 1){
		numTri = 1;
		cout<< numTri;
		
	}else{
		numTri = numero + x;
		while ((numero - x) > 1){
			x++;
			numTri = numTri + x;
		}
		cout<< numTri;
	}	
	
	
return 0;
}
