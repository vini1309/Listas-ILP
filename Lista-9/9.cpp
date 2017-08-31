#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;

int grau9(int n){

	if(n == 9) return 1;
	
	int alg;
	int div = 1000;
	int resto = n;
	int soma = 0;
	for (int i = 0; i < 4; i++){
		alg = resto/div;
		resto = resto%div;
		div /= 10;
		soma += alg;
	}
	return grau9(soma) + 1;	
}

int main (){


	string numero;
	while (cin >> numero, numero != "0"){

		int tam = numero.size();
		
		int soma_alg = 0;
		for (int i = 0; i < tam; i++){
			int convert = numero[i]-48;
			soma_alg += convert;
		}

		if(soma_alg % 9 != 0){
			cout << numero << " is not a multiple of 9." << endl;
		}
		else{
			int result = grau9(soma_alg);
			cout << numero << " is a multiple of 9 and has 9-degree " << result << ".\n";
		}


	}

	/*int numero;
	cin >> numero;
	grau9(numero);*/


}