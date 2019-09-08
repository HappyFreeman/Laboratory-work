#include <iostream>

using namespace std;  // а если массив нумеруется с 0 ?

int main()
{
	const int N = 10;
	int A[N];
	int min, S;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	min = A[2];
	if (N % 2 == 0)
		S = N;
	else
		S = N - 1;
	for (int i = 0; i < S; i += 2)
		if (min > A[i])
			min = A[i];
	cout << min << endl;
}