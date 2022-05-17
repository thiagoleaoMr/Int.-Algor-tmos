// Lista 7, Questão 5 - Idade de Várias Pessoas

#include <iostream>
using namespace std;

struct Pessoa{
	string nome;
	int dia;
	int mes;
	int ano;
};

int main(){
	int totalPessoas;
	cin>> totalPessoas;
	
	Pessoa lista[totalPessoas];
	
	for (int i=0; i<totalPessoas; i++)
		cin>> lista[i].nome>> lista[i].dia>> lista[i].mes>> lista[i].ano;
		
	int diaRef, mesRef, anoRef;
	cin>> diaRef>> mesRef>> anoRef;
	
	for (int i=0; i<totalPessoas; i++){
		if (lista[i].ano > anoRef){ // ainda não nasceu
			cout<< lista[i].nome<< ": -1"<< endl;
		}else if(lista[i].ano == anoRef){ // mesmo ano
			if (lista[i].mes < mesRef){
				cout<< lista[i].mes<< ": 0 ano"<< endl;
			}else if (lista[i].mes == mesRef){
				if (lista[i].dia <= diaRef){
					cout<< lista[i].nome<< ": 0 ano"<< endl;
				}else{
					cout<< lista[i].nome<< ": -1"<< endl; // ainda não nasceu
				}
			}else{
				cout<< lista[i].nome<< ": -1"<< endl; // ainda não nasceu
			}
		}else{ // anos diferentes
			if ((anoRef - lista[i].ano) == 1){
				if (mesRef < lista[i].mes)
					cout<< lista[i].nome<< ": 0 ano"<< endl;
				else
					cout<< lista[i].nome<< ": 1 ano"<< endl;
			}else{
				if (lista[i].mes == mesRef){ // mesmo mês
					if (lista[i].dia < diaRef)
						cout<< lista[i].nome<< ": "<< (anoRef - lista[i].ano)<< " anos"<< endl;
					else
						cout<< lista[i].nome<< ": "<< (anoRef - lista[i].ano)+1<< " anos"<< endl;
				}else if (lista[i].mes < mesRef){ // meses diferentes
					cout<< lista[i].nome<< ": "<< (anoRef - lista[i].ano)<< " anos"<< endl;
				}else{
					cout<< lista[i].nome<< ": "<< (anoRef - lista[i].ano)-1<< " anos"<< endl;
				}
			}
		}
	}

return 0;
}
