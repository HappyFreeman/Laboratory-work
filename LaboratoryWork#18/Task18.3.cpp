#include <iostream>

using namespace std;

int main()
{
	int M, N;

	cout << "Enter M and N: " << endl;
	cin >> M >> N;

	int** arr = new int* [M];

	for (int i = 0; i < M; i++)
	{
		arr[i] = new int[N];
	}


	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			arr[i][j] = rand() % 20;


	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}


	int number = 0;
	int min = 0, sum = 1;

	for (int i = 0; i < M; i++)
		min = arr[i][0];

	for (int j = 0; j < N; j++) {
		sum = 1;
		for (int i = 0; i < M; i++) {
			sum *= arr[i][j];
		}
		if (min > sum) {
			min = sum;
			number = j;
		}
	}

	cout << endl << "min = " << min << endl;
	cout << "number = " << number + 1 << endl;
}