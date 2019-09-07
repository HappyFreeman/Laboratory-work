#include <iostream>

using namespace std;

int main()
{
	int A, B;
	cout << "Enter A and B: " << endl;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		for (int j = 1; j <= i; j++)
			cout << i << " ";
		cout << endl;
	}
}