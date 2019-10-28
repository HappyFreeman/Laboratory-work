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

	string newstr;
	newstr = str;
	int k = 0;

	for (int i = 0; i < len; i ++) 
		if (i % 2 == 1) {
			newstr[k] = str[i];
			k++;
		}
	
	for (int i = len - 1; i >= 0; i--) 
		if (i % 2 == 0) {
			newstr[k] = str[i];
			k++;
		}
	
	cout << newstr << endl;
}