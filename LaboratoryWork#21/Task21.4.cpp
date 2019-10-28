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
	int coun = 0;

	/*for (int i = 0; i <= 255; i++)
		cout << "code = " << i << "\t" << "char = " << (char)i << endl;*/
	
	unsigned char f;

	for (int i = 0; i < len; i++) {
		f = str[i];
		int a = f;
		int b = a - 32;
		if (a == 168 || a == 184 || a == 192 || a == 197 || a == 200 || a == 206 || a == 211 || a == 219 || a == 221 || a == 222 || a == 223) coun++;
		else if (b == 168 || b == 184 || b == 192 || b == 197 || b == 200 || b == 206 || b == 211 || b == 219 || b == 221 || b == 222 || b == 223) coun++;
	}

	cout << coun << endl;

}