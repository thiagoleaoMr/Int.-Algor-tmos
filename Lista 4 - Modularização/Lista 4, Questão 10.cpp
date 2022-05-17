// Lista 4, Questão 10 - Sequência de Tribonacci II

#include <iostream>
using namespace std;

int tribonacci (int n);

int main(){
	int num;
	cin>> num;
	
	for (int i=1; i<=num; i++)
		cout<< tribonacci(i)<< " ";

return 0;
}

int tribonacci (int n){
	if (n == 0)
		return 0;
	if ((n == 1) or (n == 2))
		return 1;
	else 
		return tribonacci (n-1) + tribonacci (n-2) + tribonacci (n-3);
}
