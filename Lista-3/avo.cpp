#include <iostream>
using namespace std;
int main () {

	int n=-1, moeda1, moeda2, cont=1;

	while(n != 0){
		
		cin >> n;
		if(n==0)break;
		
		int compens=0;

		cout << "Teste " << cont << endl;		
		
		for (int i=0; i < n; i++){
			
			cin >> moeda1 >> moeda2;
						
			compens += (moeda1 - moeda2);
			
			cout << compens << endl;

		}
		 
	cont++;
	}
}
