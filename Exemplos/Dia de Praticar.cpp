// Dia de Praticar

#include <iostream>
using namespace std;

enum diasUteis {segunda=2,terca,quarta,quinta,sexta};

int main() {
	int dia;
	
	cin >> dia;
	
	if (dia == segunda) 
		cout << "Segunda e dia de praticar algoritmos" << endl;
	else if (dia == terca)
		cout << "Terca e dia de praticar algoritmos" << endl;
	else if (dia == quarta)
		cout << "Quarta e dia de praticar algoritmos" << endl;
	else if (dia == quinta)
		cout << "Quinta e dia de praticar algoritmos" << endl;
	else if (dia == sexta)
		cout << "Sexta e dia de praticar algoritmos" << endl;
	else
		cout << "Nao e dia útil? Otimo para praticar algoritmos!" << endl;

return 0;
}
