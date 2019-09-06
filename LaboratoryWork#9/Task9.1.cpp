#include <iostream>
#include "windows.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int Day, Month, a, b;
	cout << "Enter Day, Month: " << endl;  // Я УЖЕ ГОРОВИЛ ТЕБЕ, ЧТО ТАКОЕ БЕЗУМИЕ?
	cin >> Day >> Month;
	a = Day / 10;
	b = Day % 10;
	if (a > 1 && b != 0) {
		switch (a) {
		case 2: 
			cout << "Двадцать ";
			break;
		case 3: 
			cout << "Тридцать ";
			break;
		}
	}
	if (Day > 20 && b != 0) {
		a = Day % 10;
		switch (a)
		{
		case 1:
			cout << "первое ";
			break;
		case 2:
			cout << "второе ";
			break;
		case 3:
			cout << "третье ";
			break;
		case 4:
			cout << "четвертое ";
			break;
		case 5:
			cout << "пятое ";
			break;
		case 6:
			cout << "шестое ";
			break;
		case 7:
			cout << "седьмое ";
			break;
		case 8:
			cout << "восьмое ";
			break;
		case 9:
			cout << "девятое ";
			break;

		}
	}

	if (Day == 20 || Day == 30) {
		if (Day == 20) cout << "Двадцатое ";
		else cout << "Тридцатое ";
	}

	if (Day < 21) {
		switch (Day)
		{
		case 1:
			cout << "Первое ";
			break;
		case 2:
			cout << "Второе ";
			break;
		case 3:
			cout << "Третье ";
			break;
		case 4:
			cout << "Четвертое ";
			break;
		case 5:
			cout << "Пятое ";
			break;
		case 6:
			cout << "Шестое ";
			break;
		case 7:
			cout << "Седьмое ";
			break;
		case 8:
			cout << "Восьмое ";
			break;
		case 9:
			cout << "Девятое ";
			break;
		case 10:
			cout << "Десятое ";
			break;
		case 11:
			cout << "Одиннадцатое ";
			break;
		case 12:
			cout << "Двенадцатое ";
			break;
		case 13:
			cout << "Тринадцатое ";
			break;
		case 14:
			cout << "Четырнадцатое ";
			break;
		case 15:
			cout << "Пятнадцатое ";
			break;
		case 16:
			cout << "Шестнадцатое ";
			break;
		case 17:
			cout << "Семнадцатое ";
			break;
		case 18:
			cout << "Восемнадцатое ";
			break;
		case 19:
			cout << "Девятнадцатое ";
			break;
		case 20:
			cout << "Двадцатое ";
			break;

		}
	}

	switch (Month)
	{
	case 1:
		cout << "Января";
		break;
	case 2:
		cout << "Февраля";
		break;
	case 3:
		cout << "Марта";
		break;
	case 4:
		cout << "Апреля";
		break;
	case 5:
		cout << "Мая";
		break;
	case 6:
		cout << "Июня";
		break;
	case 7:
		cout << "Июля";
		break;
	case 8:
		cout << "Августа";
		break;
	case 9:
		cout << "Сентября";
		break;
	case 10:
		cout << "Октября";
		break;
	case 11:
		cout << "Ноября";
		break;
	case 12:
		cout << "Декабря";
		break;

	}


}