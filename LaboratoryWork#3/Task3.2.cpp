#include <iostream>

using namespace std;

int main()
{
	int A, B, C, q;
	cout << "Enter A, B, C: " << endl;
	cin >> A >> B >> C;
	q = A;
	A = B;
	B = C;
	C = q;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C << endl; // Я правильно понял задание?
}