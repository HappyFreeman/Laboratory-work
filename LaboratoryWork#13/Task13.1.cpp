#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	const int volume = 20;
	int arr[volume];
	int a = 1;
	for (int i = 0; i < N; i++) {
		arr[i] = a;
		a += 2;
		cout << arr[i] << " ";
	}
}
