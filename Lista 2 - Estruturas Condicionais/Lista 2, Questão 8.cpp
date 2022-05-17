// Lista 2, Questão 8 - Alfândega

#include <iostream>
using namespace std;

int main(){
	int cpd, cp; // cpd=codigo produto, cp=codigo do pais
	float pes, brt, imp, tot; // pes=peso, brt=preço bruto, imp=valor imposto, tot=valor total
	
	cin>> cpd;
	cin>> pes;
	cin>> cp;
	
	pes = pes*1000; //peso em gramas
	cout<< pes<< endl;
	
	if ((cpd>=1) and (cpd<=4)){
		brt = pes*10;
	} else if ((cpd>=5) and (cpd<=7)){
		brt = pes*25;
	} else if ((cpd>=8) and (cpd<=10)){
		brt = pes*35;
	}
	cout<< brt<< endl;;
	
	if (cp == 1){
		imp = 0;
	} else if (cp == 2){
		imp = brt * 0.15;
	} else if (cp == 3){
		imp = brt * 0.25;
	}
	cout<< imp<< endl;
	
	tot = brt + imp;
	cout<< tot<< endl;

return 0;
}
