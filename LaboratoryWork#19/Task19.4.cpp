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

	for(int k = 0; k < N - 1; k++) 
		for(int i = 0; i < M; i++)
			for (int j = 0; j < N - k - 1; j++) 
				if (arr[i][j] > arr[i][j + 1]) {
					int pas = arr[i][j];
					arr[i][j] = arr[i][j + 1];
					arr[i][j + 1] = pas;
				}
	cout << endl << endl;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++)
			cout << arr[i][j] << "\t";
		cout << endl;
	}
}
