#include <iostream>

using namespace std;

int main()
{
	int M;
	cout << "Enter M: " << endl;
	cin >> M;

	int** arr = new int* [M];
	for (int i = 0; i < M; i++)
		arr[i] = new int[M];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < M; j++)
			arr[i][j] = rand() % 20;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}

	int k = M;
	cout << endl << endl;

	for (int l = 0; l < 2 * M - 1; l++) {
		int sum = 0;
		for (int i = 0; i < M; i++)
			for (int j = 0; j < M; j++)
				if (i == j + k - 1)
					sum += arr[i][j];
		k--;
		cout << sum << endl;
	}
}
