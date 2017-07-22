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
		if (numero == "0") break;

		for (int i=0; i<numero.size(); i++){
		
			int n = numero[i] - '0';

			if (i % 2 == 0) somaOrdemImpar += n;
			else somaOrdemPar += n;


			/*Aqui chamei de ordem ímpar a posição que é divisível por 2 e não
			o contrário, pois a ordem dos algarismos começa com 1, já a ordem
			de um vetor começa com 0. Nesse caso, todas as posições do vetor pares
			correspondem à uma posição ímpar dos algarismos.*/
	
		}
				
		if ((somaOrdemPar-somaOrdemImpar) % 11 == 0) 
			cout << numero << " is a multiple of 11." << endl;
		else cout << numero << " is not a multiple of 11." << endl;


	} while (numero != "0");

}