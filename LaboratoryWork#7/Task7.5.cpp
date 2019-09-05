#include <iostream>

using namespace std;

int main()
{
	int abcd;
	cin >> abcd;
	if ((abcd / 1000) == (abcd % 10)) {
		abcd /= 10;  // abc
		abcd %= 100;  // bc
		if ((abcd / 10) == (abcd % 10)) cout << "true";
		else cout << "false";
	}
	else cout << "false";	
}