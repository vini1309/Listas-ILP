#include <iostream>
#include <string>
using namespace std;
int main(){

	int minC, minm, minM, minN; //mínimo de char's, minusculas, maiusculas e nºs
	int contm=0, contM=0, contN=0;	
	string senha;
	
	cin >> minC >> minm >> minM >> minN;

	cin.ignore();
	getline(cin,senha);

	if (senha.size() < minC) cout << "Ufa :)" << endl;
	else {
		for (int i=0; i<senha.size(); i++){			
			if('a' <= senha[i] && senha[i] <= 'z') contm++;		
			else if('A' <= senha[i] && senha[i] <= 'Z') contM++;
			else if('0' <= senha[i] && senha[i] <= '9') contN++;
		}

		if (contm < minm) cout << "Ufa :)" << endl;
		else if (contM < minM) cout << "Ufa :)" << endl;
		else if (contN < minN) cout << "Ufa :)" << endl;
		else cout << "Ok =/" << endl;		
	}
	
}
