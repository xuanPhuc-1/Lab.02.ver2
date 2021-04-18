#include<iostream>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int n;
	bool b = true;
	cin >> n;
	while (n < 2) {
		cin >> n;
	}
	for (int i = 2 ; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			b = false;
			cout << "No";
			break;
		}
		
	}
	if(b == true)
	cout << "Yes";
	return 0;
}