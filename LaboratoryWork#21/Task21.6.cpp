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
	int a = -1, b;

	//92

	for (int i = len - 1; i > 1; i--) {
		if (str[i] == 92 && a == -1) {
			a = i;
			i--;
		}
		if (str[i] == 92 && a != -1) {
			b = i;
			break;
		}
	}
	
	str.erase(a, len - a);
	str.erase(0, b + 1);
	cout << str;
	
}