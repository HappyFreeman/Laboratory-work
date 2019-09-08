#include <iostream>

using namespace std;

int main()
{
	const int N = 3;
	int A[N], B[N];
	int s;

	cout << "Array A: " << endl;
	for (int i = 0; i < N; i++)
		cin >> A[i];

	cout << "Array B: " << endl;
	for (int i = 0; i < N; i++)
		cin >> B[i];

	for (int i = 0; i < N; i++) {
		s = A[i];
		A[i] = B[i];
		B[i] = s;
	}

	cout << "Array A = " << endl;
	for (int i = 0; i < N; i++)
		cout << A[i] << " ";
	cout << endl;

	cout << "Array B =  " << endl;
	for (int i = 0; i < N; i++)
		cout << B[i] << " ";
	cout << endl;

}
