#include <stdio.h>
#include <algorithm>
#include <iostream>

bool bsNumberExists(int key, int vet[], int tam){
	int inf = 0, sup = tam-1, middle;

	while (inf <= sup){
		middle = (inf+sup)/2;
		if (vet[middle] == key) return true;
		if (vet[middle] > key) sup = middle -1;
		else inf = middle + 1;
	}

	return false;
}

int main (){

	int n_forbidden, forbidden[140000], test;
	scanf("%i", &n_forbidden); 

	for (int i = 0; i < n_forbidden; i++){
		scanf("%i", &forbidden[i]);
	}

	std::sort(forbidden, forbidden + n_forbidden);

	while (scanf("%i", &test) != EOF){
		if(bsNumberExists(test, forbidden, n_forbidden))
			printf("sim\n");
		else 
			printf("nao\n");
	}

	return 0;
}