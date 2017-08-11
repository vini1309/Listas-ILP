#include <iostream>
using namespace std;
int main (){

	//n = number of movements
	int n, xpos, ypos, count;
	cin >> n;
	int mov[n], tab[8][8];

	//0 = normal square, 1 = broken square
	for (int i = 0; i < 8; ++i)	{
		for (int j = 0; j < 8; j++)	{
			tab[i][j] = 0;
		}
	}

	tab[1][3] = 1; tab[2][3] = 1; tab[2][5] = 1; tab[5][4] = 1; 
	ypos = 3;
	xpos = 4;

	for (int i = 0; i < n; i++){
		cin >> mov[i];
	}

	for (int i = 0; i < n; i++){
		switch(mov[i]){
			case 1:
			xpos += +1;
			ypos += +2;
			break;

			case 2:
			xpos += +2;
			ypos += +1;
			break;

			case 3:
			xpos += +2;
			ypos += -1;
			break;

			case 4:
			xpos += +1;
			ypos += -2; 
			break;

			case 5:
			xpos += -1;
			ypos += -2;
			break;

			case 6:
			xpos += -2;
			ypos += -1;
			break;

			case 7:
			xpos += -2;
			ypos += +1;
			break;

			case 8:
			xpos += -1;
			ypos += +2;
			break;

		}
		
		if (tab[xpos][ypos] == 0){
			count++;
		}
		
		else{
			count++;
			break;
		}
			
	}

	cout << count << endl;
}
