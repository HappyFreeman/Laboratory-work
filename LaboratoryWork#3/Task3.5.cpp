#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int x;
	cout << "Enter x: ";
	cin >> x;
	x = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	cout << "y = " << x << endl;
}