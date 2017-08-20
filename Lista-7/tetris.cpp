#include <time.h>
#include <iostream>
#include <stdio.h>
using namespace std;


int main(int argc, char const *argv[]){

	int n_players, count=0;	
	
	do{
		cin >> n_players;
		if(n_players == 0) break;
		
		string player[n_players];
		int player_score[n_players];
		int position[n_players];

		for (int i = 0; i < n_players; i++){
			cin >> player[i];
			int max = -1000, min = 2000, n, soma=0;
			for (int j = 0; j < 12; j++){
				cin >> n;
				if(n > max) max = n;
				if(n < min) min = n;
				soma += n;
			}
			player_score[i] = soma - max - min;

		}

		//Bubblesort do score e nome em função do nome
		for (int fim = n_players-1; fim > 0; --fim) {
	        for (int i = 0; i < fim; ++i) {
	            if (player[i] > player[i+1]) {
	                
	                int aux = player_score[i];
	                player_score[i] = player_score[i+1];
	                player_score[i+1] = aux;

	                string aux2 = player[i];
	                player[i] = player[i+1];
	                player[i+1] = aux2;
	            }
	        }
	    }
	    
		//Bubblesort do score e nome em função do score
		for (int fim = n_players-1; fim > 0; --fim) {
	        for (int i = 0; i < fim; ++i) {
	            if (player_score[i] < player_score[i+1]) {
	                
	                int aux = player_score[i];
	                player_score[i] = player_score[i+1];
	                player_score[i+1] = aux;

	                string aux2 = player[i];
	                player[i] = player[i+1];
	                player[i+1] = aux2;
	            }

	        }
	    }

	    position[0] = 1;
	    int cont;
		for (int i = (n_players-1); i > 0; i--){
			cont = 0;-
			for(int k = i-1; k >= 0; k--){
				if(player_score[i] < player_score[k]){
					cont++;
				}
			}
			position[i] = 1+cont;
		}

		count++;
		printf("Teste %i\n", count);
		for (int i = 0; i < n_players; i++){
			cout << position[i] << " " << player_score[i] << " " << player[i] << endl;
		}
		cout << endl;

	} while (n_players != 0);

	return 0;
}

