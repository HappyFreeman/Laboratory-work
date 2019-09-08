#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int arr[N];
	
	for (int i = 0; i < N; i++)
		cin >> arr[i];

	for (int i = 0; i < N - 1;i++)
		for (int j = i + 1; j < N; j++)
			if (arr[i] == arr[j])
				cout << i << " " << j << endl;
}
