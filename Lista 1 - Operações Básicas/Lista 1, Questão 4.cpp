// Questão 4 - Área do trapézio

#include <iostream>
#include <cmath>
using namespace std;

float bMaior, bMenor, altura, area;

int main () {
	
	cin>> bMaior;
	cin>> bMenor;
	cin>> altura;
	
	area = ((bMaior + bMenor) * altura)/2;	
	cout<< area;
	
	return 0;	
}
