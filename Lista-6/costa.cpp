#include <iostream>
#include <string>
using namespace std;
int main (){


	//lDim = Lines dimension, cDim = columns dimension, count = number of coastal blocks
	int lDim, cDim, count=0;

	cin >> lDim >> cDim;

	string map[lDim];

	cin.ignore();
	for (int i = 0; i < lDim ; i++){
		getline(cin, map[i]);
	}

	
	/*for (int j = 0; j < lDim ; j++){
		cout << endl;
		for (int i = 0; i < cDim; i++){
			cout << map[j][i];
		}
	}
	cout << endl;*/

	for (int j = 0; j < lDim ; j++){
		for (int i = 0; i < cDim; i++){
			if(map[j][i] == '#'){
				if (j == 0 || i == 0 || j == (lDim-1) || i == (cDim-1)){
					count ++;
				}
				else if (map[j+1][i]=='.' || map[j-1][i]=='.' || map[j][i+1]=='.' || map[j][i-1]=='.'){
					count ++;
				}
			}
		}
	}

	cout << count << endl;

}