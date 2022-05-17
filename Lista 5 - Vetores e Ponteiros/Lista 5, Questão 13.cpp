// Lista 5, Questão 13 - Horas e Minutos

#include <iostream>
using namespace std;

void hrMin (int min, int *h, int *m);

int main(){
	int tempo, *hrs, *min;
	
	hrs = new int;
	min = new int;
	
	cin>> tempo;
	hrMin (tempo, hrs, min);
	
	cout<< *hrs<< endl<< *min<< endl;
	
	delete hrs;
	delete min;
	
return 0;
}

void hrMin (int min, int *h, int *m){
	*h = (min/60);
	*m = (min%60);
}
