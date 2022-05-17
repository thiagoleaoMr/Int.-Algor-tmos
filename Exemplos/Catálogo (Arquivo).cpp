#include <iostream>
#include <fstream>
using namespace std;

struct dados{
	string nome;
	int CPF;
	string email;
};

void menu(){
	cout<< "Digite uma das opcoes a seguir:\n";
	cout<<"1 - Ler dados a partir de um arquivo e imprimir\n";
	cout<<"2 - Ler dados a partir do teclado e adicionar os dados lidos ao arquivo\n";
	cout<<"3 - Imprimir os dados do arquivo ordenados pelo campo 'nome'\n";
	cout<<"4 - Imprimir os dados do arquivo ordenados pelo campo 'CPF'\n";
	cout<<"5 - Buscar um conjunto de informacoes a partir do campo 'CPF'\n"; 
	cout<<"6 - Sair\n";
}

int main(){
	int opcao;
	//Exibe menu
	menu();
	
	cin >> opcao;
	
	while (opcao !=6){ 
		if (opcao == 1){
			
			//Ler dados a partir de um arquivo e imprimir
		}	
		if (opcao == 2){
			//Ler dados a partir do teclado e adicionar os dados lidos ao arquivo
		}
		if (opcao == 3){
			//Imprimir os dados do arquivo ordenados pelo campo 'nome'
		}
		if (opcao == 4){ 
			//Imprimir os dados do arquivo ordenados pelo campo 'CPF'
		}
		if (opcao == 5){
			//Buscar um conjunto de informações a partir do campo 'CPF'
		}
		if (opcao == 6){ 
			//Sair
			exit(0);
		}
		if (opcao <1 or opcao > 6){
			cout << "Opção inválida." << endl;	
		}
		menu();
		cin >> opcao;
	}
    return 0;
}
