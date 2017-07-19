#include <iostream>
#include <string>
using namespace std;
int main () {

	string numero;
	int somaOrdemPar, somaOrdemImpar;

	do {
	
		somaOrdemPar=0;
		somaOrdemImpar=0;

		getline(cin, numero);
		
		int algarismo[numero.size()];

		for (int i=0; i<numero.size(); i++){
			
			switch (numero[i]){
				case '0': algarismo[i]=0; break; 
				case '1': algarismo[i]=1; break;
				case '2': algarismo[i]=2; break;
				case '3': algarismo[i]=3; break;
				case '4': algarismo[i]=4; break;
				case '5': algarismo[i]=5; break;
				case '6': algarismo[i]=6; break;
				case '7': algarismo[i]=7; break;
				case '8': algarismo[i]=8; break;
				case '9': algarismo[i]=9; break;
			}

			if (i % 2 == 0) somaOrdemImpar += algarismo[i];
			else somaOrdemPar += algarismo[i];


			/*Aqui chamei de ordem ímpar a posição que é divisível por 2 e não
			o contrário, pois a ordem dos algarismos começa com 1, já a ordem
			de um vetor começa com 0. Nesse caso, todas as posições do vetor pares
			correspondem à uma posição ímpar dos algarismos.*/
	
		}
			
		if (numero == "0") break;
		else if ((somaOrdemPar-somaOrdemImpar) % 11 == 0) 
			cout << numero << " is a multiple of 11." << endl;
		else cout << numero << " is not a multiple of 11." << endl;


	} while (numero != "0");

}