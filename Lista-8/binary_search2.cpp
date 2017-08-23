#include <iostream>
#include <stdio.h>
using namespace std;

int binarySearchFirstOcorrence(int arr[], int key, int tam){
	int inf = 0, sup = tam-1;
	int middle;
	while(inf <= sup){
		middle = (inf+sup)/2;
		if(key == arr[middle]){
			int prev = middle-1;
			while(arr[prev] == arr[middle]){
				middle = prev;
				prev--;
			}
			return middle;
		}
		if(key > arr[middle]) inf = middle + 1;
		else sup = middle -1;
	}
	return -1;
}

int main (){

	int array_size, n_searches, answer;
	scanf("%i %i", &array_size, &n_searches);

	int array[array_size];

	for(int i = 0; i < array_size; i++){
		scanf("%i", &array[i]);
	}

	int key;
	for (int i = 0; i < n_searches; i++){
		
		scanf("%i", &key);

		answer = binarySearchFirstOcorrence(array, key, array_size);
		
		printf("%i\n", answer);

	}
	
	

}