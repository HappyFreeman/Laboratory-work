#include <iostream>

using namespace std;

int main()
{
	float x, y, A1, A2, B1, B2, C1, C2;
	cout << "Enter A1, B1, C1: " << endl;
	cin >> A1 >> B1 >> C1;
	cout << "Enter A2, B2, C2: " << endl;
	cin >> A2 >> B2 >> C2;
	x = ((B1 * C2) - (B2 * C1)) / ((B1 * A2) - (B2 * A1));
	y = (C1 - A1 * x) / B1;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;  // пришлось взять листок и ручку
}