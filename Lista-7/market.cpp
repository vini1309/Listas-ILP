#include <iostream>
#include <stdio.h>
using namespace std;


int abs(int a){
	if (a < 0) a = -a;
	return a;
}


int main (){
	
	int n_pontos, count = 1;

	do{
		cin >> n_pontos;
		if(n_pontos == 0) break;

		int Xponto[n_pontos];
		int Yponto[n_pontos];

		for (int i = 0; i < n_pontos; i++){
			cin >> Xponto[i] >> Yponto[i];		
		}

		cout << endl;
		for (int i = 0; i < n_pontos; i++){
			printf("Ponto (%i,%i)\n", Xponto[i], Yponto[i]);
		}
		printf("\n");


		int Xmax = -10001, Ymax = -10001;
		int Xmin = 10001, Ymin = 10001;		

		for (int i = 0; i < n_pontos; i++){
			
			if (Xponto[i] > Xmax) Xmax = Xponto[i];
			if (Yponto[i] > Ymax) Ymax = Yponto[i];
			//cout << Xmax << " ";
			
			if (Xponto[i] < Xmin) Xmin = Xponto[i];
			if (Yponto[i] < Ymin) Ymin = Yponto[i];
			//cout << Xmin << " ";
		}

		int tamX = Xmax - Xmin +1;
		int tamY = Ymax - Ymin +1;

		//printf("Tamanho do espaço em x: %i\nTamanho do espaço em y: %i\n",tamX, tamY);

		int X_all_dots[tamY][tamX];
		int Y_all_dots[tamY][tamX];	

		for (int i = 0; i < tamY; i++){
			for (int j = 0; j < tamX; j++){
				X_all_dots[i][j] = Xmin + j;
				Y_all_dots[i][j] = Ymax - i;
			}
		}

		cout << endl;
		for (int i = 0; i < tamY; i++){
			for (int j = 0; j < tamX; j++){
				printf("(%i,%i) ", X_all_dots[i][j], Y_all_dots[i][j]);
			}
			cout << endl;
		}

		int somas[tamY][tamX];

		for (int i = 0; i < tamY; i++){
			for (int j = 0; j < tamX; j++){
				int soma = 0;			
				for (int k = 0; k < n_pontos; k++){
					int distX = abs(X_all_dots[i][j] - Xponto[k]);
					int distY = abs(Y_all_dots[i][j] - Yponto[k]);
					int dist = distY + distX;
					soma += dist;
				}			
				somas[i][j] = soma;
			}
		}

		cout << endl;
		for (int i = 0; i < tamY; i++){
			for (int j = 0; j < tamX; j++){
				printf("(%i) ", somas[i][j]);
			}
			cout << endl;
		}

		int Yescolhido, Xescolhido;
		int menorSoma;
		for (int i = 0; i < tamY; i++){
			for (int j = 0; j < tamX; j++){
				if(i==0 && j==0){
					menorSoma = somas[i][j];
					Yescolhido = Y_all_dots[i][j];
					Xescolhido = X_all_dots[i][j];
				}
				else if(somas[i][j] < menorSoma){
					menorSoma = somas[i][j];
					Yescolhido = Y_all_dots[i][j];
					Xescolhido = X_all_dots[i][j];
				}
			}
		}

		printf("Teste %i\n%i %i\n\n", count, Xescolhido, Yescolhido);
		count++;

	} while (n_pontos != 0);




}