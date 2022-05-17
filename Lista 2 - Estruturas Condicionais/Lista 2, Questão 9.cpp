// Lista 2, Questão 9 - Dígitos Pares e Ímpares

#include <iostream>
using namespace std;

int main (){
	int num, par=0, impar=0;
	int a1, a2, a3, a4, a5, quoc;
	
	cin>> num;
	
	a5 = num%10;
	quoc = num/10;
	if (a5%2 == 0){
		par++;
	}else{
		impar++;
	}
		
	a4 = quoc%10;
	quoc = quoc/10;
	if (a4%2 == 0){
		par++;
	}else{
		impar++;
	}
	
	a3 = quoc%10;
	quoc = quoc/10;
	if (a3%2 == 0){
		par++;
	}else{
		impar++;
	}
	
	a2 = quoc%10;
	quoc = quoc/10;
	if (a2%2 == 0){
		par++;
	}else{
		impar++;
	}
	
	a1 = quoc%10;
	if (a1%2 == 0){
		par++;
	}else{
		impar++;
	}
	
	cout<< par<< endl<< impar<< endl;

return 0;
}
