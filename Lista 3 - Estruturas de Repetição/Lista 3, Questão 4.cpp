#include <iostream>
using namespace std;

int main (){
	int lines, cont1=0, cont2=1;
	char letra = 97;
	
	cin>> lines;
	
	while (lines > 27){
		cin>> lines;
	}
	
	while (cont1 < lines){
		cont1 ++;
		if (cont1 < 27){
			while (cont2 <= cont1){
			cont2 ++;
			cout<< letra <<" ";
			letra ++;
			}
		}
		cout<< endl;
		letra = 97;
		cont2 = 1;
	}
	
	return 0;
	
}
