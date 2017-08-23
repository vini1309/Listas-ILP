#include <iostream>
using namespace std;
int main () {

	int nsec, n, som1=0, som2=0;

	cin >> nsec;

	int sec[nsec];

	for(int i=0; i<nsec; i++){
		cin >> n;
		sec[i] = n;
	}
	
	for(int i=0; i<nsec; i++){
		som1 += sec[i];
	}
	
	for(int i=0; i<nsec; i++){
		som2 += sec[i];
		if(som2 == som1/2) {
			cout << i+1 << endl;
			break;
		}
	}

	

}