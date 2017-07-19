#include <iostream>
using namespace std;
int main () {

	long long compTubo, nTapetes, tapMaior, tapMenores, areaTotal;

	cin >> compTubo >> nTapetes;

	tapMenores = nTapetes - 1;
	tapMaior = compTubo - tapMenores;
	areaTotal = tapMenores + tapMaior * tapMaior;

	cout << areaTotal << endl;

}
