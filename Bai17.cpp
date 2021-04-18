#include<iostream>
#include <iomanip>
#include<math.h>
#define MAX 6
using namespace std;
int main ()
{
	double subj[MAX], sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		cin >> subj[i];
		sum += subj[i];
	}
	cout << fixed << setprecision(2) << "Diem trung binh la: " << sum / 5;
	return 0;
}
