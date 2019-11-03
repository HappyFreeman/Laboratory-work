#include <iostream>
#include<fstream>
#include<string>
#include"windows.h"

using namespace std;

int main()
{	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string path = "22.1.txt";

	string buff;
	int len, a;
	fstream fs;
	fs.open(path, fstream::in); //           fs.open(path, fstream::in | fstream::out);
	if (!fs.is_open()) {
		cout << "error opening file" << endl;
	}
	else {
		cout << "file is opened" << endl;

		getline(fs, buff);
		len = buff.length();
		for(int i = 0; i < len; i++)
			if (buff[i] == ' ') {
				a = i;
				break;
			}
		buff.erase(0, a + 1);
		cout << buff << endl;
		fs.close();
		fs.open(path, fstream::out);
		fs << buff;
	}
}
