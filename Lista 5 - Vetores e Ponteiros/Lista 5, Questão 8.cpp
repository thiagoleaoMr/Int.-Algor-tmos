// Lista 5, Questão 8 - Número Perfeito

#include <iostream>
using namespace std;

int main(){
	int n;	
	cin>> n;
	
	int cont=0;
	int div=0;
	
	for(div=1; div<n; div++){
		if((n%div)==0)
			cont = cont + div;
	}
	
	if (cont == n){
		for(int i=1; i<n; i++)
			if ((n%i) == 0)
				cout<< i<< " ";		
	}else
		cout<< "-1";		
	
return 0;
}
