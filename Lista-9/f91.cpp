#include <stdio.h>
#include <iostream>

int f91(int n){

	if(n > 100) return (n - 10);
	else return (f91(f91(n + 11)));
}

int main (){

	int numero;
	while (scanf("%i", &numero), numero != 0){
		printf("f91(%i) = %i\n", numero, f91(numero));
	}
}

