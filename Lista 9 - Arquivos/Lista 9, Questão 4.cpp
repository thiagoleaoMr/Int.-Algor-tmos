#include <iostream>
#include <fstream>
using namespace std;

int main (){
	
	ifstream arquivo ("numeros");
	ofstream arquivoPar ("pares");
	ofstream arquivoImpar ("impares");
	
	if (arquivo){
		
		int entrada;
		
		while (arquivo >> entrada){
			if (entrada%2 == 0){
				if (arquivoPar){
					arquivoPar << entrada << " ";
				}
			} else {
				if (arquivoImpar){
					arquivoImpar << entrada << " ";
				}
			}
		}
	}
	
	arquivoImpar.close();
	arquivoPar.close();
	arquivo.close();
	
	return 0;
	
}
				
		
