#include<iostream>
#include <iomanip>
#include<math.h>
#define MAX 100
using namespace std;
bool songuyento(int n)
{
	if (n < 2) return false;
	
	for (int i = 2; i <= n / 2; i++)
	{
		if (n == 2) return true;
		if (n % i == 0)
			return false;
	}
		return true;
}
bool sonchinhphuong(int n)
{
	if (n > 1)
	{
		if (n == int(sqrt(n)) * int(sqrt(n))) return true;
		else false;
	}
	else false;
}
int main() {
	int n, k = 0, sum1, j = 0, sum2;
	cin >> n;
	int a[MAX], b[MAX], c[MAX];
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
		if (songuyento(a[i]) == true) 
		{
			b[k] = a[i];
			k++;
		}
		if (sonchinhphuong(a[i]) == true)
		{
			c[j] = a[i];
			j++;
		}
	}
	cout << "Cac so nguyen to la: ";
	sum1 = k;
	for (int k = 0; k < sum1; k++)
	{
		cout << b[k] << " ";
	}
	cout << endl << "Cac so chinh phuong la: ";
	sum2 = j;
	for (int j = 0; j < sum2; j++)
	{
		cout << c[j] << " ";
	}
	return 0;
}