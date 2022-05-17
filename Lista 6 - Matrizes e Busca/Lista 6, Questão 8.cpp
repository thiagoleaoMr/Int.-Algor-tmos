// Lista 6, Questão 8 - Determinante de Matriz 4x4

#include <iostream>
using namespace std;

int main(){
	float matriz[4][4]; // matriz 4x4
	float det; // determinante
	
	for (int i=0; i<4; i++)
		for (int j=0; j<4; j++)
			cin>> matriz[i][j];
			
	float s1, s2, s3, s4, d1, d2, d3, d4; // s(soma) d(diminui)
	s1 = (matriz[0][0] * matriz[1][1] * matriz[2][2] * matriz[3][3]);
	s2 = (matriz[1][0] * matriz[2][1] * matriz[3][2] * matriz[0][3]);
	s3 = (matriz[2][0] * matriz[3][1] * matriz[0][2] * matriz[1][3]);
	s4 = (matriz[3][0] * matriz[0][1] * matriz[1][2] * matriz[0][3]);
	d1 = (matriz[3][0] * matriz[2][1] * matriz[1][2] * matriz[0][3]);
	d2 = (matriz[2][0] * matriz[1][1] * matriz[0][2] * matriz[3][3]);
	d3 = (matriz[1][0] * matriz[0][1] * matriz[3][2] * matriz[2][3]);
	d4 = (matriz[0][0] * matriz[3][1] * matriz[2][2] * matriz[1][3]);
	
	det = s1+s2+s3+s4-d1-d2-d3-d4;
		
	cout<< det;	
	
return 0;
}
