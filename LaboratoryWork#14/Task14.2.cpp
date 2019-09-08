#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int arr[N];
	int d, counter;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	d = arr[1] - arr[0];
	counter = 0;
	for (int i = 1; i < N; i++) {
		if (arr[i] - arr[i - 1] == d)
			counter++;
	}
	if (counter == N - 1)
		cout << d << endl;
	else
		cout << 0 << endl;
}
