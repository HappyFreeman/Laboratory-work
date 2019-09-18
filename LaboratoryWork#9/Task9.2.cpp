#include <iostream>
#include "windows.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string str[]{ "З", "Ю", "В", "С" };

	string str_direction;
	cin >> str_direction;

	int direction;
	cin >> direction;

	int a;

	for (int i = 0; i < 4; i++) 
		if (str[i] == str_direction) 
			a = i;

	a += direction;

	if (a == -1) a = 3;
	if (a == 4) a = 0;

	cout << str[a] << endl;

}

