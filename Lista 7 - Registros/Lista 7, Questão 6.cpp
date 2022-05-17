// Lista 7, Questão 6 - Notas da Prova III

#include <iostream>
using namespace std;

struct aluno{
	string matricula;
	string nome;
	int nota;
};

int main(){
	int qtdAlunos;
	cin>> qtdAlunos;
	
	aluno dados[qtdAlunos];
	
	for (int i=0; i<qtdAlunos; i++){ // dados dos alunos
		cin>> dados[i].matricula;
		cin>> dados[i].nome;
		cin>> dados[i].nota;
	}
	
	float soma=0;
	float media;	
	for (int i=0; i<qtdAlunos; i++) // media das notas
		soma += dados[i].nota;		
	media = soma/qtdAlunos;
	cout<< media<< endl;
	
	for (int i=0; i<qtdAlunos; i++){ // matricula dos alunos que zeraram a prova
		if (dados[i].nota == 0)
			cout<< dados[i].matricula<< endl;
	}
	
	float abaixoMedia=0;
	float porcent;
	for (int i=0; i<qtdAlunos; i++){ // porcentagem dos alunos que ficaram abaixo da média das notas da turma;
		if (dados[i].nota < media)
			abaixoMedia++;
	}
	porcent = (abaixoMedia*100)/qtdAlunos;
	cout<< porcent<< "%"<< endl;
	
	int maior=0;
	int indice=0;	
	for (int i=0; i<qtdAlunos; i++){ // nome do aluno com a maior nota
		if (dados[i].nota > maior){
			maior = dados[i].nota;
			indice = i;
		}
	}
	cout<< dados[indice].nome;
	
return 0;
}
