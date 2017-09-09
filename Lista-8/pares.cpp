#include <iostream>
#include <stdio.h>
#include <algorithm>

/*void bubblesort(int vet[], int tam){
	bool sorted;
	for (int i = tam-1; i > 0 ; i--){
		sorted = true;
		for (int j = 0; j < i; j++){
			if(vet[j] > vet[j+1]){
				int aux = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = aux;
				sorted = false;
			}
		}
		if (sorted) break;
	}
}*/


bool bsNumberExistsIn(int vet[], int tam, int key, int inf){
	int sup = tam-1;
	int middle;
	while (inf <= sup){
		middle = (inf+sup)/2;
		if (vet[middle] == key) return true;
		if (vet[middle] < key) inf = middle+1;
		else sup = middle-1;
	}
	return false;
}

int abs(int n){
	if(n < 0) return -n;
	else return n;
}

int main(int argc, char const *argv[]){
	
	int n_numbers, value, number[100000];

	scanf("%i %i", &n_numbers, &value);

	for (int i = 0; i < n_numbers; i++){
		scanf("%i", &number[i]);
	}

	std::sort(number, number+n_numbers);

	int count = 0;
	int key1;
	int key2;
	for (int i = 0; i < n_numbers-1; i++){

		key1 = number[i] + value;
		key2 = number[i] - value;

		if(bsNumberExistsIn(number, n_numbers, key1, i+1)) count++;
		if(bsNumberExistsIn(number, n_numbers, key2, i+1)) count++;
	}

	printf("%i\n", count);

	return 0;
}