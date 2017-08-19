#include <iostream>
using namespace std;
int main (){

	int matches, lines, max, aux;

	cin >> matches >> lines;

	int match[matches];

	for (int i = 0; i < matches; i++){
		cin >> match[i];
	}

	for (int i = 0; i < matches; i++){
		max = i;
		for(int j = (i+1); j < matches; j++){
			if(match[j] > match[max]){
				max = j;
			}
		}

		if(match[i] != match[max]){
				aux = match[i];
				match[i] = match[max];
				match[max] = aux;
			}
		}


	for (int i = 0; i < lines; i++){
		cout << match[i] << endl;
	}
}

	