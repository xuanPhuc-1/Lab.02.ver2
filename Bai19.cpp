#include<iostream>
#include <iomanip>
#include<math.h>

using namespace std;
int main ()
{
	int n, sum2 = 0;
	cout << "Nhap so mon can tinh: ";
	cin >> n;
	double* subj = new double[n+1], sum1 = 0;
	int* heso = new int[n + 1];
	for (int i = 1; i <= 2; i++)
	{
		cout << "Nhap diem mon thu " << i << " : ";
		cin >> subj[i];
		cout << "Nhap he so mon thu " << i << " : ";
		cin >> heso[i];
		while (subj[i] < 0.0 || subj[i] > 10.0) {
			cout << "Nhap lai diem mon thu " << i << " (trong khoang tu 0 --> 10) :";
			cin >> subj[i];
		}
		while (heso[i] < 0) {
			cout << "Nhap lai he so mon thu " << i << " (he so > 0) :";
			cin >> heso[i];
		}
		sum1 += subj[i] * heso[i];
		sum2 += heso[i];
	}
	cout << "Tong so mon hoc la: " << n << endl;
	cout << "Tong he so cua " << n << " mon hoc la : " << sum2 << endl;
	cout << "Diem trung binh : " << fixed << setprecision(2) << sum1 / sum2 ;
	return 0;
}
