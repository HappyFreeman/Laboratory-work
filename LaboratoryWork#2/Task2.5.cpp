#include <iostream>
# include < math.h>

using namespace std;

int main()
{
	float x1, x2, x3, y1, y2, y3, Sid1, Sid2, Sid3, p, S;
	cout << "Enter x1 and y1: " << endl;
	cin >> x1 >> y1;
	cout << "Enter x2 and y2: " << endl;
	cin >> x2 >> y2;
	cout << "Enter x3 and y3: " << endl;
	cin >> x3 >> y3;
	Sid1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	Sid2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	Sid3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	p = (Sid1 + Sid2 + Sid3) / 2;  // полупериметр
	cout << "Perimeter = " << Sid1 + Sid2 + Sid3 << endl;
	S = p * ((p - Sid1) * (p - Sid2) * (p - Sid3)); // формула Герона
	cout << "Area = " << S << endl;
}