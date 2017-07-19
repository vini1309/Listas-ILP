#include <iostream>
using namespace std;
int main () {

	int anoAtual, proximoAno, divisao;

	cin >> anoAtual;
	
	
	divisao = (anoAtual-1910)/76;
	proximoAno = (divisao * 76) + 1986;
				

	cout << proximoAno << endl;


}
