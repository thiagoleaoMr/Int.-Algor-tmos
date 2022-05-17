// Lista 4, Questão 9 - Fatorial Duplo

#include <iostream>
using namespace std;

int fatorial(int num);

int main(){
	int n;
	cin>> n;
	
	cout<< fatorial(n);

return 0;
}

int fatorial(int num){
	int fatoriall=1;
	
	if (num == 1)
		fatoriall = 1;
	else if (num%2 != 0)
		fatoriall = num*fatorial(num-2);
	else if (num%2 == 0){
		for (int i=num; i>=2; i--)
			fatoriall = num*fatorial(num-2);
	}

return fatoriall;
}
