#include <iostream>
using namespace std;

int main (){
	
	int numerador, denominador, quociente, subtracao;
	
	cin>> numerador;
	cin>> denominador;
	
	subtracao = denominador;
	
	while (numerador >= subtracao) {
		subtracao = subtracao + denominador;
		quociente++;
		}
	
	cout<< quociente;

}
	
	
	
	
	
	
	
	
