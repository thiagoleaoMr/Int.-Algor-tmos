// Lista 6, Questão 15 - Busca de Sequências

#include <iostream>
using namespace std;

int main(){
	int tam1, tam2;
	cin>> tam1>> tam2;
	
	int v1[tam1], v2[tam2];
	for (int i=0; i<tam1; i++)
		cin>> v1[i];
	for (int j=0; j<tam2; j++)
		cin>> v2[j];
		
	int tamMaior=0;
	if (tam1 > tam2)
		tamMaior = tam1;
	else if (tam2 > tam1)
		tamMaior = tam2;
		
	int aux=0;
	int vrep1[aux];
	for (int k=0; k<tamMaior; k++)
		if ((v1[k] == v1[k-1]){
			if (v1[k-1] != v1[k-2])
				vrep1[aux] = v1[k-1];
				aux++;
			vrep1[aux] = v1[k];
			aux++;
		}
	
	int aux2=0;
	int vrep2[aux];
	for (int k=0; k<tamMaior; k++)
		if ((v1[k] == v2[k-1]){
			vrep2[aux2] = v2[k-1];
			aux2++;
			vrep2[aux2] = v2[k];
			aux2++;
		}
	
	int tamMaior2=0;
	if (vrep > vrep2)
		tamMaior2 = vrep;
	else if (vrep2 > vrep)
		tamMaior2 = vrep2;
		
	for (int m=0; m<tamMaior2; m++){
		for (int n=0; n<tamMaior2; n++){
			if (vrep[m] == 
			
	
	
	
	
	for (int i=0; i<tam1; i++)
		cout<< v1[i]<< " ";
	cout<< endl;
	for (int j=0; j<tam2; j++)
		cout<< v2[j]<< " ";
	
	
	
return 0;
}
