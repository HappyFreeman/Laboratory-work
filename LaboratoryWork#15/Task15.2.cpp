#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int A[N];
	float B[N];
	float average = 0;

	for (int i = 0; i < N; i++)
		cin >> A[i];
	int j = 0;
	for (int i = 0; i < N; i++) {
		for (j; j <= i; j++)
			average += A[j];
		average /= j;
		j = 0;
		B[i] = average;
		average = 0;
	}

	for (int i = 0; i < N; i++)
		cout << B[i] << " ";
}
