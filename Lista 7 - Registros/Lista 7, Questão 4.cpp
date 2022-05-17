// Lista 7, Questão 4 - Disparo das Armas de Tião Gavião

#include <iostream>
using namespace std;

struct carga{
	string tipoCarga;
	int qtdDisparos;
};

struct armas{
	string nomeArma;
	string cargaTipo;
};

int main(){
	int qtdCargas, armasTiao;
	cin>> qtdCargas;
	
	carga cargasDisp[qtdCargas];
	
	for (int i=0; i<qtdCargas; i++){
		cin>> cargasDisp[i].tipoCarga;
		cin>> cargasDisp[i].qtdDisparos;
	}
	
	cin>> armasTiao;	
	armas arsenalTiao[armasTiao];
	
	for (int i=0; i<armasTiao; i++)
		cin>> arsenalTiao[i].nomeArma>> arsenalTiao[i].cargaTipo;
		
	int municao=0;
	
	for (int i=0; i<armasTiao; i++){
		int j=0;
		while(j < qtdCargas){
			if (arsenalTiao[i].cargaTipo == cargasDisp[j].tipoCarga)
				municao += cargasDisp[j].qtdDisparos;
			j++;
		}
	}
	
	cout<< municao;
	
return 0;
}
