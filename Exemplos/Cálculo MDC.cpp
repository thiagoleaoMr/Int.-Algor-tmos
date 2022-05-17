// Cálculo MDC

#include <iostream>
using namespace std;

int main(){
	int A, B, MDC, MENOR, MAIOR;
	
	cin >> A >> B;
	
	if (A >= B) {
		MAIOR = A;
		MENOR = B;
	} else {
		MAIOR = B;
		MENOR = A;
	}
 
	while ((MAIOR % MENOR) != 0) {
		MDC = MAIOR % MENOR;
		MAIOR = MENOR;
		MENOR = MDC;
	}
	
	cout << MDC << endl; 
	
 return 0;
}
