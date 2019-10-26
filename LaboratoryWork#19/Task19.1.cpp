#include <iostream>

using namespace std;

int main()
{
	int M, N;
	cout << "Enter M and N :" << endl;
	cin >> M >> N;

	int** arr = new int* [M];
	for (int i = 0; i < M; i++)
		arr[i] = new int[N];

	for (int i = 0; i < M; i++)
		for (int j = 0; j < N; j++)
			arr[i][j] = rand() % 20;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}

	int mini, minj, maxi, maxj, pas;

	for (int i = 0; i < M; i++) {
		int min = arr[i][0], max = arr[i][0], mini = i, minj = 0, maxi = i, maxj = 0;
		for (int j = 0; j < N; j++) {
			if (min > arr[i][j]) {
				min = arr[i][j];
				mini = i;
				minj = j;
			}
			if (max < arr[i][j]) {
				max = arr[i][j];
				maxi = i;
				maxj = j;
			}
		}
		pas = arr[mini][minj];
		arr[mini][minj] = arr[maxi][maxj];
		arr[maxi][maxj] = pas;
	}

	cout << endl << endl;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}




}

