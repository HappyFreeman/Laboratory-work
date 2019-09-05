#include <iostream>

using namespace std;

int main()
{
	int firstNumber;
	cin >> firstNumber;
	if ((firstNumber > 9) && (firstNumber < 100) && (firstNumber / 2 == 0)) cout << "true";
	else cout << "false";
}
