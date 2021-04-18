#include<iostream>
#include<math.h>
#define MAX 5
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b)
    {

        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
            cout << "Day la tam giac vuong" << "chu vi la :" << a+b+c;
        else if (a == b && b == c)
            cout << "Day la tam giac deu" << "chu vi la :" << a + b + c;
        else if (a == b || a == c || b == c)
            cout << "Day la tam giac can" << "chu vi la :" << a + b + c;
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
            cout << "Day la tam giac tu" << "chu vi la :" << a + b + c;
        else
            cout << "Day la tam giac nhon" << "chu vi la :" << a + b + c;
    }
    else
        cout << "Day khong phai la tam giac " << endl;
    return 0;
}