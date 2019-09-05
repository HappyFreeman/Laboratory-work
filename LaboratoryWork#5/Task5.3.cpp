#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cout << "Enter A, B" << endl;
	cin >> A >> B;
	B = A % B;
	cout << B << endl;
}