#include <iostream>

using namespace std;

int Sign(int x) {
	if (x < 0) x = -1;
	if (x > 0) x = 1;
	return x;
}

int main()
{
	int A, B, sum;
	cout << "Enter A and B: " << endl;
	cin >> A >> B;
	sum = Sign(A) + Sign(B);
	cout << sum << endl;
}