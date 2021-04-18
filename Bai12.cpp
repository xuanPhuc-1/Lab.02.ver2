#include<iostream>
#include <iomanip>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n == int(sqrt(n)) * int(sqrt(n))) cout << n << " la so chinh phuong" << endl;
	else cout << n << " ko la so chinh phuong" << endl;
	return 0;
}