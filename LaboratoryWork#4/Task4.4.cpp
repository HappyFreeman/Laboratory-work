#include <iostream>

using namespace std;

int main()
{
	float V1, V2, S, T;
	cout << "Enter V1, V2, S, T: " << endl;
	cin >> V1 >> V2 >> S >> T;
	V1 *= T;
	V2 *= T;
	S += V1 + V2;
	cout << "distance = " << S << endl;
}