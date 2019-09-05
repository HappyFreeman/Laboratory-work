#include <iostream>
#include "windows.h"
#include <string>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int a, b, S, P;
	cin >> a;
	cin >> b;
	S = a * b;
	P = 2 * (a + b);
	cout << "Area = " << S << endl;
	cout << "Perimeter = " << P << endl;	
}