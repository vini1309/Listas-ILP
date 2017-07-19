#include <iostream>
using namespace std;
int main () {

	int n, velocidade, tempo, distancia=0;
		
	cin >> n;	
	
	for (int i=0; i < n; i++){		
		cin >> tempo >> velocidade;
		
		distancia += (tempo*velocidade);
		
	}		
		
	cout << distancia << endl;	
	
}
