#include <iostream>
#include <string.h>
using namespace std;

struct SabredeLuz {
	string cor;
	string cristal;
};

struct Jedi {
	string nome;
	string classe;
	SabredeLuz sabre;
};

int main (){
	
	int quantidadeJedis;
	cin >> quantidadeJedis;
	
	Jedi vetor[quantidadeJedis];
	
	for (int i=0; i<quantidadeJedis; i++){
		cin >> vetor[i].nome;
		cin >> vetor[i].classe;
		cin >> vetor[i].sabre.cor;
		cin >> vetor[i].sabre.cristal;
	}
	
	string corProcurada;
	cin >> corProcurada;
	
	int quantidadeC = 0;
	int quantidadeM = 0;
	int quantidadeP = 0;
	
	for (int i=0; i<quantidadeJedis; i++){
		if (vetor[i].classe == "Cavaleiro"){
			if (vetor[i].sabre.cor == corProcurada){
				quantidadeC ++;
			}
		} else if (vetor[i].classe == "Mestre"){
			if (vetor[i].sabre.cor == corProcurada){
				quantidadeM ++;
			}
		} else if (vetor[i].classe == "Padawan"){
			if (vetor[i].sabre.cor == corProcurada){
				quantidadeP ++;
			}
		}
	}
	
	int auxC=0;
	int auxM=0;
	int auxP=0;
	
	for (int i=0; i<quantidadeJedis; i++){	
		if (vetor[i].classe == "Cavaleiro")
			if (auxC==0){
				cout<< "Cavaleiro" << " " << quantidadeC << endl;
				auxC++;
			}
			
		if (vetor[i].classe == "Mestre")
			if (auxM==0){
				cout << "Mestre" << " " << quantidadeM << endl;
				auxM++;
			}
			
		if (vetor[i].classe == "Padawan")
			if (auxP==0){
				cout << "Padawan" << " " << quantidadeP<< endl;
				auxP++;
			}

	}
	
	return 0;

}
		
				
	
	
