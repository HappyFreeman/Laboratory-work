#include <iostream>

using namespace std;

int main()
{
	int A, B, residue;
	cout << "Enter A and B: " << endl;
	cin >> A >> B;
	for (int i = A; i >= B; i -= B) {
		residue = i;
	}
	cout << residue - B;
}