#include<iostream>
#include <iomanip>
#include<math.h>
#define MAX 100
using namespace std;
int main ()
{
	int n;
	cin >> n;
	switch (n)
		{
		case 0:
			cout << "day la chu so khong";
			break;
		case 1:
			cout << "day la chu so mot";
			break;
		case 2:
			cout << "day la chu so hai";
			break;
		case 3:
			cout << "day la chu so ba";
			break;
		case 4:
			cout << "day la chu so bon";
			break;
		case 5:
			cout << "day la chu so nam";
			break;
		case 6:
			cout << "day la chu so sau";
			break;
		case 7:
			cout << "day la chu so bay";
			break;
		case 8:
			cout << "day la chu so tam";
			break;
		case 9:
			cout << "day la chu so chin";
			break;
		default:
			cout << "chu so ko hop le" << endl;
			break;
		}
	return 0;
}
