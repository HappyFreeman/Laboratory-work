#include <iostream>


using namespace std;

int main()
{
	char C;
	cout << "Enter C : ";
	cin >> C;
	cout << "prev = " << char(C - 1) << endl << "next = " << char(C + 1) << endl;
}
