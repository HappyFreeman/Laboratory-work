#include <iostream>

using namespace std;

int main()
{
	float N, cost;
	cin >> N;
	for (double i = 0.1; i <= 1; i = i + 0.1) {
		cost = N * i;
		cout << "cost " << i << " kg = " << cost << endl;
	}
}