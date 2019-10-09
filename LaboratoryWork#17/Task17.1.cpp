#include <iostream>

using namespace std;



int main()
{
	int N;
	cin >> N;
	int* array = new int[N];
	int* barray = new int[N];
	int* carray = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> array[i];
	}



	for (int i = 0; i < N; i++) {
		barray[i] = 1;
	}

	int j = 0;

	for (int i = 0; i < N - 1; i++) {
		if (array[i] != array[i + 1]) {
			carray[j] = array[i];
			j++;

		}
		else {
			barray[j]++;
		}
	}

	carray[j] = array[N - 1];

	for (int i = 0; i <= j; i++) {
		cout << "[" << barray[i] << ", " << carray[i] << "]" << endl;
	}


	delete array, barray, carray;


}
