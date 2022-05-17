// Área de Triângulos com Seletor Bidirecional 

#include <iostream>
#include <cmath>
using namespace std;

int main(){
	int A, B, C;
	float P, Area;
	
	cin >> A >> B >> C;
	
	if (A < (B + C) and B < (A + C) and C < (A + B)){ // expressao de controle
		P =(A + B + C)/2;
		Area = sqrt(P*(P-A)*(P-B)*(P-C));
		
		cout << Area << endl;
		
	}else{
		cout << "Os valores fornecidos nao formam um triangulo." << endl;
	}
	
return 0;
}
