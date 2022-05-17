// Lista 3, Questão 7 - Estatísticas de Altura da Turma 

#include <iostream>
#include <iomanip>
using namespace std;

int main (){
	int fichas, mul=0, hom=0; 
	float alt, alt_maior, alt_menor, soma_mul=0.00, soma_hom=0.00;
	char gen;
	
	cin>> fichas;
	
	cin>> alt>> gen;
	alt_maior = alt;
	alt_menor = alt;
	fichas--;
	
	while (fichas != 0){
		cin>> alt>> gen;
		fichas--;
		if (gen == 'f'){
			mul++;
			soma_mul = soma_mul + alt;
		} else if(gen == 'm'){
			hom++;
			soma_hom = soma_hom + alt;
		}
		
		if (alt > alt_maior){
			alt_maior = alt;
		} else if(alt < alt_menor){
			alt_menor = alt;
		}
	}
	
	cout<< alt_maior<< endl<< alt_menor<< endl;
	
	if (mul == 0){
		cout<< "erro"<< endl;
	}else if(mul == 1){
		cout<< soma_mul<< endl;
	}else if(mul > 1){
		cout<< (soma_mul / mul)<< endl;
	}
	if (hom == 0){
		cout<< "erro"<< endl;
	}else if(hom == 1){
		cout<< soma_hom<< endl;
	}else if(hom > 1){
		cout<< (soma_hom / hom)<< endl;
	}
	
	float media_tot;
	media_tot = (soma_hom + soma_mul)/(hom + mul);
	cout<< fixed<< setprecision(2)<< media_tot<< endl;

return 0;
}
