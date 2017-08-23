#include <iostream>
using namespace std;
int main () {

	int N, X, soma=0;
		
	cin >> N;	
	
	for (int i=0; i < N; i++){		
		cin >> X;
		soma = soma + X;
	}			
	
	cout << soma << endl;

}
