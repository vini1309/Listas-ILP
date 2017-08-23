#include <iostream>
using namespace std;
int main (){

	int n_movimentos, mov, pos_linha, pos_coluna, count_mov = 0;

	int tabuleiro[8][8];

	for (int i = 0; i < 8; i++){
		for (int j = 0; j < 8; j++){
			tabuleiro[i][j] = 0;
		}
	}

	//Buracos:
	tabuleiro[4][1] = 1;
	tabuleiro[4][2] = 1;
	tabuleiro[2][2] = 1;
	tabuleiro[3][5] = 1;

	//Coordenadas do cavalo
	pos_linha = 4;
	pos_coluna = 4;
	
	cin >> n_movimentos;

	for (int i = 0; i < n_movimentos; i++){
		cin >> mov;
		switch(mov){
			
			case 1:
			pos_linha -= 2;
			pos_coluna += 1;
			break;

			case 2:
			pos_linha -= 1;
			pos_coluna += 2;
			break;

			case 3:
			pos_linha += 1;
			pos_coluna += 2;
			break;

			case 4:
			pos_linha += 2;
			pos_coluna += 1;
			break;

			case 5:
			pos_linha += 2;
			pos_coluna -= 1;
			break;

			case 6:
			pos_linha += 1;
			pos_coluna -= 2;
			break;

			case 7:
			pos_linha -= 1;
			pos_coluna -= 2;
			break;
			
			case 8:
			pos_linha -= 2;
			pos_coluna -= 1;
			break;
		}

		if(tabuleiro[pos_linha][pos_coluna] == 1){
			count_mov++;
			break;
		}
		else{
			count_mov++;
		}

		/*tabuleiro[pos_linha][pos_coluna] = 2;
		for (int i = 0; i < 8; i++){
			for (int j = 0; j < 8; j++){
				cout << tabuleiro[i][j] << " ";
			}
			cout << endl;
		}*/

	}

	cout << count_mov << endl;





}