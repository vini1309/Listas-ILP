#include <iostream>
using namespace std;
int main () {

	int npedr, nsap;

	cin >> npedr >> nsap;

	int pos[nsap], pulo[nsap], vpedra[npedr], pedra[npedr];

	for(int i=0; i<nsap; i++){
		cin >> pos[i] >> pulo[i];
	}

	for(int i=0; i<npedr; i++){
		pedra[i] = i+1;
	}
	
	for (int j=0; j<npedr; j++){
		vpedra[j] = 0;
	}
	
	for(int sapo=0; sapo<nsap; sapo++){
		for (int j=0; j<npedr; j++){
			if(pos[sapo] == pedra[j]) {
				vpedra[j]++;
			}
			else if ((pedra[j]-pos[sapo]) % pulo[sapo] == 0){
				vpedra[j]++;
			}
		}
	}
	
	for (int j=0; j<npedr; j++){
		cout << vpedra[j] << endl;
	}


}