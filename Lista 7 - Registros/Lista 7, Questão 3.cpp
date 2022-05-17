// Lista 7, Questão 3 - Censo Municipal

#include <iostream>
#include <cmath>
using namespace std;

struct individuo{
	float salario;
	int idade;
	int qtdFilhos;
};

int main (){
	int qtd;
	cin>> qtd;
	
	individuo dados [qtd];
	
	for (int i=0; i<qtd; i++)
		cin>> dados[i].salario>> dados[i].idade>> dados[i].qtdFilhos;
		
	float mediaSal;
	float somaSal=0;
	for (int k=0; k<qtd; k++)
		somaSal = somaSal + dados[k].salario;
	mediaSal = somaSal/qtd;
	cout<< mediaSal<< endl;
	
	float mediaF;
	float somaF=0;		
	for (int j=0; j<qtd; j++)
		somaF = somaF + dados[j].qtdFilhos;	
	mediaF = somaF/qtd;
	cout<< mediaF<< endl;
	
	float maiorSal=0;
	for (int k=0; k<qtd; k++){
		if (dados[k].salario > maiorSal)
			maiorSal = dados[k].salario;
	}
	cout<< maiorSal<< endl;
	
	float percent;
	float cont=0;
	float salRef=1000;		
	for (int i=0; i<qtd; i++){
		if (dados[i].salario > salRef)
			cont++;
	}
	percent = (100*cont)/qtd;
	cout<< round(percent)<< "%";
	
return 0;
}
