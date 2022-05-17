// Lista 4, Questão 14 - Conversão Para Milhas Náuticas

#include <iostream>
#include <iomanip>
using namespace std;

float calculoMilhas(float dist, float v, float t);

int main(){
	float distancia, velocidade, tempo, distMilhas;
	cin>> distancia;
	
	while (distancia >= 0){
		cin>> velocidade;
		cin>> tempo;
		
		distMilhas = distancia/1.852;
		cout<< fixed<< setprecision(2)<< distMilhas<< " "<< calculoMilhas(distancia, velocidade, tempo)<< endl;
		cin>> distancia;
	}
		
return 0;
}

float calculoMilhas(float dist, float v, float t){
	float milhas = ((v*t)+dist)/1.852;
	return milhas;	
}
