#include <iostream>
using namespace std;
int main () {

	int nAir, nVoos, x=-1, y=-1, teste=0, max, indice;
	

	while(nAir!=0 || nVoos!=0){
		max=0;
		cin >> nAir >> nVoos;

		int airport[nAir], cont[nAir];
		for(int i=0; i<nAir; i++) airport[i]=i+1;
		for(int i=0; i<nAir; i++) cont[i]=0;
		

		for(int i=0; i<nVoos; i++){
			cin >> x >> y;
			cont[(x-1)]++;
			cont[(y-1)]++;
		}

		
		for(int i=0; i<nAir; i++){
			if(cont[i] > max){ 
				max = cont[i];
			}
		}
		
		teste++;
		
		if(nAir!=0 || nVoos!=0){

			cout << "Teste " << teste << "\n";
			
			for(int i=0; i<nAir; i++){
				if(cont[i] == max) cout << airport[i] << " ";
			}
			cout << "\n\n";
		}
		
	}

	


}