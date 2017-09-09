#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <ctime>


int geraDigito1(int cpf[]){
	int somatorio1 = 0, digito1;
	int fator1 = 10;
	for (int i = 0; i < 9 ; i++){
		int n = cpf[i]*fator1;
		fator1--;
		somatorio1 += n;
	}
	//printf("%i\n", somatorio1);
	int resto1 = somatorio1 % 11;
	if(resto1 < 2) digito1 =0;
	else digito1 = (11 - resto1);
	//printf("%i\n", digito1);
	return digito1;
}

int geraDigito2(int cpf[], int digito1){
	int somatorio2 = 0, digito2;
	int fator2 = 11;
	for (int i = 0; i < 9 ; i++){
		int n = cpf[i]*fator2;
		fator2--;
		somatorio2 += n;
	}
	somatorio2 += digito1*fator2;
	//printf("%i\n", somatorio2);
	int resto2 = somatorio2 % 11;
	if(resto2 < 2) digito2 =0;
	else digito2 = (11 - resto2);
	//printf("%i\n", digito2);
	return digito2;
}

int geraRandom(int menor, int maior){
	return rand()%(maior-menor+1) + menor;
}

string geraCPF(){
	
	string cpf = "-----------";
	int cpf_int[11];
	for (int i = 0; i < 11; i++){
		cpf_int[i] = geraRandom(0,9);
	}

	cpf_int[9] = geraDigito1(cpf_int);
	cpf_int[10] = geraDigito2(cpf_int, cpf_int[9]);

	for (int i = 0; i < 11; ++i){
		cpf[i] = cpf_int[i] + 48;
	}	

	return cpf;
}


int main(int argc, char const *argv[]){
	
	printf("switch((nome){\n");
	for (int i = 0; i < 100; ++i){
		printf("case %i:\nreturn "";\nbreak;\n");
	}
	printf("}\n");

	return 0;
}