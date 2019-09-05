#include <iostream>
#include "windows.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cin >> a;

	if (a % 2 == 0) cout << "Четное ";
	else cout << "Нечетное ";

	if (a < 10) cout << "однозначное число" << endl;
	if (a > 9 && a < 100) cout << "двузначное число" << endl;
	if (a > 99) cout << "трехзначное число" << endl;

}