#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
int main(int argc, char const *argv[]){
	
	int n_alunos, sorteado;
	
	cin >> n_alunos >> sorteado;

	string alunos[n_alunos];

	cin.ignore();
	for (int i = 0; i < n_alunos; i++){
		getline(cin, alunos[i]);
	}

	int min;

	for (int i = 0; i < (n_alunos-1); i++){
		string aux;
		min = i;
		
		for(int j = i+1; j < n_alunos; j++){
			if(alunos[j] < alunos[min]) min = j;
		}

		if(alunos[min] != alunos[i]){
			aux = alunos[i];
			alunos[i] = alunos[min];
			alunos[min] = aux;	
		}

	}

	
	/*cout << endl;
	for (int i = 0; i < n_alunos; i++){
		cout << alunos[i] << endl;
	}
	cout << endl;*/

	cout << alunos[sorteado-1] << endl; 

	return 0;
}