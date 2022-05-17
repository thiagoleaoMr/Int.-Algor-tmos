// Cálculo de Médias

#include <iostream>
using namespace std;

int main() {
	string nome;

	float nota1, nota2, media;
	
	cout << "Digite o nome do aluno: ";
	cin >> nome;
	cout << "Digite as notas N1 e N2 do aluno: ";
	cin >> nota1>> nota2;
	
	media = float(nota1 + nota2)/2;
	
	cout << "A media do aluno " << nome << " e "<< media << endl;
	
 return 0;
}
