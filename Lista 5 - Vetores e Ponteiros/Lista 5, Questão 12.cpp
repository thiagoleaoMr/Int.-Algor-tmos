// Lista 5, Questão 12 - Contando Anagramas

#include <iostream>
#include <string>
using namespace std;

int fatorial (int letras);

int main(){
	string palavra;
	cin>> palavra;
	
	int i=0;
	int ind=0;
	int posi=0;
	int tam = palavra.size();
	char *letrasRep = new char[tam];
	int *repetic = new int[tam];
	
	for (i=0; i<tam; i++)
		repetic[i] = 1;
		
	int indLetrasRep = 0;
	
	while (ind < tam){
		if (palavra[ind] != '*'){
			posi = palavra.find(palavra[ind], posi+1);
			while ((posi<tam) and (posi>0)){
				letrasRep[indLetrasRep] = palavra[ind];
				palavra[posi] = '*';
				repetic[indLetrasRep] += 1;
				posi = palavra.find(palavra[ind], posi+1);
			}
			indLetrasRep ++;	
		}
		ind ++;
		posi = ind;
	}
	
	int div = 1;
	i = 0;
	
	while ((i<tam) and (repetic[i] > 1)){
		div = div * fatorial(repetic[i]);
		i++;
	}
	
	cout<< fatorial(tam)/div<< endl;
	
	delete [] letrasRep;
	delete [] repetic;	
	
return 0;
}

int fatorial (int letras){
	if ((letras == 0) or (letras == 1))
		return 1;
	else 
		return (letras*fatorial(letras-1));
}

