#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int A, auxiliary, delirium;
	cout << "Enter A: ";
	cin >> A;
	// A = pow(A, 15);
	delirium = pow(A, 5);
	auxiliary = pow(A, 2); // 2  0
	auxiliary *= auxiliary; // 4  1
	auxiliary *= auxiliary; // 6  2
	auxiliary *= auxiliary; // 8 3
	auxiliary *= auxiliary; // 10 4
	A = auxiliary * delirium; // 15 5
	cout << "A in degree 15 = " << A << endl; // WTF??? Правильно?
}