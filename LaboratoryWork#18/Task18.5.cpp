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
	int a;

	for (int j = 0; j < N; j++) {
		number = 0;
		for (int i = 0; i < M; i++) {
			if (arr[i][j] % 2 == 1)
				number++;
		}

		if (number == M) {
			a = j;
			break;
		}
	}

	if (number == M) {
		cout << a + 1;
	}
	else cout << "0";


}