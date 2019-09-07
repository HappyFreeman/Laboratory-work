#include <iostream>
#include <math.h>

using namespace std;

int main()
{	
	const int f = 20;
	int N, A, D;
	cout << "Enter N, A, D: " << endl;
	cin >> N >> A >> D;
	int arr[f];
	for (int i = 0; i < N; i++) {
		arr[i] = A * pow(D, i);
		cout << arr[i] << " ";
	}
	
}
