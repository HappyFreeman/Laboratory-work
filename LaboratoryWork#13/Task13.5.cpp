#include <iostream>

using namespace std;

int main()
{
	const int N = 7;
	int A[N];
	for (int i = 0; i < N; i++)
		A[i] = i;

	for (int i = 1; i < N; i += 2)
		cout << A[i] << " ";

	if (N % 2 == 0) {
		for (int i = N - 2; i >= 2; i -= 2)
			cout << A[i] << " ";
	}
	else {
		for (int i = N - 1; i >= 2; i -= 2)
			cout << A[i] << " ";	
	}
	cout << 0;
}
