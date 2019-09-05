#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	float A, B, C, AC, BC, Sum;
	cout << "Enter A, B, C : " << endl;
	cin >> A >> B >> C;
	AC = abs(A - C);
	BC = abs(B - C);
	Sum = AC + BC;
	cout << "Length AC = " << AC << endl;
	cout << "Length BC = " << BC << endl;
	cout << "Sum AC and BC = " << Sum << endl;
}