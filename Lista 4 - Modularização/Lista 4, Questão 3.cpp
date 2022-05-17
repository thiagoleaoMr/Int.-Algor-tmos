// Lista 4, Questão 3 - Coversão de Unidade

#include <iostream>
#include <string.h>
using namespace std;

float convMetros (float dist);
float convCent (float dist);

int main(){
	float distancia;
	string unMed;
	
	cin>> distancia;
	cin>> unMed;
	
	if (unMed == "metro")
		cout<< convMetros(distancia)<< " "<< "m";
	else if (unMed == "centimetro")
		cout<< convCent (distancia)<< " "<< "cm";
	else
		cout<< "ERRO";
	
return 0;
}

float convMetros (float dist){
	float distConv;
	distConv = dist/100;
	return distConv;
}

float convCent (float dist){
	float distConv;
	distConv = dist*100;
	return distConv;	
}
