#include <iostream>

using namespace std;

int main()
{
	bool condition = false;
	int abc, a, b, c;
	cin >> abc;
	a = abc / 100;
	c = abc % 10;
	b = abc / 10;
	b %= 10;
	if (a > b && b > c) condition = true;
	if (a < b && b < c) condition = true;
	if (condition) cout << "true";
	else cout << "false";
}