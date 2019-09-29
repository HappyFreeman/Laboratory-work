#include <iostream>
#include "windows.h" 

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int N;

	cin >> N;

	cout << "Год ";

	switch (N % 10)
	{
	case 0:
	case 1: cout << "бел"; break;
	case 2:
	case 3: cout << "чер"; break;
	case 4:
	case 5: cout << "зелён"; break;
	case 6:
	case 7: cout << "красн"; break;
	case 8:
	case 9: cout << "жёлт"; break;
	}

	switch (N % 12)
	{
	case 6:
	case 7:
	case 8: cout << "ого "; break;
	default: cout << "ой ";
		break;
	}

	switch ((N + 8) % 12)
	{
	case 0: cout << "крысы"; break;
	case 1: cout << "коровы"; break;
	case 2: cout << "тигра"; break;
	case 3: cout << "зайца"; break;
	case 4: cout << "дракона"; break;
	case 5: cout << "змеи"; break;
	case 6: cout << "лошади"; break;
	case 7: cout << "овцы"; break;
	case 8: cout << "обезьяны"; break;
	case 9: cout << "курицы"; break;
	case 10: cout << "собаки"; break;
	case 11: cout << "свиньи"; break;
	}


}

