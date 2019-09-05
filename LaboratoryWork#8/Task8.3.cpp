#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int xa, ya, xb, yb, xc, yc, AB, AC;
	cout << "coordinate (x, y) A: " << endl;
	cin >> xa >> ya;
	cout << "coordinate (x, y) B: " << endl;
	cin >> xb>> yb;
	cout << "coordinate (x, y) C: " << endl;
	cin >> xc >> yc;
	AB = sqrt(pow(xb - xa, 2) + pow(yb - ya, 2));
	AC = sqrt(pow(xc - xa, 2) + pow(yc - ya, 2));
	if (AB < AC) cout << "B " << AB;
	else if (AB > AC) cout << "C " << AC;
	else cout << "AB = AC " << AB;
}