#include <iostream>
#include <string
using namespace std;

int main()
{
	float a, b;
	cin >> a >> b;
	a = abs(a);
	b = abs(b);
	cout << "Sum = " << a + b << endl;
	cout << "Difference = " << a - b << endl;
	cout << "Multiplication = " << a * b << endl;
	cout << "Division = " << a / b << endl;
}