#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cout << "Enter A, B, C: " << endl;
	cin >> A >> B >> C;
	if (A < B && B < C) cout << "true";
	else cout << "false";
}