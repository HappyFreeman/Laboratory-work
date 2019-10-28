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

	int len = str.length();
	int a, b;
	int k = 0;

	for (int i = len - 1; i > 0; i--) {

		if (str[i] == 46 && k == 0) {
			b = i;
			k++;
		}
		if (str[i] == 92) {
			a = i;
			break;
		}
	}
		str.erase(b, len - b);
		str.erase(0, a + 1);
		cout << str;	 
}