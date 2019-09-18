#include <iostream>

using namespace std;

int main()
{
	float i, N, factor;
	cin >> N;
	factor = 1;
	float number = 1;
	for (i = 0; i < N; i++) {
		number += 0.1;
		factor *= number;
	}
	cout << factor;
}
