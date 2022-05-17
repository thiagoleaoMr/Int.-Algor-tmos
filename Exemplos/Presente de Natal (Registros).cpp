// Registros
// Questão: Papai noel precisa de ajuda para montar a lista de crianças que merecem receber presentes neste Natal. 
// Para ajudá-lo nessa tarefa, crie um programa que receba um conjunto de registros com as informações de cada criança: 
// nome da criança, presente desejado, quantidade de boas ações e quantidade de travessuras. 
// O programa deverá então verificar quais crianças não merecem presentes (ou seja, fizeram mais travessuras que boas ações) e gerar a lista dos presentes que deverão ser dados. 
// Obs.: os nomes das crianças e os presentes nao possuem espaço. Caso nenhuma criança deva receber presentes, o programa deve impromir a palavra "nada".

#include <iostream>
using namespace std;

struct crianca {
	string nome;
	string presente;
	int boasAcoes;
	int travessuras;
};

int main (){
	int num;
	cin>> num;
	
	crianca vetorCriancas[num];
	
	bool teveCriancaComPresente = false;
	
	for (int i=0; i<num; i++) {
		cin>> vetorCriancas[i].nome;
		cin>> vetorCriancas[i].presente;
		cin>> vetorCriancas[i].boasAcoes;
		cin>> vetorCriancas[i].travessuras;
	}
	
	for (int i=0; i<num; i++) {
		if (vetorCriancas[i].boasAcoes >= vetorCriancas[i].travessuras) {
			cout<< vetorCriancas[i].presente<< endl;
			teveCriancaComPresente = true;
		}
	}
	
	if (teveCriancaComPresente == false) {
		cout<< "nada"<< endl;
	}
	
return 0;
}
		
