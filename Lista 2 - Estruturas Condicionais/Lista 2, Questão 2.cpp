// Lista 2, Questão 2 - Peso Ideal

#include <iostream>
using namespace std;

int main () {
	
	char sexo, F='F', M='M';
	float altura, peso_ideal; 
	
	cin>> sexo;
	cin>> altura; 
	
	if (sexo == M) {	
		peso_ideal = (72.7 * altura) - 58;
	} else if (sexo == F) { 
		peso_ideal = (62.1 * altura) - 44.7;
	} 
		
	cout<< peso_ideal;
	
	return 0;
}
