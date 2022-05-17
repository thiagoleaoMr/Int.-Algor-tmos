// Lista 4, Questão 8 - Soma de Parcelas

#include <iostream>
using namespace std;

float parcelas (int N);

int main (){
	int n;
	
	cin>> n;
	cout<< parcelas(n);
	
return 0;
}

float parcelas (int N){
	double S=0, x=1;
	int i=0;
	
	while (i<N){
		S = S + ((x*(x+1))/(x+3));
		i++;
		x++;
	}
	
return S;
}
