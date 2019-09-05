#include <iostream>

using namespace std;

int main()
{
	float X, A, Y;
	cout << "Enter X and A: " << endl;
	cin >> X >> A;  // X kg, A rub
	cout << "Enter Y: " << endl; // kg
	cin >> Y;
	cout << "Cost 1 kg = " << A / X << endl;
	Y *= A / X;
	cout << "Cost Y kg = " << Y << endl;
}