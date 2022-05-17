// Lista 4, Questão 13 - Funções Mutuamente Recursivas

#include <iostream>
using namespace std;

int H (unsigned int x);
int F (unsigned int x);

int main(){
	unsigned int n;
	cin>> n;	
	cout<< F(n);	
	
return 0;
}

int H (unsigned int x){
	if (x == 0)
		return 0;
	else
		return H(x-1) + F(x-1);	
}

int F (unsigned int x){
	if (x == 0)
		return 1;
	else if (x%2 == 0)
		return 2*H(x) + F(x-1);
	else
		return 2*H(x) - F(x-1);
}
