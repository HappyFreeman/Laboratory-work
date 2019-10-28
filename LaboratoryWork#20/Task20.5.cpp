#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string S, S0;

	cout << "Enter S : ";
	cin >> S;
	cout << "Enter S0 : " << endl;
	cin >> S0;

	int len = S0.length(), counter = 0, r = 0;

	while (r != -1) {
		r = S.find(S0);
		if (r != -1) {
			counter++;
			S.erase(r, len);
		}
	}

	cout << counter;
		
}
