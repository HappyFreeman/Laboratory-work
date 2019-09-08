#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int arr[N];
	int max = 0;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	for (int i = 1; i < N - 1; i++)
		if ((arr[i] > arr[i - 1]) && (arr[i] > arr[i + 1]))
			max = arr[i];
	cout << max << endl;
}
