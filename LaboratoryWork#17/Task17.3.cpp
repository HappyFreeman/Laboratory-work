#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
	int N;

	cout << "Enter N : " << endl;
	cin >> N;

	int* array = new int[N];
	int* barray = new int[N];

	int k;

	cout << "enter K: " << endl;
	cin >> k;

	cout << "array : " << endl;
	for (int i = 0; i < N; ++i)
		cin >> array[i];

	int nk = 1, begink = 1, len = (k == 1 ? 1 : 0), beginend;

	for (int i = 1; i < N; ++i) {
		if (array[i - 1] != array[i]) {
			nk++;
			if (nk == k) begink = i;
			beginend = i;
		}
		if (nk == k) len++;
	}

	//cout << nk << " " << begink << " " << len << " " << beginend;

	int i2 = -1;

	for (int i = 0; i < begink; ++i)  barray[++i2] = array[i];

	for (int i = beginend; i < N; ++i)  barray[++i2] = array[i];

	for (int i = begink + len; i < beginend; ++i)  barray[++i2] = array[i];

	for (int i = begink; i < begink + len; ++i)  barray[++i2] = array[i];

	for (int i = 0; i < N;++i) array[i] = barray[i];

	//cout << endl;

	for (int i = 0; i < N;++i) cout << array[i] << " ";
}


