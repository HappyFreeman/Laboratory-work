#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str;
	cout << "Enter string: " << endl;
	getline(cin, str);

	int len = str.length(), coun = 0;

	for (int i = 0; i < len; i++) 
		if (str[i] == ' ') 
			coun++;

	cout << coun + 1 << endl;
}

