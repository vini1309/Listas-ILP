#include <iostream>
using namespace std;
int main () {

	int n=-1, n2=0, parte1, parte2;	
	
	while (n != 0){
		cin >> n;
		if (n==0)break;
		int potdez=10;		
		n2 = n*n;
		
		if (n == 1) cout << n << ": S" << endl;		
		else{
			if((n2/potdez) <= 0) cout << n << ": N" << endl;
			else{
				while((n2/potdez) > 0){
					parte2 = n2 % potdez;
					parte1 = n2 / potdez;
					
					if (((parte1 + parte2) == n) && (parte1>0) && (parte2>0)) {
						break;				
					}	

				potdez *=10;		
				}
				if (((parte1 + parte2) == n) && (parte1>0) && (parte2>0)) 
					cout << n << ": S" << endl;
				
				else cout << n << ": N" << endl;			
			}			
		}
		
	}						
	
}
