#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int A, auxiliary;
    cout << "Enter A: ";
    cin >> A;
	// A = pow(A, 8); не?
	auxiliary = pow(A, 3);
	A = A * A * auxiliary * auxiliary; // так? 1 + 1 + 3 + 3 = 8
}