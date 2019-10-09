#include <iostream>

using namespace std;

int main()
{
	int N, L;

	cout << "Enter L and N: " << endl;
	cin >> L >> N;

	int* array = new int[N];
	int* barray = new int[N];
	
	cout << "Enter array: " << endl;

	for (int i = 0; i < N; i++)
		cin >> array[i];

	for (int i = 0; i < N; i++) {
		if (i <= N - L) {
			for (int j = i; j < i + L; j++) {
				if (array[j] != array[i]) {
					if (i < N)
						cout << array[i] << ends;
					break;
				}
				if (j == (i + L - 1)) {
					cout << "0" << ends;
					i = i + L;
				}
			}
		}
		else cout << array[i]<< ends;
	}


}
