#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float A, B, C, AC, BC, Multiply;
	cout << "Enter A, B, C : " << endl;
	cin >> A >> B >> C;
	AC = abs(A - C);
	BC = abs(B - C);
	Multiply = AC * BC;
	cout << "Length AC = " << AC << endl;
	cout << "Length BC = " << BC << endl;
	cout << "Multiply AC and BC = " << Multiply << endl;
}