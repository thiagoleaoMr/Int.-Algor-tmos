// Lista 1, Questão 13 - Conversão de Milissegundos para Horário

#include <iostream>
#include <iomanip>
using namespace std;

int main () {
	int mseg, h, min, resto;
	float seg;

	cin>> mseg;
	
	h = mseg/3600000;
	resto = mseg%3600000;
	
	min = resto/60000;
	resto = resto%60000;
	
	seg = resto/1000.0;
		
	cout<< h<< " : "<< min<< " : "<< fixed<< setprecision(1) << seg;	
	
return 0;
}
