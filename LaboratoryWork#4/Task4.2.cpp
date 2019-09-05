#include <iostream>

using namespace std;

int main()
{
	const float Pi = 3.1415f;
	float a;
	cout << "Enter a: ";
	cin >> a;
	a *= 180 / Pi;
	cout << "Degrees = " << a << endl;
}