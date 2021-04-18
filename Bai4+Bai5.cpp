#include<iostream>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int a, b, greater;
	cin >> a >> b;
	if (a > b)
	{
		greater = a;
	}
	else
	{
		greater = b;
	}
	for (int i = greater; i <= a * b; i++)
	{
		if (i % b == 0 && i % a == 0)
		{
			cout << i << " la BCNN" << endl;;
			break;
		}
	}
	if (a == 0 || b == 0) {
		return a + b;
	}
	while (a != b) {
		if (a > b) {
			a -= b; 
		}
		else {
			b -= a;
		}
	}
	cout << "UCLN " << a;
	return 0;
}