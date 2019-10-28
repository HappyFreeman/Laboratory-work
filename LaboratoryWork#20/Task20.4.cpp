#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char C;
	string S;

	cout << "Enter C : ";
	cin >> C;
	cout << "Enter S : " << endl;
	cin >> S;

	int len = S.length();

	for (int i = 0; i <= len; i++)
		if (S[i] == C) {
			S.insert(i, 1, C);
			i++;
		}

	cout << S;

}
