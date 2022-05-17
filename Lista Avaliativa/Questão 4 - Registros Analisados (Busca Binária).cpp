// Questão 4, Lista Avaliativa - Registros Analisados (Busca Binária) 

#include <iostream>
using namespace std;

struct alunos{
	int matricula; // nº matricula
	string nome; // nome do aluno
};

int main(){
	int elem, busca; // nº de elementos, matricula a buscar
	int posIni, posFim, met; // posição inicial, posição final, metade
	int i; // auxiliar

	cin>> elem;
	
	posIni = 0;
	posFim = elem-1;
	
	alunos vet[elem];
	
	for(i=0; i<elem; i++){
		cin>> vet[i].matricula;
		cin>> vet[i].nome;
	}
	
	cin>> busca;
	
	while(posIni <= posFim){
		met = (posIni + posFim)/2;
		
		if(busca == vet[met].matricula){
			cout<< busca<< endl;
			cout<< vet[met].nome;
			posIni = posFim+1;
		}else if(busca > vet[met].matricula){
			cout<< vet[met].matricula<< endl;
			posIni = met+1;
		}else{
			cout<< vet[met].matricula<< endl;
			posFim = met-1;
		}
	}

return 0;
}
