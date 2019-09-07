#include <iostream>
#include <math.h>

using namespace std;

float RingS(float R1, float R2) {
	float S1, S2, S;
	const float Pi = 3.14f;
	S1 = Pi * pow(R1, 2);
	S2 = Pi * pow(R2, 2);
	S = S1 - S2;
	return S;
}

int main()
{
	float R1, R2, S;
	for (int i = 1; i <= 5; i++) {
		cout << "Enter R1 and R2: " << endl;
		cin >> R1 >> R2;
		S = RingS(R1, R2);
		cout << S << endl;
	}
}