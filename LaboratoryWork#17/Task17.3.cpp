#include <iostream>

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
	for (int i = 0; i < N; i++)
		cin >> array[i];

	int c = 0, j;
	int begin1 = 0, end1 = 0, begin2 = 0, end2 = 0;
	for (int i = 0; i < N - 1; i++) {
		if (array[i] == array[i + 1]) {
			for (j = i + 2; j < N; j++) {
				c++;
				//cout << "c = " << c << endl;
				if (c == k) {
					end1 = j - 1;
					begin1 = i;
				}
				begin2 = i;
				end2 = j - 1;
				i = j;
				break;
			}

		}
	}

	int s1 = array[begin1];
	int s2 = array[begin2];

	for (int i = 0; i < N; i++) {
		if ((i >= begin2) && (i <= end2)) cout << s1 << " ";
		else if ((i >= begin1) && (i <= end1)) cout << s2 << " ";
		else cout << array[i] << " ";
	}


}
