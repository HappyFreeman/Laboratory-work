#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int* array = new int[N];
	int c = 0;

	for (int i = 0; i < N; i++)
		cin >> array[i];

	for (int i = 0; i < N; i++) 
		if (array[i] < 0) c++;

	int* barray = new int[N + c];

	int i1 = 0;

	for (int i = 0; i < N + c; i++) {
		barray[i] = array[i1];
		if (array[i1] < 0) {
			barray[i + 1] = 0;
			i++;
		}
		i1++;
	}

	for (int i = 0; i < N + c; i++)
		cout << barray[i] << " ";
	
}