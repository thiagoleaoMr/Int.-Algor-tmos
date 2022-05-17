// Lista 7, Questão 2 - Peso Ideal

#include <iostream>
using namespace std;

struct pessoa{
	string nome;
	char sexo;
	float altura;
	float peso;
};

int main(){
	int qtd;
	cin>> qtd;
	
	pessoa dados[qtd];	
	for(int i=0; i<qtd; i++)
		cin>> dados[i].nome>> dados[i].sexo>> dados[i].altura>> dados[i].peso;
		
	float maior=0;
	int indice=0;	
	for (int j=0; j<qtd; j++){
		if (dados[j].peso > maior){
			maior = dados[j].peso;
			indice = j;
		}
	}
	cout<< dados[indice].nome<< endl;
	
	float pesoHideal;
	float pesoMideal;
	
	for (int k=0; k<qtd; k++){		
		if (dados[k].sexo == 'H'){
			pesoHideal = 72.7 * dados[k].altura - 58;
			if (dados[k].peso > pesoHideal)
				cout<< dados[k].nome<< " "<< (pesoHideal - dados[k].peso)<< endl;
			
		}else if(dados[k].sexo == 'M'){
			pesoMideal = 62.1 * dados[k].altura - 44.7;
			if(dados[k].peso > pesoMideal)				
				cout<< dados[k].nome<< " "<< (pesoMideal - dados[k].peso)<< endl;
		}
	}
	
	for (int k=0; k<qtd; k++){
		if (dados[k].sexo == 'H'){
			pesoHideal = 72.7 * dados[k].altura - 58;
			if (dados[k].peso < pesoHideal)
				cout<< dados[k].nome<< " "<< (pesoHideal - dados[k].peso)<< endl;
			
		}else if(dados[k].sexo == 'M'){
			pesoMideal = 62.1 * dados[k].altura - 44.7;
			if (dados[k].peso < pesoMideal)
				cout<< dados[k].nome<< " "<< (pesoMideal - dados[k].peso)<< endl;
		}
	}
	
return 0;
}
