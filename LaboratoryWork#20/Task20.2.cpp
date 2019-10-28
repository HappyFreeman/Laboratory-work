#include <iostream>
#include <string>
#include "windows.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string C;
	cout << "Enter C: ";
	cin >> C;

	int len = C.length();

	for (int i = 0; i < len; i++)
		cout << C[i] << " ";

}
	
