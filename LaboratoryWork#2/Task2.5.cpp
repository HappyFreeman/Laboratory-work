#include <iostream>
# include < math.h>

using namespace std;

int main()
{
	float x1, x2, x3, y1, y2, y3, Side1, Side2, Side3, p, S;
	cout << "Enter x1 and y1: " << endl;
	cin >> x1 >> y1;
	cout << "Enter x2 and y2: " << endl;
	cin >> x2 >> y2;
	cout << "Enter x3 and y3: " << endl;
	cin >> x3 >> y3;
	Side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	Side2 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	Side3 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	p = (Side1 + Side2 + Side3) / 2;  // полупериметр
	cout << "Perimeter = " << Side1 + Side2 + Side3 << endl;
	S = p * ((p - Side1) * (p - Side2) * (p - Side3)); // формула Герона
	cout << "Area = " << S << endl;
}