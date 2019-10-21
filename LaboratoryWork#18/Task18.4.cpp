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
	float sum = 0;
	cout << endl;

	for (int j = 0; j < N; j++) {
		sum = 0;
		number = 0;
		for (int i = 0; i < M; i++) {
			sum += arr[i][j];
		}
		sum /= (float)M;
		for (int i = 0; i < M; i++) {
			if (arr[i][j] > sum)
				number++;
		}
		cout << "number" << j + 1 << " : " << number << endl;
	}


}