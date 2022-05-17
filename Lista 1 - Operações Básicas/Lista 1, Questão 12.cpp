// Lista 1, Questão 12 - Representar Valor com o Menor Número de Notas

#include <iostream>
using namespace std;

int main () {
	int valor, resto, n100, n50, n20, n10, n5, n2, n1;
	
	cin>> valor;
	
	n100 = valor/100;
	resto = valor%100;
	
	n50 = resto/50;
	resto = resto%50;
	
	n20 = resto/20;
	resto = resto%20;
	
	n10 = resto/10;
	resto = resto%10;
	
	n5 = resto/5;
	resto = resto%5;
	
	n2 = resto/2;
	resto = resto%2;
	
	n1 = resto;	
	
	cout<< n100<< endl<< n50<< endl<< n20<< endl<< n10<< endl<< n5<< endl<< n2<< endl<< n1;
	
return 0;
}
