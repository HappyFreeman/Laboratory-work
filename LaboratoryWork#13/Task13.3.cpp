#include <iostream>

using namespace std;

int main()
{
	int N, A, B;
	int arr[20];
	cout << "Enter N, A, B: " << endl;
	cin >> N >> A >> B;
	arr[0] = A;
	arr[1] = B;

	for (int i = 2; i < N; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}

}