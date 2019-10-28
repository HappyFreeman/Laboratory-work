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
	getline(cin, str); //----------------

	int len = str.length();
	int r = 0, min;

	for (int i = 0; i < len; i++) {
		if (str[i] == ' ') {
			r++;
			if (r == 1) min = i;
			else if (i - min < min) min = i - min;
			if (len - i - 1 < min) min = len - i - 1;
		}
	}

	cout << min;

}

