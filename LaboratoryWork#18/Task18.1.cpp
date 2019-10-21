#include <iostream>

using namespace std;

int main()
{
	int M;

	cout << "Enter M: " << endl;
	cin >> M;

	int** arr = new int* [M];

	for (int i = 0; i < M; i++)
	{
		arr[i] = new int[M];
	}


	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			arr[i][j] = rand() % 20;
		}
	}


	for (int i = 0; i < M; i++) {
		for (int j = 0; j < M; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	int v = 0;

	while (M > 1) {
		for (int i = v; i < M; i++) 
			cout << arr[i][v] << " ";
		for (int i = v + 1; i < M; i++) 
			cout << arr[M - 1][i] << " ";
		for (int i = M - 2; i > v; i--) 
			cout << arr[i][M - 1] << " ";
		for (int i = M - 1; i > v; i--) 
			cout << arr[v][i] << " ";
		v++;
		M--;
	}



}

