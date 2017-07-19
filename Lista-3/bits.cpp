#include <iostream>
using namespace std;
int main () {

	int valor=-1, cont=1, n50, n10, n5, n1;

	while(valor !=0){
	
		cin >> valor;
		if(valor==0)break;
		
		cout << "Teste " << cont << endl;
		
		n50 = valor/50;
		n10 = (valor-(n50*50))/10;
		n5= (valor-(n50*50)-(n10*10))/5;
		n1 = valor-(n50*50)-(n10*10)-(n5*5);		

		cout << n50 << " " << n10 << " " << n5 << " " << n1 << "\n\n";
		cont++;
	}
}

