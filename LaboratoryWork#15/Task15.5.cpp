#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int arr[N];
	int s;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N - 1; i++) 
		if (arr[i] > arr[i + 1]) {
			s = arr[i];
			arr[i] = arr[i + 1];
			arr[i + 1] = s;
		}
	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}
