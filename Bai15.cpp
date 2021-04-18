#include<iostream>
#include <iomanip>
#include<math.h>
#define MAX 100
using namespace std;
int fibonaci(int n) {
	if (n == 1) return 1;
	if (n == 2) return 1;
	if (n > 2) return fibonaci(n-1)+fibonaci(n-2);
}
int main() {
	int n;
	bool check = false;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << fibonaci(i) << " ";
		if (n == fibonaci(i))
		{
			check = true;
			break;
		}
	}
	if (check == true) cout << endl << n << " is a part of fibonacci";
	else cout << endl << n << " is not a part of fibonacci";
	
	return 0;
}
