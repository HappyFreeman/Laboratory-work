#include <iostream>

using namespace std;

int main()
{
	const float Pi = 3.14f;
	float a;
	cout << "Enter a: ";
	cin >> a;
	a *= Pi / 180;
	cout << "Radians = " << a << endl; // ez (На самом деле я немного подумал)
}