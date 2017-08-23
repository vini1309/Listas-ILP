#include <stdio.h>
#include <iostream>

int abs(int n){
	if(n >= 0) return n;
	else return -n; 
}

int binarysearch(int key, int vet[], int tam){
	int inf = 0, sup = tam-1;
	int middle;
	while (inf <= sup){
		middle = (inf + sup)/2;
		if (vet[middle] == key) return middle;
		if (vet[middle] > key) sup = middle - 1;
		else inf = middle + 1; 
	}
	return -1;
}

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

	int count = 0;
	int index, previndex = 0;
	for (int i = 0; i < n_deliveries; i++){
		index = binarysearch(delivery[i], house, n_houses);
		count += abs(index - previndex);
		previndex = index;
	}

	printf("%i\n", count);

	return 0;
}