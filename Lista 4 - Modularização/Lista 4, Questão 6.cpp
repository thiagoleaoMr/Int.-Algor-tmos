// Lista 4, Questão 5 - Simplificando Frações

#include <iostream>
using namespace std;

int simplif(int NUM, int& DEN);

int main(){
	int num, den;
	
	cin>> num>> den;	
	cout<< simplif(num,den)<< endl;
	cout<< den;
	
return 0;
}

int simplif(int NUM, int& DEN){
	if ((NUM%2 == 0) and (DEN%2 == 0)){
		DEN = DEN/2;
		NUM = NUM/2;
		return simplif (NUM, DEN);
	}else if((NUM%3 == 0) and (DEN%3 == 0)){
		DEN = DEN/3;
		NUM = NUM/3;
		return simplif (NUM, DEN);
	}else if((NUM%5 == 0) and (DEN%5 == 0)){
		DEN = DEN/5;
		NUM = NUM/5;
		return simplif (NUM, DEN);
	}else if((NUM%7 == 0) and (DEN%7 == 0)){
		DEN = DEN/7;
		NUM = NUM/7;
		return simplif (NUM, DEN);
	}else{
		return NUM;
	}
}
