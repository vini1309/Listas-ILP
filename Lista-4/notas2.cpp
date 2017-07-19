#include <iostream>
using namespace std;
int main () {

	int nalunos, n, maior=0, maior2=0, indiceDoMaior, cont1=0;

	cin >> nalunos;

	int nota[nalunos], cont[101], maiores[101];

	for (int i=0; i<101; i++){ 
		cont[i] = 0;
		maiores[i] = 0;
	}

	for (int i=0; i<nalunos; i++){
		cin >> n;
		nota[i] = n;
	}

	for (int i=0; i<101; i++){
		for (int j=0; j<nalunos; j++){
			if (nota[j] == i) cont[i]++;
		}
	} 

	for(int i=0; i<101; i++){
		if(cont[i] >= maior) {
			maior = cont[i];
			indiceDoMaior = i;
		}
	}

	for(int i=0; i<101; i++){
		if(cont[i] == cont[indiceDoMaior]){
			maiores[i] = 1;
		} 
	}

	for(int i=0; i<101; i++) if(maiores[i]==1) cont1++;

	int maiores2[cont1];

	for(int j=0; j<cont1; j++){
		for(int i=0; i<101; i++){
			if(maiores[i]==1){
				maiores2[j] = i;
				maiores[i]=0;
				break;
			}
		}
	}

	for(int j=0; j<cont1; j++){
		if(maiores2[j] > maior2){
			maior2 = maiores2[j];
		}
	}
	cout << maior2 << endl;
}