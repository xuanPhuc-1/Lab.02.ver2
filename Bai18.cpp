#include<iostream>
#include <iomanip>
#include<math.h>
#define MAX 3
using namespace std;
int main ()
{
	double subj[MAX], sum = 0;
	for (int i = 1; i <= 2; i++)
	{
		cout << "Nhap diem mon thu " << i << " : ";
		cin >> subj[i];
		while (subj[i] < 0 || subj[i] > 10) {
			cout << "Nhap lai diem mon thu " << i << " (trong khoang tu 0 --> 10) :";
			cin >> subj[i];
		}
		sum += subj[i];
	}
	cout << "Diem trung binh : " << fixed << setprecision(2) << sum / 2;
	return 0;
}
