// Questão 2 - Salário a receber

#include <iostream>
#include <cmath>
using namespace std;

float salMin, hTrab, salBruto, valHora, imposto, salFinal;

int main () {
	
	cin>> salMin;
	cin>> hTrab;
	
	valHora = 0.05 * salMin;
	salBruto = hTrab * valHora;
	salFinal = salBruto * 0.77; 
	
	cout<< salFinal;	
	
	return 0; 
}
