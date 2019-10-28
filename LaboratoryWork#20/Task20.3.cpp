#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	/*for (int i = 0; i <= 255; i++)
		cout << "code = " << i << "\t" << "char = " << (char)i << endl;*/

	string C;
	cout << "Enter C : ";
	cin >> C;

	int len = C.length(), counter = 0;
	
	for (int i = 0; i < len; i++)
		if (C[i] >= 'A' && C[i] <= 'Z')
			counter++;
	cout << counter;

}
