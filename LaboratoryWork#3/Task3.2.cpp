#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cout << "Enter A, B, C: " << endl;
	cin >> A >> B >> C;
	A = B;
	B = C;
	C = A;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C << endl; // Я правильно понял задание?
}