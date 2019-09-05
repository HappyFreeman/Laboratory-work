#include <iostream>

using namespace std;

int main()
{
	int a, b, c, sum;
	cin >> a >> b >> c;
	if (a <= b && a <= c) sum = b + c;
	if (b <= c && b <= a) sum = a + c;
	if (c <= b && c <= a) sum = a + b;
	cout << sum;
}