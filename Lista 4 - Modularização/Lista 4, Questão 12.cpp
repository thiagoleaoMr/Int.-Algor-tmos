// Lista 4, Questão 12 - Somas Sucessivas

#include <iostream>
using namespace std;

int multiplicacao (int n1, int n2);

int main(){
	int num1, num2, result;
	cin>> num1>> num2;
	
	result = multiplicacao (num1, num2);
	cout<< result;
	
return 0;
}

int multiplicacao (int n1, int n2){
	if (n2 == 0)
		return n2;
	else	
		return n1 + multiplicacao (n1, n2-1);
}
