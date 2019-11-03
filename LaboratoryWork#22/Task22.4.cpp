#include <iostream>
#include<fstream>
#include<string>
#include"windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string path = "Task22.4.txt";
	fstream fs;
	fs.open(path, fstream::in);
	string buff;
	getline(fs, buff);
	fs.close();
	//cout << buff;

	int len = buff.length();
	string newstr;

	newstr += buff[0];

	for (int i = 1; i < len; i++) {
		if ((buff[i] != ' ') || ((buff[i] == ' ') and (buff[i - 1] != ' '))) {
			newstr += buff[i];
		}
	}
	//cout << endl;
	//cout << newstr;
	fs.open(path, fstream::out);
	fs << newstr;

}
