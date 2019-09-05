#include <iostream>

using namespace std;

int main()
{
	int A, B, C, side1, side2;
	side1, side2 = 0;
	cout << "Enter A, B, C:" << endl;
	cin >> A >> B >> C;
	side1 = A / C;
	side2 = B / C;
	cout << "number square = " << side1 * side2 << endl;
	C *= C * side1 * side2;
	C = A * B - C;
	cout << "Area = " << C << endl;	
}