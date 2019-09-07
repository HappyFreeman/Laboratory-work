#include <iostream>

using namespace std;

int main()
{
	int A, B, residue;
	cout << "Enter A and B: " << endl;
	cin >> A >> B;
	while (A != 0 && B != 0) {    // тупил почему && а не || =D
		if (A > B) 
			A %= B;
		else
			B %= A;
	}
	cout << A + B << endl;
}
