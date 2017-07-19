#include <iostream>
using namespace std;
int main () {

	//pista = comprimento da pista, cadapedagio = custo de cada pedágio.
	
	int pista, Dpedagios, custopkm, cadapedagio;
	int qtdPedagios, custoPista, custoPedagios;
	
	cin >> pista >> Dpedagios;
	cin >> custopkm >> cadapedagio;
		
	qtdPedagios = pista / Dpedagios;
	custoPista = custopkm * pista;
	custoPedagios = qtdPedagios * cadapedagio;

	cout << custoPedagios + custoPista << endl;
	

}
