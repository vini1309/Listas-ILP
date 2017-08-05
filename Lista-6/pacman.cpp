#include <iostream>
#include <string>
using namespace std;
int main (){

	int dim;
	cin >> dim;
	string tab[dim];
	cin.ignore();
	
	for (int i = 0; i < dim; i++){
		getline(cin, tab[i]);
	}

	for (int i = 0; i < dim; i++){
		if (i%2 == 0)
		for (int j = 0; j < dim; j++){
			if tab[j]
		}

		else
		for (int j = (dim-1); j >= 0; j--){
			cout << tab[i][j] << endl;
		}	
	}
}
