// Lista 4, Questão 7 - Passagem por Referência

#include <iostream>
using namespace std;

void soma (int n1, int n2, int& result);
	
int main (){

	int numero1, numero2, s;	
	
	cin>> numero1;
	cin>> numero2;
	
	soma (numero1, numero2, s);
	cout<< s;
	
	return 0;
}

void soma (int n1, int n2, int& result){
	result = (n1 + n2);
}
