#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main () {

	float porcent, contp=0, contpl=0;
	char letra;
	string texto;

	cin >> letra;
	cin.ignore();

	getline(cin, texto);

	for (int i=0; i<texto.size(); i++){
		if(i==(texto.size()-1) && texto[i]!=' ') contp++;
		else if(texto[i+1]==' ') contp++;
		
		if(texto[i]==letra){
			if(texto[i]==letra && i==0){
					contpl++;
			}
			for(int j=i-1; j>=0; j--){
				if(contpl == 0){
					contpl++;
					break;
				} 
				else if(texto[j]==letra){
					break;
				}
				else if(texto[j]==' '){
					contpl++;
					break;
				}
				
			}		
		}		
	}
	
	porcent = (contpl/contp)*100;
	cout << setprecision(1) << fixed;

	if(texto == " ") cout << 0.0 << endl;
	else cout << porcent << endl;
	

}