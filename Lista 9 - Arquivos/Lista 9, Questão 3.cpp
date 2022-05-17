#include <iostream>
#include <fstream>
using namespace std;

int main() {
	
    string nome;
    cin >> nome;

    int posicao;
    cin >> posicao;
    
    int palavras = 0;
    int letras = 0;
    
    string conteudo;
    char x, y;

    ifstream (arq1);
    arq1.open (nome);
    
    if (arq1){
        while (arq1.get(x)){
            letras++;
            if (letras == posicao){
                arq1 >> y;
                letras++;
            }
        }
        arq1.close();

        arq1.open(nome);
        if (arq1){
            while (arq1 >> conteudo){
                palavras++;
            }
            arq1.close();
        } 
    }

    ofstream arq2 ("resultado.txt");

    if (arq2){        
        arq2 << letras << " ";
        arq2 << palavras << endl;
        cout << y << endl;

        arq2.close();
    }
    
    return 0;
    
}
