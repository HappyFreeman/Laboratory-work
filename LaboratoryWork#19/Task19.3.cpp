#include <iostream>

using namespace std;

int main()
{
	int M, N;
	cout << "Enter M and N : " << endl;
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

	for (int i = 0; i < M / 2; i++) {
		for (int j = 0; j < N / 2; j++) {
			int pas = arr[i][j];
			arr[i][j] = arr[i + M / 2][j + N / 2];
			arr[i + M / 2][j + N / 2] = pas;
		}
	}

	cout << endl << endl;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}


}
