#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float A, sum;
	int N, i;
	cout << "Enter A, N: " << endl;
	cin >> A >> N;
	sum = 1;
	for (i = 1; i <= N; i++) {
		sum += pow(A, i) * pow(-1, i);
	}
	cout << sum << endl;
}