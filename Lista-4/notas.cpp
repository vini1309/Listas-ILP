#include <iostream>
using namespace std;
int main () {

	int nalunos, qtdnotas[101], maiores[101], cont=0, maior=0, notax;

	for(int i=0;i<101;i++){qtdnotas[i]=0;}

	cin >> nalunos;

	for(int i=0; i < nalunos; i++){

		cin >> notax;
		qtdnotas[notax]++;

	}
	
	for(int i=0; i < 101; i++){
		
		maiores[cont]=i;
		if(qtdnotas[i] < qtdnotas[i+1]){
			maiores[cont]= i+1;
			cont++;
		}
		else if (qtdnotas[i] == qtdnotas[i+1]){
			maiores[cont]= i;
			cont++;
			maiores[cont]= i+1;
			cont++;
		}
	}	
		
	for(int i=0; i < 101; i++){
		
		maior=maiores[i];
		if(maiores[i] < maiores[i+1]){
			maior=maiores[i+1];
		}	
	}

	cout << maior << endl;

}
