#include <iostream>
#include <stdio.h>
using namespace std;

int binarySearch(int arr[], int key, int tam){
	int inf = 0, sup = tam-1;
	int middle;
	while(inf <= sup){
		middle = (inf+sup)/2;
		if(key == arr[middle]) return middle;
		if(key > arr[middle]) inf = middle + 1;
		else sup = middle -1;
	}
	return -1;
}

int main (){

	int array_size, n_searches, answer1, answer2;
	scanf("%i %i", &array_size, &n_searches);

	int array[array_size];

	for(int i = 0; i < array_size; i++){
		scanf("%i", &array[i]);
	}

	int key;
	for (int i = 0; i < n_searches; i++){
		
		scanf("%i", &key);

		answer1 = binarySearch(array, key, array_size);
		answer2 = answer1;
		if(answer1 != -1){
			for (int i = 0; i < answer1; i++){
				if(array[i] == array[answer1]){
					answer2 = i;
					break;
				}
			}
		}
		
		printf("%i\n", answer2);

	}
	
	

}