#include <iostream>

using namespace std;

int main()
{
	int N, square;
	cin >> N;
	square = 0;
	for (int i = 1; i <= (2 * N - 1); i += 2) {
		square += i;
		cout << square << endl;
	}
}