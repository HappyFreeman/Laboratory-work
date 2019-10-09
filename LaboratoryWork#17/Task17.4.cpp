#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int N;
	cout << "Enter N: " << endl;
	cin >> N;

	int* xarray = new int[N];
	int* yarray = new int[N];

	cout << "Enter x: " << endl;
	for (int i = 0; i < N; i++)
		cin >> xarray[i];

	cout << "Enter y: " << endl;
	for (int i = 0; i < N; i++)
		cin >> yarray[N];

	int xmax = 1, ymax = -1, rmax = -1, r;

	for (int i = 0; i < N; i++) {
		if ((xarray[i] < xmax) && (yarray[i] > ymax)) {
			r = sqrt(pow(xarray[i], 2) + pow(yarray[i], 2));
			if (r > rmax) {
				rmax = r;
				xmax = xarray[i];
				ymax = yarray[i];
			}
		}

	}

	if (rmax == -1) cout << "0,0" << endl;
	else cout << xmax << "," << ymax << endl;



}

