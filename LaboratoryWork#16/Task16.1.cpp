#include <iostream>

using namespace std;

int main()
{
	int N = 10;
	int arr[10];
	int k;
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	do {
		k = 10;
		for (int i = 0; i < N - 1; i++)
			for (int j = i + 1; j < N; j++)
				if (arr[i] == arr[j]) 
					k = j;

		if (k != 10) {
			N--;
			for (int i = k; i < N; i++)
				arr[i] = arr[i + 1];
		}
	} while (k != 10);

	cout << N << endl;

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}
