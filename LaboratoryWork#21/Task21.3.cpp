#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str;
	cout << "Enter str : " << endl;
	getline(cin, str);

	char c = str[0];
	int len = str.length();
	
	for (int i = 1; i < len; i++) {
		if (str[i] == c)
			str[i] = '.';
	}

	cout << str;
}

