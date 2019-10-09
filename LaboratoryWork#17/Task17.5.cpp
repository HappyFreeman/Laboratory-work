#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float pmax = -1, p;
	float xmax[3] = {};
	float ymax[3] = {};
	int N;
	cout << "Enter N:" << endl;
	cin >> N;
	float* xarray = new float[N];
	float* yarray = new float[N];

	cout << "Enter x: " << endl;
	for (int i = 0; i < N; i++)
		cin >> xarray[i];

	cout << "Enter y: " << endl;
	for (int i = 0; i < N; i++)
		cin >> yarray[i];

	for (int i = 0; i < N; i++) {
		for(int j = 0; j < N; j++)
			for (int i1 = 0; i1 < N; i1++) {
				p = sqrt(pow((xarray[i] - xarray[j]), 2) + pow((yarray[i] - yarray[j]), 2)) + sqrt(pow((xarray[i] - xarray[i1]), 2) + pow((yarray[i] - yarray[i1]), 2)) + sqrt(pow((xarray[j] - xarray[i1]), 2) + pow((yarray[j] - yarray[i1]), 2));

				if (p > pmax) {
					pmax = p;
					xmax[0] = xarray[i];
					xmax[1] = xarray[j];
					xmax[2] = xarray[i1];
					ymax[0] = yarray[i];
					ymax[1] = yarray[j];
					ymax[2] = yarray[i1];
				}

			}
	}
	for (int i = 0; i < 3; i++) cout << xmax[i] << "," << ymax[i] << endl;
}

