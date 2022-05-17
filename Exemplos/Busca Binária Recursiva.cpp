// Busca Binária Recursiva

#include <iostream>
using namespace std;

int BuscaBinaria(int vetor[], int inicio, int fim, int procurado) {
	if (inicio <= fim){
		
		int meio = (inicio+fim)/2;
		
		if (procurado > vetor[meio])
			return BuscaBinaria(vetor,meio+1,fim,procurado);
		else if (procurado < vetor[meio])
			return BuscaBinaria(vetor,inicio,meio-1,procurado);
		else
			return meio;
}

return -1;
}

int main() {
	int K, N = 10;
	int V[N];

// os elementos do vetor devem ser
// fornecidos em ordem crescente
	for (int i = 0; i < N; i++) cin >> V[i];
		cin >> K;
		cout << BuscaBinaria(V, 0, N-1, K) << endl;
		
return 0;
}
