// Lista 8, Questão 5 - Pagamento de Pessoal

#include <iostream>
using namespace std;

struct funcionario{
	int identificador;
	float hrsTrabalhadas;
	float valorHr;
	float salario;
};

void leituraVetor(funcionario vet[], int nMax){
	for(int i=0; i<nMax; i++){
		cin>> vet[i].identificador;
		cin>> vet[i].hrsTrabalhadas;
		cin>> vet[i].valorHr;
		vet[i].salario = vet[i].valorHr * vet[i].hrsTrabalhadas;
	}
};

void bubble_sort(funcionario vet[], int nMax){
	funcionario auxTroca;
	for (int i=0; i<nMax - 1; i++){
		for (int j=0; j<(nMax-1-i); j++){
			if (vet[j].salario > vet[j+1].salario){
				auxTroca = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = auxTroca;
			}
		}
	}
}

void saidaVetor(funcionario vet[], int nMax){
	for(int i=0; i<nMax; i++){
		cout<< vet[i].identificador<< " ";
		cout.precision(2);
		cout<< fixed<< vet[i].salario<< endl;
	}
}

int main(){
	int qtdeFuncionarios;
	cin>> qtdeFuncionarios;
	
	funcionario vetorFuncionarios[qtdeFuncionarios];	
	leituraVetor(vetorFuncionarios, qtdeFuncionarios); //leitura de dados	
	bubble_sort(vetorFuncionarios, qtdeFuncionarios); //ordenacao por salarios	
	saidaVetor(vetorFuncionarios, qtdeFuncionarios); // saida dos funcionarios já ordenados;
	
return 0;
}
