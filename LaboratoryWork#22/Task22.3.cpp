#include <iostream>
#include<fstream>
#include<string>
#include"windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string path1 = "1.txt", path2 = "2.txt";

	string buff1, buff2, buff12;
	int len, a;
	fstream fs1, fs2;
	fs1.open(path1, fstream::in); //           fs.open(path, fstream::in | fstream::out);
	fs2.open(path2, fstream::in);

	getline(fs1, buff1);
	getline(fs2, buff2);
	buff12 = buff2 + buff1;

	fs1.close();
	fs2.close();

	fs1.open(path1, fstream::out);
	fs1 << buff12;

	
}
