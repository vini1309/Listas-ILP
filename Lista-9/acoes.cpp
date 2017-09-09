#include <stdio.h>
#include <iostream>

int qtdEmpresas(int n, int k){

	if (n <= k) return 0;

	if (n % 2 == 0){
		return (2* qtdEmpresas((n/2), k))+1;
	}
	else{
		return qtdEmpresas(n/2, k) + qtdEmpresas(((n/2)+1), k)+1;
	}
}

int main (){

	int capital, maxInvest;
	while(scanf("%i %i", &capital, &maxInvest), capital != 0 || maxInvest != 0){
		printf("%i\n", qtdEmpresas(capital, maxInvest)+1);
	}
}