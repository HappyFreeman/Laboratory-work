#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int arr[N];
	int max, min, numberMax, numberMin;

	for (int i = 0; i < N; i++)
		cin >> arr[i];

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < N; i++)
		if (max < arr[i]) {
			max = arr[i];
			numberMax = i;
		}
	for (int i = 0; i < N; i++)
		if (min > arr[i]) {
			min = arr[i];
			numberMin = i;
		}

	if (numberMax > numberMin)
		for (int i = numberMin + 1; i < numberMax; i++)
			arr[i] = 0;
	else
		for (int i = numberMax + 1; i < numberMin; i++)
			arr[i] = 0;

	for (int i = 0; i < N; i++)
		cout << arr[i] << " ";
}
