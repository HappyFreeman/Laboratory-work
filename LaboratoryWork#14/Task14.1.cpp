#include <iostream>

using namespace std;

int main()
{
	const int N = 10;
	int K, L;
	float sum;
	int arr[N];
	cout << "Enter K, L: " << endl;
	cin >> K >> L;
	for (int i = 0; i < N; i++)
		arr[i] = i;
	sum = 0;
	for (int i = K - 1; i <= L - 1; i++) {
		sum += arr[i];
	}
	sum /= L - K + 1;
	cout << sum << endl;
}
