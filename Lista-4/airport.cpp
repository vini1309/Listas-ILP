#include <iostream>
using namespace std;
int main (){
	
	int qtdA, qtdV, x, y, max=0, nteste=1;
	cin >> qtdA >> qtdV;
	int aero[qtdA],cont[qtdA];	
		
	do {
		for (int i=0; i<qtdA; i++) aero[i]=i+1;

		for (int i=0; i<qtdA; i++) cont[i]=0;
		
		for (int i=0; i<qtdV; i++){
			cin >> x >> y;
			cont[(x-1)]++;
			cont[(y-1)]++;
		} 

		for (int i=0; i<qtdA; i++){
			if (cont[i] > max) max = cont[i];
		}
		
		cout << "Teste " << nteste << endl;
		for (int i=0; i<qtdA; i++){
			if (cont[i] == max) cout << aero[i] << " ";
		}
		cout << "\n\n";
		nteste++;
	} while(x!=0 || y!=0);
}
