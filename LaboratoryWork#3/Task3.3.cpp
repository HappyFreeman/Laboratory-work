#include <iostream>

using namespace std;

int main()
{
	int A, B, C;
	cout << "Enter A, B, C: " << endl;
	cin >> A >> B >> C;
	A = C;
	C = B;
	B = A;
	cout << "A = " << A << endl;
	cout << "B = " << B << endl;
	cout << "C = " << C << endl; // Тот же вопрос, что и к предыдущей задаче)
}