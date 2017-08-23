#include <stdio.h>

int main(int argc, char const *argv[]){

	int n_houses, n_deliveries;
	int house[45000], delivery[45000];

	scanf("%i %i", &n_houses, &n_deliveries);

	for (int i = 0; i < n_houses; i++){
		scanf("%i", &house[i]);
	}

	for (int i = 0; i < n_deliveries; i++){
		scanf("%i", &delivery[i]);
	}

	



	return 0;
}