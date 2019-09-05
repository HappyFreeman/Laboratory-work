#include <iostream>

using namespace std;

int main()
{
	int a, b, c;
	bool condition = true;
	cout << "Enter a, b, c" << endl;
	cin >> a >> b >> c;
	if (c >= a + b) condition = false;
	if (a >= b + c) condition = false;
	if (b >= a + c) condition = false;
	if (condition) cout << "true";
	else cout << "false";
}