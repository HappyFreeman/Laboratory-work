#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int a, b, c;
	bool condition = false;
	cout << "Enter a, b, c" << endl;
	cin >> a >> b >> c;
	if (a == sqrt(pow(b, 2) + pow(c, 2))) condition = true;
	if (b == sqrt(pow(a, 2) + pow(c, 2))) condition = true;
	if (c == sqrt(pow(a, 2) + pow(b, 2))) condition = true;
	if (condition) cout << "true";
	else cout << "false";
}