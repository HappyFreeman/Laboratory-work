#include <iostream>

using namespace std;

int main()
{
	int K, N;
	cout << "Enter K and N: " << endl;
	cin >> K >> N;
	N--;
	K %= 7;
	K += N;
	K %= 7;
	cout << K << endl; // Застрял чуть-чуть) возможно не лучшее решение но это работает ( это не точно )
}