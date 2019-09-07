#include <iostream>

using namespace std;

int Quarter(float x, float y) {  // task8.4 ??
	int quarter;
	if (x > 0 && y > 0) quarter = 1;
	if (x < 0 && y > 0) quarter = 2;
	if (x < 0 && y < 0) quarter = 3;
	if (x > 0 && y < 0) quarter = 4;
	return quarter;
}

int main()
{
	float x, y;
	for (int i = 1; i <= 3; i++) {
		cout << "Enter x and y: " << endl;
		cin >> x >> y;
		cout << "quarter = " << Quarter(x, y) << endl;
	}
}