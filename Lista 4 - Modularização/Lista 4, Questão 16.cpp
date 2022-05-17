// Lista 4, Questão 16 - Sequência de Fibonacci

#include <iostream>
using namespace std;

int fibonacci (int n);

int main (){
	int num, cont;
	cin>> num;
	
	for (cont=0; cont<num; cont++)
		cout<< fibonacci(cont)<< " ";	
	
return 0;
}

int fibonacci (int n){
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else 
		return fibonacci (n-1) + fibonacci (n-2);
}
