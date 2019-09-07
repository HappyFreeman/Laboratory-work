#include <iostream>

using namespace std;

float PowerA3(float A) {
	float B;
	B = A * A * A;
	return B;
}

int main()
{
	float A, B;
	for (int i = 0; i < 5; i++) {
		cout << "Enter " << i + 1 << " number: " << endl;
		cin >> A;
		B = PowerA3(A);
		cout << "cobe = " << B << endl;
	}
}
