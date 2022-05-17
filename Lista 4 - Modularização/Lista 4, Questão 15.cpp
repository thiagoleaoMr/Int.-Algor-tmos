// Lista 4, Questão 15 - Somatório, Combinação e Fatorial

#include <iostream>
using namespace std;

int combinacao (long int fatorialNum, long int denom);
int fatorial (int n, int k);
int somatorio(int n, int k);

int main(){
	long int numero, k=1;
	cin>> numero;
	
	if (numero>0)
		cout<< somatorio (numero, k);
		
return 0;
}

int combinacao (long int fatorialNum, long int denom){
	long int div;
	div = fatorialNum/denom;
	return div;
}

int fatorial (int n, int k){
	long int fatorialNum, aux1, fatorialK=1, aux2, i;
	
	fatorialNum = 1;
	aux1 = n;
	aux2 = n;
	
	while (aux1 > 0){
		fatorialNum = fatorialNum*aux1;
		aux1--;
	}
	
	for (i=k; i> 0; i--)
		fatorialK = fatorialK*i;
		
	long int fatorialSubt;
	fatorialSubt = n - k;
	
	if ((n-k) == 0)
		fatorialSubt = 1;
	else{
		aux2 = fatorialSubt;
		fatorialSubt = 1;
		
		while (aux2 > 0){
			fatorialSubt = fatorialSubt*aux2;
			aux2--;
		}
	}
	
	long int denom = fatorialK * fatorialSubt;
	return combinacao(fatorialNum, denom);
}

int somatorio(int n, int k){
	long int soma=0;
	
	for (long int j=k; j<=n; j++)
		soma = (soma + fatorial(n, j));
	
	return soma;	
}
