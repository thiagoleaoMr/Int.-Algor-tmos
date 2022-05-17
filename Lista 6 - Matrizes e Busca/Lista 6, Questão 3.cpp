// Lista 6, Questão 3 - Jogo da Velha

#include <iostream>
using namespace std;

int main(){
	char matriz[3][3];
	int vit=0;
	
	for (int i=0; i<3; i++){
		for (int j=0; j<3; j++)
			cin>> matriz[i][j];
	}
	
	int j=0;
	for (int i=0; i<3; i++){
		if ((matriz[i][j] == 'X') or (matriz[i][j] == 'O')){
			if ((matriz[i][j] == matriz [i][j+1]) and (matriz[i][j] == matriz[i][j+2])){
				cout<< matriz[i][j]<< endl;
				cout<< i<< " "<< j<< endl;
				cout<< i<< " "<< j+1<< endl;
				cout<< i<< " "<< j+2<< endl;
				vit++;
			}
		}
	}
	
	for (int m=0; m<3; m++){
		if ((matriz[j][m] == 'X') or (matriz[j][m] == 'O')){
			if ((matriz[j][m] == matriz[j+1][m]) and (matriz[j][m] == matriz[j+2][m])){
				cout<< matriz[j][m]<< endl;
				cout<< j<< " "<< m<< endl;
				cout<< j+1<< " "<< m<< endl;
				cout<< j+2<< " "<< m<< endl;
				vit++;
			}
		}
	}
	
	if ((matriz[j][j] == 'X') or (matriz[j][j] == 'O')){
		if ((matriz[j][j] == matriz[j+1][j+1]) and (matriz[j][j] == matriz[j+2][j+2])){
			cout<< matriz[j][j]<< endl;
			cout<< j<< " "<< j<< endl;
			cout<< j+1<< " "<< j+1<< endl;
			cout<< j+2<< " "<< j+2<< endl;
			vit++;
		}
	}
	
	if ((matriz[0][2] == 'X') or (matriz[0][2] == 'O')){
		if ((matriz[0][2] == matriz[1][1]) and (matriz[0][2] == matriz[2][0])){
			cout<< matriz[0][2]<< endl;
			cout<< '0'<< " "<< '2'<< endl;
			cout<< '1'<< " "<< '1'<< endl;
			cout<< '2'<< " "<< '0'<< endl;
			vit++;
		}
	}
	
	if(vit == 0)
		cout<< "-1";
	
return 0;
}

