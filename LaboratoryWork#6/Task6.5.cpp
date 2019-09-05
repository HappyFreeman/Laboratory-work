#include <iostream>

using namespace std;

int main()
{
	int century, year;
	cin >> year;
	century = year / 100;
	if (year % 100 > 0) century++;
	cout << "century = " << century << endl;
}