#include <iostream>
#include <string>
using namespace std;
int main (){

	int dim, cont=0, max=0;
	cin >> dim;
	string tab[dim];
	cin.ignore();
	
	for (int i = 0; i < dim; i++){
		getline(cin, tab[i]);
	}

	for (int i = 0; i < dim; i++){
		if (i%2 == 0)
		for (int j = 0; j < dim; j++){
			if(tab[i][j] == 'o'){
				cont++;
			}
			else if(tab[i][j] == 'A'){
				cont = 0;
			}

			if(cont > max) max = cont;
		}

		else
		for (int j = (dim-1); j >= 0; j--){
			if(tab[i][j] == 'o'){
				cont++;
			}
			else if(tab[i][j] == 'A'){
				cont = 0;
			}

			if(cont > max) max = cont;
		}	
	}

	cout << max << endl;
}
