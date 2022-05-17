// Recursão - Fatorial e Fibonacci 

#include <iostream>
using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main (){
	int qtd, resp;
	
	cin>> qtd;
	
	resp=fatorial(qtd); 	
	cout<< endl<< "Fatorial de "<< qtd<< ": "<< resp<< endl;
	 
	cout<< endl<< "Fibonacci com "<< qtd<< " valores: "<< endl; 	
	for(int i=0; i<qtd; i++){
		cout<< fibonacci(i+1)<< endl;
	}
	
return 0;
}

int fatorial(int n){
	if(n==0){
		return 1;
	}else{
		return n*fatorial(n-1);
	}
}

int fibonacci(int n){
	if(n==1 or n==2){
		return 1;
	}else{
		return fibonacci(n-1)+fibonacci(n-2);
	}
}
