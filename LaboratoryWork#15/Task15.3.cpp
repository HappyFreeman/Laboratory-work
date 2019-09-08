#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int arr[N];
	int odd = 0;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N; i++)
		if (arr[i] % 2 != 0)
			odd = arr[i];

	if (odd != 0)
		for (int i = 0; i < N; i++)
			if (arr[i] % 2 != 0)
				arr[i] += odd;

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}
