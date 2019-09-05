#include <iostream>
# include < math.h>

using namespace std;

int main()
{
	float x1, x2, y1, y2, Side1, Side2;
	cout << "Enter x1 and y1: " << endl;
	cin >> x1 >> y1;
	cout << "Enter x2 and y2: " << endl;
	cin >> x2 >> y2;
	//Diagonal = sqrt( pow(x2 - x1, 2) + pow(y2 - y1, 2) );
	Side1 = abs(y2 - y1);       //sqrt( pow(y2 - y1, 2) ) иксы сократились в формуле
	Side2 = abs(x2 - x1);       //возможно можно было легче решить)
	cout << "Perimeter = " << 2 * (Side1 + Side2) << endl;
	cout << "Area = " << Side1 * Side2 << endl;  // не знаю правильно или нет)
}