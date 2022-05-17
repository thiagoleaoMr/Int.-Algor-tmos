// Lista 5, Questão 9 - Separando Ímpares e Pares

#include <iostream>
using namespace std;

int main(){
	int vet[20];
	int vetP[20];
	int vetI[20];
	int p=0, i=0, j=0;
	
	for (j=0; j<20; j++){
		cin>> vet[j];
		
		if ((vet[j]%2) == 0){
			vetP[p] = vet[j];
			p++;
		}else{
			vetI[i] = vet[j];
			i++;
		}
	}
	
	for (j=0; j<p; j++){
		cout<< vetP[j]<< " ";
	}
	
	cout<< endl;
	
	for (j=0; j<i; j++){
		cout<< vetI[j]<< " ";
	}
		
return 0;
}
