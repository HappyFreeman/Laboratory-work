#include <iostream>

using namespace std;

int main()
{
	int prev, next, number, N, s;
	number = 1;
	prev = 0;
	next = 1;
	cin >> N;
	while (next != N) {
		number++;
		s = next;
		next += prev;
		prev = s;
	}
	cout << number << endl;
}