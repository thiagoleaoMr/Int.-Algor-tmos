// Trabalho Prático - Ana Carolina, Laura, Thiago

#include <iostream>
using namespace std;

struct plantas{
	int identificador;
	string nome;
	string regiaoOrigem;
	string nomeCientifico;
	string descricao;
};

void incluir () {
	plantas* ponteiro = new plantas[5];
	
	for (int i=0; i<5; i++){
		cin >> plantas[i].identificador;
		cin >> plantas[i].nome;
		cin >> plantas[i].regiaoOrigem;
		cin >> plantas[i].nomeCientifico;
		cin >> plantas[i].descricao;
	}	
	delete [] ponteiro;
}	

void excluir () {
	
}

void alterar () {
	
}

void ordenar () {
	
}

void menu (){
	cout << "Digite uma opcao: "<< endl<< endl;
	cout << "(1) incluir "<< endl;
	cout << "(2) excluir "<< endl;
	cout << "(3) listar "<< endl;
	cout << "(4) alterar "<< endl;
	cout << "(5) ordenar "<< endl;
	cout << "(6) sair "<< endl;	
}



int main(){
	int opcao;
	
	menu();
	
	cin>> opcao;
	
	while (opcao != 6){
		if (opcao == 1){
			incluir();
		}else if(opcao == 2){
			excluir();
		}else if(opcao == 3){
			
		}else if(opcao == 4){
			alterar();
		}else if(opcao == 5){
			ordenar();
		}
		menu();
		cin>> opcao;
	}	

return 0;
}
	
