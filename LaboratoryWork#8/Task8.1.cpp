#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cout << "Enter A, B: " << endl;
	cin >> A >> B;
	if (A != B) {
		if (A > B) B = A;
		else A = B;
	}
	else {
		A = 0;
		B = 0;
	}
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
}