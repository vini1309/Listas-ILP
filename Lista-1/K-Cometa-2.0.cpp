#include <iostream>
using namespace std;
int main () {

	int anoAtual=0, proximoAno=0, divisao=0;

	cout << "Digite qualquer ano, a partir do ano 0:\n"; 
	cin >> anoAtual;
		
	divisao = anoAtual/76;
				
	cout << "O próximo Cometa Halley passa no ano ";
	if (anoAtual % 76 < 10){
		proximoAno = (divisao * 76) + 10;
		cout << proximoAno << ".\n";	}
			
	else {	proximoAno = ((divisao+1) * 76) + 10;
		cout << proximoAno << ".\n";	}

}
