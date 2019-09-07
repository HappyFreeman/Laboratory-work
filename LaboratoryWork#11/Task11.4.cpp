#include <iostream>

using namespace std;

int main()
{
	float P, K, S; // P - процент, S - итоговый размер, K - кол-во месяцев
	cin >> P;
	S = 1000;
	K = 0;
	while (S <= 1100) {
		K++;
		S += S * P / 100;
	}
	cout << "S = " << S << endl;
	cout << "K = " << K << endl;
}