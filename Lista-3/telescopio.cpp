#include <iostream>
using namespace std;
int main () {

	long long area, starestud, fotons, totalfot, starvisivel=0;

	cin >> area >> starestud;	

	for (int i=0;i < starestud;i++){
			
		cin >> fotons;
		totalfot = fotons * area;
		if(totalfot >= 40000000) starvisivel++; 	
	} 

	cout << starvisivel << endl;

	
}

