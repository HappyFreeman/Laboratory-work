#include <iostream>
#include "windows.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cin >> a;
	if (a != 0) {
		if (a > 0) cout << "Положительное ";
		else cout << "Отрицательное ";
		if (a % 2 == 0) cout << "четное число " << endl;
		else cout << "нечетное число " << endl;
	}
	else cout << "нулевое число" << endl;

}