// Lista 4, Questão 4 - Determinação de Média

#include <iostream>
using namespace std;

float media(float n1, float n2);

int main(){
	float numero1, numero2;
	
	cin>> numero1>> numero2;
	
	cout<< media(numero1, numero2);
	
return 0;
}

float media(float n1, float n2){
	float vmedia;

	vmedia = (n1 + n2)/2;		
	
return vmedia;
}

