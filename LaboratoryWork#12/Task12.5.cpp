#include <iostream>

using namespace std;

float Fact2 (int N) {
	float A = 1;
	if (N % 2 == 0) 
		for (int i = 2; i <= N; i += 2) 
			A *= i;	
	else 
		for (int i = 1; i <= N; i += 2)
			A *= i;
	return A;
}

int main()
{
	int N;
	cin >> N;
	cout << Fact2(N) << endl;
}
