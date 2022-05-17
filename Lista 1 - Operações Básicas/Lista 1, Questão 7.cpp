// Lista 1, Questão 7 - Troco

#include <iostream>
using namespace std;

int main(){
	int c, v, t; // c = valor que o cliente entrega, v = valor da compra,  t = troco
	int vinte, dez, cinco, dois, um;
	
	cin>> c;
	cin>> v;
	
	t = c - v;
	
	vinte = t/20;
	dez = (t - vinte*20)/10;
	cinco = (t - vinte*20 - dez*10)/5;
	dois = (t - vinte*20 - dez*10 - cinco*5)/2;
	um = (t - vinte*20 - dez*10 - cinco*5 - dois*2);
	
	cout<< vinte<< endl<< dez<< endl<< cinco<< endl<< dois<< endl<< um<< endl;

return 0;
}
