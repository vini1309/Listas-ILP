#include <iostream>
#include <stdio.h>
using namespace std;

int abs(int a){
	if (a < 0) a = -a;
	return a;
}

//bubblesort ordem crescente
void bubblesort(int vet[], int tam){
	for (int i = tam-1; i > 0 ; i--){
		for (int j = 0; j < i; j++){
			if (vet[j] > vet[j+1]){
				int aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
			}
		}
	}
}


int main (){

	int n_pontos, count = 1;

	do{
		cin >> n_pontos;
		if(n_pontos == 0) break;

		int Xponto[n_pontos];
		int Yponto[n_pontos];

		for (int i = 0; i < n_pontos; i++){
			cin >> Xponto[i] >> Yponto[i];		
		}

		bubblesort(Xponto, n_pontos);
		bubblesort(Yponto, n_pontos);

		/*cout << endl;
		for (int i = 0; i < n_pontos; i++){
			printf("%i %i\n", Xponto[i], Yponto[i]);	
		}*/

		int Xescolhido;
		int Yescolhido;
		int metade = (n_pontos/2);

		if(n_pontos % 2 == 0){
			Xescolhido = (Xponto[metade] + Xponto[metade-1])/2;
			Yescolhido = (Yponto[metade] + Yponto[metade-1])/2;
		}
		else{
			Xescolhido = Xponto[metade];
			Yescolhido = Yponto[metade];
		}

		printf("Teste %i\n%i %i\n\n", count, Xescolhido, Yescolhido);
		count++;

	} while (n_pontos != 0);

}