#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string nome;
    cin >> nome;
    ifstream(fin);
    fin.open(nome);

    if(fin) { 
        ofstream fout("cifrado");
        char x;
            while(fin.get(x)) {
                if(x == 'X')
                    x = 'A';
                else
                if(x == 'Y')
                    x = 'B';
                else
                if(x == 'Z')
                    x = 'C';
                else
                if(x != ' ') {
                    x += 3;
                }
                fout << x;
            }
        fin.close();
        fout.close();
    }
    return 0;
}