#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int* array = new int[N];
	int* barray = new int[N + 2];
	int min, max, imin, imax;

	for (int i = 0; i < N; i++) {
		array[i] = rand() % 10;
	}

	for (int i = 0; i < N; i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	min = array[0];
	max = array[0];

	for (int i = 0; i < N; i++) {
		if (min > array[i]) {
			min = array[i];
			imin = i;
		}

		if (max < array[i]) {
			max = array[i];
			imax = i;
		}
	}

	int i,j;
	j = 0;

	for (i = 0; i < N + 2; i++) {
		
		barray[i] = array[i + j];

		if (i + j == imin) {
			barray[i] = 0;
			i++;
			j--;
			barray[i] = array[i + j];
		}

		if (i + j == imax) {
			barray[i] = array[i + j];
			i++;
			barray[i] = 0;
			j--;
		}

	}

	for (i = 0; i < N + 2; i++)
		cout << barray[i] << " ";

}
