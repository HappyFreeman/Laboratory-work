#include <iostream>
#include<fstream>
#include<string>
#include"windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	string path;
	int N, K;

	cout << "Введине название :" << endl;
	cin >> path;
	path += ".txt";
	cout << "Enter N and K : " << endl;
	cin >> N >> K;


	string buff;
	int len, a;
	fstream fs;
	fs.open(path, fstream::out); //           fs.open(path, fstream::in | fstream::out);


	if (!fs.is_open()) {
		cout << "error opening file" << endl;
	}
	else {
		cout << "file is opened" << endl;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < K; j++) {
				fs << "*";
			}
			fs << "\n";
		}
	}
}
