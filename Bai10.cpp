#include<iostream>
#include <iomanip>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	double C, K;
	cout << "Fara" << "  Cencius    " << "Kenvin" << endl;
	for (double F = 0; F <= 300; F+=20) {
		C = ((F - 32) * 5) / 9;
		K = C + 273.15;
		
		cout << F << "    "  << fixed << setprecision(2) <<  C << "       " << fixed << setprecision(2) << K << endl;
	}
	return 0;
}