// Lista 1, Questão 5 - Número de degraus

#include <iostream>
using namespace std;


int main () {
	
	float altDegrau, altDesejada;
	int numeroDegraus;

	cin>> altDegrau;
	cin>> altDesejada;
	
	numeroDegraus = altDesejada/(altDegrau/100);
	
	cout<< numeroDegraus;
		
	return 0;
}
