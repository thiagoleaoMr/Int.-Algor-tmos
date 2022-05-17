// Questão 3 - Conversão de salário

#include <iostream>
#include <cmath>
using namespace std;

float real, dolar, euro, libra;

int main () {
	
	cin>> real;
	
	dolar = real / 2.13;
	euro = real / 2.84;
	libra = real / 3.34;
	
	cout<< dolar << endl;
	cout<< euro << endl;
	cout<< libra << endl;
	
	return 0;
}
