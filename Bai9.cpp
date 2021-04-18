#include<iostream>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int n, i, sum = 0;
	cin >> n;
	while (n != 0) {
		i = n % 10;
		n = n / 10;
		sum += i;
		
	}
	cout << sum << " ";
	return  0;
}