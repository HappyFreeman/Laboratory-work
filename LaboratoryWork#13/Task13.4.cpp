#include <iostream>

using namespace std;

int main()
{
	const int N = 11;
	int A[N];
	for (int i = 0; i < N; i++) {
		A[i] = i;
	}
	for (int i = 0; i < ( N / 2 ); i++) {
		cout << A[i] << " " << A[N - i - 1] << " ";
	}

	if (N % 2 != 0) cout << A[N / 2];  // если массив не чет;
}
