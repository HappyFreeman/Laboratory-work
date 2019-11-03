#include <iostream>
#include<fstream>
#include<string>
#include"windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string path = "Task22.5.txt";
	fstream fs;
	fs.open(path, fstream::in);
	string buff;
	getline(fs, buff);
	string end;
	int counter = 0;
	while (buff != end) {
		end = buff;
		if (buff[0] == ' ' && buff[1] == ' ' && buff[2] == ' ' && buff[3] == ' ' && buff[4] == ' ') counter++;
		getline(fs, buff);
	}

	fs.close();
	cout << counter;

}
