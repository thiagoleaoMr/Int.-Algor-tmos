// Lista 1, Questão 8 - Distância entre Dois Pontos

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	float x1, y1, x2, y2, distancia;
	
	cin>> x1;
	cin>> y1;
	cin>> x2;
	cin>> y2;
	
	distancia = sqrt (((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1) ));
	
	cout<< distancia;

return 0;
}
