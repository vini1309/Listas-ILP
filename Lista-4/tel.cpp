#include <iostream>
#include <string>
using namespace std;
int main() {

	int i=0;
	string numero;

	getline(cin,numero);

	while (i < numero.size()){
				
		if(numero[i]=='A'||numero[i]=='B'||numero[i]=='C')
			numero[i]='2';
		if(numero[i]=='D'||numero[i]=='E'||numero[i]=='F')
			numero[i]='3';
		if(numero[i]=='G'||numero[i]=='H'||numero[i]=='I')
			numero[i]='4';
		if(numero[i]=='J'||numero[i]=='K'||numero[i]=='L')
			numero[i]='5';
		if(numero[i]=='M'||numero[i]=='N'||numero[i]=='O')
			numero[i]='6';
		if(numero[i]=='P'||numero[i]=='Q'||numero[i]=='R'||numero[i]=='S')
			numero[i]='7';
		if(numero[i]=='T'||numero[i]=='U'||numero[i]=='V')
			numero[i]='8';
		if(numero[i]=='W'||numero[i]=='X'||numero[i]=='Y'||numero[i]=='Z')
			numero[i]='9';		
	
		i++;
	
	}

	cout << numero << endl;

} 

