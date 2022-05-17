// Lista 1, Questão 6 - Caravelas de Cabral

#include <iostream>
using namespace std;

int main (){
	int homens, caravela;
	
	cin>> homens;
	
	if (homens > 1000){
		caravela =(homens - 1000)/80;
		if ((homens - 1000)%80 > 0){
			caravela++;
		}
	}else{
		caravela = 0;
	}
		
	cout<< caravela;
	
return 0;
}
