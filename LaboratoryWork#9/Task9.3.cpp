#include <iostream>
#include "windows.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;
	cin >> number;

	switch (number)
	{
	case 10: cout << "Десять "; break;
	case 11: cout << "Одиннадцать "; break;
	case 12: cout << "Двенадцать "; break;
	case 13: cout << "Тринадцать "; break;
	case 14: cout << "Четырнадцать "; break;
	case 15: cout << "Пятнадцать "; break;
	case 16: cout << "Шестнадцать "; break;
	case 17: cout << "Семнадцать "; break;
	case 18: cout << "Восемнадцать "; break;
	case 19: cout << "Девятнадцать "; break;
	case 20: cout << "Двадцать "; break;
	}

	if (number > 20) {
		switch (number / 10)
		{
		case 2: cout << "Двадцать "; break;
		case 3: cout << "Тридцать "; break;
		case 4: cout << "Сорок "; break;
		}

		switch (number % 10)
		{
		case 1: cout << "одно "; break;
		case 2: cout << "два "; break;
		case 3: cout << "три "; break;
		case 4: cout << "четыре "; break;
		case 5: cout << "пять "; break;
		case 6: cout << "шесть "; break;
		case 7: cout << "семь "; break;
		case 8: cout << "восемь "; break;
		case 9: cout << "девять "; break;
		}
	}

	if (number != 21 && number != 31) cout << "учебных заданий" << endl;
	if (number == 21 || number == 31) cout << "учебное задание" << endl;



}
