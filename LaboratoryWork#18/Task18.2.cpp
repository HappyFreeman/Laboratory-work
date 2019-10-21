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

	cout << endl << "Enter K: " << endl;
	int K;
	cin >> K;
	K--; // тк нумерация с 0 поэтому -1
	cout << endl;

	int sum = 0, pro = 1;

	for (int i = 0; i < N; i++) {
		sum += arr[K][i];
		pro *= arr[K][i];
	}

	cout << "Sum = " << sum << endl;
	cout << "the product of the numbers = " << pro << endl;
}