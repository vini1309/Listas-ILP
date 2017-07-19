#include <iostream>
using namespace std;
int main () {

	//a, b e c são as dimensões dos contêiners
	//x, y e z são as dimensões do navio
	
	int a, b, c, x, y, z;
	int Ageral, Bgeral, Cgeral;
			
	cin >> a >> b >> c;
	cin >> x >> y >> z;
	
	
	Ageral = x/a;
	Bgeral = y/b;
	Cgeral = z/c;
	
	cout << Ageral * Bgeral * Cgeral << endl;

}
