// Lista 3, Questão 6 - Sequência de Fibonacci

#include <iostream>
using namespace std;

int main (){
	int n, fn, n1=0, n2=1;
	
	cin>> n;
	cout<< 0<< endl;
	
	while (n>=2){
		fn = n1 + n2;
		n2 = n1;
		n1 = fn;
		n--;
			
		cout<< fn<< endl;
	}

return 0;
}
