// Lista 1, Questão 9 - Encontrar a embalagem

#include <iostream>
#include <cmath>
using namespace std;

int serieProd, serieCaixa;

int main () {
	
	cin>> serieProd;
	
	serieCaixa = ceil ((float) serieProd/6);
	
	cout<< serieCaixa;
	
return 0;
}

