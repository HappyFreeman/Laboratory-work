#include <iostream>

using namespace std;

int main()
{
	float i, N, factor;
	cin >> N;
	factor = 1;
	for (i = 1.1; i <= N; i += 0.1) {
		factor *= i;
	}
	cout << factor;
}