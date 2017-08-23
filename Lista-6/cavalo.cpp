#include <iostream>
using namespace std;
int main (){

	//n = number of movements
	int n, linha, coluna, count, mov;
	cin >> n;
	int tab[8][8];

	//0 = normal square, 1 = broken square
	for (int i = 0; i < 8; i++)	{
		for (int j = 0; j < 8; j++)	{
			tab[i][j] = 0;
		}
	}

	tab[2][2] = 1;tab[4][1] = 1; tab[4][2] = 1; tab[3][5] = 1; 
	linha = 4;
	coluna = 4;

	for (int i = 0; i < n; i++){
		
		cin >> mov;

		switch(mov){
			case 1:
			linha -= 2;
			coluna += 1;
			break;

			case 2:
			linha -= 1;
			coluna += 2;
			break;

			case 3:
			linha += 1;
			coluna += 2;
			break;

			case 4:
			linha += 2;
			coluna += 1; 
			break;

			case 5:
			linha += 2;
			coluna -= 1;
			break;

			case 6:
			linha += 1;
			coluna -= 2;
			break;

			case 7:
			linha -= 1;
			coluna -= 2;
			break;

			case 8:
			linha -= 2;
			coluna -= 1;
			break;

		}
		
		if (tab[linha][coluna] == 0){
			count++;
		}
		
		else{
			count++;
			break;
		}
			
	}

	cout << count << endl;
}
