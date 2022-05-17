// Lista 2, Questão 3 - Passatempo dos Bandeirantes

#include <iostream>
#include <string>
using namespace std;

int main (){
	
	string cor_1;
	string cor_2;
	int N;
	
	cin>> cor_1;
	cin>> cor_2;
	cin>> N; 
	
	int N1, N2, N3, N4, N5, N6, resto;
	
	N1 = N/100000;
	resto = N%100000;
	
	N2 = resto/10000;
	resto = resto%10000;
	
	N3 = resto/1000;
	resto = resto%1000;
	
	N4 = resto/100;
	resto = resto%100;
	
	N5 = resto/10;
	resto = resto%10;
	
	N6 = resto/1;
	
	
	if ((N1 == N6) and (N2 == N5) and (N3 == N4)) {
		cout<< cor_1;
	} else {
		cout<< cor_2;
	}
	
	return 0;
}

