// Lista 4, Questão 2 - Qual é o Mês

#include <iostream>
#include <string.h>
using namespace std;

string mes (int numero_mes){
	if (numero_mes == 1){
		return "janeiro";
	} else if (numero_mes == 2){
		return "fevereiro";	
	} else if (numero_mes == 3){
		return "marco";	
	} else if (numero_mes == 4){
		return "abril";	
	} else if (numero_mes == 5){
		return "maio";	
	} else if (numero_mes == 6){
		return "junho";	
	} else if (numero_mes == 7){
		return "julho";	
	} else if (numero_mes == 8){
		return "agosto";	
	} else if (numero_mes == 9){
		return "setembro";	
	} else if (numero_mes == 10){
		return "outubro";	
	} else if (numero_mes == 11){
		return "novembro";	
	} else if (numero_mes == 12){
		return "dezembro";	
	} else {
		return "erro";
	}
}

int main (){
	
	int numeroMes;
	
	cin>> numeroMes;
	cout<< mes (numeroMes);
	
	return 0;
}
