#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main()
{
	float x1, x2, y1, y2, distance;
	cout << "Enter x1 and y1: " << endl;
	cin >> x1 >> y1;
	cout << "Enter x2 and y2: " << endl;
	cin >> x2 >> y2;
	distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	cout << "distance = " << distance << endl;
}