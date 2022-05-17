// Exemplo - Distância Entre Pontos (Registros e Subprogramas)

#include <iostream>
#include <math.h>
using namespace std;

struct ponto{
	int X, Y;
	
	void atribuir(int A, int B){		
	X = A;
	Y = B;
	}
	
	float distancia(const ponto &P){
		return sqrt(pow(X - P.X, 2) + pow(Y - P.Y, 2));
	}
};

int main() {
	int A, B;
	ponto P1, P2;
	
	cin >> A >> B;
	
	P1.atribuir(A, B);
	for (int i = 1; i <= 9; i++) {
		cin >> A >> B;
		P2.atribuir(A, B);
		
		cout << "Distancia: " << P1.distancia(P2) << endl;
	}

return 0;
}

