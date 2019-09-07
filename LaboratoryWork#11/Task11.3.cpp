#include <iostream>

using namespace std;

int main()
{
	int N, K, sum;
	sum = 0;
	K = 0;
	cin >> N;
	while (N > sum) {
		K += 1;
		sum += K;
	}
	cout << K << endl;	
}