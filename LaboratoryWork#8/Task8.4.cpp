#include <iostream>

using namespace std;

int main()
{
	int x, y;
	cout << "coordinate (x, y) : " << endl;
	cin >> x >> y;
	if (x > 0 && y > 0) cout << "1 quarter";
	if (x < 0 && y > 0) cout << "2 quarter";
	if (x < 0 && y < 0) cout << "3 quarter";
	if (x > 0 && y < 0) cout << "4 quarter";
}