#include<iostream>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int x, y, temp;
	cin >> x >> y;
	temp = x;
	for (int i = 1; i < y; i++)
	{
		x = x * temp;
	}
	cout << temp << "^" << y << " = " << x;
	return  0;
}