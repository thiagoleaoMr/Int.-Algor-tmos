// Lista 2, Questão 10

#include <iostream>
#include <string>
using namespace std;

int main (){
	string cor1, cor2, result;
	
	cin>> cor1>> cor2;

	if (((cor1 == "azul") and (cor2 == "amarelo")) or ((cor1 == "amarelo") and (cor2 == "azul")) ){
		result = "verde";
	}else if (((cor1 == "azul") and (cor2 == "vermelho")) or ((cor1 == "vermelho") and (cor2 == "azul"))){
		result = "violeta";
	}else if (((cor1 == "vermelho") and (cor2 == "amarelo")) or ((cor1 == "amarelo") and (cor2 == "vermelho"))){
		result = "laranja";
	}else if (cor1 == cor2){
		result = cor1;
	}

	cout<< result;

return 0;
}
