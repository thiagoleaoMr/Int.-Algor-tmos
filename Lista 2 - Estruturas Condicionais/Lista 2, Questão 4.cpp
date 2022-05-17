// Lista 2, Questão 4 - Notas Enem

#include <iostream>
using namespace std;

int main(){
	float mat, nat, lin, red, hum, media;
	
	cin>> mat>> nat>> lin>> red>> hum;
	
	if (red<200){
		cout<< -1;
	}else{
		media = (mat*3 + nat*2 + lin*2 + red*2 + hum)/10;
		cout<< media;
	}	
		
return 0;
}
