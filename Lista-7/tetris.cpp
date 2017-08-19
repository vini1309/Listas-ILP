#include <iostream>
#include <stdio.h>
using namespace std;

//Organiza em ordem decerescente: inteiros
void bubblesort(int list[], int tam){
	for (int fim = tam-1; fim > 0; --fim) {
        for (int i = 0; i < fim; ++i) {
            if (list[i] < list[i+1]) {
                int aux = list[i];
                list[i] = list[i+1];
                list[i+1] = aux;
            }
        }
    }
}

//Organiza em ordem decerescente: inteiros e os nomes associados a cada um deles.
void CompBubbleSort(int num[], string list[], int tam){
	for (int fim = tam-1; fim > 0; --fim) {
        for (int i = 0; i < fim; ++i) {
            if (num[i] < num[i+1]) {
                
                int aux = num[i];
                num[i] = num[i+1];
                num[i+1] = aux;

                string aux2 = list[i];
                list[i] = list[i+1];
                list[i+1] = aux2;
            }
        }
    }
}



int main(int argc, char const *argv[]){
	
	int n_players, count=0;

	cin >> n_players;
	
	while (n_players != 0){
		
		string player[n_players];
		int player_score[n_players];
		int position[n_players];

		for (int i = 0; i < n_players; i++){
			player_score[i] = 0;
		}

		for (int i = 0; i < n_players; i++){
			cin >> player[i];
			int n;
			for (int j = 0; j < 12; j++){
				cin >> n;
				if(j != 0 && j != 11) player_score[i] += n;
			}
		}

		CompBubbleSort(player_score, player, n_players);

		for (int i = (n_players-1); i > 0; i--){
			int count = i;
			while(player_score[count] = player_score[i]){
				position[i] = i+1;
				count++;
			}
		}

		/*FALTA AINDA AJEITAR OS VALROES DE position[], MOSTRAR A ORDEM ALFABÉTICA E AJEITAR A SAÍDA*/

		cout << endl;
		for (int i = 0; i < n_players; i++){
			cout << position[i] << " " << player[i] << " " << player_score[i] << endl;
		}
		cout << endl;

		/*count++;
		printf("Teste %i\n", count);*/
		cin >> n_players;
	} 

	return 0;
}

